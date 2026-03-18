/*
 * XREFs of ??1DXGSYNCOBJECT@@IEAA@XZ @ 0x1403534C4
 * Callers:
 *     ??1DXGSYNCOBJECTSA@@QEAA@XZ @ 0x140050584 (--1DXGSYNCOBJECTSA@@QEAA@XZ.c)
 *     ?Destroy@DXGSYNCOBJECT@@QEAAXXZ @ 0x1403531A0 (-Destroy@DXGSYNCOBJECT@@QEAAXXZ.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGFASTMUTEX@@QEAA@XZ @ 0x14006CEFC (--1DXGFASTMUTEX@@QEAA@XZ.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

void __fastcall DXGSYNCOBJECT::~DXGSYNCOBJECT(DXGSYNCOBJECT *this)
{
  int v1; // eax
  __int64 v3; // rdx
  __int64 v4; // r8

  v1 = *((_DWORD *)this + 105);
  if ( v1 == 5 || (unsigned int)(v1 - 6) <= 1 )
  {
    v4 = *((_QWORD *)DXGGLOBAL::GetGlobal() + 34);
    LOBYTE(v3) = (*((_DWORD *)this + 106) & 1) != 0 || (*((_DWORD *)this + 107) & 0x20) != 0;
    (*(void (__fastcall **)(char *, __int64))(*(_QWORD *)(v4 + 8) + 880LL))((char *)this + 128, v3);
  }
  if ( (*((_DWORD *)this + 107) & 0x40) != 0 )
  {
    ObfDereferenceObject(*((PVOID *)this + 11));
    *((_DWORD *)this + 107) &= ~0x40u;
  }
  if ( *((_DWORD *)this + 20) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1669;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_hSyncObjHandle == NULL", 1669LL, 0LL, 0LL, 0LL, 0LL);
  }
  if ( *((_DWORD *)this + 6) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1670;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_cReference == 0", 1670LL, 0LL, 0LL, 0LL, 0LL);
  }
  DXGFASTMUTEX::~DXGFASTMUTEX((DXGSYNCOBJECT *)((char *)this + 32));
  *((_QWORD *)this + 2) = 0LL;
}
