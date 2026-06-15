/*
 * XREFs of sub_1400AC554 @ 0x1400AC554
 * Callers:
 *     sub_1400AC6D0 @ 0x1400AC6D0 (sub_1400AC6D0.c)
 *     sub_1400ACC20 @ 0x1400ACC20 (sub_1400ACC20.c)
 * Callees:
 *     sub_140002930 @ 0x140002930 (sub_140002930.c)
 */

__int64 __fastcall sub_1400AC554(void *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  int v5; // [rsp+50h] [rbp+18h] BYREF
  void *v6; // [rsp+58h] [rbp+20h] BYREF

  if ( (unsigned int)dword_1400E7460 > 5 )
  {
    v5 = a2;
    v6 = a1;
    return sub_140002930((__int64)a1, (__int64)&unk_1400D44DA, a3, a4, &v6, (__int64)&v5);
  }
  return result;
}
