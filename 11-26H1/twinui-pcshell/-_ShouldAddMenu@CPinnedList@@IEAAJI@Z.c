/*
 * XREFs of ?_ShouldAddMenu@CPinnedList@@IEAAJI@Z @ 0x18069A0AC
 * Callers:
 *     ?GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z @ 0x180692320 (-GetState@CPinnedList@@UEAAJPEAUIShellItemArray@@HPEAK@Z.c)
 *     ?QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z @ 0x1806957D0 (-QueryContextMenu@CPinnedList@@UEAAJPEAUHMENU__@@IIII@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x1800AD1FC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     memset_0 @ 0x1802C9ECC (memset_0.c)
 *     ?GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z @ 0x1805E688C (-GetTaskbarPinnableItem@TaskbarPinHelper@@YAJPEAUIShellItem@@PEAPEAU2@@Z.c)
 *     ?SHSimpleIDListFromFindDataAndFlags@@YAJPEBGPEBU_WIN32_FIND_DATAW@@W4SIMPLE_IDLIST_FLAGS@@PEAPEFAU_ITEMIDLIST@@@Z @ 0x180696678 (-SHSimpleIDListFromFindDataAndFlags@@YAJPEBGPEBU_WIN32_FIND_DATAW@@W4SIMPLE_IDLIST_FLAGS@@PEAPEF.c)
 *     ?_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPEAUIShellItem@@3PEAPEAGPEAH@Z @ 0x18069983C (-_GetPinnableInfoImpl@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAUIShellLinkW@@W4PINNABLEFLAG@@PEAPE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::_ShouldAddMenu(CPinnedList *this, unsigned int a2)
{
  unsigned int v4; // edi
  int DataAndFlags; // ebx
  __int64 v6; // r8
  TaskbarPinHelper *v7; // rcx
  struct IShellItem **v8; // r8
  int TaskbarPinnableItem; // eax
  TaskbarPinHelper *v10; // rcx
  LPVOID pv; // [rsp+40h] [rbp-C0h] BYREF
  TaskbarPinHelper *v13; // [rsp+48h] [rbp-B8h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v15; // [rsp+58h] [rbp-A8h] BYREF
  LPITEMIDLIST pidl; // [rsp+60h] [rbp-A0h] BYREF
  struct _WIN32_FIND_DATAW v17; // [rsp+70h] [rbp-90h] BYREF

  if ( (a2 & 1) != 0 || (*(unsigned int (__fastcall **)(CPinnedList *))(*(_QWORD *)this + 120LL))(this) )
    return 1LL;
  v4 = ~(unsigned __int8)(a2 >> 5) & 8 | 2;
  v13 = 0LL;
  ppvOut = 0LL;
  if ( IUnknown_QueryService(
         *((IUnknown **)this + 8),
         &IID_IShellLinkW,
         &GUID_0000010b_0000_0000_c000_000000000046,
         &ppvOut) < 0 )
  {
    DataAndFlags = (*(__int64 (__fastcall **)(char *, _QWORD, _QWORD, TaskbarPinHelper **, _QWORD, _QWORD, _QWORD))(*((_QWORD *)this + 2) + 32LL))(
                     (char *)this + 16,
                     *((_QWORD *)this + 11),
                     v4,
                     &v13,
                     0LL,
                     0LL,
                     0LL);
  }
  else
  {
    DataAndFlags = -2147467259;
    pv = 0LL;
    if ( !(*(unsigned int (__fastcall **)(void *, LPVOID *))(*(_QWORD *)ppvOut + 64LL))(ppvOut, &pv) && pv )
    {
      pidl = 0LL;
      memset_0(&v17.ftCreationTime, 0, 0x24CuLL);
      v17.dwFileAttributes = 128;
      DataAndFlags = SHSimpleIDListFromFindDataAndFlags((struct IBindCtx *)pv, &v17, v6, &pidl);
      if ( DataAndFlags >= 0 )
      {
        v15 = 0LL;
        DataAndFlags = (**(__int64 (__fastcall ***)(void *, GUID *, __int64 *))ppvOut)(
                         ppvOut,
                         &GUID_000214f9_0000_0000_c000_000000000046,
                         &v15);
        if ( DataAndFlags >= 0 )
        {
          DataAndFlags = CPinnedList::_GetPinnableInfoImpl((__int64)this, pidl, v15, v4, (__int64 *)&v13, 0LL, 0LL, 0LL);
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        }
        ILFree(pidl);
      }
      CoTaskMemFree(pv);
    }
    (*(void (__fastcall **)(void *))(*(_QWORD *)ppvOut + 16LL))(ppvOut);
  }
  v7 = v13;
  if ( v13 )
  {
    if ( !DataAndFlags )
    {
      pv = 0LL;
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&pv);
      TaskbarPinnableItem = TaskbarPinHelper::GetTaskbarPinnableItem(v13, (struct IShellItem *)&pv, v8);
      v10 = v13;
      if ( TaskbarPinnableItem >= 0 )
      {
        (*(void (__fastcall **)(TaskbarPinHelper *))(*(_QWORD *)v13 + 16LL))(v13);
        v10 = (TaskbarPinHelper *)pv;
        pv = 0LL;
        v13 = v10;
      }
      DataAndFlags = SHGetIDListFromObject((IUnknown *)v10, (LPITEMIDLIST *)this + 13);
      Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease((__int64 *)&pv);
      v7 = v13;
    }
    (*(void (__fastcall **)(TaskbarPinHelper *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( DataAndFlags >= 0 )
  {
    if ( (*(unsigned int (__fastcall **)(CPinnedList *, _QWORD))(*(_QWORD *)this + 128LL))(this, a2) )
      return 1;
  }
  return (unsigned int)DataAndFlags;
}
