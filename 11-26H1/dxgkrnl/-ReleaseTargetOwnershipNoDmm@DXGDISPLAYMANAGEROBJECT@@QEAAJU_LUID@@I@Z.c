/*
 * XREFs of ?ReleaseTargetOwnershipNoDmm@DXGDISPLAYMANAGEROBJECT@@QEAAJU_LUID@@I@Z @ 0x1403E41CC
 * Callers:
 *     ?ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ @ 0x140260820 (-ReleaseDisplayManagerObject@DMMVIDEOPRESENTTARGET@@QEAAJXZ.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000FF90 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U?$DoubleLinkedListElementDeleter@VDMMVIDPNTARGETMODESET@@@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x14002E224 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@U-$DoubleLinkedListElementDelete.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??9DXGTARGETENTRY@@QEBA_NAEBV0@@Z @ 0x1403E448C (--9DXGTARGETENTRY@@QEBA_NAEBV0@@Z.c)
 */

__int64 __fastcall DXGDISPLAYMANAGEROBJECT::ReleaseTargetOwnershipNoDmm(
        DXGDISPLAYMANAGEROBJECT *this,
        struct _LUID a2,
        unsigned int a3)
{
  __int64 v4; // rbp
  unsigned int v6; // ebx
  DXGDISPLAYMANAGEROBJECT *v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r8
  __int64 v10; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  _BYTE v15[16]; // [rsp+50h] [rbp-58h] BYREF
  void **v16; // [rsp+60h] [rbp-48h]
  __int128 v17; // [rsp+68h] [rbp-40h]
  struct _LUID v18; // [rsp+78h] [rbp-30h]
  int v19; // [rsp+80h] [rbp-28h]
  LONG HighPart; // [rsp+BCh] [rbp+14h]

  HighPart = a2.HighPart;
  v4 = a3;
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v15, (DXGDISPLAYMANAGEROBJECT *)((char *)this + 16), 0);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v15);
  if ( !*((_QWORD *)this + 9) )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 192;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"DispMgr object called after being invalidated.",
      192LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v6 = -2147483611;
LABEL_12:
    DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
    return v6;
  }
  v18 = a2;
  v7 = (DXGDISPLAYMANAGEROBJECT *)*((_QWORD *)this + 13);
  v16 = &SetElement::`vftable';
  v19 = v4;
  v8 = 0LL;
  if ( v7 != (DXGDISPLAYMANAGEROBJECT *)((char *)this + 104) )
    v8 = (__int64)v7 - 8;
  v17 = 0LL;
  while ( v8 && (unsigned __int8)DXGTARGETENTRY::operator!=(v8) )
  {
    v10 = *(_QWORD *)(v8 + 8);
    v8 = v10 - 8;
    if ( v10 == v9 )
      v8 = 0LL;
  }
  if ( !DoublyLinkedList<DMMVIDPNTARGETMODESET,DoubleLinkedListElementDeleter<DMMVIDPNTARGETMODESET>>::ContainsByReference(
          (__int64)this + 88,
          v8) )
  {
    WdLogSingleEntry3(2LL, v4, HighPart, a2.LowPart);
    WdLogGlobalForLineNumber = 200;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to find owned target 0x%I64x on adapter 0x%I64x-%I64x",
      v4,
      HighPart,
      a2.LowPart,
      0LL,
      0LL);
    v6 = -1073741275;
    goto LABEL_12;
  }
  v12 = (_QWORD *)(v8 + 8);
  v13 = *(_QWORD *)(v8 + 8);
  if ( *(_QWORD *)(v13 + 8) != v8 + 8 || (v14 = *(_QWORD **)(v8 + 16), (_QWORD *)*v14 != v12) )
    __fastfail(3u);
  *v14 = v13;
  *(_QWORD *)(v13 + 8) = v14;
  *v12 = 0LL;
  *(_QWORD *)(v8 + 16) = 0LL;
  --*((_QWORD *)this + 15);
  DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v15);
  (**(void (__fastcall ***)(__int64, __int64))v8)(v8, 1LL);
  DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v15);
  return 0LL;
}
