/*
 * XREFs of ?GetInputSiteForLeafmostViewFromInputSiteList@InputSiteManager@@SA?AV?$ComPtr@VInputSite@@@WRL@Microsoft@@AEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x1800169C0
 * Callers:
 *     ?GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV?$vector@V?$ComPtr@VInputSite@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@@Z @ 0x180014B50 (-GetViewInstanceIdFromInputSiteList@InputSiteManager@@SAIAEBV-$vector@V-$ComPtr@VInputSite@@@WRL.c)
 *     ?HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContext@@PEAUIInputBuffer@@PEAPEAUIInputTarget@@@Z @ 0x180014BD0 (-HitTest@DWMInputRouter@@UEAAJPEAU_InputHitTestRequest@@PEAU_InputHitTestResult@@PEAVInputContex.c)
 * Callees:
 *     ?GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ @ 0x18005F430 (-GetWeakInputSinkHandle@LegacyInputSinkData@@QEBAPEAXXZ.c)
 *     ?_Throw_bad_optional_access@std@@YAXXZ @ 0x180098FD8 (-_Throw_bad_optional_access@std@@YAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 *__fastcall InputSiteManager::GetInputSiteForLeafmostViewFromInputSiteList(__int64 *a1, __int64 **a2)
{
  __int64 *v3; // rbx
  __int64 *v4; // rdi
  __int64 v6; // rax
  _QWORD *v7; // r14
  __int64 v8; // rbx
  __int64 v9; // rcx
  void *WeakInputSinkHandle; // rax
  int v11; // [rsp+68h] [rbp+10h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h]

  *a1 = 0LL;
  v3 = *a2;
  v4 = a2[1];
  while ( 1 )
  {
    if ( v3 == v4 )
      return a1;
    v6 = *v3;
    if ( *(_BYTE *)(*v3 + 480) )
    {
      v7 = (_QWORD *)(v6 + 64);
      if ( !*(_BYTE *)(v6 + 68) )
      {
        v11 = 0;
        WeakInputSinkHandle = LegacyInputSinkData::GetWeakInputSinkHandle((LegacyInputSinkData *)(v6 + 48));
        NtQueryCompositionInputSinkViewId(WeakInputSinkHandle, &v11);
        LODWORD(v12) = v11;
        BYTE4(v12) = 1;
        *v7 = v12;
      }
      if ( *(_DWORD *)v7 )
        break;
    }
    ++v3;
  }
  v8 = *v3;
  if ( *a1 == v8 )
    return a1;
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
  v9 = *a1;
  *a1 = v8;
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  return a1;
}
