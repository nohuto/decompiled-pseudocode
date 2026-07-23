/*
 * XREFs of RtlIoEncodeMemIoResource @ 0x1801440F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlIoEncodeMemIoResource(
        __int64 a1,
        char a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int16 v7; // dx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rax
  __int16 v11; // dx
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // rax

  if ( ((a2 - 3) & 0xFB) != 0 && (a2 != 1 || a3 > 0xFFFFFFFF || a4 > 0xFFFFFFFF) )
    return 3221225485LL;
  *(_QWORD *)(a1 + 16) = a5;
  *(_QWORD *)(a1 + 24) = a6;
  if ( a2 == 1 )
  {
    *(_BYTE *)(a1 + 1) = 1;
LABEL_8:
    *(_DWORD *)(a1 + 8) = a3;
    *(_DWORD *)(a1 + 12) = a4;
    return 0LL;
  }
  *(_WORD *)(a1 + 4) &= 0xF1FFu;
  v7 = *(_WORD *)(a1 + 4);
  if ( a3 <= 0xFFFFFFFF )
  {
    if ( a4 <= 0xFFFFFFFF )
    {
      *(_BYTE *)(a1 + 1) = 3;
      goto LABEL_8;
    }
LABEL_14:
    LODWORD(v8) = a3 >> 8;
    if ( a3 == (unsigned __int64)(unsigned int)v8 << 8 && a4 <= 0xFFFFFFFF00LL )
    {
      while ( 1 )
      {
        v9 = a4 >> 8;
        if ( a4 == (unsigned __int64)(unsigned int)(a4 >> 8) << 8 )
          break;
        v10 = a4;
        a4 *= 2LL;
        if ( a4 < v10 )
          return 3221225473LL;
      }
      v11 = v7 | 0x200;
LABEL_20:
      *(_BYTE *)(a1 + 1) = 7;
      *(_DWORD *)(a1 + 8) = v8;
      *(_DWORD *)(a1 + 12) = v9;
      *(_WORD *)(a1 + 4) = v11;
      return 0LL;
    }
    return 3221225473LL;
  }
  if ( a3 <= 0xFFFFFFFF00LL )
    goto LABEL_14;
  if ( a3 > 0xFFFFFFFF0000LL )
  {
    if ( a3 <= 0xFFFFFFFF00000000uLL )
    {
      v8 = HIDWORD(a3);
      if ( a3 == HIDWORD(a3) << 32 && a4 <= 0xFFFFFFFF00000000uLL )
      {
        while ( 1 )
        {
          v9 = HIDWORD(a4);
          if ( a4 == (unsigned __int64)HIDWORD(a4) << 32 )
            break;
          v13 = a4;
          a4 *= 2LL;
          if ( a4 < v13 )
            return 3221225473LL;
        }
        v11 = v7 | 0x800;
        goto LABEL_20;
      }
    }
  }
  else
  {
    LODWORD(v8) = a3 >> 16;
    if ( a3 == (unsigned __int64)(unsigned int)v8 << 16 && a4 <= 0xFFFFFFFF0000LL )
    {
      while ( 1 )
      {
        v9 = a4 >> 16;
        if ( a4 == (unsigned __int64)(unsigned int)(a4 >> 16) << 16 )
          break;
        v12 = a4;
        a4 *= 2LL;
        if ( a4 < v12 )
          return 3221225473LL;
      }
      v11 = v7 | 0x400;
      goto LABEL_20;
    }
  }
  return 3221225473LL;
}
