/*
 * XREFs of sub_1400E4D80 @ 0x1400E4D80
 * Callers:
 *     sub_1400DEFC4 @ 0x1400DEFC4 (sub_1400DEFC4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140071930 @ 0x140071930 (sub_140071930.c)
 *     sub_1400C97B8 @ 0x1400C97B8 (sub_1400C97B8.c)
 */

__int64 __fastcall sub_1400E4D80(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  int v5; // esi
  __int64 v6; // rdx
  __int64 v7; // r8

  v1 = *(_QWORD *)(a1 + 128);
  v3 = sub_1400143E0(256LL, 102LL, 1179541842LL, *(_QWORD *)(v1 + 8));
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 6684673;
    *(_DWORD *)(v3 + 8) = 4;
    *(_DWORD *)(v3 + 12) = 65624;
    *(_WORD *)(v3 + 16) = 88;
    *(_QWORD *)(v3 + 22) = *(_QWORD *)(a1 + 560);
    v5 = sub_140071930(v1 + 168);
    if ( v5 < 0 )
    {
      if ( (byte_1401694FA & 4) != 0 )
        sub_1400C97B8(
          v1 + 1032,
          v6,
          v7,
          *(_DWORD *)(v1 + 56),
          v1 + 1032,
          *(const wchar_t **)(v1 + 1016),
          4,
          *(const char **)(a1 + 792),
          v5,
          *(_DWORD *)(v4 + 30),
          (const char *)(v4 + 34));
    }
    else
    {
      *(_QWORD *)(a1 + 560) = 0LL;
    }
    ExFreePoolWithTag((PVOID)v4, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return (unsigned int)v5;
}
