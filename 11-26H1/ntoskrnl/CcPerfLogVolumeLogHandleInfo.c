/*
 * XREFs of CcPerfLogVolumeLogHandleInfo @ 0x1404DA978
 * Callers:
 *     CcPerfLogLoggedStreamsStats @ 0x1404DA8E0 (CcPerfLogLoggedStreamsStats.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall CcPerfLogVolumeLogHandleInfo(__int64 a1, char a2, int a3, __int64 a4, __int64 a5, __int64 a6)
{
  int v6; // eax
  _QWORD v8[2]; // [rsp+30h] [rbp-40h] BYREF
  __int64 v9; // [rsp+40h] [rbp-30h] BYREF
  int v10; // [rsp+48h] [rbp-28h]
  int v11; // [rsp+4Ch] [rbp-24h]
  __int64 v12; // [rsp+50h] [rbp-20h]
  __int64 v13; // [rsp+58h] [rbp-18h]
  __int64 v14; // [rsp+60h] [rbp-10h]

  v12 = a5;
  v13 = a6;
  v9 = a1;
  v11 = a3;
  v14 = a4;
  v6 = (a2 & 1) != 0;
  v10 = v6;
  if ( (a2 & 2) != 0 )
  {
    v6 |= 2u;
    v10 = v6;
  }
  if ( (a2 & 4) != 0 )
  {
    v6 |= 4u;
    v10 = v6;
  }
  if ( (a2 & 0x10) != 0 )
  {
    v6 |= 0x10u;
    v10 = v6;
  }
  if ( (a2 & 8) != 0 )
    v10 = v6 | 8;
  v8[1] = 40LL;
  v8[0] = &v9;
  return EtwTraceKernelEvent((int)v8, 1, 0x80020000, 5645, 5249282);
}
