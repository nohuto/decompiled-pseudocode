/*
 * XREFs of ?Uninitialize@UmfdReliabilityManager@@YAXXZ @ 0x14010B5BC
 * Callers:
 *     UmfdSessionUninitialize @ 0x14010B400 (UmfdSessionUninitialize.c)
 * Callees:
 *     <none>
 */

void __fastcall UmfdReliabilityManager::Uninitialize(UmfdReliabilityManager *this, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  PVOID *v4; // rbx

  v3 = *(_QWORD *)(W32GetSessionState(this, a2, a3) + 96);
  v4 = *(PVOID **)(v3 + 24296);
  if ( v4 )
  {
    ExFreePoolWithTag(v4[6], 0);
    ExFreePoolWithTag(v4, 0);
    *(_QWORD *)(v3 + 24296) = 0LL;
  }
}
