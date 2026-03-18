/*
 * XREFs of ?UpdateDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_ADAPTER_UPDATE_DIAGNOSTIC_REPORTING@1@@Z @ 0x1401A05C4
 * Callers:
 *     ?InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ @ 0x14019BCD8 (-InitializeDriverDiagnosticReporting@DXGADAPTER@@AEAAXXZ.c)
 *     ?UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z @ 0x1401D81D0 (-UpdateDiagnosticAdapterCallback@@YAJPEAVDXGADAPTER@@PEAX@Z.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z @ 0x1401ABCC8 (-DdiControlDiagnosticReporting@DXGADAPTER@@QEAAJPEAU_DXGKARG_CONTROLDIAGNOSTICREPORTING@@@Z.c)
 *     ?DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z @ 0x1401B0814 (-DdiQueryDiagnosticTypesSupport@DXGADAPTER@@QEAAJPEAU_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT@@@Z.c)
 */

__int64 __fastcall DXGADAPTER::UpdateDiagnosticReporting(DXGADAPTER *this, UINT *a2)
{
  __int64 v2; // rdi
  unsigned int v4; // r14d
  UINT v6; // eax
  int v7; // eax
  UINT v8; // esi
  int v9; // eax
  struct _DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT v11; // [rsp+50h] [rbp-20h] BYREF

  v2 = a2[3];
  v4 = 0;
  if ( *((_DWORD *)this + v2 + 1215) < *((_DWORD *)this + v2 + 1217) )
  {
    *((_DWORD *)this + v2 + 1217) = 0;
    if ( *((__int64 (__fastcall **)(void *const, struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *))this + 167) == DXGADAPTER::DefaultDdiControlDiagnosticReporting )
    {
      if ( (_DWORD)v2 == 1 && *((int *)this + 694) >= 8960 )
        *((_DWORD *)this + v2 + 1215) = 1;
    }
    else
    {
      v6 = *a2;
      *(_QWORD *)&v11.NoninvasiveTypes.Notifications.0 = 0LL;
      v11.DiagnosticCategory.Value = v6;
      v7 = DXGADAPTER::DdiQueryDiagnosticTypesSupport(this, &v11);
      v4 = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry3(3LL, v11.DiagnosticCategory.Value, v7, 3LL);
        WdLogGlobalForLineNumber = 12230;
      }
      else if ( ((v11.NoninvasiveTypes.Notifications.Value | v11.InvasiveTypes.Notifications.Value) & a2[2]) != 0 )
      {
        WdLogSingleEntry4(
          2LL,
          v11.DiagnosticCategory.Value,
          v11.NoninvasiveTypes.Notifications.Value,
          v11.InvasiveTypes.Notifications.Value,
          2LL);
        WdLogGlobalForLineNumber = 12222;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Ignoring diagnostics query for category 0x%.8x which reported non-zero reserved fields, Non-Invasive:"
                    " %.8x, Invasive: %.8x",
          v11.DiagnosticCategory.Value,
          v11.NoninvasiveTypes.Notifications.Value,
          v11.InvasiveTypes.Notifications.Value,
          2LL,
          0LL);
      }
      else if ( (v11.InvasiveTypes.Notifications.Value & v11.NoninvasiveTypes.Notifications.Value) != 0 )
      {
        WdLogSingleEntry4(
          2LL,
          v11.DiagnosticCategory.Value,
          v11.NoninvasiveTypes.Notifications.Value,
          v11.InvasiveTypes.Notifications.Value,
          1LL);
        WdLogGlobalForLineNumber = 12212;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Ignoring diagnostics query for category 0x%.8x which reported overlapping types, Non-Invasive: %.8x, Invasive: %.8x",
          v11.DiagnosticCategory.Value,
          v11.NoninvasiveTypes.Notifications.Value,
          v11.InvasiveTypes.Notifications.Value,
          1LL,
          0LL);
      }
      else
      {
        *((_DWORD *)this + v2 + 1215) = v11.NoninvasiveTypes.Notifications.Value | v11.InvasiveTypes.Notifications.Value;
      }
    }
  }
  v8 = a2[1] & *((_DWORD *)this + v2 + 1215);
  if ( *((_DWORD *)this + v2 + 1215) && *((_DWORD *)this + v2 + 1217) != v8 )
  {
    if ( *((__int64 (__fastcall **)(void *const, struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *))this + 167) == DXGADAPTER::DefaultDdiControlDiagnosticReporting
      || (v11.DiagnosticCategory.Value = *(_QWORD *)a2,
          v11.NoninvasiveTypes.Notifications.Value = v8,
          v9 = DXGADAPTER::DdiControlDiagnosticReporting(this, (struct _DXGKARG_CONTROLDIAGNOSTICREPORTING *)&v11),
          v4 = v9,
          v9 >= 0) )
    {
      *((_DWORD *)this + v2 + 1217) = v8;
    }
    else
    {
      WdLogSingleEntry4(3LL, *a2, a2[1], v9, 4LL);
      WdLogGlobalForLineNumber = 12266;
    }
  }
  return v4;
}
