/*
 * XREFs of ?Resolve@CPinnedList@@UEAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180696380
 * Callers:
 *     ?Resolve@CPinnedList@@W7EAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z @ 0x180689880 (-Resolve@CPinnedList@@W7EAAJPEAUHWND__@@KPEFBU_ITEMIDLIST@@PEAPEFAU3@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1802C8E90 (__security_check_cookie.c)
 *     ?SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z @ 0x1805E8EC0 (-SHILClone@@YAJPEFBU_ITEMIDLIST@@PEAPEFAU1@@Z.c)
 *     ??1CPinList@@QEAA@XZ @ 0x18068C154 (--1CPinList@@QEAA@XZ.c)
 *     ?FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z @ 0x18068EC70 (-FindPidlOrAppID@CPinList@@QEAAPEAVPINENTRY@@PEFBU_ITEMIDLIST@@_NPEAH@Z.c)
 *     ?Load@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x1806943F0 (-Load@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     ?LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z @ 0x1806945BC (-LoadShellLink@CPinList@@QEAAJPEAVPINENTRY@@PEAPEAUIShellLinkW@@@Z.c)
 *     ?Save@CPinList@@QEAAJPEAVCPinnedList@@@Z @ 0x180696714 (-Save@CPinList@@QEAAJPEAVCPinnedList@@@Z.c)
 *     _CacheAppIDInIDList @ 0x1806988D4 (_CacheAppIDInIDList.c)
 *     ?_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z @ 0x180699180 (-_DoNotifyPinListChange@CPinnedList@@IEAAXPEFBU_ITEMIDLIST@@H@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CPinnedList::Resolve(
        CPinnedList *this,
        HWND a2,
        unsigned int a3,
        const struct _ITEMIDLIST *a4,
        struct _ITEMIDLIST **a5)
{
  struct CPinnedList *v8; // r14
  const struct _ITEMIDLIST *v10; // rax
  ITEMIDLIST *v11; // r15
  int v12; // edi
  const ITEMIDLIST **PidlOrAppID; // rax
  LPITEMIDLIST *v14; // rsi
  int v15; // ebx
  struct IShellLinkW *v16; // rdi
  int v17; // eax
  struct _ITEMIDLIST *v18; // rcx
  struct IShellLinkW *v19; // [rsp+28h] [rbp-30h] BYREF
  struct _ITEMIDLIST *v20; // [rsp+30h] [rbp-28h] BYREF
  __int128 v21; // [rsp+38h] [rbp-20h] BYREF

  *a5 = 0LL;
  v8 = (CPinnedList *)((char *)this - 16);
  if ( (*(unsigned int (__fastcall **)(char *))(*((_QWORD *)this - 2) + 120LL))((char *)this - 16) )
    return 2147942405LL;
  v10 = (const struct _ITEMIDLIST *)SHLogILFromFSIL(a4);
  v11 = (ITEMIDLIST *)v10;
  if ( v10 )
    a4 = v10;
  v21 = 0LL;
  v12 = CPinList::Load((struct IStream **)&v21, v8);
  if ( v12 >= 0 )
  {
    PidlOrAppID = CPinList::FindPidlOrAppID((HDSA *)&v21, a4, 0, 0LL);
    v14 = (LPITEMIDLIST *)PidlOrAppID;
    if ( PidlOrAppID )
    {
      v19 = 0LL;
      v15 = CPinList::LoadShellLink((CPinList *)&v21, (struct PINENTRY *)PidlOrAppID, &v19);
      if ( v15 >= 0 )
      {
        v16 = v19;
        v15 = ((__int64 (__fastcall *)(struct IShellLinkW *, HWND, _QWORD))v19->lpVtbl->Resolve)(v19, a2, a3);
        if ( v15 )
        {
          if ( v15 >= 0 )
            v15 = -2147023673;
        }
        else
        {
          v19 = 0LL;
          v15 = ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, struct IShellLinkW **))v16->lpVtbl->QueryInterface)(
                  v16,
                  &GUID_00000109_0000_0000_c000_000000000046,
                  &v19);
          if ( v15 >= 0 )
          {
            v15 = 1;
            if ( !((unsigned int (__fastcall *)(struct IShellLinkW *))v19->lpVtbl->GetIDList)(v19) )
            {
              v20 = 0LL;
              v17 = ((__int64 (__fastcall *)(struct IShellLinkW *, struct _ITEMIDLIST **))v16->lpVtbl->GetIDList)(
                      v16,
                      &v20);
              v15 = v17;
              if ( v17 >= 0 )
              {
                if ( v17 )
                {
                  v15 = -2147467259;
                }
                else
                {
                  v15 = CacheAppIDInIDList(v20);
                  if ( v15 >= 0 )
                  {
                    ILFree(*v14);
                    v18 = v20;
                    *v14 = v20;
                    v15 = SHILClone(v18, a5);
                  }
                }
              }
            }
            ((void (__fastcall *)(struct IShellLinkW *))v19->lpVtbl->Release)(v19);
          }
        }
        ((void (__fastcall *)(struct IShellLinkW *))v16->lpVtbl->Release)(v16);
      }
      v12 = v15;
      if ( !v15 && (int)CPinList::Save((CPinList *)&v21, v8) >= 0 )
        CPinnedList::_DoNotifyPinListChange(v8, 0LL, 0);
    }
    else
    {
      v12 = -2147023728;
    }
  }
  ILFree(v11);
  CPinList::~CPinList((CPinList *)&v21);
  return (unsigned int)v12;
}
