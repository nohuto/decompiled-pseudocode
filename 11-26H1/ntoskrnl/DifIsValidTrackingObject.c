/*
 * XREFs of DifIsValidTrackingObject @ 0x14064ADB4
 * Callers:
 *     DifObjTrkRemoveItem @ 0x1403ADC70 (DifObjTrkRemoveItem.c)
 *     DifObjTrkInsertItem @ 0x14064AED0 (DifObjTrkInsertItem.c)
 *     DifObjTrkLookupItem @ 0x14064B060 (DifObjTrkLookupItem.c)
 * Callees:
 *     DifIsPluginEnabled @ 0x14064C7D0 (DifIsPluginEnabled.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall DifIsValidTrackingObject(unsigned int a1, unsigned __int64 a2)
{
  __int64 v2; // rdx
  int v3; // r8d
  __int64 v4; // r9
  __int64 v5; // r10
  __int64 v6; // rax
  _DWORD *v7; // rax

  if ( a2 < 0xFFFF800000000000uLL )
    return 3221225659LL;
  if ( !(unsigned __int8)DifIsPluginEnabled(a1) )
    return 3221225659LL;
  v6 = DifPluginSettings[v5];
  if ( !v6 )
    return 3221225659LL;
  v7 = *(_DWORD **)(v6 + 24);
  if ( !v7 )
    return 3221225659LL;
  if ( *v7 )
  {
    if ( v3 && *v7 != v3 )
      return 3221225659LL;
  }
  else if ( !v3 )
  {
    return 3221225659LL;
  }
  if ( v4 && !(unsigned int)guard_dispatch_icall_no_overrides(v4, v2) )
    return 3221225659LL;
  return DifObjTrkInitialized == 0 ? 0xC00000BB : 0;
}
