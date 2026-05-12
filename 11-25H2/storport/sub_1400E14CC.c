/*
 * XREFs of sub_1400E14CC @ 0x1400E14CC
 * Callers:
 *     sub_1400DD7C4 @ 0x1400DD7C4 (sub_1400DD7C4.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_1400E14CC(__int64 a1)
{
  __int64 v1; // r9
  PVOID v3; // rdi
  unsigned int v4; // r14d
  __int64 v5; // rax
  unsigned __int16 v6; // bp
  int v7; // eax
  int v8; // eax
  __int16 v9; // bx
  PVOID P; // [rsp+50h] [rbp+8h] BYREF

  v1 = *(_QWORD *)(a1 + 128);
  P = 0LL;
  v3 = 0LL;
  v4 = 0;
  v5 = sub_1400143E0(
         64LL,
         (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 338LL) << 7,
         1380147538LL,
         *(_QWORD *)(v1 + 8));
  *(_QWORD *)(a1 + 624) = v5;
  if ( v5 )
  {
    v6 = 0;
    while ( v6 < *(_WORD *)(*(_QWORD *)(a1 + 592) + 338LL) )
    {
      v7 = sub_1400E0B68(a1, 0, 4, v6 + 1, 0, &P);
      v3 = P;
      v4 = v7;
      if ( v7 < 0 )
        goto LABEL_11;
      v8 = *(unsigned __int8 *)P;
      if ( !(_BYTE)v8 )
        break;
      if ( v8 >= *(unsigned __int16 *)(*(_QWORD *)(a1 + 592) + 338LL) - v6 )
        LOWORD(v8) = *(_WORD *)(*(_QWORD *)(a1 + 592) + 338LL) - v6;
      v9 = v8;
      memmove(
        (void *)(*(_QWORD *)(a1 + 624) + ((unsigned __int64)v6 << 7)),
        (char *)P + 128,
        (unsigned __int64)(unsigned __int16)v8 << 7);
      v6 += v9;
      ExFreePoolWithTag(v3, 0x52436152u);
      v3 = 0LL;
      P = 0LL;
    }
    *(_WORD *)(a1 + 618) = v6;
LABEL_11:
    if ( v3 )
      ExFreePoolWithTag(v3, 0x52436152u);
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v4;
}
