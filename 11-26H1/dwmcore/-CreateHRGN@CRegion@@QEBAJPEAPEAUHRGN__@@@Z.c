/*
 * XREFs of ?CreateHRGN@CRegion@@QEBAJPEAPEAUHRGN__@@@Z @ 0x180293BF4
 * Callers:
 *     ?Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z @ 0x1802A8B70 (-Present@CLegacyRemotingSwapChain@@UEAAJPEBVCRegion@@@Z.c)
 *     ?RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV?$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_POINTANDSIZE_L@@U_CMilRectL_@RectUniqueness@@@@@Z @ 0x1802A8CF0 (-RailAppPresent@CLegacyRemotingSwapChain@@UEAAJ_KAEBV-$TMilRect_@HUtagRECT@@UMil3DRectL@@UD2D_PO.c)
 * Callees:
 *     ?GetRectangleCount@CRegion@FastRegion@@QEBAIXZ @ 0x180035FC0 (-GetRectangleCount@CRegion@FastRegion@@QEBAIXZ.c)
 *     ?BeginIterator@CRegion@FastRegion@@QEBA?AVIterator@12@XZ @ 0x180035FFC (-BeginIterator@CRegion@FastRegion@@QEBA-AVIterator@12@XZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??1?$unique_ptr@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@U?$default_delete@$$BY0A@U?$aligned_storage_for@UEffectInput@@@detail@@@std@@@std@@QEAA@XZ @ 0x1800BFF58 (--1-$unique_ptr@$$BY0A@U-$aligned_storage_for@UEffectInput@@@detail@@U-$default_delete@$$BY0A@U-.c)
 *     ?StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z @ 0x180105210 (-StepIterator@CRgnData@Internal@FastRegion@@QEBAXPEAVIterator@CRegion@3@@Z.c)
 *     ?GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z @ 0x18016A260 (-GetBoundingRect@CRegion@FastRegion@@QEBA_NAEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CRegion::CreateHRGN(int **this, HRGN *a2)
{
  unsigned int RectangleCount; // eax
  unsigned int v5; // esi
  HRGN Region; // rsi
  signed int v7; // eax
  signed int v8; // ebx
  int v9; // r14d
  DWORD v10; // r12d
  RGNDATA *p_Data; // rbx
  char *Buffer; // rsi
  _DWORD *v13; // rcx
  int v14; // eax
  FastRegion::Internal::CRgnData *v15; // rcx
  __int64 v16; // rdx
  signed int LastError; // eax
  _BYTE v19[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v20; // [rsp+38h] [rbp-C8h]
  _DWORD *v21; // [rsp+40h] [rbp-C0h]
  FastRegion::Internal::CRgnData *v22; // [rsp+48h] [rbp-B8h]
  int v23; // [rsp+50h] [rbp-B0h]
  RECT rect; // [rsp+60h] [rbp-A0h] BYREF
  RGNDATA Data; // [rsp+70h] [rbp-90h] BYREF

  RectangleCount = FastRegion::CRegion::GetRectangleCount(this);
  v5 = RectangleCount;
  if ( RectangleCount > 1 )
  {
    *(_QWORD *)&rect.left = 0LL;
    v9 = 16 * RectangleCount;
    v10 = 16 * RectangleCount + 32;
    memset_0(&Data, 0, 0x120uLL);
    if ( v5 > 0x10 )
    {
      *(_QWORD *)&rect.left = MIDL_user_allocate(v10);
      p_Data = *(RGNDATA **)&rect.left;
      if ( !*(_QWORD *)&rect.left )
      {
        v8 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x61u, 0LL);
        goto LABEL_23;
      }
    }
    else
    {
      p_Data = &Data;
    }
    *(_QWORD *)&p_Data->rdh.rcBound.left = 0LL;
    *(_QWORD *)&p_Data->rdh.rcBound.right = 0LL;
    p_Data->rdh.nCount = v5;
    Buffer = p_Data->Buffer;
    p_Data->rdh.dwSize = 32;
    p_Data->rdh.iType = 1;
    p_Data->rdh.nRgnSize = v9;
    FastRegion::CRegion::BeginIterator(this, (__int64)v19);
    while ( 1 )
    {
      v13 = v21;
      if ( (unsigned __int64)v21 >= v20 )
        break;
      *((_DWORD *)Buffer + 1) = *v21;
      v14 = v13[2];
      v15 = v22;
      *((_DWORD *)Buffer + 3) = v14;
      v16 = 2 * v23;
      *(_DWORD *)Buffer = *((_DWORD *)v15 + v16);
      *((_DWORD *)Buffer + 2) = *((_DWORD *)v15 + v16 + 1);
      Buffer += 16;
      FastRegion::Internal::CRgnData::StepIterator(v15, (struct FastRegion::CRegion::Iterator *)v19);
    }
    SetLastError(0);
    Region = ExtCreateRegion(0LL, v10, p_Data);
    if ( Region )
    {
      std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&rect);
      goto LABEL_17;
    }
    LastError = GetLastError();
    v8 = LastError;
    if ( LastError > 0 )
      v8 = (unsigned __int16)LastError | 0x80070000;
    if ( v8 >= 0 )
      v8 = -2003304445;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x7Du, 0LL);
LABEL_23:
    std::unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>::~unique_ptr<detail::aligned_storage_for<EffectInput> [0],std::default_delete<detail::aligned_storage_for<EffectInput> [0]>>((void **)&rect);
    return (unsigned int)v8;
  }
  rect = 0LL;
  FastRegion::CRegion::GetBoundingRect(this, &rect);
  SetLastError(0);
  Region = CreateRectRgnIndirect(&rect);
  if ( Region )
  {
LABEL_17:
    v8 = 0;
    *a2 = Region;
    return (unsigned int)v8;
  }
  v7 = GetLastError();
  v8 = v7;
  if ( v7 > 0 )
    v8 = (unsigned __int16)v7 | 0x80070000;
  if ( v8 >= 0 )
    v8 = -2003304445;
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v8, 0x4Cu, 0LL);
  return (unsigned int)v8;
}
