/*
 * XREFs of sub_18001DB38 @ 0x18001DB38
 * Callers:
 *     sub_18001DCFC @ 0x18001DCFC (sub_18001DCFC.c)
 * Callees:
 *     __security_check_cookie @ 0x18000BF80 (__security_check_cookie.c)
 *     sub_18000CF78 @ 0x18000CF78 (sub_18000CF78.c)
 *     sub_18000D03C @ 0x18000D03C (sub_18000D03C.c)
 *     sub_180011CC4 @ 0x180011CC4 (sub_180011CC4.c)
 *     sub_1800129D0 @ 0x1800129D0 (sub_1800129D0.c)
 *     sub_1800148EC @ 0x1800148EC (sub_1800148EC.c)
 *     sub_18001D228 @ 0x18001D228 (sub_18001D228.c)
 *     sub_18001D8D4 @ 0x18001D8D4 (sub_18001D8D4.c)
 *     sub_18001D9D0 @ 0x18001D9D0 (sub_18001D9D0.c)
 *     sub_18001E148 @ 0x18001E148 (sub_18001E148.c)
 *     __alloca_probe @ 0x1800D7C10 (__alloca_probe.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall sub_18001DB38(__int64 a1, int a2)
{
  int v4; // r13d
  int v5; // r14d
  _QWORD *v6; // rax
  int v7; // [rsp+40h] [rbp-C0h]
  _QWORD v8[4]; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v9[5]; // [rsp+68h] [rbp-98h] BYREF
  CHAR OutputString[2112]; // [rsp+90h] [rbp-70h] BYREF

  if ( (int)sub_18001E148(&unk_1801C8528) <= 0 )
  {
    v4 = *(_DWORD *)(a1 + 8);
    v5 = *(_DWORD *)(a1 + 4);
    v7 = *(_DWORD *)a1;
    sub_18000D03C();
    GetCurrentThreadId();
    sub_180011CC4(v8, *(_BYTE **)(a1 + 16));
    sub_1800148EC((__int64)v8);
    v6 = sub_18001D8D4(v9);
    sub_1800148EC((__int64)v6);
    sub_18001D228();
    sub_1800129D0((__int64)v9);
    sub_1800129D0((__int64)v8);
    if ( a2 >= v5 )
    {
      sub_180011CC4(v9, OutputString);
      sub_180011CC4(v8, *(_BYTE **)(a1 + 16));
      sub_18001D9D0((__int64)v8, a2, (__int64)v9);
      sub_1800129D0((__int64)v8);
      sub_1800129D0((__int64)v9);
    }
    if ( a2 >= v4 )
      sub_18000CF78();
    OutputDebugStringA(OutputString);
    if ( a2 >= v7 )
    {
      if ( !IsDebuggerPresent() )
        __fastfail(7u);
      __debugbreak();
    }
  }
}
