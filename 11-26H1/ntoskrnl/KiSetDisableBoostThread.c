/*
 * XREFs of KiSetDisableBoostThread @ 0x14049D8D0
 * Callers:
 *     KeSetDisableBoostProcess @ 0x14049D728 (KeSetDisableBoostProcess.c)
 *     KeSetDisableBoostThread @ 0x14049D82C (KeSetDisableBoostThread.c)
 * Callees:
 *     KiComputeThreadPriority @ 0x14023B414 (KiComputeThreadPriority.c)
 *     KiClearForegroundBoost @ 0x14023B460 (KiClearForegroundBoost.c)
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     KiSetPriorityThread @ 0x140381000 (KiSetPriorityThread.c)
 *     KiSetForegroundBoost @ 0x14052461C (KiSetForegroundBoost.c)
 */

__int64 __fastcall KiSetDisableBoostThread(struct _KTHREAD *a1, __int64 a2, struct _SINGLE_LIST_ENTRY *a3)
{
  int v4; // esi
  signed __int8 v6; // cf
  unsigned int v7; // edi
  __int64 result; // rax
  unsigned int v9; // eax
  int v10; // [rsp+38h] [rbp+10h] BYREF

  v10 = 0;
  v4 = a2;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&a1->ThreadLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v10);
    while ( a1->ThreadLock );
  }
  if ( v4 )
    v6 = _interlockedbittestandset((volatile signed __int32 *)&a1->116 + 1, 3u);
  else
    v6 = _interlockedbittestandreset((volatile signed __int32 *)&a1->116 + 1, 3u);
  v7 = v6;
  if ( v4 != v6 && (*(_DWORD *)&a1->Process->0 & 0x2000) != 0 )
  {
    if ( v4 )
      KiClearForegroundBoost((__int64)a1);
    else
      KiSetForegroundBoost(a1, a2);
    v9 = KiComputeThreadPriority(a1, 0, 0);
    KiSetPriorityThread((unsigned __int64)a1, a3, (unsigned __int64 *)v9);
  }
  result = v7;
  a1->ThreadLock = 0LL;
  return result;
}
