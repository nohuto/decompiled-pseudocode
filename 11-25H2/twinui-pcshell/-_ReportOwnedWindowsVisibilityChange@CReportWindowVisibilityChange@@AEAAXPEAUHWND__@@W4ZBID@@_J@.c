/*
 * XREFs of ?_ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@AEAAXPEAUHWND__@@W4ZBID@@_J@Z @ 0x18008C658
 * Callers:
 *     ?ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x18013774C (-ReportWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImme.c)
 *     ?ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAUIImmersiveMonitor@@PEAUIImmersiveApplicationInternal@@_J@Z @ 0x180137848 (-ReportOwnedWindowsVisibilityChange@CReportWindowVisibilityChange@@QEAAXPEAUHWND__@@W4ZBID@@PEAU.c)
 * Callees:
 *     ??1?$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V?$CSimpleArrayStandardCompareHelper@UENUMERATED_WINDOW@@@@@@QEAA@XZ @ 0x18008C828 (--1-$CCoSimpleArray@UENUMERATED_WINDOW@@$0PPPPPPPO@V-$CSimpleArrayStandardCompareHelper@UENUMERA.c)
 *     ?Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z @ 0x18008CD48 (-Realloc@CTCoAllocPolicy@@SAJPEAXK0_KPEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CReportWindowVisibilityChange::_ReportOwnedWindowsVisibilityChange(
        __int64 a1,
        LPARAM a2,
        int a3,
        __int64 a4)
{
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  LPARAM lParam; // [rsp+30h] [rbp-30h] BYREF
  int v10; // [rsp+38h] [rbp-28h]
  _QWORD *v11; // [rsp+40h] [rbp-20h] BYREF
  unsigned __int64 v12; // [rsp+48h] [rbp-18h]
  __int64 v13; // [rsp+50h] [rbp-10h]
  __int64 v14; // [rsp+58h] [rbp-8h]
  void *v15; // [rsp+88h] [rbp+28h] BYREF

  lParam = a2;
  v10 = a3;
  v6 = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  v15 = 0LL;
  if ( is_mul_ok(0LL, 2uLL) )
  {
    v15 = 0LL;
    if ( is_mul_ok(0x14uLL, 8uLL)
      && CTCoAllocPolicy::Realloc(&v15, (0x14 * (unsigned __int128)8uLL) >> 64, 0LL, 0xA0uLL, &v15) >= 0 )
    {
      v14 = 20LL;
      v11 = v15;
      EnumWindows(CReportWindowVisibilityChange::s_DiscoverOwnedWindowsProc, (LPARAM)&lParam);
    }
  }
  if ( (a4 & 2) != 0 && *(_BYTE *)(a1 + 72) )
    a4 |= 4uLL;
  v7 = v12;
  if ( v12 )
  {
    do
      (*(void (__fastcall **)(PVOID, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)CApplicationManagerUtility::g_pIAMGlobals[18].Ptr
                                                                     + 24LL))(
        CApplicationManagerUtility::g_pIAMGlobals[18].Ptr,
        v11[v6++],
        0LL,
        *(unsigned int *)(a1 + 76),
        a4);
    while ( v6 < v7 );
  }
  return CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>::~CCoSimpleArray<ENUMERATED_WINDOW,4294967294,CSimpleArrayStandardCompareHelper<ENUMERATED_WINDOW>>(&v11);
}
