/*
 * XREFs of HalpApicDescribeLocalLines @ 0x1405A3AC8
 * Callers:
 *     HalpApicInitializeLocalUnit @ 0x1405A40B0 (HalpApicInitializeLocalUnit.c)
 * Callees:
 *     HalpInterruptRegisterLine @ 0x14059D844 (HalpInterruptRegisterLine.c)
 */

__int64 __fastcall HalpApicDescribeLocalLines(_DWORD *a1)
{
  int v1; // eax
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+24h] [rbp-2Ch]
  int v6; // [rsp+28h] [rbp-28h]
  int v7; // [rsp+2Ch] [rbp-24h]
  __int64 v8; // [rsp+30h] [rbp-20h]
  int v9; // [rsp+38h] [rbp-18h]
  __int128 v10; // [rsp+3Ch] [rbp-14h]
  int v11; // [rsp+4Ch] [rbp-4h]

  v1 = a1[2];
  v8 = 0LL;
  v11 = 0;
  v6 = 0;
  v10 = 0LL;
  v7 = 3;
  v5 = -6;
  v9 = -1;
  v4 = v1;
  result = HalpInterruptRegisterLine((__int64)&v4);
  if ( (int)result >= 0 )
  {
    if ( !a1[8]
      || (v4 = a1[2],
          v7 = 3,
          v5 = -7,
          v6 = -6,
          v9 = -1,
          result = HalpInterruptRegisterLine((__int64)&v4),
          (int)result >= 0) )
    {
      if ( !a1[9]
        || (v4 = a1[2],
            v7 = 3,
            v5 = -8,
            v6 = -7,
            v9 = -1,
            result = HalpInterruptRegisterLine((__int64)&v4),
            (int)result >= 0) )
      {
        v4 = a1[2];
        v7 = 5;
        v5 = -10;
        v6 = -9;
        v9 = -1;
        result = HalpInterruptRegisterLine((__int64)&v4);
        if ( (int)result >= 0 )
          return 0LL;
      }
    }
  }
  return result;
}
