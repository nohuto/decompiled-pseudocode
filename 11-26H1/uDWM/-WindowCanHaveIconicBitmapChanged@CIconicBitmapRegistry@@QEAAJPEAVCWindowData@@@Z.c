/*
 * XREFs of ?WindowCanHaveIconicBitmapChanged@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@@Z @ 0x18001935C
 * Callers:
 *     ?HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18003BB00 (-HasIconicBitmapChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z @ 0x1800194C0 (-RequestBitmap@CIconicBitmapRegistry@@AEAAJPEAVCWindowData@@_N@Z.c)
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x18001995C (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ @ 0x1800DE760 (-OnRepresentationTypeUpdated@CWindowIconic@@QEAAJXZ.c)
 */

__int64 __fastcall CIconicBitmapRegistry::WindowCanHaveIconicBitmapChanged(
        CIconicBitmapRegistry *this,
        struct CWindowData *a2)
{
  char v2; // al
  unsigned int v3; // ebx
  CBaseObject *v6; // rcx
  int v7; // eax
  CWindowIconic *v8; // rcx
  __int64 v9; // rax
  int v11; // eax
  int v12; // eax
  int v13; // eax

  v2 = *((_BYTE *)a2 + 738);
  v3 = 0;
  if ( (v2 & 2) != 0 )
    goto LABEL_7;
  v6 = (CBaseObject *)*((_QWORD *)a2 + 54);
  *((_BYTE *)a2 + 738) = v2 & 0xEB;
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)a2 + 54) = 0LL;
  v7 = CIconicBitmapRegistry::RequestBitmap(this, a2, 0);
  v3 = v7;
  if ( v7 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x38Eu, 0LL);
  CIconicBitmapRegistry::ClearBitmap(this, a2);
  v8 = (CWindowIconic *)*((_QWORD *)a2 + 61);
  if ( !v8 || (v11 = CWindowIconic::OnRepresentationTypeUpdated(v8), v3 = v11, v11 >= 0) )
  {
LABEL_7:
    v9 = *((_QWORD *)this + 12);
    if ( v9 && *(struct CWindowData **)(v9 + 72) == a2 )
    {
      *(_WORD *)((char *)this + 89) = 0;
      *((_BYTE *)this + 88) = 0;
      v12 = CIconicBitmapRegistry::RequestBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL, 0);
      if ( v12 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v12, 0x39Bu, 0LL);
      CIconicBitmapRegistry::ClearBitmap(this, (struct CWindowData *)0xFFFFFFFFFFFFFFFFLL);
      v13 = CWindowIconic::OnRepresentationTypeUpdated(*((CWindowIconic **)this + 12));
      v3 = v13;
      if ( v13 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v13, 0x39Du, 0LL);
    }
  }
  else
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v11, 0x392u, 0LL);
  }
  return v3;
}
