/*
 * XREFs of ?DestroyResource@CD3DResourceManager@@AEAAXPEAVCD3DResource@@@Z @ 0x18013569C
 * Callers:
 *     ?DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z @ 0x180135634 (-DestroyListOfResources@CD3DResourceManager@@AEAAIPEAU_LIST_ENTRY@@@Z.c)
 *     ?MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ @ 0x18020A5F0 (-MarkHardwareProtectedResourcesInvalid@CD3DResourceManager@@QEAA_NXZ.c)
 *     ?UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z @ 0x1802A5070 (-UnusableNotification@CD3DResourceManager@@UEAAXPEAVCMILPoolResource@@@Z.c)
 * Callees:
 *     ?Invalidate@CD3DResource@@IEAAXXZ @ 0x180135758 (-Invalidate@CD3DResource@@IEAAXXZ.c)
 *     ?RemoveHwProtectedResource@CD2DContext@@IEAAXXZ @ 0x180298CF0 (-RemoveHwProtectedResource@CD2DContext@@IEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CD3DResourceManager::DestroyResource(CD3DResourceManager *this, struct CD3DResource *a2)
{
  struct CD3DResource **v4; // rdx
  struct CD3DResource **v5; // rcx

  (*(void (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 8LL))(a2);
  if ( (*(int (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 24LL))(a2) >= 0 )
    CD3DResource::Invalidate(a2);
  if ( *((_BYTE *)a2 + 116) )
  {
    if ( *((_BYTE *)a2 + 117) )
      CD2DContext::RemoveHwProtectedResource((CD2DContext *)(*((_QWORD *)this + 10) + 16LL));
    --*((_DWORD *)this + 18);
  }
  (*(void (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 112LL))(a2);
  *((_QWORD *)a2 + 5) = 0LL;
  v4 = (struct CD3DResource **)*((_QWORD *)a2 + 12);
  if ( v4[1] != (struct CD3DResource *)((char *)a2 + 96)
    || (v5 = (struct CD3DResource **)*((_QWORD *)a2 + 13), *v5 != (struct CD3DResource *)((char *)a2 + 96)) )
  {
    __fastfail(3u);
  }
  *v5 = (struct CD3DResource *)v4;
  v4[1] = (struct CD3DResource *)v5;
  *((_DWORD *)this + 12) -= *((_DWORD *)a2 + 28);
  (*(void (__fastcall **)(struct CD3DResource *))(*(_QWORD *)a2 + 16LL))(a2);
}
