/*
 * XREFs of DpWriteDeviceSpace @ 0x140057960
 * Callers:
 *     ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC (-InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpWriteDeviceSpace(__int64 a1, int a2, void *a3, ULONG Offset, ULONG Length, ULONG *a6)
{
  unsigned int v6; // ebx
  __int64 v7; // r10
  int v8; // eax
  __int64 (__fastcall *v9)(_QWORD); // rsi
  ULONG v10; // eax
  __int64 (__fastcall *v12)(_QWORD, void *, _QWORD, _QWORD); // rax

  v6 = 0;
  if ( a1 && a3 && a6 )
  {
    *a6 = 0;
    v7 = *(_QWORD *)(a1 + 64);
    if ( !v7 )
      goto LABEL_14;
    if ( *(_DWORD *)(v7 + 16) != 1953656900 )
      goto LABEL_14;
    v8 = *(_DWORD *)(v7 + 20);
    if ( v8 != 3 && v8 != 2 )
      goto LABEL_14;
    switch ( a2 )
    {
      case 0:
      case 1382638416:
        v9 = *(__int64 (__fastcall **)(_QWORD))(v7 + 608);
        if ( !v9 )
        {
          v6 = -1073741823;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3298;
          return v6;
        }
        v10 = v9(*(_QWORD *)(v7 + 568));
        break;
      case -2147483648:
        v10 = HalSetBusDataByOffset(PCIConfiguration, 0, 0, a3, Offset, Length);
        break;
      case -2147483647:
        if ( v8 != 2 )
        {
          v6 = -1073741811;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3243;
          return v6;
        }
        if ( (*(_DWORD *)(v7 + 4124) & 4) == 0 )
        {
          v6 = -1071774661;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 3254;
          return v6;
        }
        v12 = *(__int64 (__fastcall **)(_QWORD, void *, _QWORD, _QWORD))(v7 + 3080);
        if ( !v12 )
        {
          v6 = -1073741823;
          WdLogSingleEntry1(3LL);
          WdLogGlobalForLineNumber = 3264;
          return v6;
        }
        v10 = v12(*(_QWORD *)(v7 + 3048), a3, Offset, Length);
        break;
      default:
LABEL_14:
        v6 = -1073741811;
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 3223;
        return v6;
    }
    *a6 = v10;
    WdLogSingleEntry1(4LL);
    WdLogGlobalForLineNumber = 3311;
  }
  else
  {
    v6 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 3200;
  }
  return v6;
}
