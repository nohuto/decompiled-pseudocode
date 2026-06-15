/*
 * XREFs of sub_1400066EC @ 0x1400066EC
 * Callers:
 *     sub_140003960 @ 0x140003960 (sub_140003960.c)
 *     sub_140004CF8 @ 0x140004CF8 (sub_140004CF8.c)
 *     sub_140005200 @ 0x140005200 (sub_140005200.c)
 *     sub_140005310 @ 0x140005310 (sub_140005310.c)
 *     sub_1400056B0 @ 0x1400056B0 (sub_1400056B0.c)
 *     sub_140005910 @ 0x140005910 (sub_140005910.c)
 *     sub_140005C38 @ 0x140005C38 (sub_140005C38.c)
 *     sub_140005E9C @ 0x140005E9C (sub_140005E9C.c)
 *     sub_140006060 @ 0x140006060 (sub_140006060.c)
 *     sub_140007B90 @ 0x140007B90 (sub_140007B90.c)
 *     sub_140010650 @ 0x140010650 (sub_140010650.c)
 *     sub_140016660 @ 0x140016660 (sub_140016660.c)
 *     sub_1400191A0 @ 0x1400191A0 (sub_1400191A0.c)
 *     sub_140019480 @ 0x140019480 (sub_140019480.c)
 *     sub_140022360 @ 0x140022360 (sub_140022360.c)
 *     sub_14002DD08 @ 0x14002DD08 (sub_14002DD08.c)
 *     sub_1400301D0 @ 0x1400301D0 (sub_1400301D0.c)
 *     sub_1400368E0 @ 0x1400368E0 (sub_1400368E0.c)
 *     sub_140038780 @ 0x140038780 (sub_140038780.c)
 *     sub_14003D420 @ 0x14003D420 (sub_14003D420.c)
 *     sub_14003DC00 @ 0x14003DC00 (sub_14003DC00.c)
 *     sub_140041440 @ 0x140041440 (sub_140041440.c)
 *     sub_140054D80 @ 0x140054D80 (sub_140054D80.c)
 *     sub_1400552A0 @ 0x1400552A0 (sub_1400552A0.c)
 *     sub_1400554B0 @ 0x1400554B0 (sub_1400554B0.c)
 *     sub_140055560 @ 0x140055560 (sub_140055560.c)
 *     sub_140055610 @ 0x140055610 (sub_140055610.c)
 *     sub_140055840 @ 0x140055840 (sub_140055840.c)
 *     sub_140055A70 @ 0x140055A70 (sub_140055A70.c)
 *     sub_140055B20 @ 0x140055B20 (sub_140055B20.c)
 *     sub_140067874 @ 0x140067874 (sub_140067874.c)
 *     sub_14006B9F0 @ 0x14006B9F0 (sub_14006B9F0.c)
 *     sub_14006CF50 @ 0x14006CF50 (sub_14006CF50.c)
 *     sub_14006D1D0 @ 0x14006D1D0 (sub_14006D1D0.c)
 *     sub_14006D390 @ 0x14006D390 (sub_14006D390.c)
 *     sub_14006D820 @ 0x14006D820 (sub_14006D820.c)
 *     sub_140072820 @ 0x140072820 (sub_140072820.c)
 *     sub_1400AE085 @ 0x1400AE085 (sub_1400AE085.c)
 *     sub_1400AE0E1 @ 0x1400AE0E1 (sub_1400AE0E1.c)
 *     sub_1400AEBEA @ 0x1400AEBEA (sub_1400AEBEA.c)
 *     sub_1400AFDDC @ 0x1400AFDDC (sub_1400AFDDC.c)
 *     sub_1400AFDEE @ 0x1400AFDEE (sub_1400AFDEE.c)
 *     sub_1400B2769 @ 0x1400B2769 (sub_1400B2769.c)
 *     sub_1400B2E4D @ 0x1400B2E4D (sub_1400B2E4D.c)
 * Callees:
 *     sub_140006D1C @ 0x140006D1C (sub_140006D1C.c)
 *     sub_14001FC5C @ 0x14001FC5C (sub_14001FC5C.c)
 *     sub_140026C6C @ 0x140026C6C (sub_140026C6C.c)
 *     __security_check_cookie @ 0x1400492D0 (__security_check_cookie.c)
 *     memset @ 0x14004A6AC (memset.c)
 */

__int64 __fastcall sub_1400066EC(LARGE_INTEGER *a1)
{
  double v2; // xmm6_8
  DWORD CurrentThreadId; // eax
  __int128 v5; // [rsp+78h] [rbp-90h] BYREF
  _BYTE v6[272]; // [rsp+88h] [rbp-80h] BYREF

  sub_14001FC5C(a1[27].QuadPart, a1[28].QuadPart, 0, 0, 0, "-Stop");
  QueryPerformanceCounter(a1 + 1);
  v2 = 0.0;
  if ( a1[2].QuadPart )
    v2 = (double)(a1[1].LowPart - a1->LowPart) / (double)(int)a1[2].QuadPart;
  v5 = 0LL;
  EtwEventActivityIdControl(1LL, &v5);
  memset(v6, 0, 0x104uLL);
  sub_140026C6C(
    v6,
    260LL,
    "{%08x-%04x-%04x-%02x%02x-%02x%02x%02x%02x%02x%02x}",
    (_DWORD)v5,
    WORD2(v5),
    WORD3(v5),
    BYTE8(v5),
    BYTE9(v5),
    BYTE10(v5),
    BYTE11(v5),
    BYTE12(v5),
    BYTE13(v5),
    BYTE14(v5),
    HIBYTE(v5));
  CurrentThreadId = GetCurrentThreadId();
  return sub_140006D1C((int)a1 + 88, CurrentThreadId, (unsigned int)v6, (int)a1 + 24, (__int64)&a1[11], *(__int64 *)&v2);
}
