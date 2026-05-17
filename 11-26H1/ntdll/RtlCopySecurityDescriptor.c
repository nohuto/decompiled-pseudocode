/*
 * XREFs of RtlCopySecurityDescriptor @ 0x1800E7FC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap_0 @ 0x1800439E0 (RtlAllocateHeap_0.c)
 *     memmove @ 0x180164700 (memmove.c)
 */

__int64 __fastcall RtlCopySecurityDescriptor(_WORD *Src, _QWORD *a2)
{
  __int16 v4; // cx
  char *v5; // rax
  __int64 v6; // r9
  char *v7; // rax
  __int64 v8; // rdx
  char *v9; // rax
  __int64 v10; // r8
  __int64 v11; // rcx
  __int64 v12; // rdi
  void *Heap_0; // rax
  char *v15; // rax

  v4 = Src[1] & 0x8000;
  if ( (__int16)Src[1] < 0 )
  {
    if ( !*((_DWORD *)Src + 1) )
      goto LABEL_27;
    v5 = (char *)Src + *((unsigned int *)Src + 1);
  }
  else
  {
    v5 = (char *)*((_QWORD *)Src + 1);
  }
  if ( v5 )
  {
    v6 = (4LL * (unsigned __int8)v5[1] + 11) & 0xFFFFFFFCLL;
    goto LABEL_5;
  }
LABEL_27:
  v6 = 0LL;
LABEL_5:
  if ( (Src[1] & 4) != 0 )
  {
    if ( v4 )
    {
      if ( !*((_DWORD *)Src + 4) )
        goto LABEL_30;
      v7 = (char *)Src + *((unsigned int *)Src + 4);
    }
    else
    {
      v7 = (char *)*((_QWORD *)Src + 4);
    }
    if ( v7 )
    {
      v8 = (*((unsigned __int16 *)v7 + 1) + 3LL) & 0xFFFFFFFCLL;
      goto LABEL_10;
    }
  }
LABEL_30:
  v8 = 0LL;
LABEL_10:
  if ( v4 )
  {
    if ( !*((_DWORD *)Src + 2) )
      goto LABEL_22;
    v9 = (char *)Src + *((unsigned int *)Src + 2);
  }
  else
  {
    v9 = (char *)*((_QWORD *)Src + 2);
  }
  if ( !v9 )
  {
LABEL_22:
    v10 = 0LL;
    goto LABEL_14;
  }
  v10 = (4LL * (unsigned __int8)v9[1] + 11) & 0xFFFFFFFCLL;
LABEL_14:
  if ( (Src[1] & 0x10) == 0 )
    goto LABEL_15;
  if ( v4 )
  {
    if ( !*((_DWORD *)Src + 3) )
      goto LABEL_15;
    v15 = (char *)Src + *((unsigned int *)Src + 3);
  }
  else
  {
    v15 = (char *)*((_QWORD *)Src + 3);
  }
  if ( !v15 )
  {
LABEL_15:
    v11 = 0LL;
    goto LABEL_16;
  }
  v11 = (*((unsigned __int16 *)v15 + 1) + 3LL) & 0xFFFFFFFCLL;
LABEL_16:
  v12 = v10 + v6 + v8 + v11;
  Heap_0 = (void *)RtlAllocateHeap_0();
  *a2 = Heap_0;
  if ( !Heap_0 )
    return 3221225495LL;
  memmove(Heap_0, Src, v12 + 20);
  return 0LL;
}
