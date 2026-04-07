/*
 * XREFs of ?WindowMoveResizeCrossfadeAnimationTeardownComplete@UDwmTrace@@SAXXZ @ 0x180041840
 * Callers:
 *     ?OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transitions@Udwm@winrt@@AEAAXXZ @ 0x18004194C (-OnPositionAnimationComplete@WindowMoveResizeCrossfadeTransition@implementation@Private@Transiti.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x180041484 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 */

void __fastcall UDwmTrace::WindowMoveResizeCrossfadeAnimationTeardownComplete(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  unsigned int v3; // [rsp+30h] [rbp-9h]
  __int64 v4; // [rsp+38h] [rbp-1h] BYREF
  _DWORD v5[2]; // [rsp+40h] [rbp+7h] BYREF
  __int64 v6; // [rsp+48h] [rbp+Fh]
  unsigned __int16 *v7; // [rsp+50h] [rbp+17h] BYREF
  int v8; // [rsp+58h] [rbp+1Fh]
  int v9; // [rsp+5Ch] [rbp+23h]
  void *v10; // [rsp+60h] [rbp+27h]
  __int64 v11; // [rsp+68h] [rbp+2Fh]
  __int64 *v12; // [rsp+70h] [rbp+37h]
  __int64 v13; // [rsp+78h] [rbp+3Fh]

  v2 = wil::details::static_lazy<UDwmTrace>::get(a1, a2)[1];
  if ( *(_DWORD *)v2 > 5u
    && (*(_QWORD *)(v2 + 16) & 0x200000000000LL) != 0
    && (*(_QWORD *)(v2 + 24) & 0x200000000000LL) == *(_QWORD *)(v2 + 24) )
  {
    v6 = 0x200000000000LL;
    v12 = &v4;
    v5[1] = 5;
    v7 = *(unsigned __int16 **)(v2 + 8);
    v4 = 0x1000000LL;
    v13 = 8LL;
    v5[0] = 184549376;
    v8 = *v7;
    v10 = &unk_180101587;
    v9 = 2;
    v11 = 0x100000046LL;
    v3 = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    ((void (__fastcall *)(_QWORD, _DWORD *, _QWORD, _QWORD, int, unsigned __int16 **, unsigned int, __int64))EtwEventWriteTransfer)(
      *(_QWORD *)(v2 + 32),
      v5,
      0LL,
      0LL,
      3,
      &v7,
      v3,
      0x1000000LL);
  }
}
