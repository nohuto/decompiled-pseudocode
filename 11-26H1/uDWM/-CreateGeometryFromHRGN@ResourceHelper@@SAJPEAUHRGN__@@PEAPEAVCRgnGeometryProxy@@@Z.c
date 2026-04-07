/*
 * XREFs of ?CreateGeometryFromHRGN@ResourceHelper@@SAJPEAUHRGN__@@PEAPEAVCRgnGeometryProxy@@@Z @ 0x18005897C
 * Callers:
 *     ?UpdateClientBlur@CTopLevelWindow@@AEAAJXZ @ 0x180065E90 (-UpdateClientBlur@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z @ 0x180058BC4 (-Update@CRgnGeometryProxy@@QEAAJPEBUtagRECT@@I@Z.c)
 *     ?CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z @ 0x180082094 (-CreateRgnGeometryProxy@CCompositor@@QEAAJPEAPEAVCRgnGeometryProxy@@@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180086130 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18008EF30 (memset_0.c)
 */

__int64 __fastcall ResourceHelper::CreateGeometryFromHRGN(HRGN hrgn, struct CRgnGeometryProxy **a2)
{
  CBaseObject *v2; // rdi
  int *v3; // rsi
  DWORD RegionData; // eax
  DWORD v7; // ebx
  int *v8; // rax
  signed int v9; // eax
  signed int v10; // ebx
  int v11; // eax
  signed int LastError; // eax
  int v14; // eax
  unsigned int v15; // [rsp+20h] [rbp-78h]
  struct CRgnGeometryProxy *v16; // [rsp+30h] [rbp-68h] BYREF
  int v17; // [rsp+38h] [rbp-60h] BYREF
  __int128 v18; // [rsp+3Ch] [rbp-5Ch]
  __int128 v19; // [rsp+4Ch] [rbp-4Ch]

  v2 = *a2;
  v3 = 0LL;
  v17 = 0;
  v16 = v2;
  v18 = 0LL;
  v19 = 0LL;
  if ( v2 )
  {
    CBaseObject::AddRef(v2);
  }
  else
  {
    v14 = CCompositor::CreateRgnGeometryProxy(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6), &v16);
    v10 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x8Bu, 0LL);
      v2 = v16;
      goto LABEL_16;
    }
    v2 = v16;
  }
  if ( hrgn )
  {
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v7 = RegionData;
    if ( !RegionData )
    {
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      v15 = 144;
      goto LABEL_25;
    }
    v8 = (int *)DefaultHeap::Alloc(RegionData);
    v3 = v8;
    if ( !v8 )
    {
      v10 = -2147024882;
      v15 = 147;
LABEL_27:
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v15, 0LL);
LABEL_16:
      if ( v2 )
        CBaseObject::Release(v2);
      goto LABEL_18;
    }
    memset_0(v8, 0, v7);
    SetLastError(0);
    if ( !GetRegionData(hrgn, v7, (LPRGNDATA)v3) )
    {
      v9 = GetLastError();
      v10 = v9;
      if ( v9 > 0 )
        v10 = (unsigned __int16)v9 | 0x80070000;
      v15 = 155;
LABEL_25:
      if ( v10 >= 0 )
        v10 = -2003304445;
      goto LABEL_27;
    }
  }
  else
  {
    v3 = &v17;
  }
  v11 = CRgnGeometryProxy::Update(v2, (const struct tagRECT *)v3 + 2, v3[2]);
  v10 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0xA4u, 0LL);
    goto LABEL_16;
  }
  if ( *a2 )
    CBaseObject::Release(*a2);
  *a2 = v2;
  if ( v2 )
  {
    CBaseObject::AddRef(v2);
    goto LABEL_16;
  }
LABEL_18:
  if ( v3 && v3 != &v17 )
    DefaultHeap::Free(v3);
  return (unsigned int)v10;
}
