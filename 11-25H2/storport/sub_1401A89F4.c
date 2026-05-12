/*
 * XREFs of sub_1401A89F4 @ 0x1401A89F4
 * Callers:
 *     sub_140062EFC @ 0x140062EFC (sub_140062EFC.c)
 * Callees:
 *     sub_14008C878 @ 0x14008C878 (sub_14008C878.c)
 *     _guard_dispatch_icall @ 0x14013C5D0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall sub_1401A89F4(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 result; // rax
  __int64 v6; // rdi
  __int64 v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0LL;
  *a3 = 0LL;
  if ( *(_DWORD *)(a1 + 4276) != 17 || (*(_BYTE *)(a1 + 112) & 0x20) != 0 )
    return 3221225659LL;
  if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 0xCu )
    return 3221225507LL;
  v6 = *(_QWORD *)(a2 + 24);
  if ( !v6 )
    return 3221225485LL;
  if ( !*(_QWORD *)(a1 + 6216) )
  {
    result = sub_14008C878(*(_QWORD *)(a1 + 8), &v7);
    if ( (int)result < 0 )
      return result;
    if ( !v7 )
      return 3221225858LL;
    *(_QWORD *)(a1 + 6216) = v7;
  }
  *(_QWORD *)v6 = 0LL;
  *(_DWORD *)(v6 + 8) = 0;
  result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(a1 + 6216) + 40LL))(
             *(_QWORD *)(*(_QWORD *)(a1 + 6216) + 8LL),
             v6);
  if ( (int)result >= 0 )
    *a3 = 12LL;
  return result;
}
