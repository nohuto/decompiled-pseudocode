/*
 * XREFs of ?IsPriorityFloorSet@tagTHREADINFO@@QEAA_NW4tagThreadPriorityFloor@@@Z @ 0x14012B0D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall tagTHREADINFO::IsPriorityFloorSet(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  bool v5; // di

  v2 = a2;
  v3 = a1 + 1728;
  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(v3, 0LL);
  if ( (unsigned int)v2 > 1 )
    KeBugCheckEx(0x164u, 0x41uLL, 0LL, 0LL, 0LL);
  v5 = (dword_140269F14[2 * v2] & *(_DWORD *)(a1 + 1740)) == dword_140269F14[2 * v2];
  ExReleasePushLockSharedEx(v3, 0LL);
  KeLeaveCriticalRegion();
  return v5;
}
