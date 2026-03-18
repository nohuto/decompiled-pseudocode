/*
 * XREFs of RtlLengthCurrentClearRunForwardEx @ 0x140351BF0
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x140350720 (RtlCSparseBitmapFindBitSetCapped.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlLengthCurrentClearRunForwardEx(_QWORD *a1, unsigned __int64 a2)
{
  __int64 v2; // r8
  _DWORD *v3; // r9
  __int64 v4; // r11
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rbx
  __int64 v7; // r10
  __int64 v8; // rdx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rax
  char v11; // r8
  bool v12; // zf
  __int64 v13; // rcx
  __int64 v14; // rcx
  unsigned __int64 v16; // rcx
  char v17; // r8
  __int64 v18; // rax

  v2 = a1[1];
  v3 = (_DWORD *)(v2 + 4 * (a2 >> 5));
  v4 = *a1 & 0x1FLL;
  v5 = (unsigned __int64)(*a1 - 1LL) >> 5;
  v6 = v2 + 4 * v5 - 4;
  if ( !v4 )
    v6 = v2 + 4 * v5;
  v7 = a2 & 0x1F;
  v8 = 0LL;
  v9 = *v3 & ~*((_DWORD *)qword_140019C60 + v7);
  if ( (unsigned __int64)v3 > v6 )
  {
LABEL_15:
    if ( !v4 )
      return v8 - v7;
    if ( v8 )
      v9 = v3[1];
    v16 = v9 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_140019C60 + v4);
    v17 = -1;
    v12 = !_BitScanForward64((unsigned __int64 *)&v18, v16);
    if ( !v12 )
      v17 = v18;
    v14 = (unsigned int)v17;
  }
  else
  {
    while ( !v9 )
    {
      v8 += 32LL;
      if ( v8 == -1 && v7 == 0 )
        return v8 - v7;
      if ( v3 == (_DWORD *)v6 )
        goto LABEL_15;
      v9 = *++v3;
    }
    v10 = v9;
    v11 = -1;
    v12 = !_BitScanForward64((unsigned __int64 *)&v13, v10);
    if ( !v12 )
      v11 = v13;
    v14 = (unsigned int)v11;
  }
  v8 += v14;
  return v8 - v7;
}
