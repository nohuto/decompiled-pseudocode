/*
 * XREFs of ?DxgkpCreateSharedVmObjectsForExistingResource@@YAJPEAVDXGPROCESSVMWP@@PEAXPEAU_DXGSHAREDALLOCOBJECT@@PEAPEAVDXGSHAREDVMOBJECT@@PEAI@Z @ 0x1401E99E0
 * Callers:
 *     ?DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z @ 0x1401E9C54 (-DxgkpDuplicateHandleToVm@@YAJPEAU_D3DKMT_DUPLICATEHANDLE@@@Z.c)
 * Callees:
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x140009220 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z @ 0x1400358E0 (--2@YAPEAX_KIW4DXGK_POOL_FLAGS@@@Z.c)
 *     ?AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z @ 0x1402AF684 (-AllocHandle@HMGRTABLE@@QEAAIPEAXW4_HMGRENTRY_TYPE@@IH@Z.c)
 *     ?ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ @ 0x14040CB14 (-ReleaseReference@DXGSHAREDVMOBJECT@@QEAAJXZ.c)
 */

__int64 __fastcall DxgkpCreateSharedVmObjectsForExistingResource(
        struct DXGPROCESSVMWP *a1,
        void *a2,
        struct _DXGSHAREDALLOCOBJECT *a3,
        struct DXGSHAREDVMOBJECT **a4,
        unsigned int *a5)
{
  unsigned int v9; // esi
  __int64 v10; // rbx
  __int64 CurrentProcess; // rax
  int v12; // edi
  __int64 v13; // rax
  DXGSHAREDVMOBJECT *v14; // rbx
  unsigned int *v15; // rax
  __int64 v17; // [rsp+20h] [rbp-78h]
  int v18; // [rsp+38h] [rbp-60h]
  _BYTE v19[32]; // [rsp+50h] [rbp-48h] BYREF
  HANDLE Handle; // [rsp+A0h] [rbp+8h] BYREF

  Handle = 0LL;
  v9 = 0;
  if ( !*((_QWORD *)a3 + 2) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 3068;
    DxgkLogInternalTriageEvent(
      0LL,
      262146,
      -1,
      (__int64)L"pSharedObject->pSharedResource != nullptr",
      3068LL,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 74) + 280LL);
  CurrentProcess = PsGetCurrentProcess(a1);
  LOBYTE(v18) = 0;
  LODWORD(v17) = 0;
  v12 = ObDuplicateObject(CurrentProcess, a2, v10, &Handle, v17, 512, 6, v18);
  if ( v12 < 0 )
  {
    WdLogSingleEntry1(3LL);
    WdLogGlobalForLineNumber = 3083;
    goto LABEL_10;
  }
  v13 = operator new(0x20uLL, 0x4B677844u, 256LL);
  v14 = (DXGSHAREDVMOBJECT *)v13;
  if ( !v13 )
  {
    WdLogSingleEntry0(6LL);
    WdLogGlobalForLineNumber = 3090;
    DxgkLogInternalTriageEvent(
      0LL,
      262145,
      -1,
      (__int64)L"Failed to allocate DXGSHAREDVMOBJECT",
      3090LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = -1073741801;
LABEL_10:
    if ( Handle )
      ObCloseHandle(Handle, 0);
    goto LABEL_12;
  }
  *(_DWORD *)(v13 + 24) = 1;
  *(_DWORD *)v13 = 4;
  *(_QWORD *)(v13 + 8) = a3;
  *(_QWORD *)(v13 + 16) = Handle;
  DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v19, a1);
  v9 = HMGRTABLE::AllocHandle((char *)a1 + 280, v14, 13LL);
  if ( !v9 )
  {
    WdLogSingleEntry0(2LL);
    WdLogGlobalForLineNumber = 3111;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to allocate NT shared object handle",
      3111LL,
      0LL,
      0LL,
      0LL,
      0LL);
    v12 = -1073741801;
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
    DXGSHAREDVMOBJECT::ReleaseReference(v14);
LABEL_12:
    v14 = 0LL;
    goto LABEL_13;
  }
  DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v19);
LABEL_13:
  v15 = a5;
  *a4 = v14;
  *v15 = v9;
  return (unsigned int)v12;
}
