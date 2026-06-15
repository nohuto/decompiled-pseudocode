/*
 * XREFs of sub_140006980 @ 0x140006980
 * Callers:
 *     sub_140003960 @ 0x140003960 (sub_140003960.c)
 *     sub_140004CF8 @ 0x140004CF8 (sub_140004CF8.c)
 *     sub_140005200 @ 0x140005200 (sub_140005200.c)
 *     sub_140005310 @ 0x140005310 (sub_140005310.c)
 *     sub_1400056B0 @ 0x1400056B0 (sub_1400056B0.c)
 *     sub_140005910 @ 0x140005910 (sub_140005910.c)
 *     sub_140005C38 @ 0x140005C38 (sub_140005C38.c)
 *     sub_140007B90 @ 0x140007B90 (sub_140007B90.c)
 *     sub_140010650 @ 0x140010650 (sub_140010650.c)
 *     sub_140016660 @ 0x140016660 (sub_140016660.c)
 *     sub_1400191A0 @ 0x1400191A0 (sub_1400191A0.c)
 *     sub_140019480 @ 0x140019480 (sub_140019480.c)
 *     sub_140022360 @ 0x140022360 (sub_140022360.c)
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
 * Callees:
 *     sub_14001FC5C @ 0x14001FC5C (sub_14001FC5C.c)
 */

LARGE_INTEGER *__fastcall sub_140006980(
        LARGE_INTEGER *lpPerformanceCount,
        LARGE_INTEGER a2,
        const char *a3,
        __int64 a4)
{
  LARGE_INTEGER *v5; // rbx
  LARGE_INTEGER *v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r14
  char v10; // al
  LARGE_INTEGER *v11; // rax

  lpPerformanceCount->QuadPart = 0LL;
  v5 = lpPerformanceCount + 11;
  lpPerformanceCount[1].QuadPart = 0LL;
  lpPerformanceCount[2].QuadPart = 0LL;
  v7 = lpPerformanceCount + 3;
  *(_OWORD *)&v7->LowPart = 0LL;
  *(_OWORD *)&v7[2].LowPart = 0LL;
  *(_OWORD *)&v7[4].LowPart = 0LL;
  *(_OWORD *)&v7[6].LowPart = 0LL;
  *(_OWORD *)&v5->LowPart = 0LL;
  *(_OWORD *)&v5[2].LowPart = 0LL;
  *(_OWORD *)&v5[4].LowPart = 0LL;
  *(_OWORD *)&v5[6].LowPart = 0LL;
  *(_OWORD *)&v5[8].LowPart = 0LL;
  *(_OWORD *)&v5[10].LowPart = 0LL;
  *(_OWORD *)&v5[12].LowPart = 0LL;
  *(_OWORD *)&v5[14].LowPart = 0LL;
  lpPerformanceCount[29] = a2;
  sub_14001FC5C((_DWORD)v7, 64, (_DWORD)lpPerformanceCount + 216, (_DWORD)lpPerformanceCount + 224, 0, "%s", a3);
  sub_14001FC5C(lpPerformanceCount[27].QuadPart, lpPerformanceCount[28].QuadPart, 0, 0, 0, "-Start");
  if ( a4 )
  {
    v8 = 128LL;
    v9 = a4 - (_QWORD)v5;
    do
    {
      if ( v8 == -2147483518 )
        break;
      v10 = *((_BYTE *)&v5->QuadPart + v9);
      if ( !v10 )
        break;
      LOBYTE(v5->LowPart) = v10;
      v5 = (LARGE_INTEGER *)((char *)v5 + 1);
      --v8;
    }
    while ( v8 );
    v11 = (LARGE_INTEGER *)((char *)v5 - 1);
    if ( v8 )
      v11 = v5;
    LOBYTE(v11->LowPart) = 0;
  }
  QueryPerformanceCounter(lpPerformanceCount);
  QueryPerformanceFrequency(lpPerformanceCount + 2);
  return lpPerformanceCount;
}
