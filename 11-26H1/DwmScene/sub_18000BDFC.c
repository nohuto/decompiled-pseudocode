/*
 * XREFs of sub_18000BDFC @ 0x18000BDFC
 * Callers:
 *     DllEntryPoint @ 0x18000BF30 (DllEntryPoint.c)
 * Callees:
 *     sub_18000BC00 @ 0x18000BC00 (sub_18000BC00.c)
 *     sub_18000C158 @ 0x18000C158 (sub_18000C158.c)
 *     sub_18001C4E0 @ 0x18001C4E0 (sub_18001C4E0.c)
 *     j__guard_dispatch_icall @ 0x1800ED010 (j__guard_dispatch_icall.c)
 */

__int64 __fastcall sub_18000BDFC(__int64 a1, unsigned int a2, __int64 a3)
{
  unsigned int v7; // ebx
  unsigned int v8; // eax

  if ( !a2 && dword_1801C7D70 <= 0 )
    return 0LL;
  if ( a2 - 1 > 1 || (v7 = sub_18000BC00(a1, a2, a3)) != 0 )
  {
    v8 = sub_18001C4E0(a1, a2, a3);
    v7 = v8;
    if ( a2 == 1 && !v8 )
    {
      sub_18001C4E0(a1, 0LL, a3);
      sub_18000BC00(a1, 0, a3);
    }
    if ( !a2 || a2 == 3 )
      return (unsigned int)sub_18000BC00(a1, a2, a3) != 0;
  }
  return v7;
}
