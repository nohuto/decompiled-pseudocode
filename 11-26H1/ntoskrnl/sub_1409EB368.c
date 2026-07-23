/*
 * XREFs of sub_1409EB368 @ 0x1409EB368
 * Callers:
 *     sub_140886A3C @ 0x140886A3C (sub_140886A3C.c)
 *     sub_1409E9DA0 @ 0x1409E9DA0 (sub_1409E9DA0.c)
 *     sub_1409EB030 @ 0x1409EB030 (sub_1409EB030.c)
 *     sub_1409EC6FC @ 0x1409EC6FC (sub_1409EC6FC.c)
 * Callees:
 *     sub_140886DDC @ 0x140886DDC (sub_140886DDC.c)
 *     sub_1409EB4C0 @ 0x1409EB4C0 (sub_1409EB4C0.c)
 */

__int64 __fastcall sub_1409EB368(unsigned int *a1, __int64 a2, __int64 a3, int a4, int a5, unsigned int a6)
{
  unsigned int v8; // r9d

  v8 = a6;
  if ( a6 == -1 )
  {
    sub_1409EB4C0((_DWORD)a1, a4, a5, 0, (__int64)&a6);
    v8 = a6;
  }
  return sub_140886DDC(a1, a2, a3, v8);
}
