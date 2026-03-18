/*
 * XREFs of ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x140043DAC
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x140044670 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x140038ED8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     WPP_IFR_SF_qqq @ 0x140039C38 (WPP_IFR_SF_qqq.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140043B90 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x140047130 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_ @ 0x14004B128 (WPP_IFR_SF_.c)
 *     ?_ComputeRelationsSize@FxChildList@@SA_KK@Z @ 0x140078800 (-_ComputeRelationsSize@FxChildList@@SA_KK@Z.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008C6EC (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x14008CA9C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     memmove @ 0x1400AD500 (memmove.c)
 */

__int64 __fastcall FxChildList::ProcessBusRelations(FxChildList *this, _LIST_ENTRY **DeviceRelations)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _DEVICE_RELATIONS *v4; // r15
  KIRQL v5; // al
  _LIST_ENTRY *p_m_DescriptionListHead; // r13
  unsigned int v7; // r12d
  char v8; // bp
  _LIST_ENTRY *Flink; // rbx
  KIRQL v10; // r14
  _LIST_ENTRY *_a3; // r14
  char v12; // r13
  int v13; // ebp
  unsigned __int8 v14; // r12
  KIRQL v15; // al
  KIRQL v16; // bl
  unsigned __int8 v17; // r8
  unsigned __int64 v19; // rax
  _LIST_ENTRY *v20; // rbx
  FxChildList *v21; // r13
  _DEVICE_OBJECT *v22; // rbx
  _LIST_ENTRY *v23; // rcx
  const void *_a1; // rdx
  _LIST_ENTRY *v25; // rcx
  const void *v26; // rdx
  _LIST_ENTRY *v27; // rbx
  _LIST_ENTRY *v28; // rbp
  _LIST_ENTRY *v29; // rcx
  const void *v30; // rdx
  const void *v31; // rcx
  const void *v32; // rbx
  const void *v33; // rax
  _LIST_ENTRY *v34; // rbx
  int v35; // eax
  _LIST_ENTRY *v36; // rcx
  const void *v37; // rdx
  _LIST_ENTRY *v38; // rcx
  const void *v39; // rdx
  _LIST_ENTRY *v40; // rax
  const void *v41; // rdx
  _LIST_ENTRY *v42; // rcx
  const void *v43; // rdx
  const void *v44; // rcx
  size_t v45; // rax
  _LIST_ENTRY *v46; // rcx
  const void *v47; // rdx
  _LIST_ENTRY *v48; // rcx
  const void *v49; // rdx
  PVOID *Objects; // rbx
  __int64 Count; // rdi
  unsigned __int8 invalidateRelations; // [rsp+40h] [rbp-78h] BYREF
  KIRQL v53; // [rsp+41h] [rbp-77h]
  int v54; // [rsp+44h] [rbp-74h]
  _DEVICE_RELATIONS *Pool2; // [rsp+48h] [rbp-70h]
  _LIST_ENTRY *v56; // [rsp+50h] [rbp-68h]
  _LIST_ENTRY freeHead; // [rsp+58h] [rbp-60h] BYREF
  char v58; // [rsp+C0h] [rbp+8h]
  char v60; // [rsp+D0h] [rbp+18h]
  KIRQL NewIrql; // [rsp+D8h] [rbp+20h]
  KIRQL NewIrqla; // [rsp+D8h] [rbp+20h]

  FxVerifierCheckIrqlLevel(this->m_Globals, 0);
  m_Globals = this->m_Globals;
  freeHead.Blink = &freeHead;
  v58 = 0;
  invalidateRelations = 0;
  v4 = 0LL;
  v60 = 1;
  freeHead.Flink = &freeHead;
  v5 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  p_m_DescriptionListHead = &this->m_DescriptionListHead;
  NewIrql = 0;
  v7 = 0;
  v53 = v5;
  v8 = 0;
  this->m_State = ListLockedForEnum;
  Flink = this->m_DescriptionListHead.Flink;
  v10 = v5;
  if ( Flink != &this->m_DescriptionListHead )
  {
    do
    {
      if ( LODWORD(Flink[1].Flink) == 1 || LODWORD(Flink[1].Flink) == 2 )
      {
        ++v7;
      }
      else if ( LODWORD(Flink[1].Flink) == 4 )
      {
        if ( m_Globals->FxVerboseOn )
        {
          v23 = Flink[4].Flink;
          _a1 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v23->Blink) )
            _a1 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x22u, WPP_FxChildList_cpp_Traceguids, _a1, v23[9].Flink);
        }
        v8 = 1;
      }
      Flink = Flink->Flink;
    }
    while ( Flink != p_m_DescriptionListHead );
    v10 = v53;
    NewIrql = v8;
  }
  KeReleaseSpinLock(&this->m_ListLock, v10);
  _a3 = *DeviceRelations;
  v56 = *DeviceRelations;
  if ( v7 )
  {
    if ( _a3 )
      v7 += LODWORD(_a3->Flink);
  }
  else
  {
    if ( !v8 )
    {
      if ( m_Globals->FxVerboseOn )
      {
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v31 = 0LL;
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x24u, WPP_FxChildList_cpp_Traceguids, v31);
      }
LABEL_5:
      v12 = 0;
      v13 = -1073741637;
LABEL_6:
      v14 = v58;
      goto $Done_17;
    }
    if ( _a3 )
    {
      v27 = p_m_DescriptionListHead->Flink;
      if ( p_m_DescriptionListHead->Flink != p_m_DescriptionListHead )
      {
        v4 = 0LL;
        do
        {
          v28 = v27->Flink;
          if ( LODWORD(v27[1].Flink) == 4 )
          {
            v29 = v27[4].Flink;
            v30 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v29->Blink) )
              v30 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x23u, WPP_FxChildList_cpp_Traceguids, v30, v29[9].Flink);
            LODWORD(v27[1].Flink) = 3;
            BYTE3(v27[5].Flink) = 1;
          }
          v27 = v28;
        }
        while ( v28 != p_m_DescriptionListHead );
        _a3 = v56;
      }
      goto LABEL_5;
    }
  }
  v19 = FxChildList::_ComputeRelationsSize(v7);
  Pool2 = (_DEVICE_RELATIONS *)ExAllocatePool2(256LL, v19, m_Globals->Tag);
  v4 = Pool2;
  if ( !Pool2 )
  {
    WPP_IFR_SF_D(m_Globals, 2u, 0xCu, 0x25u, WPP_FxChildList_cpp_Traceguids, v7);
    ++this->m_EnumRetries;
    v13 = -1073741637;
    v60 = 0;
    v54 = -1073741637;
    if ( this->m_EnumRetries > 3u )
    {
      if ( NewIrql )
      {
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !this->m_ObjectSize )
          v33 = 0LL;
        WPP_IFR_SF_q(m_Globals, 2u, 0xCu, 0x26u, WPP_FxChildList_cpp_Traceguids, v33);
      }
      else
      {
        v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      }
      if ( !this->m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x27u, WPP_FxChildList_cpp_Traceguids, v32, 3);
    }
    else
    {
      v58 = 1;
    }
    if ( _a3 )
    {
      v34 = this->m_DescriptionListHead.Flink;
      if ( v34 != p_m_DescriptionListHead )
      {
        do
        {
          v56 = v34->Flink;
          v35 = (int)v34[1].Flink;
          if ( v35 == 2 )
          {
            v38 = v34[4].Flink;
            v39 = (const void *)((unsigned __int64)v38 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v38->Blink) )
              v39 = 0LL;
            WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x28u, WPP_FxChildList_cpp_Traceguids, v39, v38[9].Flink, _a3);
            NewIrqla = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
            if ( this->m_StaticList )
            {
              v42 = v34[4].Flink;
              v43 = (const void *)((unsigned __int64)v42 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v42->Blink) )
                v43 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 3u, 0xCu, 0x2Au, WPP_FxChildList_cpp_Traceguids, v43, v42[9].Flink);
            }
            else if ( FxChildList::ReenumerateEntryLocked(this, (FxDeviceDescriptionEntry *)v34, 1u) )
            {
              v40 = v34[4].Flink;
              v41 = (const void *)((unsigned __int64)v40 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !WORD1(v40->Blink) )
                v41 = 0LL;
              WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x29u, WPP_FxChildList_cpp_Traceguids, v41, v40[9].Flink);
              FxChildList::CloneEntryLocked(this, &freeHead, (FxDeviceDescriptionEntry *)v34, 1u);
            }
            LODWORD(v34[1].Flink) = 3;
            BYTE3(v34[5].Flink) = 1;
            KeReleaseSpinLock(&this->m_ListLock, NewIrqla);
          }
          else if ( v35 == 4 )
          {
            v36 = v34[4].Flink;
            v37 = (const void *)((unsigned __int64)v36 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v36->Blink) )
              v37 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_FxChildList_cpp_Traceguids, v37, v36[9].Flink);
            LODWORD(v34[1].Flink) = 3;
            BYTE3(v34[5].Flink) = 1;
          }
          v34 = v56;
        }
        while ( v56 != p_m_DescriptionListHead );
        v4 = Pool2;
        v13 = v54;
      }
    }
    else
    {
      v13 = -1073741670;
    }
    goto LABEL_69;
  }
  if ( _a3 && LODWORD(_a3->Flink) )
  {
    if ( m_Globals->FxVerboseOn )
    {
      v44 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v44 = 0LL;
      WPP_IFR_SF_qqd(m_Globals, 5u, 0xCu, 0x2Cu, WPP_FxChildList_cpp_Traceguids, v44, _a3, (unsigned int)_a3->Flink);
    }
    v45 = FxChildList::_ComputeRelationsSize((unsigned int)_a3->Flink);
    memmove(Pool2, _a3, v45);
  }
  v13 = 0;
  v20 = this->m_DescriptionListHead.Flink;
  if ( v20 == &this->m_DescriptionListHead )
  {
LABEL_69:
    v12 = v60;
    goto LABEL_6;
  }
  do
  {
    v21 = (FxChildList *)v20->Flink;
    switch ( LODWORD(v20[1].Flink) )
    {
      case 1:
        if ( m_Globals->FxVerboseOn )
          WPP_IFR_SF_(m_Globals, 5u, 0xCu, 0x2Du, WPP_FxChildList_cpp_Traceguids);
        if ( FxChildList::CreateDevice(this, (FxDeviceDescriptionEntry *)v20, &invalidateRelations) )
        {
          v25 = v20[4].Flink;
          v26 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
          if ( !WORD1(v25->Blink) )
            v26 = 0LL;
          WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x2Eu, WPP_FxChildList_cpp_Traceguids, v26, v25[9].Flink);
LABEL_25:
          if ( m_Globals->FxVerboseOn )
          {
            v48 = v20[4].Flink;
            v49 = (const void *)((unsigned __int64)v48 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !WORD1(v48->Blink) )
              v49 = 0LL;
            WPP_IFR_SF_qq(m_Globals, 5u, 0xCu, 0x2Fu, WPP_FxChildList_cpp_Traceguids, v49, v48[9].Flink);
          }
          v22 = (_DEVICE_OBJECT *)v20[4].Flink[9].Flink;
          ObfReferenceObject(v22);
          v4->Objects[v4->Count++] = v22;
        }
        break;
      case 2:
        goto LABEL_25;
      case 4:
        v46 = v20[4].Flink;
        v47 = (const void *)((unsigned __int64)v46 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !WORD1(v46->Blink) )
          v47 = 0LL;
        WPP_IFR_SF_qq(m_Globals, 4u, 0xCu, 0x30u, WPP_FxChildList_cpp_Traceguids, v47, v46[9].Flink);
        LODWORD(v20[1].Flink) = 3;
        BYTE3(v20[5].Flink) = 1;
        break;
    }
    v20 = (_LIST_ENTRY *)v21;
  }
  while ( v21 != (FxChildList *)&this->m_DescriptionListHead );
  v14 = invalidateRelations;
  _a3 = v56;
  v12 = 1;
$Done_17:
  v15 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  this->m_State = ListUnlocked;
  v16 = v15;
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  if ( v13 >= 0 )
    this->m_EnumRetries = 0;
  KeReleaseSpinLock(&this->m_ListLock, v16);
  if ( v14 )
    IoInvalidateDeviceRelations(this->m_DeviceBase->m_PhysicalDevice.m_DeviceObject, BusRelations);
  FxChildList::DrainFreeListHead(this, &freeHead, v17);
  if ( v12 )
  {
    if ( _a3 )
    {
      if ( m_Globals->FxVerboseOn )
        WPP_IFR_SF_q(m_Globals, 5u, 0xCu, 0x31u, WPP_FxChildList_cpp_Traceguids, _a3);
      ExFreePoolWithTag(_a3, 0);
    }
    if ( v13 < 0 && v4 )
    {
      if ( v4->Count )
      {
        Objects = (PVOID *)v4->Objects;
        Count = v4->Count;
        do
        {
          ObfDereferenceObject(*Objects++);
          --Count;
        }
        while ( Count );
      }
      ExFreePoolWithTag(v4, 0);
      v4 = 0LL;
    }
    *DeviceRelations = (_LIST_ENTRY *)v4;
  }
  return (unsigned int)v13;
}
