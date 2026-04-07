/*
 * XREFs of ?HrgnFromRects@@YAJPEBUtagRECT@@IPEAPEAUHRGN__@@@Z @ 0x1800113D4
 * Callers:
 *     ?UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ @ 0x180010470 (-UpdateNCAreaGeometry@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094280 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     memcpy_0 @ 0x1800EB118 (memcpy_0.c)
 */

__int64 __fastcall HrgnFromRects(const struct tagRECT *Src, unsigned int a2, HRGN *a3)
{
  unsigned __int64 v3; // rdi
  RGNDATA *v7; // rsi
  unsigned int v8; // ebx
  unsigned __int128 v9; // xmm0
  LONG v10; // eax
  LONG *p_right; // rcx
  LONG v12; // edx
  __int64 v13; // r10
  LONG v14; // r8d
  LONG v15; // r9d
  HRGN Region; // rax
  signed int LastError; // eax
  unsigned int v19; // [rsp+20h] [rbp-38h]
  unsigned __int128 v20; // [rsp+30h] [rbp-28h]

  v3 = 16LL * a2;
  if ( v3 > 0xFFFFFFFF )
  {
    v19 = 191;
    goto LABEL_27;
  }
  if ( (int)v3 + 36 < (unsigned int)v3 )
  {
    v19 = 192;
LABEL_27:
    v8 = -2147024362;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024362, v19, 0LL);
    return v8;
  }
  v7 = (RGNDATA *)DefaultHeap::Alloc((unsigned int)(v3 + 36));
  if ( v7 )
  {
    v9 = (unsigned __int128)*Src;
    v8 = 0;
    if ( a2 > 1 )
    {
      v10 = HIDWORD(*(unsigned __int128 *)Src);
      p_right = &Src[1].right;
      v12 = *(_QWORD *)&Src->right;
      v13 = a2 - 1;
      v14 = HIDWORD(*(_QWORD *)&Src->left);
      v15 = (LONG)*Src;
      do
      {
        if ( *(p_right - 2) < v15 )
          v15 = *(p_right - 2);
        if ( *(p_right - 1) < v14 )
          v14 = *(p_right - 1);
        if ( *p_right > v12 )
          v12 = *p_right;
        if ( p_right[1] > v10 )
          v10 = p_right[1];
        p_right += 4;
        --v13;
      }
      while ( v13 );
      *((_QWORD *)&v20 + 1) = __PAIR64__(v10, v12);
      *(_QWORD *)&v20 = __PAIR64__(v14, v15);
      v9 = v20;
    }
    v7->rdh.dwSize = 32;
    v7->rdh.iType = 1;
    v7->rdh.nCount = a2;
    v7->rdh.nRgnSize = v3;
    v7->rdh.rcBound = (RECT)v9;
    memcpy_0(v7->Buffer, Src, (unsigned int)v3);
    SetLastError(0);
    Region = ExtCreateRegion(0LL, (int)v3 + 36, v7);
    if ( Region )
    {
      *a3 = Region;
    }
    else
    {
      LastError = GetLastError();
      v8 = LastError;
      if ( LastError > 0 )
        v8 = (unsigned __int16)LastError | 0x80070000;
      if ( (v8 & 0x80000000) == 0 )
        v8 = -2003304445;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0xE2u, 0LL);
    }
    DefaultHeap::Free(v7);
  }
  else
  {
    v8 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0xC7u, 0LL);
  }
  return v8;
}
