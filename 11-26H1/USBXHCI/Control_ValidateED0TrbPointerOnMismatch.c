/*
 * XREFs of Control_ValidateED0TrbPointerOnMismatch @ 0x14003D0E0
 * Callers:
 *     Control_ProcessTransferEventWithED0 @ 0x140021C4C (Control_ProcessTransferEventWithED0.c)
 * Callees:
 *     Controller_ReportFatalError @ 0x140020E40 (Controller_ReportFatalError.c)
 *     WPP_RECORDER_SF_DDi @ 0x140029D24 (WPP_RECORDER_SF_DDi.c)
 */

_UNKNOWN **__fastcall Control_ValidateED0TrbPointerOnMismatch(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v4; // r8
  __int64 v5; // rcx
  _UNKNOWN **result; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  int v9; // r8d
  __int64 v10; // rcx
  int v11; // [rsp+28h] [rbp-20h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+28h] [rbp-20h]
  int v14; // [rsp+30h] [rbp-18h]
  int v15; // [rsp+30h] [rbp-18h]
  int v16; // [rsp+30h] [rbp-18h]

  v2 = a1[22];
  v4 = *a2;
  v5 = *(_QWORD *)(v2 + 24);
  if ( *a2 < v5 || v4 >= v5 + *(unsigned int *)(v2 + 40) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v10 = a1[7];
      v16 = *(_DWORD *)(v10 + 152);
      v13 = *(unsigned __int8 *)(a1[6] + 143LL);
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(v10 + 80),
        2u,
        v4,
        0xFu,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        v13,
        v16,
        *a2);
    }
    v9 = 4127;
    return (_UNKNOWN **)Controller_ReportFatalError(a1[5], 2, v9, 0, a1[6], a1[7], (__int64)a1);
  }
  if ( !_bittest64((const signed __int64 *)(a1[5] + 736LL), 0x26u) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v8 = a1[7];
      v15 = *(_DWORD *)(v8 + 152);
      v12 = *(unsigned __int8 *)(a1[6] + 143LL);
      WPP_RECORDER_SF_DDi(
        *(_QWORD *)(v8 + 80),
        2u,
        v4,
        0xEu,
        (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
        v12,
        v15,
        *a2);
    }
    v9 = 4128;
    return (_UNKNOWN **)Controller_ReportFatalError(a1[5], 2, v9, 0, a1[6], a1[7], (__int64)a1);
  }
  result = &WPP_RECORDER_INITIALIZED;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v7 = a1[7];
    v14 = *(_DWORD *)(v7 + 152);
    v11 = *(unsigned __int8 *)(a1[6] + 143LL);
    return (_UNKNOWN **)WPP_RECORDER_SF_DDi(
                          *(_QWORD *)(v7 + 80),
                          3u,
                          v4,
                          0xDu,
                          (__int64)&WPP_c4903a4407353a45c75e6304bdbc5226_Traceguids,
                          v11,
                          v14,
                          *a2);
  }
  return result;
}
