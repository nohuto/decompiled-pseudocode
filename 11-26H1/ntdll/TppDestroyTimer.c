/*
 * XREFs of TppDestroyTimer @ 0x1800DA4B4
 * Callers:
 *     TppTimerpFree @ 0x1800DA420 (TppTimerpFree.c)
 *     TppFreeWait @ 0x1800DA460 (TppFreeWait.c)
 * Callees:
 *     NtSetInformationWorkerFactory @ 0x180162570 (NtSetInformationWorkerFactory.c)
 */

void __fastcall TppDestroyTimer(__int64 a1)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rcx
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v2 = *(_QWORD *)(a1 + 144);
  v3 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 + 432), 0xFFFFFFFF);
  if ( v3 > 0 && v3 - 1 <= 0 )
  {
    v4 = *(_QWORD *)(v2 + 56);
    v5 = -1;
    NtSetInformationWorkerFactory(v4, 3LL, &v5, 4LL);
  }
  TppCleanupGroupMemberDestroy(a1);
}
