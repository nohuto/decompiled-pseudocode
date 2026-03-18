/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x14013B310
 * Callers:
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x1400C7400 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     DrvEnableMDEV @ 0x14013AF88 (DrvEnableMDEV.c)
 *     ?GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z @ 0x1401BFB84 (-GrepSuspendDirectDraw@@YAXAEAVPDEVOBJ@@U_DXG_SR_DDRAW_FLAGS@@E@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 *a1, char a2, int a3)
{
  __int64 result; // rax
  __int64 v6; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v10; // r8
  __int64 v11; // r9

  result = *a1;
  v6 = *(_QWORD *)(*a1 + 2568);
  if ( v6 && v6 != -4 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
  {
    WdLogSingleEntry3(4LL, *(_QWORD *)(v6 + 232));
    result = (unsigned int)(a3 - 1);
    WdLogGlobalForLineNumber = 19431;
    if ( (unsigned int)result <= 1 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, v7);
      v11 = 0LL;
LABEL_6:
      LOBYTE(v10) = a2;
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(DxgkWin32kInterface + 560))(
               v6 + 240,
               *(unsigned int *)(v6 + 248),
               v10,
               v11);
    }
    if ( a3 == 3 && a2 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8, v7);
      LOBYTE(v11) = 1;
      goto LABEL_6;
    }
  }
  return result;
}
