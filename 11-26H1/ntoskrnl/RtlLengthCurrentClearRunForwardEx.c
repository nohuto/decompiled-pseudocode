/*
 * XREFs of RtlLengthCurrentClearRunForwardEx @ 0x140353C70
 * Callers:
 *     RtlCSparseBitmapFindBitSetCapped @ 0x1403527A0 (RtlCSparseBitmapFindBitSetCapped.c)
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
  __int64 v8; // r8
  char v9; // r9
  bool v10; // zf
  __int64 v11; // rcx
  char v13; // r9

  v2 = a1[1];
  v3 = (_DWORD *)(v2 + 4 * (a2 >> 5));
  v4 = *a1 & 0x1FLL;
  v5 = (unsigned __int64)(*a1 - 1LL) >> 5;
  v6 = v2 + 4 * v5 - 4;
  if ( !v4 )
    v6 = v2 + 4 * v5;
  v7 = a2 & 0x1F;
  v8 = 0LL;
  LODWORD(a2) = *v3 & ~*((_DWORD *)qword_1400195D0 + v7);
  if ( (unsigned __int64)v3 > v6 )
  {
LABEL_14:
    if ( v4 )
    {
      if ( v8 )
        LODWORD(a2) = v3[1];
      v13 = -1;
      v10 = !_BitScanForward64(
               &a2,
               (unsigned int)a2 | (unsigned __int64)(unsigned int)~*((_DWORD *)qword_1400195D0 + v4));
      if ( !v10 )
        v13 = a2;
      v8 += (unsigned int)v13;
    }
  }
  else
  {
    while ( !(_DWORD)a2 )
    {
      v8 += 32LL;
      if ( v8 == -1 && v7 == 0 )
        return v8 - v7;
      if ( v3 == (_DWORD *)v6 )
        goto LABEL_14;
      LODWORD(a2) = *++v3;
    }
    v9 = -1;
    v10 = !_BitScanForward64((unsigned __int64 *)&v11, (unsigned int)a2);
    if ( !v10 )
      v9 = v11;
    v8 += (unsigned int)v9;
  }
  return v8 - v7;
}
