/*
 * XREFs of IoSaveBugCheckProgress @ 0x1405C9E10
 * Callers:
 *     IoEscalateBugCheck @ 0x1405C8F08 (IoEscalateBugCheck.c)
 *     IoWriteCrashDump @ 0x1405CA87C (IoWriteCrashDump.c)
 *     IoAddPagesForPartialKernelDump @ 0x1405D6F18 (IoAddPagesForPartialKernelDump.c)
 *     IopAddLiveDumpPagesToPartialKernelDump @ 0x1405D73D0 (IopAddLiveDumpPagesToPartialKernelDump.c)
 *     KeBugCheck2 @ 0x1405E8880 (KeBugCheck2.c)
 *     KiBugCheckWriteCrashDump @ 0x1405EA280 (KiBugCheckWriteCrashDump.c)
 *     KiDisplayBlueScreen @ 0x1405EA964 (KiDisplayBlueScreen.c)
 *     KiUpdateBugcheckRecoveryProgress @ 0x1405FD294 (KiUpdateBugcheckRecoveryProgress.c)
 *     BgpFwDisplayBugCheckScreen @ 0x14071CDA4 (BgpFwDisplayBugCheckScreen.c)
 *     BgpFwDisplayBugCheckScreenModernized @ 0x14071D0FC (BgpFwDisplayBugCheckScreenModernized.c)
 * Callees:
 *     WheaLogInternalEvent @ 0x1403E30B0 (WheaLogInternalEvent.c)
 *     IopBugCheckProgressEfiVariableServicesAvailable @ 0x1405CB1F8 (IopBugCheckProgressEfiVariableServicesAvailable.c)
 *     IopWheaSelLogCheckPointEx @ 0x1405CC940 (IopWheaSelLogCheckPointEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

void __fastcall IoSaveBugCheckProgress(int a1)
{
  int v2; // ecx
  int v3; // ebx
  int v4; // eax
  __int16 v5; // [rsp+30h] [rbp-40h] BYREF
  int v6; // [rsp+32h] [rbp-3Eh]
  int v7; // [rsp+36h] [rbp-3Ah]
  _DWORD Src[2]; // [rsp+40h] [rbp-30h] BYREF
  __int64 v9; // [rsp+48h] [rbp-28h]
  int v10; // [rsp+50h] [rbp-20h]
  int v11; // [rsp+54h] [rbp-1Ch]
  int v12; // [rsp+58h] [rbp-18h]
  int v13; // [rsp+5Ch] [rbp-14h]
  int v14; // [rsp+60h] [rbp-10h]
  int v15; // [rsp+64h] [rbp-Ch]

  if ( CrashdmpDumpBlock )
  {
    v2 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
    if ( (v2 & 0x60000) == 0 )
    {
      *(_DWORD *)(CrashdmpDumpBlock + 1404) = v2 ^ ((unsigned __int16)a1 ^ (unsigned __int16)v2) & 0x1FF;
      if ( (unsigned __int8)IopBugCheckProgressEfiVariableServicesAvailable() )
      {
        BugCheckProgressEfiCalled = 1;
        guard_dispatch_icall_no_overrides(L"BugCheckProgress", BUGCHECK_EFI_GUID);
        BugCheckProgressEfiCalled = 0;
      }
    }
    if ( a1 == 4 )
    {
      if ( *(_DWORD *)&CmpContextListLock.SchedulerApcFill5[56] )
      {
        v3 = 4 - *(_DWORD *)(CrashdmpDumpBlock + 1336);
        Src[0] = 1733060695;
        Src[1] = 1;
        v9 = 40LL;
        v11 = -2147483613;
        v10 = 8961 - (v3 != 0);
        v12 = 24;
        v13 = 8;
        v15 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
        v14 = *(_DWORD *)(CrashdmpDumpBlock + 24);
        WheaLogInternalEvent(Src);
      }
      else
      {
        v6 = *(_DWORD *)(CrashdmpDumpBlock + 24);
        v4 = *(_DWORD *)(CrashdmpDumpBlock + 1404);
        v5 = 0;
        v7 = v4;
        IopWheaSelLogCheckPointEx(2147483683LL, &v5, 10LL);
      }
    }
  }
}
