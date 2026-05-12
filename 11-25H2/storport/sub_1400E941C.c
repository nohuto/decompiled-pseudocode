/*
 * XREFs of sub_1400E941C @ 0x1400E941C
 * Callers:
 *     sub_1400ED16C @ 0x1400ED16C (sub_1400ED16C.c)
 * Callees:
 *     sub_1400F24C8 @ 0x1400F24C8 (sub_1400F24C8.c)
 */

__int64 __fastcall sub_1400E941C(__int64 a1)
{
  __int64 v1; // r8
  __int64 v2; // rax
  int v3; // edx
  int v4; // eax
  __int64 result; // rax
  signed __int32 v6[8]; // [rsp+0h] [rbp-38h] BYREF

  v1 = *(_QWORD *)(a1 + 584);
  if ( (v1 & 0x20000) != 0 && (v2 = *(_QWORD *)(a1 + 1048)) != 0 && (*(_DWORD *)(v2 + 24) & 0x400) != 0 )
  {
    v3 = 2048;
    v4 = 2144;
  }
  else
  {
    v3 = 0;
    v4 = 96;
  }
  if ( (v1 & 0x80000000000LL) == 0 )
    v4 = v3;
  result = v4 | 0x460000u;
  if ( *(_BYTE *)(a1 + 1728) == 1 )
    return sub_1400F24C8(a1, 20LL, 4LL);
  *(_DWORD *)(*(_QWORD *)(a1 + 920) + 20LL) = result;
  _InterlockedOr(v6, 0);
  return result;
}
