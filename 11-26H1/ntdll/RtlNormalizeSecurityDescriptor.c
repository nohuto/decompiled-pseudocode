/*
 * XREFs of RtlNormalizeSecurityDescriptor @ 0x18013D120
 * Callers:
 *     <none>
 * Callees:
 *     RtlFreeHeap_0 @ 0x18003FD10 (RtlFreeHeap_0.c)
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     RtlpNormalizeAcl @ 0x18005BB50 (RtlpNormalizeAcl.c)
 *     RtlLengthRequiredSid @ 0x1800CE750 (RtlLengthRequiredSid.c)
 *     RtlValidSecurityDescriptor @ 0x1800D9030 (RtlValidSecurityDescriptor.c)
 *     RtlLengthSecurityDescriptor @ 0x1800DA510 (RtlLengthSecurityDescriptor.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

char __fastcall RtlNormalizeSecurityDescriptor(__int64 *a1, unsigned int a2, __int64 *a3, unsigned int *a4, char a5)
{
  __int64 v5; // r14
  __int64 Heap_0; // rdi
  char v9; // bp
  __int64 v10; // rcx
  unsigned int v11; // ebx
  __int64 v12; // r13
  unsigned int v13; // r12d
  __int64 v15; // r15
  __int64 v16; // rcx
  __int64 v17; // r12
  __int64 v18; // r15
  int v19; // eax
  unsigned __int8 *v20; // r12
  unsigned int v21; // eax
  unsigned int v22; // r15d
  unsigned __int8 *v23; // r12
  unsigned int v24; // eax
  unsigned int v25; // r15d
  __int64 *v26; // rax
  char v28; // [rsp+88h] [rbp+10h]

  v5 = *a1;
  v28 = 0;
  Heap_0 = 0LL;
  v9 = 0;
  if ( RtlValidSecurityDescriptor(*a1) && a2 >= (unsigned int)RtlLengthSecurityDescriptor(v5) )
  {
    if ( a5 )
      goto LABEL_9;
    if ( a3 )
    {
      Heap_0 = *a3;
      if ( *a3 )
      {
LABEL_8:
        *(_OWORD *)Heap_0 = *(_OWORD *)v5;
        *(_DWORD *)(Heap_0 + 16) = *(_DWORD *)(v5 + 16);
LABEL_9:
        v10 = *(unsigned int *)(v5 + 12);
        v11 = 20;
        if ( (_DWORD)v10 )
        {
          v12 = v5 + v10;
          v13 = *(_WORD *)(v5 + v10 + 4) != 0 ? 0x14 : 0;
          v9 = v13 != (_DWORD)v10;
          if ( v13 != (_DWORD)v10 && a5 )
          {
LABEL_12:
            if ( !v9 )
              goto LABEL_13;
LABEL_51:
            if ( !a5 )
            {
              v26 = a3;
              if ( a3 )
              {
                if ( !v28 )
                  goto LABEL_57;
              }
              else
              {
                RtlFreeHeap_0();
                v26 = a1;
              }
              *v26 = Heap_0;
LABEL_57:
              if ( a4 )
                *a4 = v11;
              return v9;
            }
LABEL_13:
            if ( v28 )
              RtlFreeHeap_0();
            return v9;
          }
          if ( *(_WORD *)(v12 + 4) )
          {
            if ( a5 )
              v15 = 0LL;
            else
              v15 = Heap_0 + v13;
            v9 = (v13 != (_DWORD)v10) | RtlpNormalizeAcl(v15, v5 + v10, 0LL);
            if ( v9 && a5 )
              goto LABEL_51;
            if ( !a5 )
            {
              *(_DWORD *)(Heap_0 + 12) = v13;
              v12 = v15;
            }
            v11 = *(unsigned __int16 *)(v12 + 2) + 20;
          }
          else
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap_0 + 12) = 0;
          }
        }
        v16 = *(unsigned int *)(v5 + 16);
        if ( (_DWORD)v16 )
        {
          v9 |= v11 != (_DWORD)v16;
          if ( v9 && a5 )
            goto LABEL_13;
          v17 = v5 + v16;
          v18 = a5 ? 0LL : Heap_0 + v11;
          v9 |= RtlpNormalizeAcl(v18, v5 + v16, 0LL);
          if ( v9 )
          {
            if ( a5 )
              goto LABEL_13;
          }
          if ( a5 )
          {
            v19 = *(unsigned __int16 *)(v17 + 2);
          }
          else
          {
            *(_DWORD *)(Heap_0 + 16) = v11;
            v19 = *(unsigned __int16 *)(v18 + 2);
          }
          v11 += v19;
        }
        if ( v11 != *(_DWORD *)(v5 + 4) )
        {
          v9 = 1;
          if ( a5 )
            goto LABEL_13;
          *(_DWORD *)(Heap_0 + 4) = v11;
        }
        v20 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 4));
        v21 = RtlLengthRequiredSid(v20[1]);
        v22 = v21;
        if ( !a5 )
          memmove((void *)(Heap_0 + *(unsigned int *)(Heap_0 + 4)), v20, v21);
        v11 += v22;
        if ( *(_DWORD *)(v5 + 8) )
        {
          if ( v11 != *(_DWORD *)(v5 + 8) )
          {
            v9 = 1;
            if ( a5 )
              goto LABEL_13;
            *(_DWORD *)(Heap_0 + 8) = v11;
          }
          v23 = (unsigned __int8 *)(v5 + *(unsigned int *)(v5 + 8));
          v24 = RtlLengthRequiredSid(v23[1]);
          v25 = v24;
          if ( !a5 )
            memmove((void *)(Heap_0 + *(unsigned int *)(Heap_0 + 8)), v23, v24);
          v11 += v25;
        }
        goto LABEL_12;
      }
    }
    Heap_0 = RtlAllocateHeap_0();
    if ( Heap_0 )
    {
      v28 = 1;
      goto LABEL_8;
    }
  }
  return 0;
}
