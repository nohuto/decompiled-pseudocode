/*
 * XREFs of Endpoint_WdfEvtPurgeComplete @ 0x140032080
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ddq @ 0x140006C78 (WPP_RECORDER_SF_ddq.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Endpoint_WdfEvtPurgeComplete(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v4; // rdx
  unsigned __int16 v5; // r9
  int v6; // [rsp+28h] [rbp-20h]
  int v7; // [rsp+30h] [rbp-18h]

  result = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01033 + 1616))(
             WdfDriverGlobals,
             a2,
             off_14006AFE8);
  if ( !*(_BYTE *)(result + 37) || (v4 = *(_QWORD *)(result + 144)) == 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 37;
      goto LABEL_10;
    }
    return ((__int64 (__fastcall *)(__int64, __int64))qword_14006BC80)(UcxDriverGlobals, a2);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v4 + 16), 0xFFFFFFFF) == 1 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v5 = 36;
LABEL_10:
      v7 = *(_DWORD *)(result + 152);
      v6 = *(unsigned __int8 *)(*(_QWORD *)(result + 16) + 143LL);
      WPP_RECORDER_SF_ddq(
        *(_QWORD *)(result + 80),
        4u,
        0xDu,
        v5,
        (__int64)&WPP_d3be1904650e34f1a39197b3dd99b0d4_Traceguids,
        v6,
        v7,
        a2);
      return ((__int64 (__fastcall *)(__int64, __int64))qword_14006BC80)(UcxDriverGlobals, a2);
    }
    return ((__int64 (__fastcall *)(_QWORD, _QWORD))qword_14006BC80)(UcxDriverGlobals, a2);
  }
  return result;
}
