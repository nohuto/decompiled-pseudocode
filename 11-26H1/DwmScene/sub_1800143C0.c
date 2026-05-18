/*
 * XREFs of sub_1800143C0 @ 0x1800143C0
 * Callers:
 *     sub_180014680 @ 0x180014680 (sub_180014680.c)
 *     sub_18001F61C @ 0x18001F61C (sub_18001F61C.c)
 *     sub_18002110C @ 0x18002110C (sub_18002110C.c)
 *     sub_180021AE8 @ 0x180021AE8 (sub_180021AE8.c)
 *     sub_180028D5C @ 0x180028D5C (sub_180028D5C.c)
 *     sub_18003A5B8 @ 0x18003A5B8 (sub_18003A5B8.c)
 *     sub_180052DB0 @ 0x180052DB0 (sub_180052DB0.c)
 *     sub_180056AE0 @ 0x180056AE0 (sub_180056AE0.c)
 *     sub_18005C940 @ 0x18005C940 (sub_18005C940.c)
 *     sub_18005C9D8 @ 0x18005C9D8 (sub_18005C9D8.c)
 *     sub_18005DD40 @ 0x18005DD40 (sub_18005DD40.c)
 *     sub_18006C170 @ 0x18006C170 (sub_18006C170.c)
 *     sub_18007B538 @ 0x18007B538 (sub_18007B538.c)
 *     sub_180086020 @ 0x180086020 (sub_180086020.c)
 *     sub_1800889A0 @ 0x1800889A0 (sub_1800889A0.c)
 *     sub_180088E28 @ 0x180088E28 (sub_180088E28.c)
 *     sub_180089204 @ 0x180089204 (sub_180089204.c)
 *     sub_180092610 @ 0x180092610 (sub_180092610.c)
 *     sub_180093A14 @ 0x180093A14 (sub_180093A14.c)
 *     sub_1800C94A0 @ 0x1800C94A0 (sub_1800C94A0.c)
 *     sub_1800C9978 @ 0x1800C9978 (sub_1800C9978.c)
 *     sub_1800C9B50 @ 0x1800C9B50 (sub_1800C9B50.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_1800143C0(__int64 a1)
{
  __int64 result; // rax

  result = a1;
  *(_OWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_QWORD *)(a1 + 24) = 15LL;
  *(_BYTE *)a1 = 0;
  return result;
}
