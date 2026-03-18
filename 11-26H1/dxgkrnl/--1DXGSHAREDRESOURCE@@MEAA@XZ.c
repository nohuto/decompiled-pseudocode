/*
 * XREFs of ??1DXGSHAREDRESOURCE@@MEAA@XZ @ 0x1403A1184
 * Callers:
 *     ??_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z @ 0x140053DE0 (--_GDXGSHAREDRESOURCE@@MEAAPEAXI@Z.c)
 *     ??1DXGSHAREDRESOURCECA@@UEAA@XZ @ 0x1403A1148 (--1DXGSHAREDRESOURCECA@@UEAA@XZ.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x14000FB90 (-AcquireShared@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ??_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z @ 0x14001D5F0 (--_GDXGSHAREDRESOURCE_NONPAGED@@QEAAPEAXI@Z.c)
 *     ??3?$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z @ 0x14001D870 (--3-$DXGQUOTAALLOCATOR@$0BAA@$0GNGCEDEG@@@SAXPEAX@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z @ 0x140046F14 (--_GDXGADAPTERALLOCATION@@QEAAPEAXI@Z.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ??1DXGSHAREDRESOURCEACCESS@@QEAA@XZ @ 0x1403A1468 (--1DXGSHAREDRESOURCEACCESS@@QEAA@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::~DXGSHAREDRESOURCE(DXGSHAREDRESOURCE *this)
{
  void *v2; // rdi
  DXGSHAREDRESOURCE_NONPAGED *v3; // rcx
  _QWORD **v4; // rdi
  _QWORD *v5; // rax
  char *v6; // rcx
  struct DXGGLOBAL *Global; // rax
  unsigned int v8; // esi
  __int64 v9; // rdi
  __int64 v10; // rcx
  _QWORD *v11; // rcx
  void *v12; // rcx
  _BYTE v13[8]; // [rsp+50h] [rbp-28h] BYREF
  __int64 v14; // [rsp+58h] [rbp-20h]
  int v15; // [rsp+60h] [rbp-18h]

  *(_QWORD *)this = &DXGSHAREDRESOURCE::`vftable';
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 13));
  DXGQUOTAALLOCATOR<256,1835156294>::operator delete(*((void **)this + 15));
  v2 = (void *)*((_QWORD *)this + 19);
  if ( v2 )
  {
    DXGSHAREDRESOURCEACCESS::~DXGSHAREDRESOURCEACCESS(*((DXGSHAREDRESOURCEACCESS **)this + 19));
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v2);
  }
  v3 = (DXGSHAREDRESOURCE_NONPAGED *)*((_QWORD *)this + 22);
  if ( v3 )
    DXGSHAREDRESOURCE_NONPAGED::`scalar deleting destructor'(v3);
  v4 = (_QWORD **)((char *)this + 136);
  while ( 1 )
  {
    v5 = *v4;
    if ( *v4 == v4 )
      break;
    if ( (_QWORD **)v5[1] != v4 || (v11 = (_QWORD *)*v5, *(_QWORD **)(*v5 + 8LL) != v5) )
      __fastfail(3u);
    *v4 = v11;
    v11[1] = v4;
    if ( v5 != (_QWORD *)48 )
      DXGADAPTERALLOCATION::`scalar deleting destructor'((DXGADAPTERALLOCATION *)(v5 - 6));
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 16) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 395;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"!m_NtSecuritySharing || m_NtObjectRefCount == 0",
      395LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v6 = (char *)*((_QWORD *)this + 21);
  if ( v6 != (char *)this + 160 )
    DXGQUOTAALLOCATOR<256,1835156294>::operator delete(v6);
  if ( *((_DWORD *)this + 50) )
  {
    Global = DXGGLOBAL::GetGlobal();
    v8 = *((_DWORD *)this + 50);
    v15 = 0;
    v9 = *((_QWORD *)Global + 212);
    v14 = v9 + 16;
    if ( v9 != -16 && *(struct _KTHREAD **)(v9 + 24) == KeGetCurrentThread() )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 1495;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"bAllowAcquireRecursive || pPushLock == NULL || !m_pPushLock->IsExclusiveOwner()",
        1495LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGAUTOPUSHLOCK::AcquireShared((DXGAUTOPUSHLOCK *)v13);
    if ( *(_BYTE *)(v9 + 68) )
      ((void (__fastcall *)(_QWORD, _QWORD))qword_140168420)(*(_QWORD *)v9, v8);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v13);
    *((_DWORD *)this + 50) = 0;
  }
  v10 = *((_QWORD *)this + 10);
  if ( v10 )
    DXGADAPTER::ReleaseReference(*(DXGADAPTER **)(v10 + 16));
  if ( (*((_DWORD *)this + 3) & 0x400) != 0 )
  {
    v12 = (void *)*((_QWORD *)this + 24);
    if ( v12 )
    {
      ObfDereferenceObject(v12);
      *((_QWORD *)this + 24) = 0LL;
    }
  }
  if ( *((_QWORD *)this + 24) )
  {
    if ( (*((_DWORD *)this + 3) & 0x200) == 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 417;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"m_pSection == NULL || m_ExistingSysMem",
        417LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
}
