/*
 * XREFs of ?ReleaseToFrame@CTokenManager@@UEAAXPEAUICompositionFrame@@@Z @ 0x1400224D0
 * Callers:
 *     <none>
 * Callees:
 *     ?ReleaseLock@CPushLock@@QEBAXXZ @ 0x140022000 (-ReleaseLock@CPushLock@@QEBAXXZ.c)
 *     ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x14002206C (-AcquireLockExclusive@CPushLock@@QEAAJXZ.c)
 *     ?ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z @ 0x1400220B4 (-ConsumerDwmApplyUpdates@CFlipManager@@QEAAXPEAU_LIST_ENTRY@@PEAVCCompositionFrame@@@Z.c)
 *     ?GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z @ 0x140022EEC (-GetFlipManagerObjectNoRef@FlipManagerTokenObject@@QEAAJPEAPEAUFlipManagerObject@@@Z.c)
 *     ??_GCTokenQueue@@AEAAPEAXI@Z @ 0x140023F0C (--_GCTokenQueue@@AEAAPEAXI@Z.c)
 *     ?SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z @ 0x140039F40 (-SetSyncRefreshTime@CompositionSurfaceObject@@QEAAX_K@Z.c)
 *     ?DeferDestroyFlipManagerSyncContexts@CAdapterCollection@@QEAAXXZ @ 0x1400A13EC (-DeferDestroyFlipManagerSyncContexts@CAdapterCollection@@QEAAXXZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall CTokenManager::ReleaseToFrame(CTokenManager *this, struct ICompositionFrame *a2)
{
  char v2; // r14
  struct FlipManagerObject *v3; // r12
  __int64 v5; // rax
  ULONG i; // r12d
  _QWORD *ElementGenericTable; // rax
  unsigned int v8; // edx
  _QWORD *v9; // r15
  __int64 v10; // rbx
  bool v11; // cl
  struct FlipManagerObject *v12; // rdi
  struct FlipManagerObject **v13; // rax
  bool v14; // zf
  _QWORD *v15; // r14
  char *v16; // rax
  struct FlipManagerObject **v17; // rcx
  char v18; // r13
  char *v19; // rdi
  char *v20; // rbx
  __int64 v21; // rax
  char *v22; // rax
  struct FlipManagerObject **v23; // rcx
  struct FlipManagerObject *v24; // rax
  _QWORD **v25; // rcx
  _QWORD *v26; // rax
  struct _LIST_ENTRY **v27; // r14
  struct _LIST_ENTRY *v28; // rdi
  _QWORD *v29; // rax
  struct _LIST_ENTRY *v30; // rax
  char v31; // r13
  char *v32; // rbx
  __int64 v33; // rdi
  _QWORD *v34; // rdx
  _QWORD *v35; // rcx
  __int64 v36; // rax
  CTokenQueue *v37; // rcx
  _QWORD *v38; // rdx
  __int64 v39; // rdx
  struct FlipManagerObject *v40; // rdx
  struct FlipManagerObject **v41; // r8
  struct FlipManagerObject *Blink; // r15
  struct _LIST_ENTRY *Flink; // rcx
  struct _LIST_ENTRY *v44; // rax
  struct _LIST_ENTRY *v45; // rax
  struct _LIST_ENTRY *v46; // rbx
  struct _LIST_ENTRY *v47; // rdi
  CPushLock *p_Blink; // rbx
  CFlipManager::PresentHistory **v49; // rdi
  char *v50; // rcx
  char *v51; // rcx
  char **v52; // rdx
  char *v53; // rdx
  struct FlipManagerObject **v54; // rax
  int v55; // ecx
  struct FlipManagerObject **v56; // rcx
  struct FlipManagerObject *v57; // rdx
  struct FlipManagerObject **v58; // r8
  char **v59; // rax
  struct _LIST_ENTRY *v60; // rax
  struct _LIST_ENTRY *v61; // rax
  struct _LIST_ENTRY v62; // [rsp+20h] [rbp-38h] BYREF
  char *v63; // [rsp+30h] [rbp-28h] BYREF
  char *v64; // [rsp+38h] [rbp-20h]
  _QWORD *v65; // [rsp+40h] [rbp-18h] BYREF
  struct _LIST_ENTRY *v66; // [rsp+48h] [rbp-10h]
  char v67; // [rsp+A0h] [rbp+48h]
  struct FlipManagerObject *v68; // [rsp+A8h] [rbp+50h] BYREF
  char v69; // [rsp+B0h] [rbp+58h] BYREF
  bool v70; // [rsp+B8h] [rbp+60h]

  v68 = a2;
  v2 = 0;
  v3 = a2;
  v67 = 0;
  if ( *((_BYTE *)this + 84) )
  {
    CAdapterCollection::DeferDestroyFlipManagerSyncContexts((CTokenManager *)((char *)this + 104));
    *((_BYTE *)this + 84) = 0;
  }
  v5 = *((_QWORD *)this + 23);
  if ( v5 && (*(_QWORD *)(v5 + 2088) != v5 + 16 || *(_DWORD *)(v5 + 32)) )
  {
    *((_QWORD *)v3 + 26) = v5;
    *(_BYTE *)(v5 + 2108) = 1;
    *(_QWORD *)(v5 + 2088) = v5 + 16;
    *((_BYTE *)v3 + 216) = 1;
    *((_QWORD *)this + 23) = 0LL;
  }
  if ( *((_DWORD *)this + 20) )
  {
    for ( i = RtlNumberGenericTableElements((PRTL_GENERIC_TABLE)((char *)this + 192)) - 1; ; --i )
    {
      ElementGenericTable = RtlGetElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), i);
      v9 = ElementGenericTable;
      if ( !ElementGenericTable )
        break;
      v10 = ElementGenericTable[1];
      v11 = 0;
      v70 = 0;
      if ( *(_QWORD *)v10 == v10 )
      {
        ++*(_DWORD *)(v10 + 24);
      }
      else
      {
        while ( 1 )
        {
          while ( 1 )
          {
            v12 = *(struct FlipManagerObject **)(v10 + 8);
            if ( *(_QWORD *)v12 != v10 )
              goto LABEL_22;
            v13 = (struct FlipManagerObject **)*((_QWORD *)v12 + 1);
            if ( *v13 != v12 )
              goto LABEL_22;
            *(_QWORD *)(v10 + 8) = v13;
            *v13 = (struct FlipManagerObject *)v10;
            if ( v12 == (struct FlipManagerObject *)v10 )
            {
              v11 = v70;
              goto LABEL_50;
            }
            v14 = *(_QWORD *)(v10 + 16) == 0LL;
            v15 = (_QWORD *)((char *)v12 - 8);
            v69 = 0;
            if ( !v14 )
            {
              CompositionSurfaceObject::SetSyncRefreshTime((CompositionSurfaceObject *)v15[6], 0LL);
              if ( *(_QWORD **)(v10 + 16) == v15 )
                *(_QWORD *)(v10 + 16) = 0LL;
            }
            if ( (*(int (__fastcall **)(_QWORD *, struct FlipManagerObject *, char *))(*v15 + 32LL))(
                   (_QWORD *)v12 - 1,
                   v68,
                   &v69) >= 0 )
              break;
            (*(void (__fastcall **)(_QWORD *))(*v15 + 56LL))((_QWORD *)v12 - 1);
            (*(void (__fastcall **)(__int64, __int64))*v15)((__int64)v12 - 8, 1LL);
          }
          if ( !v69 )
            break;
          v16 = (char *)v68 + 248;
          v17 = (struct FlipManagerObject **)*((_QWORD *)v68 + 32);
          if ( *v17 != (struct FlipManagerObject *)((char *)v68 + 248) )
            goto LABEL_22;
          *(_QWORD *)v12 = v16;
          *((_QWORD *)v12 + 1) = v17;
          *v17 = v12;
          *((_QWORD *)v16 + 1) = v12;
        }
        v54 = *(struct FlipManagerObject ***)(v10 + 8);
        v55 = *((_DWORD *)v15 + 6);
        if ( *v54 != (struct FlipManagerObject *)v10 )
          goto LABEL_22;
        *(_QWORD *)v12 = v10;
        *((_QWORD *)v12 + 1) = v54;
        *v54 = v12;
        v11 = v55 == 2;
        *(_QWORD *)(v10 + 8) = v12;
LABEL_50:
        v2 = v67;
      }
      v2 |= v11;
      v37 = (CTokenQueue *)v9[1];
      v67 = v2;
      if ( *((_DWORD *)v37 + 6) >= 0x20u )
      {
        if ( v37 )
          CTokenQueue::`scalar deleting destructor'(v37, v8);
        RtlDeleteElementGenericTable((PRTL_GENERIC_TABLE)((char *)this + 192), v9);
      }
    }
    v3 = v68;
    v18 = v2;
  }
  else
  {
    v18 = 1;
  }
  v64 = (char *)&v63;
  v19 = (char *)this + 264;
  v63 = (char *)&v63;
  while ( 1 )
  {
    v20 = *(char **)v19;
    if ( *(char **)(*(_QWORD *)v19 + 8LL) != v19 )
      goto LABEL_22;
    v21 = *(_QWORD *)v20;
    if ( *(char **)(*(_QWORD *)v20 + 8LL) != v20 )
      goto LABEL_22;
    *(_QWORD *)v19 = v21;
    *(_QWORD *)(v21 + 8) = v19;
    if ( v20 == v19 )
      break;
    LOBYTE(v68) = 0;
    if ( (*(int (__fastcall **)(_QWORD *, struct FlipManagerObject *, struct FlipManagerObject **))(*((_QWORD *)v20 - 1)
                                                                                                  + 32LL))(
           (_QWORD *)v20 - 1,
           v3,
           &v68) >= 0 )
    {
      if ( (_BYTE)v68 )
      {
        v56 = (struct FlipManagerObject **)*((_QWORD *)v3 + 34);
        if ( *v56 != (struct FlipManagerObject *)((char *)v3 + 264) )
          goto LABEL_22;
        *(_QWORD *)v20 = (char *)v3 + 264;
        *((_QWORD *)v20 + 1) = v56;
        *v56 = (struct FlipManagerObject *)v20;
        *((_QWORD *)v3 + 34) = v20;
      }
      else
      {
        v59 = (char **)v64;
        if ( *(char ***)v64 != &v63 )
          goto LABEL_22;
        *((_QWORD *)v20 + 1) = v64;
        *(_QWORD *)v20 = &v63;
        *v59 = v20;
        v64 = v20;
      }
    }
    else
    {
      (*(void (__fastcall **)(_QWORD *))(*((_QWORD *)v20 - 1) + 56LL))((_QWORD *)v20 - 1);
      ObfDereferenceObject(v20 - 48);
    }
  }
  v22 = v63;
  if ( v63 != (char *)&v63 )
  {
    if ( *((char ***)v63 + 1) == &v63 )
    {
      v50 = *(char **)v63;
      if ( *(char **)(*(_QWORD *)v63 + 8LL) == v63 )
      {
        v63 = *(char **)v63;
        *((_QWORD *)v50 + 1) = &v63;
        v51 = (char *)this + 264;
        while ( 1 )
        {
          v52 = (char **)*((_QWORD *)this + 34);
          if ( *v52 != v51 )
            break;
          *((_QWORD *)v22 + 1) = v52;
          *(_QWORD *)v22 = v51;
          *v52 = v22;
          *((_QWORD *)this + 34) = v22;
          v22 = v63;
          if ( *((char ***)v63 + 1) != &v63 )
            break;
          v53 = *(char **)v63;
          if ( *(char **)(*(_QWORD *)v63 + 8LL) != v63 )
            break;
          v63 = *(char **)v63;
          *((_QWORD *)v53 + 1) = &v63;
          if ( v22 == (char *)&v63 )
            goto LABEL_29;
        }
      }
    }
LABEL_22:
    __fastfail(3u);
  }
LABEL_29:
  v23 = (struct FlipManagerObject **)((char *)this + 296);
  while ( 1 )
  {
    v24 = *v23;
    if ( *v23 == (struct FlipManagerObject *)v23 )
      break;
    if ( *((struct FlipManagerObject ***)v24 + 1) != v23 )
      goto LABEL_22;
    v40 = *(struct FlipManagerObject **)v24;
    if ( *(struct FlipManagerObject **)(*(_QWORD *)v24 + 8LL) != v24 )
      goto LABEL_22;
    *v23 = v40;
    *((_QWORD *)v40 + 1) = v23;
    v41 = (struct FlipManagerObject **)*((_QWORD *)v3 + 32);
    if ( *v41 != (struct FlipManagerObject *)((char *)v3 + 248) )
      goto LABEL_22;
    *(_QWORD *)v24 = (char *)v3 + 248;
    *((_QWORD *)v24 + 1) = v41;
    *v41 = v24;
    *((_QWORD *)v3 + 32) = v24;
  }
  v25 = (_QWORD **)((char *)this + 312);
  while ( 1 )
  {
    v26 = *v25;
    if ( *v25 == v25 )
      break;
    if ( (_QWORD **)v26[1] != v25 )
      goto LABEL_22;
    v38 = (_QWORD *)*v26;
    if ( *(_QWORD **)(*v26 + 8LL) != v26 )
      goto LABEL_22;
    *v25 = v38;
    v38[1] = v25;
    v39 = v26 ? (__int64)(v26 - 1) : 0LL;
    v57 = (struct FlipManagerObject *)((v39 + 8) & -(__int64)(v39 != 0));
    v58 = (struct FlipManagerObject **)*((_QWORD *)v3 + 36);
    if ( *v58 != (struct FlipManagerObject *)((char *)v3 + 280) )
      goto LABEL_22;
    *(_QWORD *)v57 = (char *)v3 + 280;
    *((_QWORD *)v57 + 1) = v58;
    *v58 = v57;
    *((_QWORD *)v3 + 36) = v57;
  }
  v66 = (struct _LIST_ENTRY *)&v65;
  v27 = (struct _LIST_ENTRY **)((char *)this + 280);
  v65 = &v65;
  while ( 1 )
  {
    v28 = *v27;
    if ( *v27 == (struct _LIST_ENTRY *)v27 )
      break;
    KeEnterCriticalRegion();
    ExAcquirePushLockSharedEx(&v28[2].Blink, 0LL);
    Blink = (struct FlipManagerObject *)v28[4].Blink;
    CPushLock::ReleaseLock((CPushLock *)&v28[2].Blink);
    v62.Blink = &v62;
    v62.Flink = &v62;
    Flink = v28->Flink;
    if ( v28->Flink->Blink != v28 )
      goto LABEL_22;
    v44 = v28->Blink;
    if ( v44->Flink != v28 )
      goto LABEL_22;
    v44->Flink = Flink;
    Flink->Blink = v44;
    v45 = v62.Blink;
    if ( v62.Blink->Flink != &v62 )
      goto LABEL_22;
    v28->Blink = v62.Blink;
    v28->Flink = &v62;
    v45->Flink = v28;
    v46 = *v27;
LABEL_65:
    v62.Blink = v28;
    while ( v46 != (struct _LIST_ENTRY *)v27 )
    {
      v68 = 0LL;
      v28 = v46;
      FlipManagerTokenObject::GetFlipManagerObjectNoRef((FlipManagerTokenObject *)&v46[-3], &v68);
      v46 = v46->Flink;
      if ( Blink == v68 )
      {
        if ( v46->Blink != v28 )
          goto LABEL_22;
        v60 = v28->Blink;
        if ( v60->Flink != v28 )
          goto LABEL_22;
        v60->Flink = v46;
        v46->Blink = v60;
        v61 = v62.Blink;
        if ( v62.Blink->Flink != &v62 )
          goto LABEL_22;
        v28->Blink = v62.Blink;
        v28->Flink = &v62;
        v61->Flink = v28;
        goto LABEL_65;
      }
    }
    v47 = v62.Flink;
    KeEnterCriticalRegion();
    p_Blink = (CPushLock *)&v47[2].Blink;
    ExAcquirePushLockSharedEx(&v47[2].Blink, 0LL);
    v49 = (CFlipManager::PresentHistory **)v47[4].Blink;
    CPushLock::ReleaseLock(p_Blink);
    if ( (int)CPushLock::AcquireLockExclusive((CPushLock *)(v49 + 5)) >= 0 )
    {
      ObReferenceObjectByPointer(v49, 3u, g_pDxgkCompositionObjectType, 0);
      CFlipManager::ConsumerDwmApplyUpdates(v49 + 4, &v62, v3);
      CPushLock::ReleaseLock((CPushLock *)(v49 + 5));
      ObfDereferenceObject(v49);
    }
    if ( v62.Flink != &v62 )
    {
      v66->Flink = v62.Flink;
      v62.Flink->Blink = v66;
      v62.Blink->Flink = (struct _LIST_ENTRY *)&v65;
      v66 = v62.Blink;
    }
  }
  v29 = v65;
  if ( v65 != &v65 )
  {
    *((_QWORD *)this + 35) = v65;
    v29[1] = (char *)this + 280;
    v30 = v66;
    *((_QWORD *)this + 36) = v66;
    v30->Flink = (struct _LIST_ENTRY *)((char *)this + 280);
  }
  v31 = (*((_QWORD *)this + 35) != (_QWORD)this + 280) | v18;
  v32 = (char *)this + 144;
  v33 = (*(__int64 (__fastcall **)(struct FlipManagerObject *))(*(_QWORD *)v3 + 72LL))(v3);
  ExAcquirePushLockExclusiveEx((char *)this + 144, 0LL);
  *((_BYTE *)this + 152) = 1;
  v34 = (_QWORD *)((char *)this + 128);
  *((_QWORD *)this + 15) = v33;
  if ( (_QWORD *)*v34 != v34 )
  {
    v35 = (_QWORD *)*((_QWORD *)this + 17);
    if ( v35 != v34 )
    {
      do
      {
        v36 = (__int64)(v35 + 10);
        if ( !v35 )
          v36 = 88LL;
        *(_QWORD *)v36 = v33;
        v35 = (_QWORD *)v35[1];
      }
      while ( v35 != v34 );
      v32 = (char *)this + 144;
    }
  }
  if ( v32[8] )
    ExReleasePushLockExclusiveEx(v32, 0LL);
  else
    ExReleasePushLockSharedEx(v32, 0LL);
  if ( !v31 )
    ZwClearEvent(*((HANDLE *)this + 8));
}
