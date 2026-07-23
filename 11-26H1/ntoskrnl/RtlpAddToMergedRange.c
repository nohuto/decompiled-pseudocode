/*
 * XREFs of RtlpAddToMergedRange @ 0x1408064E0
 * Callers:
 *     RtlpAddIntersectingRanges @ 0x1408062AC (RtlpAddIntersectingRanges.c)
 *     RtlpDeleteFromMergedRange @ 0x140806600 (RtlpDeleteFromMergedRange.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpAddToMergedRange(__int64 a1, unsigned __int64 *a2, char a3)
{
  __int64 *v3; // r11
  unsigned __int64 v4; // r9
  char v5; // di
  unsigned __int64 *v8; // r9
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rcx
  bool v11; // cf
  unsigned __int64 v12; // r8
  unsigned __int64 v13; // rbx
  __int64 *v15; // rcx
  __int64 **v16; // r8
  __int64 v17; // rax
  unsigned __int64 v18; // rax
  char v19; // al

  v3 = 0LL;
  v4 = *(_QWORD *)(a1 + 16);
  v5 = *((_BYTE *)a2 + 33) & 1;
  while ( 1 )
  {
    v8 = (unsigned __int64 *)(v4 - 40);
    if ( (unsigned __int64 *)a1 == v8 + 3 )
      break;
    v9 = *a2;
    v10 = *v8;
    v11 = *a2 < *v8;
    if ( *a2 > *v8 )
    {
      v12 = *a2;
      v13 = *v8;
      if ( v8[1] < v9 )
        goto LABEL_12;
      v11 = v9 < v10;
    }
    if ( !v11 || (v12 = *a2, v13 = *v8, a2[1] >= v10) )
    {
      if ( !v5 || (v12 = *a2, v13 = *v8, (*((_BYTE *)v8 + 33) & 1) == 0) )
      {
        if ( (a3 & 1) == 0 )
          return 3221226114LL;
        *((_BYTE *)v8 + 33) |= 2u;
        *((_BYTE *)a2 + 33) |= 2u;
        v13 = *v8;
        v12 = *a2;
      }
    }
LABEL_12:
    if ( !v3 && v13 > v12 )
      v3 = (__int64 *)v8[6];
    v4 = v8[5];
  }
  v15 = (__int64 *)(a2 + 5);
  if ( v3 )
  {
    v17 = *v3;
    *v15 = *v3;
    a2[6] = (unsigned __int64)v3;
    *(_QWORD *)(v17 + 8) = v15;
    *v3 = (__int64)v15;
  }
  else
  {
    v16 = *(__int64 ***)(a1 + 24);
    if ( *v16 != (__int64 *)(a1 + 16) )
      __fastfail(3u);
    *v15 = a1 + 16;
    a2[6] = (unsigned __int64)v16;
    *v16 = v15;
    *(_QWORD *)(a1 + 24) = v15;
  }
  if ( *a2 < *(_QWORD *)a1 )
    *(_QWORD *)a1 = *a2;
  v18 = a2[1];
  if ( v18 > *(_QWORD *)(a1 + 8) )
    *(_QWORD *)(a1 + 8) = v18;
  v19 = *(_BYTE *)(a1 + 33);
  if ( (v19 & 1) != 0 && !v5 )
    *(_BYTE *)(a1 + 33) = v19 & 0xFE;
  return 0LL;
}
