/*
 * XREFs of PspIumFreePartitionState @ 0x140619720
 * Callers:
 *     PsDispatchIumService @ 0x140518438 (PsDispatchIumService.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140264E00 (ObfDereferenceObjectWithTag.c)
 *     KeWaitForSingleObject @ 0x140277AD0 (KeWaitForSingleObject.c)
 *     MmFreeNonChargedSecurePages @ 0x1403CCD54 (MmFreeNonChargedSecurePages.c)
 *     MmUnlockPages @ 0x140410330 (MmUnlockPages.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PspIumFreePartitionState(unsigned int *P)
{
  signed __int64 v2; // rax
  unsigned int v3; // eax
  __int128 Object; // [rsp+30h] [rbp-20h] BYREF
  char *v5; // [rsp+40h] [rbp-10h]

  v5 = 0LL;
  v2 = *((_QWORD *)P + 2);
  Object = 0LL;
  if ( v2 )
  {
    LOWORD(Object) = 1;
    v5 = (char *)&Object + 8;
    *((_QWORD *)&Object + 1) = (char *)&Object + 8;
    BYTE2(Object) = 6;
    DWORD1(Object) = 0;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)P + 2, (signed __int64)&Object, v2) )
      KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  }
  MmUnlockPages((PMDL)P + 2);
  v3 = P[1];
  if ( v3 )
  {
    memmove((void *)(*((_QWORD *)P + 20) + 8LL * P[39]), P + 6, 8LL * v3);
    P[39] += P[1];
  }
  MmFreeNonChargedSecurePages(*((ULONG ***)P + 1), 1, P[38], *((_QWORD **)P + 20));
  ExFreePoolWithTag(*((PVOID *)P + 20), 0);
  ObfDereferenceObjectWithTag(*((PVOID *)P + 1), 0x746C6644u);
  ExFreePoolWithTag(P, 0);
}
