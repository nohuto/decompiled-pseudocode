/*
 * XREFs of HalpDmaCheckMdlAccessibility @ 0x14043832C
 * Callers:
 *     HalFlushAdapterBuffersEx @ 0x1404379C0 (HalFlushAdapterBuffersEx.c)
 *     HalMapTransferEx @ 0x140437D70 (HalMapTransferEx.c)
 * Callees:
 *     MmMapLockedPagesSpecifyCache @ 0x14035F0D0 (MmMapLockedPagesSpecifyCache.c)
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     HalpDmaGetAdapterCacheAlignment @ 0x140439690 (HalpDmaGetAdapterCacheAlignment.c)
 *     IoBuildPartialMdl @ 0x140439AB0 (IoBuildPartialMdl.c)
 */

char *__fastcall HalpDmaCheckMdlAccessibility(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        unsigned int a4,
        char *a5,
        __int64 *a6)
{
  struct _MDL *v10; // rcx
  char v11; // r15
  char *result; // rax
  __int64 v13; // r9
  unsigned int v14; // ebx
  unsigned int v15; // r13d
  int v16; // eax
  struct _MDL *Next; // rbx
  __int64 Mdl; // rax
  struct _MDL *v19; // rbp
  unsigned int v21; // ecx
  __int64 *v22; // rdx
  unsigned int v23; // eax
  PVOID VirtualAddress; // [rsp+30h] [rbp-38h]
  _QWORD *v25; // [rsp+98h] [rbp+30h]

  v25 = 0LL;
  *a6 = 0LL;
  if ( KeGetCurrentIrql() > 2u || *(_BYTE *)(a1 + 445) )
  {
LABEL_3:
    v10 = (struct _MDL *)*a6;
    if ( *a6 )
    {
      do
      {
        Next = v10->Next;
        IoFreeMdl(v10);
        *a6 = (__int64)Next;
        v10 = Next;
      }
      while ( Next );
    }
    v11 = 0;
  }
  else
  {
    v11 = 1;
    while ( a2 && a4 )
    {
      v13 = *((unsigned int *)a2 + 11);
      v14 = *((_DWORD *)a2 + 10) - a3;
      if ( v14 >= a4 )
        v14 = a4;
      v15 = v13 + a3;
      if ( !*(_BYTE *)(a1 + 445) )
      {
        v16 = HalpDmaGetAdapterCacheAlignment(a1) - 1;
        if ( (v16 & v15) != 0 || (v14 & v16) != 0 )
          goto LABEL_3;
      }
      VirtualAddress = (PVOID)(v13 + a2[4] + a3);
      Mdl = IopAllocateMdl((__int64)VirtualAddress, v14, 0, v13, 0LL, 0);
      v19 = (struct _MDL *)Mdl;
      if ( !Mdl )
        goto LABEL_3;
      if ( *a6 )
        *v25 = Mdl;
      else
        *a6 = Mdl;
      v25 = (_QWORD *)Mdl;
      if ( !((*((_BYTE *)a2 + 10) & 5) != 0
           ? (PVOID)a2[3]
           : MmMapLockedPagesSpecifyCache((PMDL)a2, 0, MmCached, 0LL, 0, 0x40000020u)) )
        goto LABEL_3;
      IoBuildPartialMdl((PMDL)a2, v19, VirtualAddress, v14);
      v21 = 4096 - (v15 & 0xFFF);
      v22 = &a2[((unsigned __int64)v15 >> 12) + 6];
      while ( v14 )
      {
        if ( (HalpDmaCvmConfiguration || *(_QWORD *)(a1 + 144) < (unsigned __int64)(*v22 << 12))
          && *(_DWORD *)(a1 + 520) != 3 )
        {
          goto LABEL_3;
        }
        ++v22;
        v23 = v14;
        if ( v14 >= v21 )
          v23 = v21;
        v21 = 4096;
        v14 -= v23;
        a4 -= v23;
      }
      a2 = (__int64 *)*a2;
      a3 = 0;
    }
  }
  result = a5;
  *a5 = v11;
  return result;
}
