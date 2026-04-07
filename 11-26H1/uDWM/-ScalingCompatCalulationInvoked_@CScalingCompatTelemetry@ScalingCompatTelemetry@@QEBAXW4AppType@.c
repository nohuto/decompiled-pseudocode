/*
 * XREFs of ?ScalingCompatCalulationInvoked_@CScalingCompatTelemetry@ScalingCompatTelemetry@@QEBAXW4AppType@2@II@Z @ 0x1800E605C
 * Callers:
 *     ??$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTelemetry@ScalingCompatTelemetry@@SAXAEAW4AppType@1@AEAI1@Z @ 0x1800E5E1C (--$ScalingCompatCalulationInvoked@AEAW4AppType@ScalingCompatTelemetry@@AEAIAEAI@CScalingCompatTe.c)
 * Callees:
 *     _tlgWriteTransfer_EventWriteTransfer @ 0x180002578 (_tlgWriteTransfer_EventWriteTransfer.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     ?get@?$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z @ 0x1800E61E0 (-get@-$static_lazy@VScalingCompatLogging@@@details@wil@@QEAAPEAVScalingCompatLogging@@P6AXXZ@Z.c)
 */

int __fastcall ScalingCompatTelemetry::CScalingCompatTelemetry::ScalingCompatCalulationInvoked_(
        __int64 a1,
        int a2,
        int a3,
        int a4)
{
  __int64 v7; // rax
  _DWORD *v8; // rcx
  int v10; // [rsp+38h] [rbp-19h] BYREF
  int v11; // [rsp+3Ch] [rbp-15h] BYREF
  int v12; // [rsp+40h] [rbp-11h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v13; // [rsp+48h] [rbp-9h] BYREF
  int *v14; // [rsp+68h] [rbp+17h]
  __int64 v15; // [rsp+70h] [rbp+1Fh]
  int *v16; // [rsp+78h] [rbp+27h]
  __int64 v17; // [rsp+80h] [rbp+2Fh]
  int *v18; // [rsp+88h] [rbp+37h]
  __int64 v19; // [rsp+90h] [rbp+3Fh]

  v7 = wil::details::static_lazy<ScalingCompatLogging>::get(
         a1,
         _lambda_830a858705f438bc5eb56dc5316ebd68_::_lambda_invoker_cdecl_);
  v8 = *(_DWORD **)(v7 + 8);
  if ( *v8 > 5u )
  {
    v10 = a4;
    v18 = &v10;
    v11 = a3;
    v16 = &v11;
    v12 = a2;
    v14 = &v12;
    v19 = 4LL;
    v17 = 4LL;
    v15 = 4LL;
    LODWORD(v7) = tlgWriteTransfer_EventWriteTransfer((__int64)v8, byte_180101779, 0LL, 0LL, 5u, &v13);
  }
  return v7;
}
