/*
 * XREFs of ?s_GetDarwinLinkInfo@CPinnedList@@KAHPEAUIShellLinkW@@PEAHPEAGI@Z @ 0x18067408C
 * Callers:
 *     ?RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z @ 0x180662E70 (-RemoveFromList@CTaskbandPin@@UEAAJPEAUIShellItem@@@Z.c)
 *     ?_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z @ 0x180673200 (-_ResolveTargetLink@CPinnedList@@IEAAJPEFBU_ITEMIDLIST@@PEAH@Z.c)
 *     ?s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z @ 0x1806741C4 (-s_RemoveDarwinShortcut@CPinnedList@@KAJPEAUIPinnedList3@@PEBGW4PINNEDLISTMODIFYCALLER@@@Z.c)
 * Callees:
 *     ?StringCchCopyW@@YAJPEAG_KPEBG@Z @ 0x18009BEE4 (-StringCchCopyW@@YAJPEAG_KPEBG@Z.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CPinnedList::s_GetDarwinLinkInfo(struct IShellLinkW *a1, int *a2, char *a3, unsigned int a4)
{
  __int64 v4; // r14
  struct IShellLinkWVtbl *lpVtbl; // rax
  unsigned int v8; // esi
  int FeatureStateFromDescriptorW; // eax
  bool v10; // zf
  int v11; // eax
  HLOCAL hMem; // [rsp+20h] [rbp-28h] BYREF
  __int64 v14; // [rsp+28h] [rbp-20h] BYREF
  int v15; // [rsp+30h] [rbp-18h] BYREF

  v4 = a4;
  if ( a3 )
    *(_WORD *)a3 = 0;
  if ( a2 )
    *a2 = 0;
  lpVtbl = a1->lpVtbl;
  v14 = 0LL;
  v8 = 0;
  if ( ((__int64 (__fastcall *)(struct IShellLinkW *, GUID *, __int64 *))lpVtbl->QueryInterface)(
         a1,
         &GUID_45e2b4ae_b1c3_11d0_b92f_00a0c90312e1,
         &v14) >= 0 )
  {
    v15 = 0;
    if ( (*(int (__fastcall **)(__int64, int *))(*(_QWORD *)v14 + 48LL))(v14, &v15) >= 0 && (v15 & 0x1000) != 0 )
    {
      hMem = 0LL;
      v8 = 1;
      if ( (*(int (__fastcall **)(__int64, __int64, HLOCAL *))(*(_QWORD *)v14 + 32LL))(v14, 2684354566LL, &hMem) >= 0 )
      {
        if ( a2 )
        {
          FeatureStateFromDescriptorW = MsiQueryFeatureStateFromDescriptorW((char *)hMem + 268);
          if ( FeatureStateFromDescriptorW < 0 || (v10 = FeatureStateFromDescriptorW == 2, v11 = 1, v10) )
            v11 = 0;
          *a2 = v11;
        }
        if ( a3 )
          StringCchCopyW(a3, v4, (char *)hMem + 268);
        LocalFree(hMem);
      }
    }
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  }
  return v8;
}
