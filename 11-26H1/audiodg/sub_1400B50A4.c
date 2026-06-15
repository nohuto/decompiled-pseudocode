/*
 * XREFs of sub_1400B50A4 @ 0x1400B50A4
 * Callers:
 *     sub_1400997E0 @ 0x1400997E0 (sub_1400997E0.c)
 *     sub_14009AB10 @ 0x14009AB10 (sub_14009AB10.c)
 *     sub_14009BE40 @ 0x14009BE40 (sub_14009BE40.c)
 * Callees:
 *     memset @ 0x14004A6AC (memset.c)
 */

ULONG __fastcall sub_1400B50A4(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  ULONG result; // eax
  _BYTE EventTrace[64]; // [rsp+20h] [rbp-58h] BYREF
  __int64 v9; // [rsp+60h] [rbp-18h]
  __int64 v10; // [rsp+68h] [rbp-10h]

  if ( (unsigned int)dword_1400B7008 >= 5 )
  {
    memset(EventTrace, 0, sizeof(EventTrace));
    *(_DWORD *)&EventTrace[44] = 0x20000;
    strcpy(EventTrace, "P");
    v10 = a5;
    *(_OWORD *)&EventTrace[24] = xmmword_1400F7010;
    *(_WORD *)&EventTrace[4] = 1280;
    *(_QWORD *)&EventTrace[48] = a2;
    *(_DWORD *)&EventTrace[56] = 0;
    v9 = a4;
    return TraceEvent(TraceHandle, (PEVENT_TRACE_HEADER)EventTrace);
  }
  return result;
}
