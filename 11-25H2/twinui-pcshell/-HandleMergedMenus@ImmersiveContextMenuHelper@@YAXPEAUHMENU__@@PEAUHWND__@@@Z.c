/*
 * XREFs of ?HandleMergedMenus@ImmersiveContextMenuHelper@@YAXPEAUHMENU__@@PEAUHWND__@@@Z @ 0x180661844
 * Callers:
 *     ?s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_HOW_SELECTED_FLAGS@@@Z @ 0x18065F754 (-s_ContextMenuWndProc@CImmersiveContextMenuOwnerDrawHelper@@SA_NPEAUHWND__@@I_K_JPEA_NPEAW4GRID_.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1806611F4 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x18003F62C (-ResultFromKnownLastError@@YAJXZ.c)
 *     ?InitializeFormat@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@QEAAJPEBGZZ @ 0x180053C64 (-InitializeFormat@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@W_ea_180053C64.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x180053E78 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     memset_0 @ 0x1802D2FFC (memset_0.c)
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x1806611F4 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180661738 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 */

void __fastcall ImmersiveContextMenuHelper::HandleMergedMenus(ImmersiveContextMenuHelper *this, HWND a2, HWND a3)
{
  char v3; // r15
  struct ContextMenuRenderingData *v4; // rdi
  char v5; // r14
  UINT v6; // esi
  signed int Error; // ebx
  struct ContextMenuRenderingData *ContextMenuDataForItem; // rax
  int v11; // eax
  _QWORD *hData; // rbx
  char v13; // r14
  LPARAM v14; // rsi
  unsigned int v15; // r9d
  LPCWSTR lpString[4]; // [rsp+38h] [rbp-39h] BYREF
  struct tagMENUITEMINFOW mii; // [rsp+58h] [rbp-19h] BYREF

  v3 = 1;
  v4 = 0LL;
  v5 = 1;
  v6 = 0;
  do
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 290;
    if ( GetMenuItemInfoW((HMENU)this, v6, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_12;
    }
    if ( (mii.fType & 0x100) != 0 )
    {
      if ( mii.dwItemData )
      {
        ContextMenuDataForItem = ImmersiveContextMenuHelper::GetContextMenuDataForItem(
                                   a2,
                                   (HWND)mii.dwItemData,
                                   mii.wID);
        if ( ContextMenuDataForItem )
          v4 = ContextMenuDataForItem;
        v5 = ContextMenuDataForItem != 0LL ? v5 : 0;
      }
      else
      {
        v3 = 0;
      }
    }
    else
    {
      v5 = 0;
    }
LABEL_12:
    ++v6;
  }
  while ( Error >= 0 );
  v11 = 0;
  if ( Error != -2147023440 )
    v11 = Error;
  if ( v11 >= 0 && !v5 && v3 )
  {
    if ( v4 )
    {
      hData = (_QWORD *)*((_QWORD *)v4 + 10);
      if ( hData )
        goto LABEL_24;
    }
    memset(lpString, 0, 24);
    hData = 0LL;
    if ( (int)Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::InitializeFormat(
                (__int64)lpString,
                L"ImmersiveContextMenuArray_%lu",
                0xFFFFFFFFLL) >= 0 )
      hData = GetPropW(a2, lpString[0]);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)lpString);
    if ( hData )
    {
LABEL_24:
      if ( hData[1] && (*(_BYTE *)(*(_QWORD *)*hData + 56LL) & 4) != 0 )
      {
        v13 = 1;
        v14 = SetMessageExtraInfo(4283520896LL);
      }
      else
      {
        v14 = 0LL;
        v13 = 0;
      }
      v15 = 18;
      if ( v4 )
      {
        v15 = 19 - (*((_DWORD *)v4 + 15) != 1);
        if ( *((_BYTE *)v4 + 69) )
          v15 |= 8u;
      }
      ImmersiveContextMenuHelper::ApplyOwnerDrawToMenu((HMENU)this, a2, 0LL, v15, hData);
      if ( v13 )
        SetMessageExtraInfo(v14);
    }
  }
}
