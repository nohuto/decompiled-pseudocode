/*
 * XREFs of sub_140194F8C @ 0x140194F8C
 * Callers:
 *     sub_1400CB67C @ 0x1400CB67C (sub_1400CB67C.c)
 *     sub_1400E2990 @ 0x1400E2990 (sub_1400E2990.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140071930 @ 0x140071930 (sub_140071930.c)
 *     sub_1400C97B8 @ 0x1400C97B8 (sub_1400C97B8.c)
 */

__int64 __fastcall sub_140194F8C(__int64 a1)
{
  __int64 v1; // rdi
  __int64 v3; // rax
  __int64 v4; // rbx
  unsigned int v5; // esi
  int v6; // eax
  __int64 v7; // rdx

  v1 = *(_QWORD *)(a1 + 128);
  v3 = sub_1400143E0(256LL, 118LL, 1179541842LL, *(_QWORD *)(v1 + 8));
  v4 = v3;
  if ( v3 )
  {
    *(_DWORD *)v3 = 7733249;
    *(_DWORD *)(v3 + 8) = 5;
    *(_DWORD *)(v3 + 12) = 65640;
    *(_WORD *)(v3 + 16) = 104;
    *(_QWORD *)(v3 + 22) = *(_QWORD *)(a1 + 560);
    *(_WORD *)(v3 + 30) = *(_WORD *)(*(_QWORD *)(a1 + 592) + 78LL);
    *(_WORD *)(v3 + 32) = *(_WORD *)(a1 + 20);
    *(_DWORD *)(v3 + 34) = 16 * *(_DWORD *)(*(_QWORD *)(a1 + 592) + 1792LL);
    *(_DWORD *)(v3 + 38) = 16 * *(_DWORD *)(*(_QWORD *)(a1 + 592) + 1796LL);
    *(_DWORD *)(v3 + 42) = 16 * *(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 1800LL);
    *(_WORD *)(v3 + 46) = *(unsigned __int8 *)(*(_QWORD *)(a1 + 592) + 1803LL);
    v6 = sub_140071930(v1 + 168);
    v5 = v6;
    if ( v6 < 0 && (byte_1401694FA & 4) != 0 )
      sub_1400C97B8(
        *(_QWORD *)(a1 + 792),
        v7,
        v1 + 1032,
        *(_DWORD *)(v1 + 56),
        v1 + 1032,
        *(const wchar_t **)(v1 + 1016),
        5,
        *(const char **)(a1 + 792),
        v6,
        *(_DWORD *)(v4 + 50),
        (const char *)(v4 + 54));
    ExFreePoolWithTag((PVOID)v4, 0x464E6152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v5;
}
