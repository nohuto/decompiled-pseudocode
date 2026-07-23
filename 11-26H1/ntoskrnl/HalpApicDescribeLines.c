/*
 * XREFs of HalpApicDescribeLines @ 0x1405A3A38
 * Callers:
 *     HalpApicInitializeIoUnit @ 0x1405A3EA0 (HalpApicInitializeIoUnit.c)
 * Callees:
 *     HalpInterruptRegisterLine @ 0x14059D844 (HalpInterruptRegisterLine.c)
 */

__int64 __fastcall HalpApicDescribeLines(__int64 a1)
{
  int v2; // eax
  __int64 result; // rax
  int v4; // [rsp+20h] [rbp-30h] BYREF
  int v5; // [rsp+24h] [rbp-2Ch]
  int v6; // [rsp+28h] [rbp-28h]
  __int64 v7; // [rsp+2Ch] [rbp-24h]
  int v8; // [rsp+34h] [rbp-1Ch]
  int v9; // [rsp+38h] [rbp-18h]
  __int128 v10; // [rsp+3Ch] [rbp-14h]
  int v11; // [rsp+4Ch] [rbp-4h]

  v7 = 6LL;
  v8 = -1;
  v9 = -1;
  v2 = *(_DWORD *)(a1 + 8);
  v10 = 0LL;
  v11 = 0;
  v5 = 1;
  v6 = 7;
  v4 = v2;
  result = HalpInterruptRegisterLine((__int64)&v4);
  if ( (int)result >= 0 )
  {
    v6 = *(unsigned __int8 *)(a1 + 25);
    v9 = *(_DWORD *)(a1 + 28);
    v4 = *(_DWORD *)(a1 + 8);
    LODWORD(v7) = 2;
    v5 = 0;
    return HalpInterruptRegisterLine((__int64)&v4);
  }
  return result;
}
