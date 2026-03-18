/*
 * XREFs of ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x140355DA0
 * Callers:
 *     ?Stop@ADAPTER_RENDER@@QEAAXEE@Z @ 0x1401A9B50 (-Stop@ADAPTER_RENDER@@QEAAXEE@Z.c)
 *     ?Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z @ 0x140355D6C (-Destroy@DXGSHAREDRESOURCE@@IEAAXPEAPEAXI@Z.c)
 * Callees:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x140007E9C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x14000972C (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??0DXGGLOBALSHAREMUTEX@@QEAA@XZ @ 0x14004611C (--0DXGGLOBALSHAREMUTEX@@QEAA@XZ.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x140053BB8 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x1400638F0 (McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     ?DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z @ 0x1402A57A4 (-DdiDestroyAllocation@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_DESTROYALLOCATION@@E@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 */

void __fastcall DXGSHAREDRESOURCE::DestroyCoreAllocations(DXGSHAREDRESOURCE *this, void **a2, unsigned int a3)
{
  __int64 v4; // rcx
  __int64 v5; // r8
  _QWORD *v6; // rax
  UINT v7; // esi
  unsigned int v8; // r15d
  _QWORD *v9; // rdx
  _QWORD *v10; // r14
  __int64 v11; // rcx
  void *v12; // rdx
  const HANDLE *v13; // rax
  ADAPTER_RENDER *v14; // rcx
  DXGGLOBAL *Global; // rax
  struct DXGPROCESS *Current; // rax
  int v17; // ecx
  DXGPROCESS *v18; // rcx
  int v19; // [rsp+40h] [rbp-150h]
  int v20; // [rsp+48h] [rbp-148h]
  int v21; // [rsp+50h] [rbp-140h]
  int v22; // [rsp+58h] [rbp-138h]
  int v23; // [rsp+60h] [rbp-130h]
  int v24; // [rsp+68h] [rbp-128h]
  int v25; // [rsp+70h] [rbp-120h]
  int v26; // [rsp+78h] [rbp-118h]
  int v27; // [rsp+88h] [rbp-108h]
  int v28; // [rsp+90h] [rbp-100h]
  int v29; // [rsp+98h] [rbp-F8h]
  int v30; // [rsp+A0h] [rbp-F0h]
  int v31; // [rsp+A8h] [rbp-E8h]
  int v32; // [rsp+B0h] [rbp-E0h]
  int v33; // [rsp+B8h] [rbp-D8h]
  int v34; // [rsp+C0h] [rbp-D0h]
  int v35; // [rsp+C8h] [rbp-C8h]
  int v36; // [rsp+D0h] [rbp-C0h]
  int v37; // [rsp+D8h] [rbp-B8h]
  int v38; // [rsp+E0h] [rbp-B0h]
  int v39; // [rsp+E8h] [rbp-A8h]
  void **v40; // [rsp+110h] [rbp-80h]
  struct _DXGKARG_DESTROYALLOCATION v41; // [rsp+118h] [rbp-78h] BYREF
  unsigned int v42; // [rsp+170h] [rbp-20h]
  void **v43; // [rsp+178h] [rbp-18h]
  _QWORD *v44; // [rsp+188h] [rbp-8h]

  v43 = a2;
  v40 = (void **)*((_QWORD *)this + 21);
  if ( a2 && a3 >= *((_DWORD *)this + 33) )
  {
    v40 = a2;
  }
  else
  {
    v43 = (void **)*((_QWORD *)this + 21);
    if ( !v43 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12928;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"pDestructionBuffer is NULL!", 12928LL, 0LL, 0LL, 0LL, 0LL);
      return;
    }
  }
  DXGPUSHLOCK::AcquireExclusive((DXGSHAREDRESOURCE *)((char *)this + 32));
  if ( *((_DWORD *)this + 6) )
  {
    if ( (*((_DWORD *)this + 3) & 8) != 0 )
    {
      WdLogSingleEntry0(1LL);
      WdLogGlobalForLineNumber = 12936;
      DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"!m_NtSecuritySharing", 12936LL, 0LL, 0LL, 0LL, 0LL);
    }
    if ( (*((_DWORD *)this + 3) & 0x2000) != 0 )
    {
      Current = DXGPROCESS::GetCurrent(v4);
      if ( Current )
      {
        v17 = *((_DWORD *)Current + 102);
        if ( (v17 & 0x180) != 0 )
        {
          if ( (v17 & 0x100) != 0 )
            v18 = (DXGPROCESS *)*((_QWORD *)Current + 74);
          else
            v18 = (DXGPROCESS *)((unsigned __int64)Current & -(__int64)((v17 & 0x80u) != 0));
          DXGPROCESS::FreeHandleSafe(v18, *((_DWORD *)this + 6));
        }
      }
    }
    else
    {
      DXGGLOBALSHAREMUTEX::DXGGLOBALSHAREMUTEX((DXGGLOBALSHAREMUTEX *)&v41);
      DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)&v41);
      Global = DXGGLOBAL::GetGlobal();
      DXGGLOBAL::FreeHandle(Global, *((_DWORD *)this + 6));
      DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)&v41);
    }
    *((_DWORD *)this + 6) = 0;
  }
  if ( (*((_DWORD *)this + 3) & 8) != 0 && *((_DWORD *)this + 7) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 12961;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NULL == m_hHostGlobalHandle", 12961LL, 0LL, 0LL, 0LL, 0LL);
  }
  LOBYTE(v5) = 0;
  v6 = (_QWORD *)*((_QWORD *)this + 17);
  v7 = 0;
  LOBYTE(v42) = 0;
  v8 = 0;
  v44 = v6;
  if ( !*((_DWORD *)this + 33) )
    goto LABEL_8;
  do
  {
    v9 = (_QWORD *)*((_QWORD *)this + 10);
    v10 = v6 - 6;
    v11 = v9[2];
    if ( !*(_BYTE *)(v11 + 209) )
    {
      if ( !v10[1] )
        goto LABEL_14;
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)(v9[95] + 8LL) + 120LL))(0LL, v9[96], v10[1]);
      v10[1] = 0LL;
      goto LABEL_13;
    }
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x1000) != 0 )
    {
      McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
        v11,
        &EventDestroyAdapterAllocation,
        v5,
        0LL,
        0,
        v11,
        0,
        v10[14],
        v19,
        v20,
        v21,
        v22,
        v23,
        v24,
        v25,
        v26,
        (char)v10,
        v27,
        v28,
        v29,
        v30,
        v31,
        v32,
        v33,
        v34,
        v35,
        v36,
        v37,
        v38,
        v39,
        (*((_DWORD *)v10 + 1) >> 21) & 0x3F,
        0,
        0LL);
LABEL_13:
      LOBYTE(v5) = v42;
    }
LABEL_14:
    v5 = (unsigned __int8)v5;
    if ( (*((_BYTE *)v10 + 4) & 2) != 0 )
      v5 = 1LL;
    v42 = v5;
    v43[v8] = (void *)v10[2];
    if ( v10[2] )
    {
      if ( v7 != v8 )
      {
        WdLogSingleEntry0(1LL);
        WdLogGlobalForLineNumber = 13036;
        DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"NumDriverHandles == i", 13036LL, 0LL, 0LL, 0LL, 0LL);
        v5 = v42;
      }
      ++v7;
    }
    ++v8;
    v10[2] = 0LL;
    v6 = (_QWORD *)*v44;
    v44 = (_QWORD *)*v44;
  }
  while ( v8 < *((_DWORD *)this + 33) );
  if ( v7 )
  {
LABEL_22:
    v12 = (void *)*((_QWORD *)this + 2);
    *(_QWORD *)(&v41.NumAllocations + 1) = 0LL;
    HIDWORD(v41.pAllocationList) = 0;
    *((_DWORD *)&v41.Flags + 1) = 0;
    v41.hResource = v12;
    v41.NumAllocations = v7;
    v13 = 0LL;
    v41.Flags.Value = v12 != 0LL;
    v14 = (ADAPTER_RENDER *)*((_QWORD *)this + 10);
    if ( v7 )
      v13 = v40;
    v41.pAllocationList = v13;
    ADAPTER_RENDER::DdiDestroyAllocation(v14, &v41, v5);
    *((_QWORD *)this + 2) = 0LL;
    goto LABEL_25;
  }
LABEL_8:
  if ( *((_QWORD *)this + 2) )
    goto LABEL_22;
LABEL_25:
  *((_DWORD *)this + 33) = 0;
  *((_QWORD *)this + 5) = 0LL;
  ExReleasePushLockExclusiveEx((char *)this + 32, 0LL);
  KeLeaveCriticalRegion();
}
