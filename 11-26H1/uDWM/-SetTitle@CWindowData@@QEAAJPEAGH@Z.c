/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180031788
 * Callers:
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180031630 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180087CB0 (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x180085E74 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, char *a2, int a3)
{
  CWindowData *v3; // r9
  CWindowData *v4; // rsi
  int v5; // ebx
  __int64 v8; // rcx
  __int64 v9; // rax
  char *v10; // rbp
  __int16 v11; // dx
  CWindowData *v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  void *v16; // rcx
  CWindowData *v17; // rax
  CWindowData *v18; // rax

  v3 = (CWindowData *)*((_QWORD *)this + 2);
  v4 = (CWindowData *)((char *)this + 868);
  v5 = a3 + 1;
  if ( v3 == (CWindowData *)((char *)this + 868) )
  {
    if ( v5 > 26 )
    {
      v18 = (CWindowData *)DefaultHeap::Alloc(2LL * v5);
      *((_QWORD *)this + 2) = v18;
      v3 = v18;
      if ( !v18 )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x62Eu, 0LL);
        return v14;
      }
    }
  }
  else
  {
    v16 = (void *)*((_QWORD *)this + 2);
    if ( v5 <= 26 )
    {
      DefaultHeap::Free(v16);
      v3 = v4;
      *((_QWORD *)this + 2) = v4;
    }
    else
    {
      v17 = (CWindowData *)DefaultHeap::Realloc(v16, 2LL * v5);
      *((_QWORD *)this + 2) = v17;
      v3 = v17;
      if ( !v17 )
      {
        v14 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x63Du, 0LL);
        return v14;
      }
    }
  }
  v8 = v5;
  if ( v5 && (unsigned __int64)v5 <= 0x7FFFFFFF )
  {
    v9 = 2147483646LL;
    v10 = (char *)(a2 - (char *)v3);
    do
    {
      if ( !v9 )
        break;
      v11 = *(_WORD *)&v10[(_QWORD)v3];
      if ( !v11 )
        break;
      *(_WORD *)v3 = v11;
      --v9;
      v3 = (CWindowData *)((char *)v3 + 2);
      --v8;
    }
    while ( v8 );
    v12 = (CWindowData *)((char *)v3 - 2);
    if ( v8 )
      v12 = v3;
    *(_WORD *)v12 = 0;
    v13 = v8 == 0 ? 0x8007007A : 0;
  }
  else
  {
    v14 = -2147024809;
    v13 = -2147024809;
    if ( v8 )
    {
      *(_WORD *)v3 = 0;
      goto LABEL_22;
    }
  }
  v14 = v13;
  if ( v13 < 0 )
LABEL_22:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x641u, 0LL);
  return v14;
}
