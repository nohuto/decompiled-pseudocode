/*
 * XREFs of sub_180021AE8 @ 0x180021AE8
 * Callers:
 *     sub_180021254 @ 0x180021254 (sub_180021254.c)
 * Callees:
 *     sub_1800013EC @ 0x1800013EC (sub_1800013EC.c)
 *     sub_180010EC8 @ 0x180010EC8 (sub_180010EC8.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800143C0 @ 0x1800143C0 (sub_1800143C0.c)
 *     sub_18001490C @ 0x18001490C (sub_18001490C.c)
 *     sub_18001C514 @ 0x18001C514 (sub_18001C514.c)
 *     sub_180021794 @ 0x180021794 (sub_180021794.c)
 *     sub_180021A3C @ 0x180021A3C (sub_180021A3C.c)
 *     sub_180021A50 @ 0x180021A50 (sub_180021A50.c)
 *     sub_180021E60 @ 0x180021E60 (sub_180021E60.c)
 *     sub_180022534 @ 0x180022534 (sub_180022534.c)
 *     sub_180024250 @ 0x180024250 (sub_180024250.c)
 */

// Hidden C++ exception states: #wind=7
_QWORD *__fastcall sub_180021AE8(_QWORD *a1)
{
  _QWORD *v2; // r14
  size_t v3; // r8
  const char *v4; // rdx
  __int64 *v5; // rax
  void *v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r10
  __int64 v9; // rcx
  _SYSTEM_INFO SystemInfo; // [rsp+20h] [rbp-48h] BYREF
  __int64 v12; // [rsp+78h] [rbp+10h] BYREF

  *a1 = &Spectre::Utils::TelemetryTraceLoggerWin::`vftable';
  sub_180022534(a1 + 1);
  sub_180022534(a1 + 2);
  sub_180022534(a1 + 3);
  a1[4] = 0LL;
  a1[5] = 0LL;
  sub_1800143C0((__int64)(a1 + 6));
  sub_180011CC4(a1 + 10, "CanvasDefault");
  v2 = a1 + 14;
  a1[14] = 0LL;
  memset(&SystemInfo, 0, sizeof(SystemInfo));
  GetSystemInfo(&SystemInfo);
  v3 = 5LL;
  if ( SystemInfo.wProcessorArchitecture )
  {
    if ( SystemInfo.wProcessorArchitecture == 5 )
    {
      v4 = "ARM";
    }
    else
    {
      if ( SystemInfo.wProcessorArchitecture != 9 )
      {
        v4 = "UNKNOWN";
        v3 = 7LL;
        goto LABEL_9;
      }
      v4 = "x64";
    }
    v3 = 3LL;
  }
  else
  {
    v4 = "WIN32";
  }
LABEL_9:
  sub_18001490C((__int64)(a1 + 6), v4, v3);
  v5 = sub_180021A50(&v12);
  sub_180021794((__int64)(a1 + 14), v5);
  sub_180021E60(&v12);
  v6 = (void *)*v2;
  _InterlockedExchangeAdd64((volatile signed __int64 *)(*v2 + 144LL), 0LL);
  sub_180024250(v6);
  if ( _InterlockedIncrement64(&qword_1801C8550) == 1 )
    sub_1800013EC(&dword_1801BD1C0);
  v7 = sub_18001C514(40LL);
  if ( v7 )
  {
    *(_DWORD *)(v7 + 8) = 1;
    *(_DWORD *)(v7 + 12) = 1;
    *(_QWORD *)v7 = &std::_Ref_count_obj2<Spectre::Utils::TelemTraceLoggerAttributes>::`vftable';
    sub_180021A3C((_QWORD *)(v7 + 16), (__int64)(a1 + 1), (__int64)(a1 + 2), (__int64)(a1 + 6));
  }
  else
  {
    v8 = 0LL;
  }
  a1[4] = v8 + 16;
  v9 = a1[5];
  a1[5] = v8;
  if ( v9 )
    sub_180010EC8(v9);
  return a1;
}
