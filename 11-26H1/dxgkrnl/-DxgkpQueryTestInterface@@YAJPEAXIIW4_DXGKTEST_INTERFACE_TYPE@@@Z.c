/*
 * XREFs of ?DxgkpQueryTestInterface@@YAJPEAXIIW4_DXGKTEST_INTERFACE_TYPE@@@Z @ 0x140209BC0
 * Callers:
 *     DxgkInternalDeviceIoctl @ 0x1403C72C0 (DxgkInternalDeviceIoctl.c)
 * Callees:
 *     ?SysMmQueryTestInterface@@YAJPEAXII@Z @ 0x14009D2F0 (-SysMmQueryTestInterface@@YAJPEAXII@Z.c)
 *     DxgkpIsDrtEnabled @ 0x14019364C (DxgkpIsDrtEnabled.c)
 */

__int64 __fastcall DxgkpQueryTestInterface(_QWORD *a1, unsigned int a2, unsigned int a3, int a4)
{
  char IsDrtEnabled; // al
  unsigned int v9; // r10d

  IsDrtEnabled = DxgkpIsDrtEnabled();
  v9 = 0;
  if ( !IsDrtEnabled )
    return 3221225485LL;
  if ( a4 )
  {
    if ( a4 != 1 )
      return 3221225485LL;
    return SysMmQueryTestInterface(a1, a2, a3);
  }
  else
  {
    if ( a3 || a2 < 0x30 )
    {
      return (unsigned int)-1073741811;
    }
    else
    {
      *a1 = DxgkTestBeginTest;
      a1[1] = DxgkTestEndTest;
      a1[2] = DxgkEnumAdapters3Internal;
      a1[3] = DxgkOpenAdapterFromLuidInternal;
      a1[4] = DxgkCloseAdapterInternal;
      a1[5] = DxgkQueryAdapterInfoInternal;
      a1[6] = DxgkTestGetSysMmAdapter;
    }
    return v9;
  }
}
