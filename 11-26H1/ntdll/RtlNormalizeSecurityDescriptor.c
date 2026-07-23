/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x18013CFD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18002A280 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x18002DF50 (RtlAllocateHeap_0.c)
 *     RtlpNormalizeAcl @ 0x1800460D0 (RtlpNormalizeAcl.c)
 *     RtlLengthRequiredSid @ 0x1800CBEC0 (RtlLengthRequiredSid.c)
 *     RtlValidSecurityDescriptor @ 0x1800D5FF0 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1800D74D0 (RtlLengthSecurityDescriptor.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

BOOLEAN __cdecl RtlNormalizeSecurityDescriptor(
        PSECURITY_DESCRIPTOR *SecurityDescriptor,
        ULONG SecurityDescriptorLength,
        PSECURITY_DESCRIPTOR *NewSecurityDescriptor,
        PULONG NewSecurityDescriptorLength,
        BOOLEAN CheckOnly)
{
  _DWORD *v5; // r14
  SIZE_T v6; // rbx
  _DWORD *Heap_0; // rdi
  BOOLEAN v9; // bp
  __int64 v10; // rcx
  ULONG v11; // ebx
  char *v12; // r13
  unsigned int v13; // r12d
  __int64 v15; // r15
  __int64 v16; // rcx
  char *v17; // r12
  __int64 v18; // r15
  int v19; // eax
  unsigned __int8 *v20; // r12
  ULONG v21; // eax
  ULONG v22; // r15d
  unsigned __int8 *v23; // r12
  ULONG v24; // eax
  ULONG v25; // r15d
  PSECURITY_DESCRIPTOR *v26; // rax
  char v28; // [rsp+88h] [rbp+10h]

  v5 = *SecurityDescriptor;
  v6 = SecurityDescriptorLength;
  v28 = 0;
  Heap_0 = 0LL;
  v9 = 0;
  if ( RtlValidSecurityDescriptor(*SecurityDescriptor) && (unsigned int)v6 >= RtlLengthSecurityDescriptor(v5) )
  {
    if ( CheckOnly )
      goto LABEL_9;
    if ( NewSecurityDescriptor )
    {
      Heap_0 = *NewSecurityDescriptor;
      if ( *NewSecurityDescriptor )
      {
LABEL_8:
        *(_OWORD *)Heap_0 = *(_OWORD *)v5;
        Heap_0[4] = v5[4];
LABEL_9:
        v10 = (unsigned int)v5[3];
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v12 = (char *)v5 + v10;
          v13 = *(_WORD *)((char *)v5 + v10 + 4) != 0 ? 0x14 : 0;
          v9 = v13 != (_DWORD)v10;
          if ( v13 != (_DWORD)v10 && CheckOnly )
          {
LABEL_12:
            if ( !v9 )
              goto LABEL_13;
LABEL_51:
            if ( !CheckOnly )
            {
              v26 = NewSecurityDescriptor;
              if ( NewSecurityDescriptor )
              {
                if ( !v28 )
                  goto LABEL_57;
              }
              else
              {
                RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, v5);
                v26 = SecurityDescriptor;
              }
              *v26 = Heap_0;
LABEL_57:
              if ( NewSecurityDescriptorLength )
                *NewSecurityDescriptorLength = v11;
              return v9;
            }
LABEL_13:
            if ( v28 )
              RtlFreeHeap_0(NtCurrentPeb()->ProcessHeap, 0, Heap_0);
            return v9;
          }
          if ( *((_WORD *)v12 + 2) )
          {
            if ( CheckOnly )
              v15 = 0LL;
            else
              v15 = (__int64)Heap_0 + v13;
            v9 = (v13 != (_DWORD)v10) | RtlpNormalizeAcl(v15, (__int64)v5 + v10, 0LL);
            if ( v9 && CheckOnly )
              goto LABEL_51;
            if ( !CheckOnly )
            {
              Heap_0[3] = v13;
              v12 = (char *)v15;
            }
            v11 = *((unsigned __int16 *)v12 + 1) + 20;
          }
          else
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_13;
            Heap_0[3] = 0;
          }
        }
        v16 = (unsigned int)v5[4];
        if ( (_DWORD)v16 )
        {
          v9 |= v11 != (_DWORD)v16;
          if ( v9 && CheckOnly )
            goto LABEL_13;
          v17 = (char *)v5 + v16;
          v18 = CheckOnly ? 0LL : (__int64)Heap_0 + v11;
          v9 |= RtlpNormalizeAcl(v18, (__int64)v5 + v16, 0LL);
          if ( v9 )
          {
            if ( CheckOnly )
              goto LABEL_13;
          }
          if ( CheckOnly )
          {
            v19 = *((unsigned __int16 *)v17 + 1);
          }
          else
          {
            Heap_0[4] = v11;
            v19 = *(unsigned __int16 *)(v18 + 2);
          }
          v11 += v19;
        }
        if ( v11 != v5[1] )
        {
          v9 = 1;
          if ( CheckOnly )
            goto LABEL_13;
          Heap_0[1] = v11;
        }
        v20 = (unsigned __int8 *)v5 + (unsigned int)v5[1];
        v21 = RtlLengthRequiredSid(v20[1]);
        v22 = v21;
        if ( !CheckOnly )
          memmove((char *)Heap_0 + (unsigned int)Heap_0[1], v20, v21);
        v11 += v22;
        if ( v5[2] )
        {
          if ( v11 != v5[2] )
          {
            v9 = 1;
            if ( CheckOnly )
              goto LABEL_13;
            Heap_0[2] = v11;
          }
          v23 = (unsigned __int8 *)v5 + (unsigned int)v5[2];
          v24 = RtlLengthRequiredSid(v23[1]);
          v25 = v24;
          if ( !CheckOnly )
            memmove((char *)Heap_0 + (unsigned int)Heap_0[2], v23, v24);
          v11 += v25;
        }
        goto LABEL_12;
      }
    }
    Heap_0 = RtlAllocateHeap_0(NtCurrentPeb()->ProcessHeap, NtdllBaseTag + 1310720, v6);
    if ( Heap_0 )
    {
      v28 = 1;
      goto LABEL_8;
    }
  }
  return 0;
}
