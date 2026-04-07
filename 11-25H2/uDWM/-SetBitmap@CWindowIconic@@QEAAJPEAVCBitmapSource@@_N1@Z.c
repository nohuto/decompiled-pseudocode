/*
 * XREFs of ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18008F614
 * Callers:
 *     ?ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z @ 0x180019AD4 (-ClearBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x1800548B4 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z @ 0x180056C28 (-AcceptBitmap@CIconicBitmapRegistry@@AEAAXPEAVCWindowData@@PEAVCBitmapSource@@@Z.c)
 *     ?LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK@Z @ 0x1800B7A20 (-LivePreviewBitmapReceived@CIconicBitmapRegistry@@QEAAJPEAVCWindowData@@KIIPEBUtagPOINT@@PEBX_KK.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x1800086B0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z @ 0x180053EFC (-UpdateSizeOrMargins@CWindowIconic@@AEAAJ_N@Z.c)
 *     ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180056454 (-LoadCentralImage@CWindowIconic@@AEAAJXZ.c)
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800566B8 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowIconic::SetBitmap(CWindowIconic *this, struct CBitmapSource *a2, char a3, char a4)
{
  unsigned int v5; // ebx
  CBaseObject *v6; // rcx
  char v10; // si
  int CentralImage; // eax
  int v12; // eax
  int updated; // eax
  int v14; // eax

  v5 = 0;
  v6 = (CBaseObject *)*((_QWORD *)this + 3);
  if ( v6 )
    CBaseObject::Release(v6);
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    CMILRefCountBase::AddRef(a2);
  v10 = *((_BYTE *)this + 21);
  *((_BYTE *)this + 21) = a3;
  if ( a4 && *((_DWORD *)this + 4) == 2 )
  {
    CentralImage = CWindowIconic::LoadCentralImage(this);
    v5 = CentralImage;
    if ( CentralImage < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, CentralImage, 0x261u, 0LL);
    }
    else if ( v10 == a3 || (v12 = CWindowIconic::OnWindowStyleUpdated(this, 0), v5 = v12, v12 >= 0) )
    {
      updated = CWindowIconic::UpdateSizeOrMargins(this, 1);
      v5 = updated;
      if ( updated < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, updated, 0x26Au, 0LL);
      }
      else
      {
        v14 = (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 13) + 48LL))(*((_QWORD *)this + 13));
        v5 = v14;
        if ( v14 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x26Bu, 0LL);
      }
    }
    else
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x265u, 0LL);
    }
  }
  return v5;
}
