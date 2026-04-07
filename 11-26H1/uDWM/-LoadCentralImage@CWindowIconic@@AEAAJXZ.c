/*
 * XREFs of ?LoadCentralImage@CWindowIconic@@AEAAJXZ @ 0x180073C2C
 * Callers:
 *     ?Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z @ 0x180038650 (-Initialize@CWindowIconic@@IEAAJPEAVCWindowData@@@Z.c)
 *     ?OnIconUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x180067874 (-OnIconUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ @ 0x180073BBC (-OnGlobalTimeUpdated@CWindowIconic@@QEAAJXZ.c)
 *     ?SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z @ 0x18007E8F8 (-SetBitmap@CWindowIconic@@QEAAJPEAVCBitmapSource@@_N1@Z.c)
 *     ?SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z @ 0x18008AB18 (-SetRepresentationType@CWindowIconic@@QEAAJW4IconicRepresentationType@@_N@Z.c)
 * Callees:
 *     ?SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z @ 0x180008D8C (-SetBitmapSource@CImage@@QEAAXPEAVCBitmapSource@@@Z.c)
 *     ?SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z @ 0x180014250 (-SetSize@CVisual@@QEAAXPEBUtagSIZE@@@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z @ 0x1800850F0 (-Create@CBitmapSource@@SAJPEAUHICON__@@PEAPEAV1@@Z.c)
 */

__int64 __fastcall CWindowIconic::LoadCentralImage(CWindowIconic *this)
{
  int v1; // edx
  unsigned int v2; // esi
  char v3; // bp
  int v5; // edx
  struct tagSIZE *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  unsigned int v9; // ecx
  unsigned int v10; // eax
  __int64 v11; // rcx
  HICON v12; // rax
  int v13; // eax
  HICON hIcon; // [rsp+50h] [rbp+8h] BYREF
  CBaseObject *v16; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 4);
  v2 = 0;
  v3 = 0;
  hIcon = 0LL;
  v16 = 0LL;
  if ( v1 )
  {
    v5 = v1 - 1;
    if ( v5 )
    {
      if ( v5 != 1 )
        return v2;
      v6 = (struct tagSIZE *)*((_QWORD *)this + 3);
    }
    else
    {
      v9 = (int)*(double *)(*((_QWORD *)this + 8) + 48LL);
      v10 = *((_DWORD *)this + 14) - 1;
      if ( v10 >= v9 )
        v10 = v9;
      v6 = *(struct tagSIZE **)(*((_QWORD *)this + 4) + 8LL * v10);
    }
    if ( !v6 )
      goto LABEL_22;
    CBaseObject::AddRef((CBaseObject *)v6);
  }
  else
  {
    v11 = *((_QWORD *)this + 10);
    v12 = *(HICON *)(v11 + 160);
    if ( v12 || (v12 = *(HICON *)(v11 + 152)) != 0LL )
    {
      hIcon = v12;
    }
    else
    {
      LoadIconWithScaleDown(0LL, (PCWSTR)0x7F00, 32, 32, &hIcon);
      v3 = 1;
    }
    if ( !hIcon )
      goto LABEL_22;
    v13 = CBitmapSource::Create(hIcon, &v16);
    v2 = v13;
    if ( v13 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x106u, 0LL);
      v6 = (struct tagSIZE *)v16;
      goto LABEL_20;
    }
    v6 = (struct tagSIZE *)v16;
  }
  if ( v6 )
  {
    CVisual::SetSize(*((CVisual **)this + 12), v6 + 16, v7, v8);
    CImage::SetBitmapSource(*((CImage **)this + 12), (struct CBitmapSource *)v6);
LABEL_20:
    if ( v6 )
      CBaseObject::Release((CBaseObject *)v6);
  }
LABEL_22:
  if ( v3 )
    DestroyIcon(hIcon);
  return v2;
}
