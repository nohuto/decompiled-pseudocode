/*
 * XREFs of sub_180021E88 @ 0x180021E88
 * Callers:
 *     sub_180021FD0 @ 0x180021FD0 (sub_180021FD0.c)
 * Callees:
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_180021E3C @ 0x180021E3C (sub_180021E3C.c)
 *     sub_180021E60 @ 0x180021E60 (sub_180021E60.c)
 */

__int64 __fastcall sub_180021E88(__int64 a1)
{
  REGHANDLE v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  if ( _InterlockedExchangeAdd64(&qword_1801C8550, 0xFFFFFFFFFFFFFFFFuLL) == 1 )
  {
    v2 = qword_1801BD1E0;
    qword_1801BD1E0 = 0LL;
    dword_1801BD1C0 = 0;
    EventUnregister(v2);
  }
  sub_180021E60((_QWORD *)(a1 + 112));
  sub_1800129D0(a1 + 80);
  sub_1800129D0(a1 + 48);
  v3 = *(_QWORD *)(a1 + 40);
  if ( v3 )
    sub_180010EC8(v3);
  sub_180021E3C((void **)(a1 + 24));
  sub_180021E3C((void **)(a1 + 16));
  return sub_180021E3C((void **)(a1 + 8));
}
