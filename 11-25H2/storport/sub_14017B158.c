/*
 * XREFs of sub_14017B158 @ 0x14017B158
 * Callers:
 *     StorPortInitialize @ 0x14006FFB0 (StorPortInitialize.c)
 * Callees:
 *     sub_140054998 @ 0x140054998 (sub_140054998.c)
 *     sub_14006B3E4 @ 0x14006B3E4 (sub_14006B3E4.c)
 *     sub_14006F570 @ 0x14006F570 (sub_14006F570.c)
 *     sub_14018377C @ 0x14018377C (sub_14018377C.c)
 */

__int64 __fastcall sub_14017B158(__int64 a1, __int64 *a2, __int64 a3, const UNICODE_STRING *a4)
{
  if ( MEMORY[0xFFFFF780000003C6] )
    byte_140168724 = 1;
  if ( _InterlockedIncrement(&dword_140168720) == 1 )
  {
    sub_14006B3E4();
    sub_14018377C();
  }
  a2[14] = (__int64)sub_1401AA480;
  a2[16] = (__int64)sub_1401AA590;
  a2[17] = (__int64)sub_14000FC20;
  a2[18] = (__int64)sub_14000FC20;
  a2[23] = (__int64)sub_14006B460;
  a2[30] = (__int64)sub_14006BBD0;
  a2[28] = (__int64)sub_14002D0D0;
  a2[29] = (__int64)sub_140005A20;
  a2[41] = (__int64)sub_140018EE0;
  a2[36] = (__int64)sub_140008DD0;
  a2[37] = (__int64)sub_1401AED30;
  *(_QWORD *)(a2[6] + 8) = sub_1400465E0;
  a2[12] = 0LL;
  a2[13] = (__int64)sub_140041560;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = a3;
  sub_140054998((PUNICODE_STRING)(a1 + 40), a4, a3, a2[1]);
  sub_14006F570(a3, a1);
  return 0LL;
}
