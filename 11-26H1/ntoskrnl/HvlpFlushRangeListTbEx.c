/*
 * XREFs of HvlpFlushRangeListTbEx @ 0x1402F443C
 * Callers:
 *     HvlFlushRangeListTb @ 0x14032D130 (HvlFlushRangeListTb.c)
 * Callees:
 *     HvlpCountFlushVaList @ 0x1402F4524 (HvlpCountFlushVaList.c)
 *     HvlpFastFlushListTbEx @ 0x1402F4568 (HvlpFastFlushListTbEx.c)
 *     HvlpAllowFastFlushList @ 0x1402F4834 (HvlpAllowFastFlushList.c)
 *     HvlpSlowFlushListTbEx @ 0x1402F4CD8 (HvlpSlowFlushListTbEx.c)
 */

__int64 __fastcall HvlpFlushRangeListTbEx(
        __int64 a1,
        int a2,
        char a3,
        __int64 a4,
        char a5,
        unsigned int a6,
        __int64 a7)
{
  unsigned int v8; // r8d
  __int64 v9; // rax
  int v10; // edi
  int v11; // r9d
  unsigned int v12; // r10d
  unsigned int v13; // r11d
  _QWORD v15[4]; // [rsp+40h] [rbp-28h] BYREF

  memset(v15, 0, sizeof(v15));
  if ( a5 )
  {
    v15[0] = a1;
    v8 = a3 == 0 ? 4 : 0;
    v9 = v8 | 2;
    if ( a1 )
      v9 = v8;
    v15[1] = v9;
  }
  v10 = HvlpCountFlushVaList(a6, a7);
  if ( v10 + ((HvlpFlags >> 8) & 0xF) + 5 <= 0xE && (unsigned __int8)HvlpAllowFastFlushList(v13, v12) )
    return HvlpFastFlushListTbEx((unsigned int)v15, a2, v13, v11, v12, a7, v10);
  else
    return HvlpSlowFlushListTbEx((unsigned int)v15, a2, v13, v11, v12, a7, v10);
}
