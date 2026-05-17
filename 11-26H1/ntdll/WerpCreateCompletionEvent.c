/*
 * XREFs of WerpCreateCompletionEvent @ 0x1801103B8
 * Callers:
 *     RtlReportExceptionEx @ 0x18013A9A0 (RtlReportExceptionEx.c)
 * Callees:
 *     ZwCreateEvent @ 0x18015F840 (ZwCreateEvent.c)
 */

__int64 __fastcall WerpCreateCompletionEvent(_QWORD *a1)
{
  _DWORD v2[2]; // [rsp+30h] [rbp-38h] BYREF
  __int64 v3; // [rsp+38h] [rbp-30h]
  __int64 v4; // [rsp+40h] [rbp-28h]
  int v5; // [rsp+48h] [rbp-20h]
  int v6; // [rsp+4Ch] [rbp-1Ch]
  __int128 v7; // [rsp+50h] [rbp-18h]

  v2[1] = 0;
  v6 = 0;
  if ( !a1 )
    return 3221225711LL;
  *a1 = 0LL;
  v2[0] = 48;
  v3 = 0LL;
  v5 = 2;
  v7 = 0LL;
  v4 = 0LL;
  return ZwCreateEvent(a1, 2031619LL, v2, 0LL, 0);
}
