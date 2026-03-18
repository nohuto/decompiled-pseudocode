/*
 * XREFs of ?SetWslInterface@DXGGLOBAL@@QEAAJPEAU_DXGWSL_INTERFACE@@@Z @ 0x1401E00D0
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403C72C0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 */

__int64 __fastcall DXGGLOBAL::SetWslInterface(DXGGLOBAL *this, struct _DXGWSL_INTERFACE *a2)
{
  _QWORD *v4; // rax

  if ( *((_QWORD *)this + 4) )
    goto LABEL_4;
  v4 = (_QWORD *)operator new(0x20uLL, 0x4B677844u, 256LL);
  if ( v4 )
  {
    *v4 = 0LL;
    v4[1] = 0LL;
    v4[2] = 0LL;
    v4[3] = 0LL;
    *((_QWORD *)this + 4) = v4;
LABEL_4:
    g_WslSubsystem = *((_QWORD *)a2 + 2);
    qword_140168B48 = *((_QWORD *)a2 + 4);
    qword_140168B50 = *((_QWORD *)a2 + 5);
    qword_140168B58 = *((_QWORD *)a2 + 6);
    qword_140168B60 = *((_QWORD *)a2 + 7);
    qword_140168B68 = *((_QWORD *)a2 + 8);
    *((_QWORD *)this + 3) = *((_QWORD *)a2 + 9);
    return 0LL;
  }
  *((_QWORD *)this + 4) = 0LL;
  WdLogSingleEntry0(6LL);
  WdLogGlobalForLineNumber = 2430;
  DxgkLogInternalTriageEvent(
    0LL,
    262145,
    -1,
    (__int64)L"Failed to allocated WSL shared NT handle table",
    2430LL,
    0LL,
    0LL,
    0LL,
    0LL);
  return 3221225495LL;
}
