/*
 * XREFs of UsbDevice_ConfigureEndpointCompletion @ 0x14004E080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_dq @ 0x14002510C (WPP_RECORDER_SF_dq.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall UsbDevice_ConfigureEndpointCompletion(__int64 a1, int a2)
{
  _QWORD *v2; // rbx
  int v3; // edx
  unsigned __int16 v4; // r9
  __int64 v5; // rdx
  __int64 (__fastcall *v6)(__int64, __int64); // rax
  __int64 v7; // rcx

  v2 = *(_QWORD **)(a1 + 48);
  if ( a2 == 3 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *((unsigned __int8 *)v2 + 143);
      v4 = 99;
LABEL_10:
      WPP_RECORDER_SF_dq(
        *(_QWORD *)(v2[1] + 72LL),
        4u,
        0xCu,
        v4,
        (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
        v3,
        *v2);
      goto LABEL_11;
    }
    goto LABEL_11;
  }
  if ( *(_BYTE *)(a1 + 60) != 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v3 = *(unsigned __int8 *)(a1 + 61);
      v4 = 101;
      goto LABEL_10;
    }
LABEL_11:
    v5 = 3221225473LL;
    goto LABEL_12;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_dq(
      *(_QWORD *)(v2[1] + 72LL),
      4u,
      0xCu,
      0x64u,
      (__int64)&WPP_38a5a096fcfe3a80d9611fe09a034fab_Traceguids,
      *(unsigned __int8 *)(a1 + 61),
      *v2);
  v5 = 0LL;
LABEL_12:
  v6 = (__int64 (__fastcall *)(__int64, __int64))v2[70];
  v7 = v2[71];
  v2[70] = 0LL;
  v2[71] = 0LL;
  return v6(v7, v5);
}
