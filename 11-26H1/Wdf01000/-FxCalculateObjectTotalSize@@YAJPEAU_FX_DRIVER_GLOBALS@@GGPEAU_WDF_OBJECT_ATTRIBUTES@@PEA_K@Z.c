/*
 * XREFs of ?FxCalculateObjectTotalSize@@YAJPEAU_FX_DRIVER_GLOBALS@@GGPEAU_WDF_OBJECT_ATTRIBUTES@@PEA_K@Z @ 0x140026D7C
 * Callers:
 *     ?InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x140082F00 (-InitializeLookaside@FxLookasideList@@IEAAJGGPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     VfAllocateContext @ 0x1400E3224 (VfAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 */

__int64 __fastcall FxCalculateObjectTotalSize(
        _FX_DRIVER_GLOBALS *FxDriverGlobals,
        unsigned __int16 RawObjectSize,
        unsigned __int16 ExtraSize,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int64 *Total)
{
  unsigned __int64 flags; // r10
  __int64 level; // rsi
  __int64 v8; // rbp
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned int v10; // edx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  unsigned __int64 v13; // r9
  unsigned int id; // ebx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rcx
  bool v18; // cf
  const _GUID *v20; // [rsp+20h] [rbp-38h]

  flags = 0LL;
  level = ExtraSize;
  v8 = RawObjectSize;
  if ( Attributes )
  {
    ContextTypeInfo = Attributes->ContextTypeInfo;
    if ( ContextTypeInfo )
    {
      flags = Attributes->ContextSizeOverride;
      if ( !flags )
        flags = ContextTypeInfo->ContextSize;
    }
  }
  LOBYTE(v10) = -16;
  v11 = -1LL;
  v12 = ((v8 + 15) & 0xFFF0) + ((level + 15) & 0xFFF0);
  v13 = v12 + 48;
  if ( v12 + 48 < v12 )
  {
    *Total = -1LL;
    id = -1073741675;
    goto LABEL_18;
  }
  id = 0;
  *Total = v13;
  v10 = -1073741675;
  if ( !flags )
    goto LABEL_11;
  v15 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
  if ( v15 >= flags )
  {
    v16 = v13 + v15;
    v17 = -1LL;
    v18 = v16 < v13;
    if ( v16 >= v13 )
      v17 = v16;
    *Total = v17;
    v13 = v17;
    id = v18 ? 0xC0000095 : 0;
    if ( !v18 )
    {
LABEL_11:
      if ( !FxDriverGlobals->FxVerifierHandle )
        return id;
      if ( v13 + 48 >= v13 )
        v11 = v13 + 48;
      id = v13 + 48 < v13 ? 0xC0000095 : 0;
      *Total = v11;
      if ( v13 + 48 >= v13 )
        return id;
    }
LABEL_18:
    WPP_IFR_SF_DDid(FxDriverGlobals, v10, v11, v13, v20, v8, level, flags, id);
    return id;
  }
  return v10;
}
