/*
 * XREFs of BgpGxConvertRectangleEx @ 0x14048B3C0
 * Callers:
 *     BgpTxtDisplayCharacter @ 0x1404A6714 (BgpTxtDisplayCharacter.c)
 *     BgpGxDrawRectangle @ 0x1404B947C (BgpGxDrawRectangle.c)
 *     GxpWriteFrameBufferPixels @ 0x1404B9540 (GxpWriteFrameBufferPixels.c)
 *     BgpGxConvertRectangle @ 0x14071AF38 (BgpGxConvertRectangle.c)
 *     AnFwDisplayFade @ 0x140C58BA0 (AnFwDisplayFade.c)
 * Callees:
 *     GxpMatchPaletteColor @ 0x14071B074 (GxpMatchPaletteColor.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     BgpGxRectangleCreate @ 0x140C59640 (BgpGxRectangleCreate.c)
 */

__int64 __fastcall BgpGxConvertRectangleEx(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r12
  unsigned int v5; // ebp
  char v7; // r15
  __int64 result; // rax
  __int64 v9; // rdi
  unsigned int v10; // eax
  _BYTE *v11; // rbx
  _BYTE *v12; // r14
  __int64 v13; // rdx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int i; // r12d
  unsigned int v17; // ebp
  __int64 v18; // r13
  _BYTE *v19; // rax
  __int64 v20; // [rsp+20h] [rbp-58h] BYREF
  _DWORD v21[20]; // [rsp+28h] [rbp-50h] BYREF
  char v23; // [rsp+98h] [rbp+20h] BYREF

  v4 = a3;
  v23 = 0;
  v5 = a2;
  v21[2] = 0;
  if ( (a4 & 1) == 0 )
  {
    v21[1] = *(_DWORD *)a1;
    v7 = 0;
    v21[0] = *(_DWORD *)(a1 + 4);
    v20 = 0LL;
    result = BgpGxRectangleCreate(v21, a2, &v20);
    if ( (int)result < 0 )
      return result;
    v9 = v20;
LABEL_4:
    v10 = *(_DWORD *)(a1 + 8);
    v11 = *(_BYTE **)(v9 + 24);
    v12 = *(_BYTE **)(a1 + 24);
    v13 = v10 >> 3;
    LODWORD(v20) = v10 >> 3;
    if ( v10 == v5 )
    {
      if ( v7 )
        return 0LL;
      memmove(v11, v12, *(unsigned int *)(a1 + 12));
    }
    else
    {
      if ( v5 == 4 )
      {
        for ( i = 0; i < *(_DWORD *)v9; v11 = v19 )
        {
          v17 = 0;
          if ( *(_DWORD *)(v9 + 4) )
          {
            v18 = (unsigned int)v13;
            do
            {
              GxpMatchPaletteColor(*(unsigned int *)v12, &v23);
              if ( (v17 & 1) != 0 )
                *v11++ |= v23;
              else
                *v11 = 16 * v23;
              v12 += v18;
              ++v17;
            }
            while ( v17 < *(_DWORD *)(v9 + 4) );
            LODWORD(v13) = v20;
          }
          ++i;
          v19 = v11 + 1;
          if ( (v17 & 1) == 0 )
            v19 = v11;
        }
        v4 = a3;
      }
      else
      {
        v14 = *(_DWORD *)v9 * *(_DWORD *)(v9 + 4);
        if ( v14 )
        {
          v15 = v14;
          do
          {
            v11[2] = v12[2];
            v11[1] = v12[1];
            *v11 = *v12;
            if ( v5 == 32 )
              v11[3] = 0;
            v12 += v13;
            v11 += v5 >> 3;
            --v15;
          }
          while ( v15 );
        }
      }
      if ( v7 )
        *(_DWORD *)(a1 + 16) |= 0x10u;
    }
    *v4 = v9;
    return 0LL;
  }
  v7 = 1;
  if ( (unsigned int)a2 <= *(_DWORD *)(a1 + 8) )
  {
    v9 = *a3;
    *(_DWORD *)v9 = *(_DWORD *)a1;
    *(_DWORD *)(v9 + 4) = *(_DWORD *)(a1 + 4);
    *(_DWORD *)(v9 + 8) = a2;
    *(_DWORD *)(v9 + 16) = 0;
    *(_DWORD *)(v9 + 12) = *(_DWORD *)(a1 + 12);
    *(_QWORD *)(v9 + 24) = *(_QWORD *)(a1 + 24);
    goto LABEL_4;
  }
  return 3221225485LL;
}
