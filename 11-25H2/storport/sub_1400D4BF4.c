/*
 * XREFs of sub_1400D4BF4 @ 0x1400D4BF4
 * Callers:
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140071930 @ 0x140071930 (sub_140071930.c)
 *     sub_1400C97B8 @ 0x1400C97B8 (sub_1400C97B8.c)
 */

__int64 __fastcall sub_1400D4BF4(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  int v6; // esi
  __int64 v7; // rdx

  v4 = sub_1400143E0(256LL, 102LL, 1179541842LL, *(_QWORD *)(a1 + 8));
  v5 = v4;
  if ( v4 )
  {
    *(_DWORD *)v4 = 6684673;
    *(_DWORD *)(v4 + 8) = 2;
    *(_DWORD *)(v4 + 12) = 65624;
    *(_WORD *)(v4 + 16) = 88;
    *(_QWORD *)(v4 + 22) = *(_QWORD *)(a2 + 48);
    v6 = sub_140071930(a1 + 168);
    if ( v6 < 0 )
    {
      if ( (byte_1401694FA & 4) != 0 )
        sub_1400C97B8(
          a2 + 60,
          v7,
          a1 + 1032,
          *(_DWORD *)(a1 + 56),
          a1 + 1032,
          *(const wchar_t **)(a1 + 1016),
          2,
          (const char *)(a2 + 60),
          v6,
          *(_DWORD *)(v5 + 30),
          (const char *)(v5 + 34));
    }
    else
    {
      *(_QWORD *)(a2 + 48) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v5, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v6;
}
