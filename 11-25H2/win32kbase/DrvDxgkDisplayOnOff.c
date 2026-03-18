/*
 * XREFs of DrvDxgkDisplayOnOff @ 0x1400750C0
 * Callers:
 *     GreSuspendDirectDraw @ 0x140072B40 (GreSuspendDirectDraw.c)
 *     ?DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z @ 0x140074F40 (-DrvDisableMDEVChildren@@YAHPEAU_MDEV@@HK@Z.c)
 *     DrvEnableMDEV @ 0x1400879E0 (DrvEnableMDEV.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DrvDxgkDisplayOnOff(__int64 a1, unsigned __int8 a2, unsigned int a3)
{
  __int64 v3; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 DxgkWin32kInterface; // rax
  __int64 v10; // r8
  __int64 v11; // r9

  v3 = a3;
  v5 = a2;
  if ( !a1 )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 19582;
  }
  v6 = *(_QWORD *)(a1 + 2568);
  result = v6 + 4;
  if ( ((v6 + 4) & 0xFFFFFFFFFFFFFFFBuLL) != 0 && (*(_DWORD *)(v6 + 160) & 0x800000) != 0 )
  {
    WdLogSingleEntry3(4LL, *(_QWORD *)(v6 + 232), v5, v3);
    result = (unsigned int)(v3 - 1);
    WdLogGlobalForLineNumber = 19599;
    if ( (unsigned int)result <= 1 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8);
      v11 = 0LL;
LABEL_7:
      LOBYTE(v10) = v5;
      return (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64))(DxgkWin32kInterface + 560))(
               v6 + 240,
               *(unsigned int *)(v6 + 248),
               v10,
               v11);
    }
    if ( (_DWORD)v3 == 3 && (_BYTE)v5 )
    {
      DxgkWin32kInterface = DxDdGetDxgkWin32kInterface(v8);
      LOBYTE(v11) = 1;
      goto LABEL_7;
    }
  }
  return result;
}
