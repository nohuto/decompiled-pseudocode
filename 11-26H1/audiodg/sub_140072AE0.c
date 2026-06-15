/*
 * XREFs of sub_140072AE0 @ 0x140072AE0
 * Callers:
 *     sub_1400307E0 @ 0x1400307E0 (sub_1400307E0.c)
 *     sub_140030AB0 @ 0x140030AB0 (sub_140030AB0.c)
 *     sub_140031778 @ 0x140031778 (sub_140031778.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140072AE0(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+88h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &unk_1400C6808, 29LL, &v5);
}
