/*
 * XREFs of ??1VIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAA@XZ @ 0x1401193BC
 * Callers:
 *     ??_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z @ 0x1400046F4 (--_GVIDMM_DEVICE_COMMAND_UPDATEGPUVA@@QEAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1400048C0 (--3@YAXPEAX@Z.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1400127F0 (VidSchiReleaseSyncObjectReference.c)
 *     ?RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x14002FDD8 (-RemoveFromPenaltyBoxByListEntry@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140030000 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1400301B0 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ @ 0x1400383B8 (-DecrementPagingPacketReferenceCount@VIDMM_ALLOC@@QEAAXXZ.c)
 *     ?ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ @ 0x140038D60 (-ReleaseVaRangeReference@VIDMM_MAPPED_VA_RANGE@@QEAAJXZ.c)
 */

void __fastcall VIDMM_DEVICE_COMMAND_UPDATEGPUVA::~VIDMM_DEVICE_COMMAND_UPDATEGPUVA(
        VIDMM_DEVICE_COMMAND_UPDATEGPUVA *this,
        __int64 a2)
{
  char *v3; // rcx
  __int64 i; // rdi
  __int64 v5; // rax
  VIDMM_GLOBAL *v6; // rcx
  _QWORD **v7; // rbx
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  _BYTE v10[40]; // [rsp+20h] [rbp-28h] BYREF

  v3 = (char *)*((_QWORD *)this + 9);
  if ( v3 )
    VidSchiReleaseSyncObjectReference(v3, a2);
  if ( *((_QWORD *)this + 8) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 8); i = (unsigned int)(i + 1) )
      VIDMM_ALLOC::DecrementPagingPacketReferenceCount(*(VIDMM_ALLOC **)(*((_QWORD *)this + 8) + 8 * i));
    operator delete(*((void **)this + 8));
  }
  v5 = *((_QWORD *)this + 11);
  if ( v5 )
  {
    if ( *(_QWORD *)v5 )
    {
      DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
        (DXGAUTOPUSHLOCKEXCLUSIVE *)v10,
        (struct _KTHREAD **)(*(_QWORD *)v5 + 64LL));
      if ( *((_QWORD *)this + 14) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)this + 8);
      if ( *((_QWORD *)this + 15) )
        VIDMM_GLOBAL::RemoveFromPenaltyBoxByListEntry(v6, (struct _LIST_ENTRY *)((char *)this + 152));
      DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v10);
    }
    KeReleaseSemaphore((PRKSEMAPHORE)(*((_QWORD *)this + 11) + 24LL), 0, 1, 0);
  }
  operator delete(*((void **)this + 3));
  v7 = (_QWORD **)((char *)this + 96);
  while ( 1 )
  {
    v8 = *v7;
    if ( *v7 == v7 )
      break;
    if ( (_QWORD **)v8[1] != v7 || (v9 = (_QWORD *)*v8, *(_QWORD **)(*v8 + 8LL) != v8) )
      __fastfail(3u);
    *v7 = v9;
    v9[1] = v7;
    *v8 = 0LL;
    v8[1] = 0LL;
    VIDMM_MAPPED_VA_RANGE::ReleaseVaRangeReference((VIDMM_MAPPED_VA_RANGE *)(v8 - 1));
  }
}
