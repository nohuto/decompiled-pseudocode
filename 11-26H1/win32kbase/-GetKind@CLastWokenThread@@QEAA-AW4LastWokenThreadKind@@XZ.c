/*
 * XREFs of ?GetKind@CLastWokenThread@@QEAA?AW4LastWokenThreadKind@@XZ @ 0x140159524
 * Callers:
 *     ?GetKind@LastWokenThread@@YA?AW4LastWokenThreadKind@@XZ @ 0x140159500 (-GetKind@LastWokenThread@@YA-AW4LastWokenThreadKind@@XZ.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CLastWokenThread::GetKind(__int64 a1)
{
  __int64 v2; // rcx
  BOOL v3; // ebx

  KeEnterCriticalRegion();
  ExAcquirePushLockSharedEx(a1, 0LL);
  v2 = *(_QWORD *)(a1 + 8);
  v3 = 0;
  if ( v2 )
    v3 = PsGetProcessDebugPort(**(_QWORD **)(v2 + 456)) != 0;
  ExReleasePushLockSharedEx(a1, 0LL);
  KeLeaveCriticalRegion();
  return v3;
}
