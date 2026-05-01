/*
 * XREFs of ?CanApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YA_NPEAUHMENU__@@PEAUHWND__@@@Z @ 0x1806876B8
 * Callers:
 *     ?ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4ImmersiveContextMenuOptions@@AEAV?$CSimplePointerArrayNewMem@UContextMenuRenderingData@@V?$CSimpleArrayStandardCompareHelper@PEAUContextMenuRenderingData@@@@@@@Z @ 0x180687288 (-ApplyOwnerDrawToMenu@ImmersiveContextMenuHelper@@YAJPEAUHMENU__@@PEAUHWND__@@PEAUtagPOINT@@W4Im.c)
 * Callees:
 *     ?ResultFromKnownLastError@@YAJXZ @ 0x180042238 (-ResultFromKnownLastError@@YAJXZ.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND__@@_KI@Z @ 0x180687778 (-GetContextMenuDataForItem@ImmersiveContextMenuHelper@@YAPEAUContextMenuRenderingData@@PEAUHWND_.c)
 */

char __fastcall ImmersiveContextMenuHelper::CanApplyOwnerDrawToMenu(HMENU hmenu, HWND hWnd, HWND a3)
{
  signed int Error; // ebx
  UINT v5; // edi
  unsigned int v7; // r9d
  struct tagMENUITEMINFOW mii; // [rsp+20h] [rbp-58h] BYREF

  Error = 0;
  v5 = 0;
  while ( Error >= 0 )
  {
    memset_0(&mii, 0, sizeof(mii));
    mii.cbSize = 80;
    mii.fMask = 290;
    if ( GetMenuItemInfoW(hmenu, v5, 1, &mii) )
    {
      Error = 0;
    }
    else
    {
      Error = ResultFromKnownLastError();
      if ( Error < 0 )
        goto LABEL_9;
    }
    if ( (mii.fType & 0x100) != 0
      && (!mii.dwItemData
       || !ImmersiveContextMenuHelper::GetContextMenuDataForItem(hWnd, (HWND)mii.dwItemData, mii.wID, v7)) )
    {
      return 0;
    }
LABEL_9:
    ++v5;
  }
  return 1;
}
