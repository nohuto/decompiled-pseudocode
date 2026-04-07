/*
 * XREFs of ?SetTitle@CWindowData@@QEAAJPEAGH@Z @ 0x180057B00
 * Callers:
 *     ?OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800569BC (-OnTitleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800579B0 (-TextChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x180057C00 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094280 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?Realloc@DefaultHeap@@SAPEAXPEAX_K@Z @ 0x1800E9790 (-Realloc@DefaultHeap@@SAPEAXPEAX_K@Z.c)
 */

__int64 __fastcall CWindowData::SetTitle(CWindowData *this, unsigned __int16 *a2, int a3)
{
  CWindowData *v3; // rax
  CWindowData *v4; // rsi
  int v5; // ebx
  int v8; // eax
  unsigned int v9; // ebx
  void *v11; // rcx

  v3 = (CWindowData *)*((_QWORD *)this + 2);
  v4 = (CWindowData *)((char *)this + 804);
  v5 = a3 + 1;
  if ( v3 == (CWindowData *)((char *)this + 804) )
  {
    if ( v5 > 26 )
    {
      v3 = (CWindowData *)DefaultHeap::Alloc(2LL * v5);
      *((_QWORD *)this + 2) = v3;
      if ( !v3 )
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x632u, 0LL);
        return v9;
      }
    }
  }
  else
  {
    v11 = (void *)*((_QWORD *)this + 2);
    if ( v5 > 26 )
    {
      v3 = (CWindowData *)DefaultHeap::Realloc(v11, 2LL * v5);
      *((_QWORD *)this + 2) = v3;
      if ( !v3 )
      {
        v9 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x641u, 0LL);
        return v9;
      }
    }
    else
    {
      DefaultHeap::Free(v11);
      v3 = v4;
      *((_QWORD *)this + 2) = v4;
    }
  }
  v8 = StringCchCopyW((unsigned __int16 *)v3, v5, a2);
  v9 = v8;
  if ( v8 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x645u, 0LL);
  return v9;
}
