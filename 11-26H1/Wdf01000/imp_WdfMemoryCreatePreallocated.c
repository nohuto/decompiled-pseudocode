/*
 * XREFs of imp_WdfMemoryCreatePreallocated @ 0x140023940
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qDqD @ 0x140010ADC (WPP_IFR_SF_qDqD.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x140012780 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     ?FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z @ 0x140025E70 (-FxPoolAllocator@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@PEAUFX_POOL@@UFxPoolTypeOrPoolFlags@@_KKPEAX@Z.c)
 *     WPP_IFR_SF_DDid @ 0x1400262E0 (WPP_IFR_SF_DDid.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?AllocateTagTracker@FxObject@@IEAAXG@Z @ 0x1400808CC (-AllocateTagTracker@FxObject@@IEAAXG@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z @ 0x140083318 (-FxVerifierBugCheckWorker@@YAXPEAU_FX_DRIVER_GLOBALS@@W4_WDF_BUGCHECK_CODES@@_K2@Z.c)
 *     WPP_IFR_SF_qddd @ 0x140086668 (WPP_IFR_SF_qddd.c)
 *     _guard_dispatch_icall @ 0x1400ACF10 (_guard_dispatch_icall.c)
 *     memset @ 0x1400ACFC0 (memset.c)
 *     ?Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x1400E58C4 (-Vf_VerifyConstruct@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 */

int __fastcall imp_WdfMemoryCreatePreallocated(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        _FX_DRIVER_GLOBALS *Buffer,
        unsigned __int64 BufferSize,
        WDFMEMORY__ **PMemory)
{
  int id; // ebx
  _FX_DRIVER_GLOBALS *m_Globals; // rdi
  unsigned __int64 ParentObject; // r14
  __int64 v11; // rax
  FxObject *flags; // rbx
  WDFMEMORY__ **v13; // r15
  int result; // eax
  unsigned int Tag; // r12d
  __int64 v16; // rdx
  unsigned __int64 ContextSizeOverride; // rcx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *ContextTypeInfo; // rax
  unsigned __int64 v19; // r14
  unsigned int v20; // r8d
  unsigned __int64 v21; // r9
  unsigned __int64 v22; // rax
  bool v23; // zf
  void *v24; // rax
  _OWORD *v25; // rax
  _FX_DRIVER_GLOBALS *v26; // rdx
  FxObject *v27; // rbx
  const _WDF_OBJECT_CONTEXT_TYPE_INFO *v28; // rax
  unsigned __int64 ContextSize; // r8
  _FX_DRIVER_GLOBALS *v30; // rax
  int v31; // edi
  unsigned __int64 v32; // rax
  unsigned __int64 v33; // rax
  FxObject_vtbl *v34; // rax
  unsigned __int8 v35; // dl
  unsigned int v36; // r8d
  unsigned __int16 v37; // r9
  const _GUID *AssignDriverAsDefaultParent; // [rsp+20h] [rbp-50h]
  WDFMEMORY__ *hMemory; // [rsp+50h] [rbp-20h] BYREF
  FxPoolTypeOrPoolFlags v40; // [rsp+60h] [rbp-10h] BYREF
  void *retaddr; // [rsp+A8h] [rbp+38h]
  FxObject *pParent; // [rsp+B8h] [rbp+48h] BYREF
  _FX_DRIVER_GLOBALS *v43; // [rsp+C0h] [rbp+50h]

  v43 = Buffer;
  id = 0;
  m_Globals = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  hMemory = 0LL;
  if ( Attributes )
  {
    if ( Attributes->Size == 56 )
    {
      ParentObject = (unsigned __int64)Attributes->ParentObject;
      if ( ParentObject )
      {
        LOWORD(v11) = 0;
        flags = (FxObject *)(~ParentObject & 0xFFFFFFFFFFFFFFF8uLL);
        if ( (ParentObject & 1) != 0 )
        {
          v11 = LOWORD(flags->__vftable);
          flags = (FxObject *)((char *)flags - v11);
        }
        if ( flags->m_Type == 4096 )
        {
          pParent = flags;
        }
        else
        {
          WORD1(v40.u.PoolFlags) = v11;
          *(_QWORD *)&v40.UsePoolType = &pParent;
          HIDWORD(v40.u.PoolFlags) = 0;
          pParent = 0LL;
          v34 = flags->__vftable;
          LOWORD(v40.u.PoolType) = 4096;
          if ( v34->QueryInterface(flags, (FxQueryInterfaceParams *)&v40) < 0 )
          {
            WPP_IFR_SF_qDqD(
              flags->m_Globals,
              v35,
              v36,
              v37,
              AssignDriverAsDefaultParent,
              (const void *)ParentObject,
              0x1000u,
              flags,
              flags->m_Type);
            FxVerifierBugCheckWorker(flags->m_Globals, WDF_INVALID_HANDLE, ParentObject, 0x1000uLL);
          }
          flags = pParent;
        }
        m_Globals = flags->m_Globals;
        id = 0;
      }
    }
    else
    {
      WPP_IFR_SF_qddd(
        (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
        (unsigned __int8)Attributes,
        6u,
        0xBu,
        WPP_FxValidateFunctions_hpp_Traceguids,
        Attributes,
        56,
        Attributes->Size,
        -1073741820);
    }
  }
  if ( !Buffer )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  v13 = PMemory;
  if ( !PMemory )
    FxVerifierNullBugCheck(m_Globals, retaddr);
  *PMemory = 0LL;
  if ( !BufferSize )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0x12u, 0xAu, WPP_FxMemoryBufferPreallocatedAPI_cpp_Traceguids, 0xC000000D);
    return -1073741811;
  }
  result = FxValidateObjectAttributes(m_Globals, Attributes, 0);
  if ( result >= 0 )
  {
    Tag = m_Globals->Tag;
    v16 = -1LL;
    v40.u.PoolFlags = 64LL;
    ContextSizeOverride = 0LL;
    if ( Attributes )
    {
      ContextTypeInfo = Attributes->ContextTypeInfo;
      if ( ContextTypeInfo )
      {
        ContextSizeOverride = Attributes->ContextSizeOverride;
        if ( ContextSizeOverride )
        {
LABEL_44:
          v32 = (ContextSizeOverride + 7) & 0xFFFFFFFFFFFFFFF8uLL;
          if ( v32 < ContextSizeOverride )
            return -1073741670;
          v33 = v32 + 176;
          v19 = -1LL;
          if ( v33 >= 0xB0 )
            v19 = v33;
          id = v33 < 0xB0 ? 0xC0000095 : 0;
LABEL_18:
          v20 = v19;
          v21 = v19;
          if ( id < 0 )
            goto LABEL_53;
          if ( m_Globals->FxVerifierHandle )
          {
            v22 = v19 + 48;
            if ( v19 + 48 >= v19 )
              v16 = v19 + 48;
            v19 = v16;
            id = v22 < v21 ? 0xC0000095 : 0;
            if ( v22 < v21 )
LABEL_53:
              WPP_IFR_SF_DDid(m_Globals, v16, v20, v21, AssignDriverAsDefaultParent, 0x80u, 0, ContextSizeOverride, id);
          }
          if ( id >= 0 )
          {
            v23 = m_Globals->FxPoolTrackingOn == 0;
            *(_QWORD *)&v40.UsePoolType = 0LL;
            v40.u.PoolFlags = 64LL;
            if ( v23 )
              v24 = 0LL;
            else
              v24 = retaddr;
            v25 = FxPoolAllocator(m_Globals, &m_Globals->FxPoolFrameworks, &v40, v19, Tag, v24);
            v27 = (FxObject *)v25;
            if ( v25 )
            {
              if ( m_Globals->FxVerifierHandle )
              {
                v27 = (FxObject *)(v25 + 3);
                *v25 = 0LL;
                v25[1] = 0LL;
                v25[2] = 0LL;
                *((_DWORD *)v25 + 8) = 1146058822;
              }
              *(_OWORD *)&v27[1].m_ObjectFlags = 0LL;
              *(_OWORD *)&v27[1].m_ChildListHead.Blink = 0LL;
              *(_OWORD *)&v27[1].m_SpinLock.m_Lock = 0LL;
              *(_QWORD *)&v27[1].m_ObjectFlags = v27;
              if ( Attributes )
              {
                v28 = Attributes->ContextTypeInfo;
                if ( v28 )
                {
                  ContextSize = Attributes->ContextSizeOverride;
                  if ( !ContextSize )
                    ContextSize = v28->ContextSize;
                  memset(&v27[1].m_ChildEntry, 0, (ContextSize + 7) & 0xFFFFFFFFFFFFFFF8uLL);
                }
                v27[1].m_SpinLock.m_Lock = (unsigned __int64)Attributes->ContextTypeInfo;
              }
            }
            if ( v27 )
            {
              v27->m_Globals = m_Globals;
              v27->__vftable = (FxObject_vtbl *)FxObject::`vftable';
              *(_DWORD *)&v27->m_Type = 8392704;
              v27->m_SpinLock.m_Lock = 0LL;
              v27->m_SpinLock.m_DbgFlagIsInitialized = 1;
              v27->m_Refcnt = 1;
              *(_DWORD *)&v27->m_ObjectFlags = 0x10000;
              v27->m_ParentObject = 0LL;
              v27->m_ChildListHead.Blink = &v27->m_ChildListHead;
              v27->m_ChildListHead.Flink = &v27->m_ChildListHead;
              v27->m_ChildEntry.Blink = &v27->m_ChildEntry;
              v27->m_ChildEntry.Flink = &v27->m_ChildEntry;
              v30 = v27->m_Globals;
              v27->m_DisposeSingleEntry.Next = 0LL;
              v27->m_DeviceBase = 0LL;
              if ( v30->FxVerifierOn )
                FxObject::Vf_VerifyConstruct(v27, v26, 0);
              *(_QWORD *)&v27[1].m_Type = BufferSize;
              v27->__vftable = (FxObject_vtbl *)FxMemoryObject::`vftable'{for `FxObject'};
              v27[1].__vftable = (FxObject_vtbl *)FxMemoryObject::`vftable'{for `IFxMemory'};
              if ( (v27->m_ObjectFlags & 0x80) != 0 )
                FxObject::AllocateTagTracker(v27, 0x100Au);
              v27->__vftable = (FxObject_vtbl *)FxMemoryBufferPreallocated::`vftable'{for `FxObject'};
              v27[1].__vftable = (FxObject_vtbl *)FxMemoryBufferFromPool::`vftable'{for `IFxMemory'};
              v27[1].m_Globals = v43;
              v31 = FxObject::Commit(v27, Attributes, (void **)&hMemory, 0LL, 1u);
              if ( v31 < 0 )
                FxObject::DeleteFromFailedCreate(v27);
              else
                *v13 = hMemory;
              return v31;
            }
          }
          return -1073741670;
        }
        ContextSizeOverride = ContextTypeInfo->ContextSize;
      }
    }
    v19 = 176LL;
    if ( !ContextSizeOverride )
      goto LABEL_18;
    goto LABEL_44;
  }
  return result;
}
