/*
 * XREFs of ??1DMMVIDEOPRESENTTARGET@@UEAA@XZ @ 0x140426878
 * Callers:
 *     ??_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z @ 0x140096B50 (--_EDMMVIDEOPRESENTTARGET@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     ??1ReferenceCounted@@UEAA@XZ @ 0x140039D50 (--1ReferenceCounted@@UEAA@XZ.c)
 *     ?ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ @ 0x140045F64 (-ReleaseReferenceNoTracking@DXGADAPTER@@QEAAXXZ.c)
 *     ?RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x140096CD4 (-RemoveChildTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z @ 0x140096D5C (-RemoveJoinedTarget@DMMVIDEOPRESENTTARGET@@QEAAXAEAV1@@Z.c)
 *     ?ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z @ 0x14034901C (-ReleaseMonitorHandle@VIDPN_MGR@@QEAAJPEAUHDXGMONITOR__@@@Z.c)
 *     ?CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ @ 0x1404041E0 (-CancelLinkTrainingTimer@DMMVIDEOPRESENTTARGET@@QEAAXXZ.c)
 */

void __fastcall DMMVIDEOPRESENTTARGET::~DMMVIDEOPRESENTTARGET(DMMVIDEOPRESENTTARGET *this)
{
  struct HDXGMONITOR__ *v1; // rsi
  VIDPN_MGR *v3; // rdi
  char *v4; // rcx
  __int64 v5; // rax
  char **v6; // rdx
  DMMVIDEOPRESENTTARGET *v7; // rcx
  DMMVIDEOPRESENTTARGET *v8; // rcx
  DXGADAPTER *v9; // rcx
  struct _IO_WORKITEM *v10; // rcx

  v1 = (struct HDXGMONITOR__ *)*((_QWORD *)this + 14);
  *(_QWORD *)this = &DMMVIDEOPRESENTTARGET::`vftable'{for `IndexedSetElement<unsigned int>'};
  *((_QWORD *)this + 4) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ContainedBy<DMMVIDEOPRESENTTARGETSET>'};
  *((_QWORD *)this + 6) = &DMMVIDEOPRESENTTARGET::`vftable'{for `SignedWithClassSignature<DMMVIDEOPRESENTTARGET>'};
  *((_QWORD *)this + 8) = &DMMVIDEOPRESENTTARGET::`vftable'{for `ReferenceCounted'};
  if ( v1 )
  {
    if ( !*((_QWORD *)this + 5) )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 68;
    }
    v3 = *(VIDPN_MGR **)(*((_QWORD *)this + 5) + 88LL);
    if ( !v3 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 35;
    }
    VIDPN_MGR::ReleaseMonitorHandle(v3, v1);
  }
  v4 = (char *)this + 512;
  v5 = *((_QWORD *)this + 64);
  if ( v5 )
  {
    if ( *(char **)(v5 + 8) != v4 || (v6 = (char **)*((_QWORD *)this + 65), *v6 != v4) )
      __fastfail(3u);
    *v6 = (char *)v5;
    *(_QWORD *)(v5 + 8) = v6;
  }
  v7 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 59);
  if ( v7 )
    DMMVIDEOPRESENTTARGET::RemoveChildTarget(v7, this);
  v8 = (DMMVIDEOPRESENTTARGET *)*((_QWORD *)this + 66);
  if ( v8 )
    DMMVIDEOPRESENTTARGET::RemoveJoinedTarget(v8, this);
  if ( *((_QWORD *)this + 67) )
  {
    DMMVIDEOPRESENTTARGET::CancelLinkTrainingTimer(this);
    if ( _InterlockedExchange((volatile __int32 *)(*((_QWORD *)this + 67) + 152LL), -1) != 5 )
    {
      v9 = (DXGADAPTER *)**((_QWORD **)this + 67);
      if ( v9 )
        DXGADAPTER::ReleaseReferenceNoTracking(v9);
      v10 = *(struct _IO_WORKITEM **)(*((_QWORD *)this + 67) + 144LL);
      if ( v10 )
        IoFreeWorkItem(v10);
      DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 67));
    }
  }
  ReferenceCounted::~ReferenceCounted((DMMVIDEOPRESENTTARGET *)((char *)this + 64));
  *((_DWORD *)this + 14) |= 0x6D640000u;
  *((_QWORD *)this + 6) = &SignedWithClassSignature<DMMVIDPNSOURCESET>::`vftable';
  *((_QWORD *)this + 4) = &ContainedBy<DMMVIDPNSOURCEMODESET>::`vftable';
  *((_QWORD *)this + 5) = 0LL;
  *(_QWORD *)this = &SetElement::`vftable';
}
