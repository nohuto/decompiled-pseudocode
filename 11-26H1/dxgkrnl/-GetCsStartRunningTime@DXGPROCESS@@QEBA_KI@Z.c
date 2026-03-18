/*
 * XREFs of ?GetCsStartRunningTime@DXGPROCESS@@QEBA_KI@Z @ 0x140058530
 * Callers:
 *     ?ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x14037E8BC (-ApplyCsFunctionAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

unsigned __int64 __fastcall DXGPROCESS::GetCsStartRunningTime(DXGPROCESS *this, unsigned int a2)
{
  __int64 v2; // rbx

  v2 = a2;
  if ( a2 >= 6 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1255;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"adapterOrdinal < DripsBlockerMaxAdapters",
      1255LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  return *(_QWORD *)(*((_QWORD *)this + 9) + 8 * v2);
}
