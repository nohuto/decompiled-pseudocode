/*
 * XREFs of imp_WdfObjectAllocateContext @ 0x140023DD0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

__int64 __fastcall imp_WdfObjectAllocateContext(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        unsigned __int64 Handle,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        void **Context)
{
  __int64 v6; // rax
  unsigned __int16 *v7; // rbx
  _FX_DRIVER_GLOBALS *v8; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rcx
  unsigned int v10; // r8d
  unsigned int RefCount; // edx
  FxTagTracker *v12; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  __int64 v14; // r8
  unsigned __int64 flags; // rcx
  unsigned __int64 v16; // r9
  int id; // esi
  unsigned __int64 v18; // r11
  unsigned __int64 v19; // rax
  void *v20; // rax
  unsigned int v21; // ecx
  _OWORD *v22; // rax
  _QWORD *v23; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v24; // rax
  unsigned __int64 ContextSizeOverride; // r8
  _QWORD *v26; // rsi
  __int64 v27; // rax
  KIRQL v28; // dl
  volatile __int64 *v29; // rcx
  int v30; // esi
  void (__fastcall *EvtCleanupCallback)(void *); // rax
  unsigned int v32; // ebx
  unsigned __int64 v34; // rax
  unsigned __int64 v35; // rax
  const _GUID *RefType; // [rsp+20h] [rbp-50h]
  FxPoolTypeOrPoolFlags v37; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+98h] [rbp+28h]
  unsigned int Tag; // [rsp+A8h] [rbp+38h] BYREF

  if ( !Handle )
    FxVerifierNullBugCheck((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], retaddr);
  LOWORD(v6) = 0;
  v7 = (unsigned __int16 *)(~Handle & 0xFFFFFFFFFFFFFFF8uLL);
  if ( (Handle & 1) != 0 )
  {
    v6 = *v7;
    v7 = (unsigned __int16 *)((char *)v7 - v6);
  }
  v8 = (_FX_DRIVER_GLOBALS *)*((_QWORD *)v7 + 2);
  if ( (_WORD)v6 )
  {
    v32 = -1073741767;
    WPP_IFR_SF_qd(v8, 3u, 0xBu, 0xEu, WPP_HandleAPI_cpp_Traceguids, (const void *)Handle, -1073741767);
    return v32;
  }
  WdfBindInfo = v8->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
    v10 = 9;
  else
    v10 = 8;
  Tag = FxValidateObjectAttributes(*((_FX_DRIVER_GLOBALS **)v7 + 2), Attributes, v10);
  if ( (Tag & 0x80000000) == 0 )
  {
    if ( !Attributes->ContextTypeInfo )
    {
      Tag = -1073741773;
      WPP_IFR_SF_qd(v8, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, -1073741773);
      return Tag;
    }
    RefCount = _InterlockedIncrement((volatile signed __int32 *)v7 + 3);
    if ( *((char *)v7 + 24) < 0 )
    {
      v12 = (FxTagTracker *)*((_QWORD *)v7 - 6);
      if ( v12 )
        FxTagTracker::UpdateTagHistory(
          v12,
          &Tag,
          519,
          "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp",
          TagAddRef,
          RefCount);
    }
    ContextTypeInfo = Attributes->ContextTypeInfo;
    v14 = -1LL;
    flags = 0LL;
    if ( ContextTypeInfo )
    {
      flags = Attributes->ContextSizeOverride;
      if ( flags )
      {
LABEL_47:
        v34 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v34 < flags )
        {
          Tag = -1073741675;
LABEL_44:
          (*(void (__fastcall **)(unsigned __int16 *, unsigned int *, __int64, const char *))(*(_QWORD *)v7 + 16LL))(
            v7,
            &Tag,
            554LL,
            "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
          return Tag;
        }
        v35 = v34 + 48;
        v16 = -1LL;
        if ( v35 >= 0x30 )
          v16 = v35;
        id = v35 < 0x30 ? 0xC0000095 : 0;
LABEL_18:
        v18 = v16;
        if ( id < 0 )
          goto LABEL_56;
        if ( !v8->FxVerifierHandle )
          goto LABEL_23;
        v19 = v16 + 48;
        if ( v16 + 48 >= v16 )
          v14 = v16 + 48;
        v16 = v14;
        id = v19 < v18 ? 0xC0000095 : 0;
        if ( v19 < v18 )
        {
LABEL_56:
          WPP_IFR_SF_DDid(v8, 0x95u, v14, v16, RefType, 0, 0, flags, id);
          Tag = id;
        }
        else
        {
LABEL_23:
          v20 = retaddr;
          Tag = id;
          v21 = v8->Tag;
          *(_QWORD *)&v37.UsePoolType = 0LL;
          v37.u.PoolFlags = 64LL;
          if ( !v8->FxPoolTrackingOn )
            v20 = 0LL;
          v22 = FxPoolAllocator(v8, &v8->FxPoolFrameworks, &v37, v16, v21, v20);
          v23 = v22;
          if ( v22 )
          {
            *v22 = 0LL;
            v22[1] = 0LL;
            v22[2] = 0LL;
            *(_QWORD *)v22 = v7;
            v24 = Attributes->ContextTypeInfo;
            if ( v24 )
            {
              ContextSizeOverride = Attributes->ContextSizeOverride;
              if ( !ContextSizeOverride )
                ContextSizeOverride = v24->ContextSize;
              memset(v23 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            v26 = 0LL;
            v23[4] = Attributes->ContextTypeInfo;
            v27 = v7[5];
            if ( (_WORD)v27 )
              v26 = (_QWORD *)((char *)v7 + v27);
            v28 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)v7 + 7);
            if ( v7[13] == 1 && v26 )
            {
              v29 = v26 + 1;
              while ( v26 )
              {
                if ( v26[4] == v23[4] )
                {
                  if ( Context )
                    *Context = v26 + 6;
                  v30 = 0x40000000;
                  goto LABEL_42;
                }
                v29 = v26 + 1;
                v26 = (_QWORD *)v26[1];
              }
              v30 = 0;
              _InterlockedExchange64(v29, (__int64)v23);
              if ( Context )
                *Context = v23 + 6;
              v23[3] = Attributes->EvtDestroyCallback;
              EvtCleanupCallback = Attributes->EvtCleanupCallback;
              if ( EvtCleanupCallback )
              {
                v23[2] = EvtCleanupCallback;
                v7[12] |= 0x400u;
              }
            }
            else
            {
              v30 = -1073741738;
            }
LABEL_42:
            KeReleaseSpinLock((PKSPIN_LOCK)v7 + 7, v28);
            Tag = v30;
            if ( v30 )
              FxPoolFree(v23);
          }
          else
          {
            Tag = -1073741670;
          }
        }
        goto LABEL_44;
      }
      flags = ContextTypeInfo->ContextSize;
    }
    v16 = 48LL;
    id = 0;
    if ( !flags )
      goto LABEL_18;
    goto LABEL_47;
  }
  return Tag;
}
