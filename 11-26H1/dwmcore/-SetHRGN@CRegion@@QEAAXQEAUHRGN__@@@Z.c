/*
 * XREFs of ?SetHRGN@CRegion@@QEAAXQEAUHRGN__@@@Z @ 0x1800E9CB0
 * Callers:
 *     ?ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z @ 0x18002FF00 (-ProcessToken@CLegacySurfaceManager@@IEAAJPEBU_D3DKMT_PRESENTHISTORYTOKEN@@PEAIPEA_N@Z.c)
 *     ?GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z @ 0x1800E98E8 (-GetDirtyRegionFromAccum@CRedirectedGDISurface@@QEAAJAEAVCRegion@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002D600 (--3@YAXPEAX@Z.c)
 *     ?FreeMemory@CRegion@FastRegion@@IEAAXXZ @ 0x180074C60 (-FreeMemory@CRegion@FastRegion@@IEAAXXZ.c)
 *     MIDL_user_allocate @ 0x18007E170 (MIDL_user_allocate.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z @ 0x1800EAB10 (-TryAddRectangles@CRegion@@QEAAJPEBUtagRECT@@I@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 */

void __fastcall CRegion::SetHRGN(CRegion *this, HRGN hrgn)
{
  struct tagRECT *v4; // rdi
  DWORD RegionData; // eax
  DWORD v6; // esi
  int v7; // esi
  HANDLE v8; // rax
  signed int v9; // eax
  signed int v10; // ebx
  unsigned int v11; // eax
  HANDLE ProcessHeap; // rax
  _DWORD *v13; // rdx
  signed int LastError; // eax
  LPVOID lpMem; // [rsp+30h] [rbp-78h] BYREF
  _DWORD v16[18]; // [rsp+38h] [rbp-70h] BYREF

  **(_DWORD **)this = 0;
  if ( hrgn )
  {
    if ( hrgn == (HRGN)1 )
      goto LABEL_21;
    v16[0] = 0;
    lpMem = v16;
    v4 = 0LL;
    SetLastError(0);
    RegionData = GetRegionData(hrgn, 0, 0LL);
    v6 = RegionData;
    if ( RegionData )
    {
      v4 = (struct tagRECT *)MIDL_user_allocate(RegionData);
      if ( !v4 )
      {
        v10 = -2147024882;
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x85u, 0LL);
        v7 = -2147024882;
LABEL_10:
        MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, 0x1Eu, 0LL);
        FastRegion::CRegion::FreeMemory((FastRegion::CRegion **)&lpMem);
        goto LABEL_12;
      }
      SetLastError(0);
      if ( GetRegionData(hrgn, v6, (LPRGNDATA)v4) )
      {
        v7 = CRegion::TryAddRectangles(this, v4 + 2, v4->right);
        if ( v16 != lpMem )
        {
          if ( lpMem )
          {
            ProcessHeap = GetProcessHeap();
            HeapFree(ProcessHeap, 0, lpMem);
          }
          v16[0] = 0;
          lpMem = v16;
        }
        v8 = GetProcessHeap();
        HeapFree(v8, 0, v4);
LABEL_12:
        if ( v7 >= 0 )
          return;
LABEL_21:
        v13 = *(_DWORD **)this;
        *v13 = 2;
        v13[1] = 0x80000000;
        v13[2] = 0x7FFFFFFF;
        v13[3] = 0x80000000;
        v13[4] = 16;
        v13[7] = 0x80000000;
        v13[8] = 0x7FFFFFFF;
        v13[5] = 0x7FFFFFFF;
        v13[6] = 16;
        return;
      }
      LastError = GetLastError();
      v10 = LastError;
      if ( LastError > 0 )
        v10 = (unsigned __int16)LastError | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v11 = 136;
    }
    else
    {
      v9 = GetLastError();
      v10 = v9;
      if ( v9 > 0 )
        v10 = (unsigned __int16)v9 | 0x80070000;
      if ( v10 >= 0 )
        v10 = -2003304445;
      v11 = 130;
    }
    v7 = v10;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v10, v11, 0LL);
    if ( v4 )
      operator delete(v4);
    goto LABEL_10;
  }
}
