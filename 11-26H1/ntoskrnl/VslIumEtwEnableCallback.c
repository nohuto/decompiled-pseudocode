/*
 * XREFs of VslIumEtwEnableCallback @ 0x140B3B990
 * Callers:
 *     <none>
 * Callees:
 *     VslpEnterIumSecureMode @ 0x14036A34C (VslpEnterIumSecureMode.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall VslIumEtwEnableCallback(
        __int128 *SourceId,
        ULONG ControlCode,
        UCHAR Level,
        ULONGLONG MatchAnyKeyword,
        ULONGLONG MatchAllKeyword,
        PEVENT_FILTER_DESCRIPTOR FilterData,
        PVOID CallbackContext)
{
  __int64 v7; // rdi
  __int64 v9; // rsi
  __int128 v11; // xmm0
  _BYTE v12[8]; // [rsp+20h] [rbp-88h] BYREF
  __int128 v13; // [rsp+28h] [rbp-80h]
  __int64 v14; // [rsp+38h] [rbp-70h]
  __int64 v15; // [rsp+40h] [rbp-68h]
  ULONGLONG v16; // [rsp+48h] [rbp-60h]
  ULONGLONG v17; // [rsp+50h] [rbp-58h]
  PVOID v18; // [rsp+58h] [rbp-50h]

  v7 = ControlCode;
  v9 = Level;
  memset_0(v12, 0, 0x68uLL);
  v11 = *SourceId;
  v17 = MatchAllKeyword;
  v18 = CallbackContext;
  v13 = v11;
  v14 = v7;
  v15 = v9;
  v16 = MatchAnyKeyword;
  VslpEnterIumSecureMode(2u, 0xD5u, 0, (__int64)v12);
}
