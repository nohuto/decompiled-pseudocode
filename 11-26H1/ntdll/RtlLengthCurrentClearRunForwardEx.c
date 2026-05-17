/*
 * XREFs of RtlLengthCurrentClearRunForwardEx @ 0x180123970
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x18008CDA0 (RtlCSparseBitmapFindBitSetCapped.c)
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
  unsigned __int64 v10; // rdx
  unsigned int v11; // r8d
  unsigned __int64 v12; // rcx
  char v13; // r8
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rax
  char v18; // r8
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx

  v3 = a1[1];
  v5 = (_DWORD *)(v3 + 4 * (a2 >> 5));
  v6 = *a1 & 0x1FLL;
  v7 = (_DWORD *)(v3 + 4 * ((unsigned __int64)(*a1 - 1LL) >> 5));
  v8 = v7 - 1;
  if ( !v6 )
    v8 = v7;
  v9 = a2 & 0x1F;
  v10 = 0LL;
  v11 = *v5 & ~dword_18017E310[v9];
  if ( v5 > v8 )
  {
LABEL_9:
    if ( !v6 )
      goto LABEL_19;
    if ( v10 )
      v11 = v5[1];
    v12 = v11 | (unsigned __int64)(unsigned int)~dword_18017E310[v6];
    v13 = -1;
    v14 = !_BitScanForward64((unsigned __int64 *)&v15, v12);
    if ( !v14 )
      v13 = v15;
    v16 = (unsigned int)v13;
  }
  else
  {
    while ( !v11 )
    {
      v10 += 32LL;
      if ( v10 >= a3 && v10 - v9 >= a3 )
        goto LABEL_19;
      if ( v5 == v8 )
        goto LABEL_9;
      v11 = *++v5;
    }
    v17 = v11;
    v18 = -1;
    v14 = !_BitScanForward64((unsigned __int64 *)&v19, v17);
    if ( !v14 )
      v18 = v19;
    v16 = (unsigned int)v18;
  }
  v10 += v16;
LABEL_19:
  v20 = v10 - v9;
  if ( v20 > a3 )
    return a3;
  return v20;
}
