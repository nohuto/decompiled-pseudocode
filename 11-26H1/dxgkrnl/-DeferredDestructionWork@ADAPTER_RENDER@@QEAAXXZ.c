/*
 * XREFs of ?DeferredDestructionWork@ADAPTER_RENDER@@QEAAXXZ @ 0x14037B3E0
 * Callers:
 *     ?DxgkpDeferredDestructionWork@@YAXPEAX@Z @ 0x14037B3A0 (-DxgkpDeferredDestructionWork@@YAXPEAX@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x14002C340 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??_GDXGRESOURCE@@QEAAPEAXI@Z @ 0x14004DDF4 (--_GDXGRESOURCE@@QEAAPEAXI@Z.c)
 *     ?RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z @ 0x14007C42C (-RemoveThreadToDxgThreadList@DXGGLOBAL@@QEAAXPEAUDXGTHREADPROCESS@@@Z.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z @ 0x14037B640 (-DestroyDeferredAllocations@DXGDEVICE@@QEAAXPEAVDXGTERMINATIONTRACKER@@@Z.c)
 *     ?AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z @ 0x1403B1AFC (-AttachToProcess@CEnsureCurrentDxgProcess@@QEAAJPEAVDXGPROCESS@@E@Z.c)
 */

void __fastcall ADAPTER_RENDER::DeferredDestructionWork(ADAPTER_RENDER *this)
{
  char *v2; // r14
  struct DXGTERMINATIONTRACKER *v3; // rdi
  _QWORD *v4; // rcx
  struct _KPROCESS *v5; // rcx
  struct DXGPROCESS *v6; // rdx
  DXGDEVICE *v7; // rcx
  KSPIN_LOCK *Global; // rax
  ReferenceCounted *v9[2]; // [rsp+20h] [rbp-29h] BYREF
  __int128 v10; // [rsp+30h] [rbp-19h] BYREF
  __int128 v11; // [rsp+40h] [rbp-9h]
  struct _KAPC_STATE ApcState; // [rsp+50h] [rbp+7h] BYREF

  v2 = (char *)this + 1312;
  while ( 1 )
  {
    v3 = 0LL;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v2, 0LL);
    *((_QWORD *)v2 + 1) = KeGetCurrentThread();
    v4 = (_QWORD *)*((_QWORD *)this + 163);
    if ( v4 )
    {
      v3 = (struct DXGTERMINATIONTRACKER *)(v4 - 7);
      *((_QWORD *)this + 163) = *v4;
    }
    else
    {
      *((_BYTE *)this + 1368) = 0;
    }
    *((_QWORD *)v2 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v2, 0LL);
    KeLeaveCriticalRegion();
    if ( !v3 )
      break;
    v5 = (struct _KPROCESS *)*((_QWORD *)v3 + 2);
    memset(&ApcState, 0, sizeof(ApcState));
    KeStackAttachProcess(v5, &ApcState);
    v6 = *(struct DXGPROCESS **)(*((_QWORD *)v3 + 3) + 40LL);
    *(_OWORD *)v9 = 0LL;
    v10 = 0LL;
    v11 = 0LL;
    if ( (*((_DWORD *)v6 + 102) & 0x100) != 0 )
      CEnsureCurrentDxgProcess::AttachToProcess((CEnsureCurrentDxgProcess *)v9, v6, 1u);
    v7 = (DXGDEVICE *)*((_QWORD *)v3 + 3);
    if ( *(_QWORD *)v3 )
    {
      DXGDEVICE::DestroyDeferredAllocations(v7, v3);
      if ( *(_QWORD *)v3 )
        DXGRESOURCE::`scalar deleting destructor'(*(DXGRESOURCE **)v3);
    }
    else
    {
      DXGDEVICE::DestroyDeferredAllocations(v7, v3);
    }
    if ( v9[1] )
      *((ReferenceCounted **)v9[1] + 3) = v9[0];
    if ( *((_QWORD *)&v11 + 1) )
    {
      Global = (KSPIN_LOCK *)DXGGLOBAL::GetGlobal();
      DXGGLOBAL::RemoveThreadToDxgThreadList(Global, (struct DXGTHREADPROCESS ***)&v10);
      if ( v9[1] )
        ReferenceCounted::Release(v9[1]);
    }
    KeUnstackDetachProcess(&ApcState);
    ObfDereferenceObject(*((PVOID *)v3 + 2));
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx((char *)this + 1392, 0LL);
    *((_QWORD *)this + 175) = KeGetCurrentThread();
    *((_QWORD *)this + 172) -= *((_QWORD *)v3 + 5);
    *((_QWORD *)this + 175) = 0LL;
    ExReleasePushLockExclusiveEx((char *)this + 1392, 0LL);
    KeLeaveCriticalRegion();
    ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)this + 12, v3);
  }
  ExReleaseRundownProtection((PEX_RUNDOWN_REF)this + 173);
}
