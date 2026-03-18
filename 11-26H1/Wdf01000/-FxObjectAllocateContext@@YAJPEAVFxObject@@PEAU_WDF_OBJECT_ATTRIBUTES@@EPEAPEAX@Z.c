/*
 * XREFs of ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1400241D0
 * Callers:
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x140048B50 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfCxDeviceInitAllocateContext @ 0x140093100 (imp_WdfCxDeviceInitAllocateContext.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z @ 0x1400205B8 (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEBDW4FxTagRefType@@K@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x14002C910 (-FxPoolFree@@YAXPEAX@Z.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 */

int __fastcall FxObjectAllocateContext(
        FxObject *Object,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        unsigned __int8 AllowCallbacksOnly,
        void **Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rbx
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int v10; // r8d
  int result; // eax
  unsigned int RefCount; // edx
  int v13; // esi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 flags; // rcx
  __int64 v16; // r8
  int id; // edi
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // r10
  unsigned __int64 v21; // rax
  unsigned int Tag; // ecx
  void *v23; // rax
  _QWORD *v24; // rax
  _QWORD *v25; // rdi
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v26; // rax
  unsigned __int64 ContextSizeOverride; // r8
  __int64 m_ObjectSize; // rax
  _QWORD *v29; // rbx
  KIRQL v30; // dl
  volatile __int64 *v31; // rcx
  void (__fastcall *EvtCleanupCallback)(void *); // rax
  unsigned __int64 v33; // rax
  unsigned __int64 v34; // rax
  FxTagTracker *m_Lock; // rcx
  const _GUID *RefType; // [rsp+20h] [rbp-78h]
  FxPoolTypeOrPoolFlags v37; // [rsp+60h] [rbp-38h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  int status; // [rsp+A0h] [rbp+8h] BYREF

  m_Globals = Object->m_Globals;
  WdfBindInfo = m_Globals->WdfBindInfo;
  if ( WdfBindInfo->Version.Major > 1 || WdfBindInfo->Version.Major == 1 && WdfBindInfo->Version.Minor >= 0xB )
    v10 = 9;
  else
    v10 = 8;
  result = FxValidateObjectAttributes(Object->m_Globals, Attributes, v10);
  status = result;
  if ( result >= 0 )
  {
    if ( !Attributes->ContextTypeInfo && !AllowCallbacksOnly )
    {
      status = -1073741773;
      WPP_IFR_SF_qd(m_Globals, 3u, 0xBu, 0xCu, WPP_HandleAPI_cpp_Traceguids, Attributes, -1073741773);
      return status;
    }
    RefCount = _InterlockedIncrement(&Object->m_Refcnt);
    v13 = 0;
    if ( SLOBYTE(Object->m_ObjectFlags) < 0 )
    {
      m_Lock = (FxTagTracker *)Object[-1].m_SpinLock.m_Lock;
      if ( m_Lock )
        FxTagTracker::UpdateTagHistory(
          m_Lock,
          &status,
          519,
          "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp",
          TagAddRef,
          RefCount);
    }
    ContextTypeInfo = Attributes->ContextTypeInfo;
    flags = 0LL;
    v16 = -1LL;
    if ( ContextTypeInfo )
    {
      flags = Attributes->ContextSizeOverride;
      if ( flags )
      {
LABEL_40:
        v33 = (flags + 7) & 0xFFFFFFFFFFFFFFF8uLL;
        if ( v33 < flags )
        {
          status = -1073741675;
          goto LABEL_37;
        }
        v34 = v33 + 48;
        v18 = -1LL;
        if ( v34 >= 0x30 )
          v18 = v34;
        id = v34 < 0x30 ? 0xC0000095 : 0;
LABEL_12:
        v19 = v18;
        v20 = v18;
        if ( id < 0 )
          goto LABEL_54;
        if ( !m_Globals->FxVerifierHandle )
          goto LABEL_17;
        v21 = v18 + 48;
        if ( v18 + 48 >= v18 )
          v16 = v18 + 48;
        v18 = v16;
        id = v21 < v20 ? 0xC0000095 : 0;
        if ( v21 < v19 )
        {
LABEL_54:
          WPP_IFR_SF_DDid(m_Globals, v19, v16, v18, RefType, 0, 0, flags, id);
          status = id;
        }
        else
        {
LABEL_17:
          status = id;
          Tag = m_Globals->Tag;
          *(_QWORD *)&v37.UsePoolType = 0LL;
          v37.u.PoolFlags = 64LL;
          if ( m_Globals->FxPoolTrackingOn )
            v23 = retaddr;
          else
            v23 = 0LL;
          v24 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v37, v18, Tag, v23);
          v25 = v24;
          if ( v24 )
          {
            v24[1] = 0LL;
            v24[2] = 0LL;
            v24[3] = 0LL;
            v24[4] = 0LL;
            v24[5] = 0LL;
            *v24 = Object;
            v26 = Attributes->ContextTypeInfo;
            if ( v26 )
            {
              ContextSizeOverride = Attributes->ContextSizeOverride;
              if ( !ContextSizeOverride )
                ContextSizeOverride = v26->ContextSize;
              memset(v25 + 6, 0, (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL);
            }
            v25[4] = Attributes->ContextTypeInfo;
            m_ObjectSize = Object->m_ObjectSize;
            if ( (_WORD)m_ObjectSize )
              v29 = (FxObject_vtbl **)((char *)&Object->__vftable + m_ObjectSize);
            else
              v29 = 0LL;
            v30 = KeAcquireSpinLockRaiseToDpc(&Object->m_SpinLock.m_Lock);
            if ( Object->m_ObjectState == 1 && v29 )
            {
              v31 = v29 + 1;
              while ( v29 )
              {
                if ( v29[4] == v25[4] )
                {
                  if ( Context )
                    *Context = v29 + 6;
                  v13 = 0x40000000;
                  goto LABEL_36;
                }
                v31 = v29 + 1;
                v29 = (_QWORD *)v29[1];
              }
              _InterlockedExchange64(v31, (__int64)v25);
              if ( Context )
                *Context = v25 + 6;
              v25[3] = Attributes->EvtDestroyCallback;
              EvtCleanupCallback = Attributes->EvtCleanupCallback;
              if ( EvtCleanupCallback )
              {
                v25[2] = EvtCleanupCallback;
                Object->m_ObjectFlags |= 0x400u;
              }
LABEL_36:
              KeReleaseSpinLock(&Object->m_SpinLock.m_Lock, v30);
              status = v13;
              if ( !v13 )
                goto LABEL_37;
            }
            else
            {
              KeReleaseSpinLock(&Object->m_SpinLock.m_Lock, v30);
              status = -1073741738;
            }
            FxPoolFree(v25);
          }
          else
          {
            status = -1073741670;
          }
        }
LABEL_37:
        Object->Release(Object, &status, 554, "minkernel\\wdf\\framework\\shared\\object\\handleapi.cpp");
        return status;
      }
      flags = ContextTypeInfo->ContextSize;
    }
    id = 0;
    v18 = 48LL;
    if ( !flags )
      goto LABEL_12;
    goto LABEL_40;
  }
  return result;
}
