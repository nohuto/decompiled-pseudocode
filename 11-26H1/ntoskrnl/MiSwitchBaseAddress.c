/*
 * XREFs of MiSwitchBaseAddress @ 0x140AC9EC0
 * Callers:
 *     MiRelocateImageAgain @ 0x140881870 (MiRelocateImageAgain.c)
 * Callees:
 *     MiGetControlAreaLoadConfig @ 0x14048F4E4 (MiGetControlAreaLoadConfig.c)
 *     MiApplyBytestreamFixup @ 0x1404D8550 (MiApplyBytestreamFixup.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1404D8C9C (DbgUnLoadImageSymbolsUnicode.c)
 *     MiWalkEntireImage @ 0x140ACA024 (MiWalkEntireImage.c)
 */

__int64 __fastcall MiSwitchBaseAddress(_QWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rdi
  __int64 v6; // rbp
  __int64 v7; // r14
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 i; // rax
  __int64 ControlAreaLoadConfig; // rax
  int v12; // r9d
  __int64 v13; // r10
  __int64 v14; // r11
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rcx
  __int64 result; // rax
  __int64 *v19; // rax
  __int64 v20; // rbx
  __int64 *v21; // rax
  _QWORD v22[2]; // [rsp+20h] [rbp-48h] BYREF
  int v23; // [rsp+30h] [rbp-38h]
  int v24; // [rsp+34h] [rbp-34h]
  __int64 v25; // [rsp+38h] [rbp-30h]
  __int64 (__fastcall *v26)(__int64); // [rsp+40h] [rbp-28h]

  v3 = *a1;
  v6 = *(_QWORD *)((a1[12] & 0xFFFFFFFFFFFFFFF8uLL) + 32);
  v7 = a2 - *(_QWORD *)(*a1 + 32LL);
  v8 = *(_QWORD *)(v6 + 40);
  *(_QWORD *)(v6 + 40) = v7;
  v9 = *(_QWORD **)(v3 + 56);
  *(_QWORD *)(v3 + 32) = a2;
  *v9 += *(_QWORD *)(v6 + 40);
  for ( i = *(_QWORD *)(v6 + 16); i; i = *v19 )
    MiApplyBytestreamFixup((__int64)v9, (_QWORD *)(i + 24), v8);
  ControlAreaLoadConfig = MiGetControlAreaLoadConfig((__int64)a1);
  if ( ControlAreaLoadConfig )
  {
    v15 = *(_QWORD *)(ControlAreaLoadConfig + 24);
    if ( v15 )
    {
      v16 = *(_QWORD *)(v15 + 8);
      if ( v16 )
        *(_QWORD *)(v15 + 8) = v13 + v16 - v14;
      *(_QWORD *)(v15 + 16) += v13 - v14;
    }
  }
  v26 = MiWalkImageApplyRelocationToPage;
  v22[0] = a1;
  v23 = 2;
  v25 = 84LL;
  v24 = v12;
  v22[1] = a3;
  MiWalkEntireImage(v22);
  *(_QWORD *)(v6 + 40) = v7 + v8;
  result = *(_QWORD *)(v6 + 16);
  if ( result )
  {
    v20 = -v8;
    do
    {
      MiApplyBytestreamFixup(v17, (_QWORD *)(result + 24), v20);
      result = *v21;
    }
    while ( result );
  }
  if ( _bittest16((const signed __int16 *)(v3 + 12), 0xBu) )
  {
    DbgUnLoadImageSymbolsUnicode(
      (PCUNICODE_STRING)((a1[8] & 0xFFFFFFFFFFFFFFF0uLL) + 88),
      *(_QWORD *)(v3 + 32),
      (__int64)KeGetCurrentThread()->ApcState.Process);
    result = 63487LL;
    *(_WORD *)(v3 + 12) &= ~0x800u;
  }
  return result;
}
