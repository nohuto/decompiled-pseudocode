/*
 * XREFs of HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey @ 0x1400890C0
 * Callers:
 *     HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried @ 0x140020D80 (HUBDSM_CheckingIfMSOSExtendedPropertyDescriptorShouldBeQueried.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400024E0 (WPP_RECORDER_SF_d.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HUBREG_QueryExtPropDescSemaphoreInDeviceHardwareKey(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v3; // rax
  __int64 result; // rax
  unsigned __int16 v5; // r9
  int v6; // eax
  int v7; // eax
  __int64 v8; // [rsp+28h] [rbp-20h]
  __int64 v9; // [rsp+28h] [rbp-20h]
  __int64 v10; // [rsp+28h] [rbp-20h]
  int v11; // [rsp+80h] [rbp+38h] BYREF
  int v12; // [rsp+88h] [rbp+40h] BYREF
  int v13; // [rsp+90h] [rbp+48h] BYREF
  __int64 v14; // [rsp+98h] [rbp+50h] BYREF

  v1 = *(_QWORD *)(a1 + 16);
  v13 = 0;
  v12 = 0;
  v11 = 0;
  v14 = 0LL;
  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64))(WdfFunctions_01015 + 1632))(WdfDriverGlobals, v1);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, __int64, __int64, _QWORD, __int64 *))(WdfFunctions_01015 + 384))(
             WdfDriverGlobals,
             v3,
             1LL,
             131097LL,
             0LL,
             &v14);
  if ( (int)result < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v5 = 81;
    goto LABEL_22;
  }
  v6 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v14,
         &g_RevisionId,
         4LL,
         &v12,
         0LL,
         0LL);
  if ( (int)(v6 + 0x80000000) >= 0
    && v6 != -1073741772
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v9) = v6;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x52u,
      (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      v9);
  }
  v7 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
         WdfDriverGlobals,
         v14,
         &g_VendorRevision,
         4LL,
         &v11,
         0LL,
         0LL);
  if ( ((v7 + 0x80000000) & 0x80000000) == 0
    && v7 != -1073741772
    && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LODWORD(v10) = v7;
    WPP_RECORDER_SF_d(
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
      2u,
      5u,
      0x53u,
      (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
      v10);
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 1640), 0xFFFFFDFF);
  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, const wchar_t *, __int64, int *, _QWORD, _QWORD))(WdfFunctions_01015 + 1880))(
             WdfDriverGlobals,
             v14,
             L"(*",
             4LL,
             &v13,
             0LL,
             0LL);
  if ( (int)result < 0 )
  {
    if ( (_DWORD)result == -1073741772 || WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      goto LABEL_23;
    v5 = 84;
LABEL_22:
    LODWORD(v8) = result;
    result = WPP_RECORDER_SF_d(
               *(_QWORD *)(*(_QWORD *)(a1 + 8) + 1432LL),
               2u,
               5u,
               v5,
               (__int64)&WPP_6348287eaa4439ce1c5af6747761b290_Traceguids,
               v8);
    goto LABEL_23;
  }
  result = *(unsigned __int16 *)(a1 + 2008);
  if ( v12 != (_DWORD)result )
    goto LABEL_23;
  if ( (*(_DWORD *)(a1 + 2472) & 0x400) != 0 )
  {
    result = *(_QWORD *)(a1 + 2536);
    if ( v11 != *(unsigned __int16 *)(result + 4) )
      goto LABEL_23;
    goto LABEL_18;
  }
  if ( !v11 )
LABEL_18:
    _InterlockedOr((volatile signed __int32 *)(a1 + 1640), 0x200u);
LABEL_23:
  if ( v14 )
    return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS))(WdfFunctions_01015 + 1848))(WdfDriverGlobals);
  return result;
}
