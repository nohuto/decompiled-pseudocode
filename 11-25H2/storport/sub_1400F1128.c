/*
 * XREFs of sub_1400F1128 @ 0x1400F1128
 * Callers:
 *     sub_140130818 @ 0x140130818 (sub_140130818.c)
 * Callees:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 *     sub_1400ED47C @ 0x1400ED47C (sub_1400ED47C.c)
 *     sub_1400ED768 @ 0x1400ED768 (sub_1400ED768.c)
 *     sub_1400EE990 @ 0x1400EE990 (sub_1400EE990.c)
 *     sub_1400F0F5C @ 0x1400F0F5C (sub_1400F0F5C.c)
 *     sub_1401224B4 @ 0x1401224B4 (sub_1401224B4.c)
 */

__int64 __fastcall sub_1400F1128(_QWORD *SystemArgument2, __int64 a2, int a3)
{
  int v4; // ecx
  __int64 v5; // rdx
  __int64 v6; // rdi
  char v7; // di
  __int64 v8; // rdx

  v4 = 0;
  v5 = SystemArgument2[159];
  v6 = SystemArgument2[121] & 0x800000LL;
  if ( _InterlockedCompareExchange((volatile signed __int32 *)(v5 + 4), 1, 0) != 1 )
  {
    if ( v6 )
      sub_1400EE990((__int64)SystemArgument2, v5, a3);
    else
      sub_1400F0F5C((__int64)SystemArgument2);
    sub_1401224B4(SystemArgument2);
    v7 = v6 != 0;
    v4 = sub_1400ED16C(SystemArgument2, v7);
    if ( v4 >= 0 )
    {
      LOBYTE(v8) = v7;
      v4 = sub_1400ED47C(SystemArgument2, v8, 1);
      if ( v4 >= 0 )
        v4 = sub_1400ED768(SystemArgument2, 1);
    }
    *(_DWORD *)(SystemArgument2[159] + 4LL) = 0;
  }
  return (unsigned int)v4;
}
