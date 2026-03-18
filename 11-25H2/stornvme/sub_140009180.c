/*
 * XREFs of sub_140009180 @ 0x140009180
 * Callers:
 *     sub_140008040 @ 0x140008040 (sub_140008040.c)
 *     sub_140008590 @ 0x140008590 (sub_140008590.c)
 *     sub_140008F00 @ 0x140008F00 (sub_140008F00.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_140009180(__int64 a1, unsigned __int16 a2)
{
  unsigned int v3; // ecx
  __int64 v5; // rdi
  __int64 v6; // rdx
  __int16 v7; // cx
  bool v8; // si
  __int64 v9; // r9
  unsigned int v10; // r8d
  unsigned __int16 v11; // r14
  __int16 i; // r15
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int16 v15; // dx
  _QWORD *v16; // r12
  __int64 *v17; // rax
  __int64 v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // r13
  __int64 v22; // [rsp+60h] [rbp+8h] BYREF
  unsigned __int16 v23; // [rsp+68h] [rbp+10h]

  v3 = *(unsigned __int16 *)(a1 + 332);
  if ( a2 == 0xFFFF )
  {
    v5 = a1 + 544;
    v6 = *(_QWORD *)(a1 + 544) + 16LL * *(unsigned __int16 *)(a1 + 714);
    if ( (*(_WORD *)(v6 + 14) & 1) == *(_WORD *)(a1 + 716) )
    {
      v9 = *(_QWORD *)(a1 + 944);
      v8 = 0;
      v10 = 0;
      if ( v9 )
      {
        while ( 1 )
        {
          v8 = 0;
          if ( v10 >= v3 )
            break;
          v5 = v9 + 392LL * v10;
          v6 = *(_QWORD *)v5 + 16LL * *(unsigned __int16 *)(v5 + 170);
          if ( (*(_WORD *)(v6 + 14) & 1) != *(_WORD *)(v5 + 172) )
            goto LABEL_17;
          ++v10;
        }
      }
      return v8;
    }
LABEL_17:
    v8 = 1;
    goto LABEL_13;
  }
  if ( a2 > (unsigned __int16)v3 )
    return 0;
  if ( a2 )
    v5 = 392LL * a2 + *(_QWORD *)(a1 + 944) - 392LL;
  else
    v5 = a1 + 544;
  v6 = *(_QWORD *)v5 + 16LL * *(unsigned __int16 *)(v5 + 170);
  v7 = HIWORD(*(_DWORD *)(v6 + 12)) & 1;
  v8 = v7 != *(_WORD *)(v5 + 172);
  if ( v7 != *(_WORD *)(v5 + 172) )
  {
LABEL_13:
    if ( (*(_DWORD *)(a1 + 108) & 2) != 0 )
    {
      v11 = *(_WORD *)(v5 + 170);
      for ( i = *(_WORD *)(v5 + 172); (*(_WORD *)(v6 + 14) & 1) != i; v6 = *(_QWORD *)v5 + 16LL * v11 )
      {
        v13 = *(unsigned __int16 *)(v6 + 10);
        v14 = *(unsigned __int16 *)(v6 + 12);
        if ( *(_WORD *)(v5 + 168) && (*(_DWORD *)(a1 + 24) & 1) == 0 )
          break;
        if ( (_WORD)v13 )
        {
          v18 = *(_QWORD *)(a1 + 936);
          v15 = *(_WORD *)(a1 + 326);
          v19 = 208 * v13;
          v16 = (_QWORD *)(v19 + v18 - 168);
          v17 = (__int64 *)(v19 + v18 - 176);
        }
        else
        {
          v15 = *(_WORD *)(a1 + 324);
          v16 = (_QWORD *)(a1 + 376);
          v17 = (__int64 *)(a1 + 368);
        }
        v20 = *v17;
        v21 = v14;
        v23 = v15;
        if ( *(_QWORD *)(32 * v14 + v20 + 8) && *v16 )
        {
          v22 = 0LL;
          StorPortExtendedFunction(47LL, a1, 0LL, &v22);
          v15 = v23;
          *(_QWORD *)(*v16 + 16 * v21 + 8) = v22;
        }
        if ( v11 >= v15 - 1 )
        {
          v11 = 0;
          i = i != 1;
        }
        else
        {
          ++v11;
        }
      }
    }
  }
  return v8;
}
