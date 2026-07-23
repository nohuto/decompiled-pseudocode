/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x1404E7820
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpNormalizeAcl @ 0x1408E72B0 (RtlpNormalizeAcl.c)
 *     RtlLengthRequiredSid @ 0x1408F0000 (RtlLengthRequiredSid.c)
 *     SeValidSecurityDescriptor @ 0x140A8DAC0 (SeValidSecurityDescriptor.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // r14
  _DWORD *Pool2; // rbx
  BOOLEAN v8; // bp
  __int64 v9; // rcx
  ULONG v10; // edi
  __int64 v11; // rcx
  char *v12; // r12
  char *v13; // r15
  int v14; // eax
  unsigned __int8 *v16; // r12
  ULONG v17; // eax
  ULONG v18; // r15d
  int v19; // eax
  unsigned __int8 *v20; // r12
  ULONG v21; // eax
  ULONG v22; // r15d
  PSECURITY_DESCRIPTOR *v23; // rax
  char *v24; // r13
  __int16 v25; // dx
  unsigned int v26; // r12d
  char *v27; // r15
  char v29; // [rsp+88h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v29 = 0;
  Pool2 = 0LL;
  v8 = 0;
  if ( SeValidSecurityDescriptor(SecurityDescriptorLength, *SecurityDescriptor) )
  {
    if ( CheckOnly )
      goto LABEL_3;
    if ( NewSecurityDescriptor )
    {
      Pool2 = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
      {
LABEL_51:
        *(_OWORD *)Pool2 = *(_OWORD *)v5;
        Pool2[4] = v5[4];
LABEL_3:
        v9 = (unsigned int)v5[3];
        v10 = 20;
        if ( (_DWORD)v9 )
        {
          v24 = (char *)v5 + v9;
          v25 = *(_WORD *)((char *)v5 + v9 + 4);
          v26 = v25 != 0 ? 0x14 : 0;
          v8 = v26 != (_DWORD)v9;
          if ( v26 != (_DWORD)v9 && CheckOnly )
          {
LABEL_28:
            if ( !v8 )
              goto LABEL_15;
            goto LABEL_29;
          }
          if ( v25 )
          {
            if ( CheckOnly )
              v27 = 0LL;
            else
              v27 = (char *)Pool2 + v26;
            v8 = (v26 != (_DWORD)v9) | RtlpNormalizeAcl(v27, (char *)v5 + v9, 0LL);
            if ( v8 && CheckOnly )
            {
LABEL_29:
              if ( !CheckOnly )
              {
                v23 = NewSecurityDescriptor;
                if ( NewSecurityDescriptor )
                {
                  if ( !v29 )
                  {
LABEL_33:
                    if ( NewSecurityDescriptorLength )
                      *NewSecurityDescriptorLength = v10;
                    return v8;
                  }
                }
                else
                {
                  ExFreePoolWithTag(v5, 0);
                  v23 = SecurityDescriptor;
                }
                *v23 = Pool2;
                goto LABEL_33;
              }
LABEL_15:
              if ( v29 )
                ExFreePoolWithTag(Pool2, 0);
              return v8;
            }
            if ( !CheckOnly )
            {
              Pool2[3] = v26;
              v24 = v27;
            }
            v10 = *((unsigned __int16 *)v24 + 1) + 20;
          }
          else
          {
            v8 = 1;
            if ( CheckOnly )
              goto LABEL_15;
            Pool2[3] = 0;
          }
        }
        v11 = (unsigned int)v5[4];
        if ( (_DWORD)v11 )
        {
          v8 |= v10 != (_DWORD)v11;
          if ( v8 && CheckOnly )
            goto LABEL_15;
          v12 = (char *)v5 + v11;
          v13 = CheckOnly ? 0LL : (char *)Pool2 + v10;
          v8 |= RtlpNormalizeAcl(v13, (char *)v5 + v11, 0LL);
          if ( v8 )
          {
            if ( CheckOnly )
              goto LABEL_15;
          }
          if ( CheckOnly )
          {
            v14 = *((unsigned __int16 *)v12 + 1);
          }
          else
          {
            Pool2[4] = v10;
            v14 = *((unsigned __int16 *)v13 + 1);
          }
          v10 += v14;
        }
        if ( v10 != v5[1] )
        {
          v8 = 1;
          if ( CheckOnly )
            goto LABEL_15;
          Pool2[1] = v10;
        }
        v16 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v17 = RtlLengthRequiredSid(v16[1]);
        v18 = v17;
        if ( !CheckOnly )
          memmove((char *)Pool2 + (unsigned int)Pool2[1], v16, v17);
        v19 = v5[2];
        v10 += v18;
        if ( v19 )
        {
          if ( v10 != v19 )
          {
            v8 = 1;
            if ( CheckOnly )
              goto LABEL_15;
            Pool2[2] = v10;
          }
          v20 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v21 = RtlLengthRequiredSid(v20[1]);
          v22 = v21;
          if ( !CheckOnly )
            memmove((char *)Pool2 + (unsigned int)Pool2[2], v20, v21);
          v10 += v22;
        }
        goto LABEL_28;
      }
    }
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v29 = 1;
      goto LABEL_51;
    }
  }
  return 0;
}
