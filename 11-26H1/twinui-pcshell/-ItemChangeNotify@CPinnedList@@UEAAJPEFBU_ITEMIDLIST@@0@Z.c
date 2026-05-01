/*
 * XREFs of ?ItemChangeNotify@CPinnedList@@UEAAJPEFBU_ITEMIDLIST@@0@Z @ 0x180694120
 * Callers:
 *     ?ItemChangeNotify@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@0@Z @ 0x1806891D0 (-ItemChangeNotify@CPinnedList@@W7EAAJPEFBU_ITEMIDLIST@@0@Z.c)
 * Callees:
 *     ?FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z @ 0x1801F2630 (-FindPidl@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z @ 0x1802AC430 (-ILGetHiddenStringAllocW@@YAHPEFBU_ITEMIDLIST@@W4IDLHID@@PEAPEAG@Z.c)
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1805E8EC0 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068C154 (--1CPinList@@QEAA@XZ.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x1806943F0 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180696714 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?UpdateShellLink@PINENTRY@@QEAAJXZ @ 0x18069883C (-UpdateShellLink@PINENTRY@@QEAAJXZ.c)
 *     _CacheAppIDInIDList @ 0x1806988D4 (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x180699180 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     SimpleToRealIDListWithContext @ 0x1806CC11C (SimpleToRealIDListWithContext.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::ItemChangeNotify(
        CPinnedList *this,
        const struct _ITEMIDLIST *a2,
        const struct _ITEMIDLIST *a3)
{
  const ITEMIDLIST *v3; // rsi
  const struct _ITEMIDLIST *v4; // r15
  int v6; // ebx
  ITEMIDLIST *v7; // rax
  ITEMIDLIST *v8; // rax
  WCHAR *v9; // r13
  WCHAR *v10; // r14
  struct _ITEMIDLIST *v11; // r12
  __int64 v12; // rdx
  __int64 v13; // rcx
  const struct _ITEMIDLIST **v14; // rdi
  struct _ITEMIDLIST *v15; // rcx
  ITEMIDLIST *v16; // r14
  CPinnedList *v17; // rdi
  struct _ITEMIDLIST *v19; // [rsp+30h] [rbp-50h] BYREF
  struct _ITEMIDLIST *v20; // [rsp+38h] [rbp-48h] BYREF
  LPCWCH lpString1; // [rsp+40h] [rbp-40h] BYREF
  LPCWCH lpString2; // [rsp+48h] [rbp-38h] BYREF
  CPinnedList *v23; // [rsp+50h] [rbp-30h]
  LPITEMIDLIST pidl; // [rsp+58h] [rbp-28h]
  LPITEMIDLIST v25; // [rsp+60h] [rbp-20h]
  __int128 v26; // [rsp+68h] [rbp-18h] BYREF

  v3 = a3;
  v4 = a2;
  v23 = this;
  v6 = -2147024809;
  if ( a2 && a3 )
  {
    v7 = (ITEMIDLIST *)SHLogILFromFSIL(a2);
    pidl = v7;
    if ( v7 )
      v4 = v7;
    v8 = (ITEMIDLIST *)SHLogILFromFSIL(v3);
    v25 = v8;
    if ( v8 )
      v3 = v8;
    v9 = 0LL;
    lpString1 = 0LL;
    v10 = 0LL;
    lpString2 = 0LL;
    v11 = 0LL;
    v20 = 0LL;
    v26 = 0LL;
    if ( (int)CPinList::Load((CPinList *)&v26, (CPinnedList *)((char *)this - 16)) < 0 )
    {
      v6 = -2147024882;
    }
    else
    {
      v14 = CPinList::FindPidl((HDSA *)&v26, v4, 0LL);
      if ( !v14 )
      {
        v6 = -2147023728;
        goto LABEL_17;
      }
      v19 = 0LL;
      v6 = SimpleToRealIDListWithContext(v13, v12, v3, &v19);
      if ( v6 >= 0 )
      {
        v6 = CacheAppIDInIDList(v19);
        if ( v6 >= 0 )
        {
          v6 = SHILClone(*v14, &v20);
          if ( v6 >= 0 )
          {
            ILGetHiddenStringAllocW((__int64)*v14, 3203334173LL, (void **)&lpString1);
            ILFree((LPITEMIDLIST)*v14);
            v15 = v19;
            *v14 = v19;
            ILGetHiddenStringAllocW((__int64)v15, 3203334173LL, (void **)&lpString2);
            v16 = 0LL;
            PINENTRY::UpdateShellLink((PINENTRY *)v14);
            v9 = (WCHAR *)lpString1;
            v11 = v20;
LABEL_15:
            ILFree(v16);
            v10 = (WCHAR *)lpString2;
LABEL_17:
            if ( v6 >= 0 && (!v9 || !v10 || !ILIsEqual(v4, v3) || CompareStringOrdinal(v9, -1, v10, -1, 1) != 2) )
            {
              v17 = v23;
              v6 = CPinList::Save((CPinList *)&v26, (CPinnedList *)((char *)v23 - 16));
              if ( v6 >= 0 )
                CPinnedList::_DoNotifyPinListChange((CPinnedList *)((char *)v17 - 16), v11, 1);
            }
            goto LABEL_25;
          }
          v11 = v20;
        }
        v16 = v19;
        goto LABEL_15;
      }
    }
LABEL_25:
    CoTaskMemFree(v10);
    CoTaskMemFree(v9);
    ILFree(v11);
    ILFree(pidl);
    ILFree(v25);
    CPinList::~CPinList((CPinList *)&v26);
  }
  return (unsigned int)v6;
}
