/*
 * XREFs of ?Initialize@DXGPROCESS@@QEAAJPEAX@Z @ 0x1403AF9DC
 * Callers:
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x140007780 (--_U@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ @ 0x1400330A0 (-CSAccountingInProgress@DXGGLOBAL@@QEBAHXZ.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AcquireReference@DXGPROCESS@@QEAAXXZ @ 0x140046738 (-AcquireReference@DXGPROCESS@@QEAAXXZ.c)
 *     ?SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z @ 0x140053F5C (-SetupValidationForProcess@DXGVALIDATION@@QEAAXPEAVDXGPROCESS@@@Z.c)
 *     ??0DXGPROCESS_NONPAGED@@QEAA@XZ @ 0x140055308 (--0DXGPROCESS_NONPAGED@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400A5B00 (memmove.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkIsGraphicsPartitionApplication @ 0x1401F55CC (DxgkIsGraphicsPartitionApplication.c)
 *     ?GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ @ 0x140372410 (-GetMaximumGlobalAdapterCount@DXGGLOBAL@@QEBAKXZ.c)
 *     ?DeferredInitialize@DXGPROCESS@@QEAAJI@Z @ 0x1403B8D34 (-DeferredInitialize@DXGPROCESS@@QEAAJI@Z.c)
 */

__int64 __fastcall DXGPROCESS::Initialize(DXGPROCESS *this, void *a2)
{
  __int64 result; // rax
  int v5; // edx
  __int64 CurrentProcess; // rax
  DXGPROCESS_NONPAGED *v7; // rax
  DXGPROCESS_NONPAGED *v8; // rax
  const wchar_t *v9; // r9
  void *v10; // rcx
  int v11; // ecx
  NTSTATUS InformationProcess; // eax
  __int128 v13; // xmm0
  _QWORD *v14; // rax
  __int64 ProcessImageFileName; // rax
  const void *v16; // rsi
  size_t v17; // rbx
  void *v18; // rcx
  unsigned __int8 v19; // r14
  int v20; // eax
  __int64 v21; // rbx
  struct DXGGLOBAL *Global; // rax
  DXGGLOBAL *v23; // rax
  unsigned int MaximumGlobalAdapterCount; // eax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  DXGGLOBAL *v29; // rax
  unsigned int i; // ebx
  POBJECT_TYPE ObjectType; // [rsp+20h] [rbp-89h]
  char v32[4]; // [rsp+50h] [rbp-59h] BYREF
  int ProcessInformation; // [rsp+54h] [rbp-55h] BYREF
  HANDLE ProcessHandle; // [rsp+58h] [rbp-51h] BYREF
  __int128 v35; // [rsp+60h] [rbp-49h]
  _QWORD v36[12]; // [rsp+70h] [rbp-39h] BYREF

  if ( *((_DWORD *)this + 10) )
    return 3221225485LL;
  v5 = 0;
  if ( *((PEPROCESS *)this + 7) == PsInitialSystemProcess )
    v5 = 2;
  *((_DWORD *)this + 102) = *((_DWORD *)this + 102) & 0xFFFFFFFD | v5;
  CurrentProcess = PsGetCurrentProcess(PsInitialSystemProcess);
  *((_DWORD *)this + 102) = *((_DWORD *)this + 102) & 0xFFFFFFF7 | (PsGetProcessWow64Process(CurrentProcess) != 0 ? 8 : 0);
  v7 = (DXGPROCESS_NONPAGED *)operator new(0xA0uLL, 0x4B677844u, 64LL);
  if ( v7 )
    v8 = DXGPROCESS_NONPAGED::DXGPROCESS_NONPAGED(v7);
  else
    v8 = 0LL;
  *((_QWORD *)this + 8) = v8;
  if ( !v8 )
  {
    WdLogSingleEntry1(6LL);
    v9 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData";
    WdLogGlobalForLineNumber = 1725;
LABEL_10:
    DxgkLogInternalTriageEvent(0LL, 262145, -1, (__int64)v9, (__int64)this, 0LL, 0LL, 0LL, 0LL);
    return 3221225495LL;
  }
  v10 = (void *)*((_QWORD *)this + 7);
  ProcessHandle = 0LL;
  if ( ObOpenObjectByPointer(v10, 0x200u, 0LL, 0, 0LL, 0, &ProcessHandle) >= 0 )
  {
    ProcessInformation = 2;
    memset(v36, 0, sizeof(v36));
    if ( ZwQueryInformationProcess(ProcessHandle, ProcessLdtSize|0x40, &ProcessInformation, 4u, 0LL) >= 0 )
    {
      v11 = 0;
      if ( ProcessInformation == 1 )
        v11 = 16;
      *((_DWORD *)this + 102) = v11 | *((_DWORD *)this + 102) & 0xFFFFFFEF;
    }
    InformationProcess = ZwQueryInformationProcess(ProcessHandle, (PROCESSINFOCLASS)64, v36, 0x60u, 0LL);
    v13 = 0LL;
    v35 = 0LL;
    if ( (int)(InformationProcess + 0x80000000) < 0 || InformationProcess == -2147483643 )
    {
      LODWORD(v35) = HIDWORD(v36[0]);
      WORD2(v35) = v36[7];
      WORD3(v35) = WORD2(v36[7]);
      *((_QWORD *)&v35 + 1) = v36[2];
      v13 = v35;
    }
    *(_OWORD *)(*((_QWORD *)this + 8) + 144LL) = v13;
    ObCloseHandle(ProcessHandle, 0);
  }
  if ( (*((_DWORD *)this + 102) & 2) == 0 && *((_BYTE *)DXGGLOBAL::GetGlobal() + 304896) )
    *((_BYTE *)this + 574) = DxgkIsGraphicsPartitionApplication(*((PEPROCESS *)this + 7));
  *(_QWORD *)(*((_QWORD *)this + 8) + 32LL) = this;
  *(_QWORD *)(*((_QWORD *)this + 8) + 80LL) = a2;
  *(_QWORD *)(*((_QWORD *)this + 8) + 40LL) = *((_QWORD *)this + 7);
  v14 = (_QWORD *)*((_QWORD *)this + 8);
  v14[8] = DxgkpProcessStatusChangeWork;
  v14[9] = this;
  v14[6] = 0LL;
  ProcessImageFileName = PsGetProcessImageFileName(*((_QWORD *)this + 7));
  v16 = (const void *)ProcessImageFileName;
  v17 = -1LL;
  do
    ++v17;
  while ( *(_BYTE *)(ProcessImageFileName + v17) );
  *(_QWORD *)(*((_QWORD *)this + 8) + 96LL) = operator new[](v17 + 1, 0x4B677844u, 64LL);
  v18 = *(void **)(*((_QWORD *)this + 8) + 96LL);
  if ( !v18 )
  {
    WdLogSingleEntry1(6LL);
    v9 = L"DXGPROCESS (0x%I64x) failed to allocate m_pNonPagedData->m_ProcessName";
    WdLogGlobalForLineNumber = 1808;
    goto LABEL_10;
  }
  memmove(v18, v16, v17);
  v19 = 7;
  *(_BYTE *)(v17 + *(_QWORD *)(*((_QWORD *)this + 8) + 96LL)) = 0;
  *(_BYTE *)(*((_QWORD *)this + 8) + 136LL) = (*((_DWORD *)this + 102) & 0x10) != 0;
  v32[0] = 7;
  if ( DxgHostTable )
  {
    v20 = (*(__int64 (__fastcall **)(_QWORD, char *))DxgHostTable)(*((_QWORD *)this + 7), v32);
    if ( v20 >= 0 )
    {
      v19 = v32[0];
    }
    else
    {
      v21 = v20;
      WdLogSingleEntry2(2LL, *((_QWORD *)this + 7), v20);
      ObjectType = (POBJECT_TYPE)*((_QWORD *)this + 7);
      WdLogGlobalForLineNumber = 1830;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"QueryProcessDefaultQos for EPROCESS 0x%p failed with Status=0x%x",
        (__int64)ObjectType,
        v21,
        0LL,
        0LL,
        0LL);
      v32[0] = 7;
    }
  }
  *(_DWORD *)(*((_QWORD *)this + 8) + 140LL) = v19;
  Global = DXGGLOBAL::GetGlobal();
  DXGVALIDATION::SetupValidationForProcess((struct DXGGLOBAL *)((char *)Global + 1668), this);
  v23 = DXGGLOBAL::GetGlobal();
  MaximumGlobalAdapterCount = DXGGLOBAL::GetMaximumGlobalAdapterCount(v23);
  v25 = MaximumGlobalAdapterCount;
  if ( !MaximumGlobalAdapterCount )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 1842;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"MaximumGlobalAdapterCount > 0", 1842LL, 0LL, 0LL, 0LL, 0LL);
  }
  v26 = 8 * v25;
  if ( !is_mul_ok(v25, 8uLL) )
    v26 = -1LL;
  v27 = operator new[](v26, 0x4B677844u, 256LL);
  *((_QWORD *)this + 6) = v27;
  if ( !v27 )
  {
    WdLogSingleEntry1(6LL);
    v9 = L"DXGPROCESS (0x%I64x) failed to allocate m_ppAdapterInfo";
    WdLogGlobalForLineNumber = 1851;
    goto LABEL_10;
  }
  v28 = operator new[](0x30uLL, 0x4B677844u, 256LL);
  *((_QWORD *)this + 9) = v28;
  if ( !v28 )
  {
    WdLogSingleEntry1(6LL);
    v9 = L"DXGPROCESS (0x%I64x) failed to allocate m_pCsStartRunningTime";
    WdLogGlobalForLineNumber = 1862;
    goto LABEL_10;
  }
  v29 = DXGGLOBAL::GetGlobal();
  *((_DWORD *)this + 20) = DXGGLOBAL::CSAccountingInProgress(v29);
  for ( i = 0; i < 2; ++i )
  {
    DXGGLOBAL::GetGlobal();
    if ( DXGGLOBAL::m_pDxgmmsExport[i] )
    {
      result = DXGPROCESS::DeferredInitialize(this, i);
      if ( (int)result < 0 )
        return result;
    }
  }
  DXGPROCESS::AcquireReference(this);
  if ( (*((_DWORD *)this + 102) & 0x100) != 0 )
    *(_QWORD *)(*((_QWORD *)this + 8) + 128LL) = *(_QWORD *)(*((_QWORD *)this + 74) + 592LL) + 160LL;
  *((_DWORD *)this + 10) = 1;
  return 0LL;
}
