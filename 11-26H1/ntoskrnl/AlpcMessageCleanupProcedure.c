/*
 * XREFs of AlpcMessageCleanupProcedure @ 0x14098E170
 * Callers:
 *     AlpcpProcessSynchronousRequest @ 0x1409276C0 (AlpcpProcessSynchronousRequest.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     AlpcpReleaseAttributes @ 0x14098DA90 (AlpcpReleaseAttributes.c)
 *     PspChargeProcessWakeCounter @ 0x14098F2A0 (PspChargeProcessWakeCounter.c)
 *     AlpcpDereferenceBlobEx @ 0x140991360 (AlpcpDereferenceBlobEx.c)
 */

__int64 __fastcall AlpcMessageCleanupProcedure(__int64 a1)
{
  void *v2; // rcx
  _DWORD *v3; // rsi
  __int64 v4; // rcx
  __int64 v5; // rcx
  _DWORD *v6; // rbp
  __int64 result; // rax

  *(_DWORD *)(a1 + 264) |= 0x80000000;
  v2 = *(void **)(a1 + 24);
  v3 = (_DWORD *)(a1 + 40);
  if ( v2 )
  {
    if ( (*v3 & 0x1000) != 0 )
      ObfDereferenceObject(v2);
    *(_QWORD *)(a1 + 24) = 0LL;
  }
  AlpcpReleaseAttributes(a1, (_QWORD *)(a1 + 104));
  v4 = *(_QWORD *)(a1 + 208);
  if ( v4 )
  {
    PspChargeProcessWakeCounter((PVOID)(v4 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
    *(_QWORD *)(a1 + 208) = 0LL;
  }
  v5 = *(_QWORD *)(a1 + 216);
  v6 = (_DWORD *)(a1 + 40);
  if ( v5 )
  {
    PspChargeProcessWakeCounter((PVOID)(v5 & 0xFFFFFFFFFFFFFFF8uLL), -1, 1, 0LL);
    *(_QWORD *)(a1 + 216) = 0LL;
    v6 = (_DWORD *)(a1 + 40);
  }
  if ( (*v3 & 0x40000) != 0 )
  {
    AlpcpDereferenceBlobEx(*(_QWORD *)(a1 + 184));
    *v3 &= ~0x40000u;
    v3 = v6;
    *(_QWORD *)(a1 + 184) = 0LL;
  }
  result = *(_QWORD *)(a1 + 96);
  if ( result )
  {
    *(_DWORD *)(a1 + 240) = 2621440;
    *(_QWORD *)(a1 + 192) = 0LL;
    *v3 = 0;
    _InterlockedExchange((volatile __int32 *)(result + 40), 0);
  }
  return result;
}
