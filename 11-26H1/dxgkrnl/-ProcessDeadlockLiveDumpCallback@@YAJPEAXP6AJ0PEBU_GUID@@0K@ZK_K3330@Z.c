/*
 * XREFs of ?ProcessDeadlockLiveDumpCallback@@YAJPEAXP6AJ0PEBU_GUID@@0K@ZK_K3330@Z @ 0x14019D950
 * Callers:
 *     <none>
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z @ 0x14007A870 (-TdrCollectBugcheckSecondaryDumpData@@YAKPEAXK_N1@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall ProcessDeadlockLiveDumpCallback(
        void *a1,
        int (*a2)(void *, const struct _GUID *, void *, unsigned int))
{
  unsigned __int64 v4; // rbx
  char *v5; // rax
  char *v6; // rsi
  unsigned int v7; // eax
  int v8; // eax
  __int64 v9; // rdi

  v4 = ((unsigned int)TdrCollectBugcheckSecondaryDumpData(0LL, 0xFFFFFFFF, 1, 0) + 4095) & 0xFFFFF000;
  v5 = (char *)operator new[](v4, 0x4B677844u, 256LL);
  v6 = v5;
  if ( v5 )
  {
    v7 = TdrCollectBugcheckSecondaryDumpData(v5, v4, 1, 0);
    v8 = ((__int64 (__fastcall *)(void *, __int128 *, char *, _QWORD))a2)(a1, &WdDxgkSecondaryDataGUID, v6, v7);
    v9 = v8;
    if ( v8 < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 12517;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"AddSecondaryDataRoutine failed with status 0x%I64x",
        v9,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  }
  else
  {
    WdLogSingleEntry1(6LL);
    WdLogGlobalForLineNumber = 12525;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Out of memory allocating live dump data (size 0x%I64x)",
      v4,
      0LL,
      0LL,
      0LL,
      0LL);
    LODWORD(v9) = -1073741801;
  }
  return (unsigned int)v9;
}
