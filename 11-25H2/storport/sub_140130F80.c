/*
 * XREFs of sub_140130F80 @ 0x140130F80
 * Callers:
 *     sub_1400E8030 @ 0x1400E8030 (sub_1400E8030.c)
 *     sub_1400F06E8 @ 0x1400F06E8 (sub_1400F06E8.c)
 *     sub_1400F1D38 @ 0x1400F1D38 (sub_1400F1D38.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_14008663C @ 0x14008663C (sub_14008663C.c)
 *     sub_14008F454 @ 0x14008F454 (sub_14008F454.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

void __fastcall sub_140130F80(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  unsigned int v4; // r15d
  size_t v5; // rdi
  char v9; // bl
  int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rsi
  __int16 v14; // ax
  int v15; // eax
  __int128 v16; // [rsp+60h] [rbp-28h]

  LOBYTE(v4) = 0;
  v5 = a4;
  if ( !*(_QWORD *)(a1 + 1416) )
    return;
  if ( *(_QWORD *)(a1 + 592) )
  {
    v9 = -69;
    goto LABEL_28;
  }
  if ( !a3 )
  {
    if ( !a4 )
      goto LABEL_6;
LABEL_10:
    v9 = 6;
    goto LABEL_28;
  }
  if ( a4 - 1 > 0xFFF )
    goto LABEL_10;
LABEL_6:
  v10 = *a2 && ((*a2 - 1LL) & *a2) == 0;
  v11 = a2[1];
  v12 = v11 && ((v11 - 1) & v11) == 0;
  if ( v10 == v12 )
  {
    v9 = 13;
    goto LABEL_28;
  }
  v4 = a4 + 52;
  if ( !a4 )
    v4 = 56;
  v13 = sub_1400143E0(64LL, v4, 1313169746LL, *(_QWORD *)(a1 + 8));
  if ( !v13 )
  {
    v9 = -102;
    goto LABEL_28;
  }
  v14 = v5 + 36;
  v16 = *(_OWORD *)a2;
  if ( !(_DWORD)v5 )
    v14 = 40;
  *(_DWORD *)(v13 + 20) = 0;
  *(_WORD *)(v13 + 18) = v14;
  *(_OWORD *)(v13 + 24) = v16;
  *(_WORD *)(v13 + 16) = 1;
  *(_DWORD *)(v13 + 48) = v5;
  if ( (_DWORD)v5 )
    memmove((void *)(v13 + 52), a3, v5);
  v15 = sub_14008F454(*(_QWORD *)(a1 + 1416), (struct _LIST_ENTRY *)v13);
  v9 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag((PVOID)v13, 0x4E456152u);
LABEL_28:
    if ( (byte_1401694F8 & 0x40) != 0 )
      sub_14008663C(
        a1 + 1032,
        (*(_BYTE *)(a1 + 144) & 1) != 0 ? 20 : 17,
        (__int64)a3,
        *(_DWORD *)(a1 + 56),
        a1 + 1032,
        *(const wchar_t **)(a1 + 1016),
        (*(_BYTE *)(a1 + 144) & 1) != 0 ? 20 : 17,
        *a2,
        a2[1],
        v5,
        v4,
        v9);
  }
}
