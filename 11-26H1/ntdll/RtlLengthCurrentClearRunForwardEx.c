/*
 * XREFs of RtlLengthCurrentClearRunForwardEx @ 0x180122CA0
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1800706FC (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlLengthCurrentClearRunForwardEx(_QWORD *a1, unsigned __int64 a2, unsigned __int64 a3)
{
  __int64 v3; // r9
  _DWORD *v5; // r10
  __int64 v6; // rdi
  _DWORD *v7; // rcx
  _DWORD *v8; // r9
  __int64 v9; // rbx
  unsigned __int64 v10; // r8
  unsigned int v11; // edx
  unsigned __int64 v12; // rax
  char v13; // dl
  bool v14; // zf
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  char v17; // dl
  __int64 v18; // rax
  unsigned __int64 v19; // r8

  v3 = a1[1];
  v5 = (_DWORD *)(v3 + 4 * (a2 >> 5));
  v6 = *a1 & 0x1FLL;
  v7 = (_DWORD *)(v3 + 4 * ((unsigned __int64)(*a1 - 1LL) >> 5));
  v8 = v7 - 1;
  if ( !v6 )
    v8 = v7;
  v9 = a2 & 0x1F;
  v10 = 0LL;
  v11 = *v5 & ~dword_18017D250[v9];
  if ( v5 > v8 )
  {
LABEL_12:
    if ( v6 )
    {
      if ( v10 )
        v11 = v5[1];
      v16 = v11 | (unsigned __int64)(unsigned int)~dword_18017D250[v6];
      v17 = -1;
      v14 = !_BitScanForward64((unsigned __int64 *)&v18, v16);
      if ( !v14 )
        v17 = v18;
      v10 += (unsigned int)v17;
    }
  }
  else
  {
    while ( !v11 )
    {
      v10 += 32LL;
      if ( v10 >= a3 && v10 - v9 >= a3 )
        goto LABEL_18;
      if ( v5 == v8 )
        goto LABEL_12;
      v11 = *++v5;
    }
    v12 = v11;
    v13 = -1;
    v14 = !_BitScanForward64((unsigned __int64 *)&v15, v12);
    if ( !v14 )
      v13 = v15;
    v10 += (unsigned int)v13;
  }
LABEL_18:
  v19 = v10 - v9;
  if ( v19 > a3 )
    return a3;
  return v19;
}
