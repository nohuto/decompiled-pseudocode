/*
 * XREFs of ?VmBusDuplicateHandle@DXG_GUEST_GLOBAL_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402260E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x140016EF0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x140017170 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z @ 0x14002E850 (-AcquireShared@COREADAPTERACCESS@@QEAAJPEBD@Z.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x140035AF4 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1DXGVMBUSMESSAGE@@QEAA@XZ @ 0x14006D8C0 (--1DXGVMBUSMESSAGE@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1401DF85C (-ReferenceAdapterByHostLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@Z @ 0x1402204F0 (-DxgkpCreateSharedObjectFromHostDesc@@YAJPEAVADAPTER_RENDER@@PEBEPEAPEAU_DXGSHAREDALLOCOBJECT@@@.c)
 *     ?VmBusSendCompleteTransaction@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z @ 0x14022BAF4 (-VmBusSendCompleteTransaction@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEAUDXGVMBUSMESSAGE@@@Z.c)
 *     ?InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z @ 0x1402BF118 (-InitializeMessage@DXGVMBUSMESSAGE@@QEAAXPEAUDXG_VMBUS_CHANNEL_BASE@@IPEAI11@Z.c)
 */

unsigned __int8 __fastcall DXG_GUEST_GLOBAL_VMBUS::VmBusDuplicateHandle(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v1; // rsi
  PVOID v2; // r14
  struct _KPROCESS *v3; // r15
  DXGGLOBAL *Global; // rax
  struct ADAPTER_RENDER **v5; // r13
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rax
  __int64 v9; // rdi
  int v10; // ebx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  NTSTATUS v14; // eax
  __int64 v15; // rax
  NTSTATUS v16; // eax
  __int64 v17; // rax
  struct DXG_VMBUS_CHANNEL_BASE *v18; // rbx
  __int64 v19; // rcx
  void *v20; // rdx
  __int64 v21; // rax
  PVOID Object; // [rsp+58h] [rbp-B0h] BYREF
  void *ProcessHandle; // [rsp+60h] [rbp-A8h] BYREF
  PVOID v25; // [rsp+68h] [rbp-A0h] BYREF
  void *Handle; // [rsp+70h] [rbp-98h] BYREF
  struct _CLIENT_ID ClientId; // [rsp+78h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-80h] BYREF
  __int128 v29; // [rsp+B8h] [rbp-50h] BYREF
  int v30; // [rsp+C8h] [rbp-40h]
  struct _KAPC_STATE ApcState; // [rsp+1D8h] [rbp+D0h] BYREF
  _BYTE v32[144]; // [rsp+208h] [rbp+100h] BYREF

  v1 = *((_QWORD *)a1 + 17);
  Handle = 0LL;
  v2 = 0LL;
  v25 = 0LL;
  v3 = 0LL;
  Object = 0LL;
  Global = DXGGLOBAL::GetGlobal();
  v5 = (struct ADAPTER_RENDER **)DXGGLOBAL::ReferenceAdapterByHostLuid(
                                   Global,
                                   *(struct _LUID *)(v1 + 24),
                                   (unsigned __int64 *)&Object);
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v32, (struct DXGADAPTER *const)v5, 0LL);
  if ( !v5 )
  {
    v8 = WdLogNewEntry5_WdTrace(v7, v6);
    *(_QWORD *)(v8 + 24) = *(int *)(v1 + 28);
    *(_QWORD *)(v8 + 32) = *(unsigned int *)(v1 + 24);
    WdLogGlobalForLineNumber = 15006;
LABEL_3:
    LODWORD(v9) = -1073741811;
    goto LABEL_14;
  }
  v10 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v32, 0LL);
  DXGADAPTER::ReleaseReference((DXGADAPTER *)v5);
  if ( v10 < 0 )
  {
    v13 = WdLogNewEntry5_WdTrace(v12, v11);
    *(_QWORD *)(v13 + 24) = *(int *)(v1 + 28);
    *(_QWORD *)(v13 + 32) = *(unsigned int *)(v1 + 24);
    WdLogGlobalForLineNumber = 15020;
    goto LABEL_3;
  }
  ClientId.UniqueProcess = *(HANDLE *)(v1 + 40);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ClientId.UniqueThread = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ProcessHandle = 0LL;
  v14 = ZwOpenProcess(&ProcessHandle, 0x2000000u, &ObjectAttributes, &ClientId);
  v9 = v14;
  if ( v14 >= 0 )
  {
    Object = 0LL;
    v16 = ObReferenceObjectByHandle(ProcessHandle, 0, (POBJECT_TYPE)PsProcessType, 0, &Object, 0LL);
    v3 = (struct _KPROCESS *)Object;
    v9 = v16;
    ZwClose(ProcessHandle);
    if ( (int)v9 >= 0 )
    {
      LODWORD(v9) = DxgkpCreateSharedObjectFromHostDesc(
                      v5[396],
                      (const unsigned __int8 *)v1,
                      (struct _LIST_ENTRY **)&v25);
      if ( (int)v9 >= 0 )
      {
        memset(&ApcState, 0, sizeof(ApcState));
        KeStackAttachProcess(v3, &ApcState);
        LODWORD(v9) = ObInsertObject(v25, 0LL, *(_DWORD *)(v1 + 48), 0, 0LL, &Handle);
        KeUnstackDetachProcess(&ApcState);
        if ( (int)v9 < 0 )
        {
          WdLogSingleEntry0(2LL);
          WdLogGlobalForLineNumber = 15093;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"Failed to create nt handle in guest process",
            15093LL,
            0LL,
            0LL,
            0LL,
            0LL);
        }
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 15061;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"Failed to create shared resource for guest",
          15061LL,
          0LL,
          0LL,
          0LL,
          0LL);
        v2 = v25;
      }
    }
    else
    {
      WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v9);
      v17 = *(_QWORD *)(v1 + 40);
      WdLogGlobalForLineNumber = 15053;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Failed to reference process by handle for process id 0x%I64x, Status=0x%.8x",
        v17,
        v9,
        0LL,
        0LL,
        0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, *(_QWORD *)(v1 + 40), v14);
    v15 = *(_QWORD *)(v1 + 40);
    WdLogGlobalForLineNumber = 15044;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to open process handle for process id 0x%I64x, Status=0x%.8x",
      v15,
      v9,
      0LL,
      0LL,
      0LL);
  }
LABEL_14:
  while ( 1 )
  {
    v18 = (struct DXG_VMBUS_CHANNEL_BASE *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 212);
    v29 = 0LL;
    v30 = 0;
    DXGVMBUSMESSAGE::InitializeMessage((DXGVMBUSMESSAGE *)&v29, v18, 0x38u, 0LL, 0LL, 0LL);
    v19 = v29;
    if ( (_QWORD)v29 )
      break;
    LODWORD(v9) = -1073741801;
    DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v29);
  }
  v20 = Handle;
  v21 = *(_QWORD *)(v1 + 32);
  *(_BYTE *)(v29 + 12) = 1;
  *(_DWORD *)(v19 + 12) &= 0x1FFu;
  *(_QWORD *)(v19 + 48) = v20;
  *(_QWORD *)(v19 + 32) = v21;
  *(_QWORD *)v19 = 0LL;
  *(_DWORD *)(v19 + 8) = 0;
  *(_QWORD *)(v19 + 16) = 1011LL;
  *(_DWORD *)(v19 + 24) = v9;
  *(_DWORD *)(v19 + 40) = 8;
  if ( (int)DXG_GUEST_GLOBAL_VMBUS::VmBusSendCompleteTransaction(v18, (struct DXGVMBUSMESSAGE *)&v29) < 0 || (int)v9 < 0 )
  {
    if ( Handle )
    {
      ObCloseHandle(Handle, 1);
    }
    else if ( v2 )
    {
      ObfDereferenceObject(v2);
    }
  }
  if ( v3 )
    ObfDereferenceObject(v3);
  DXGVMBUSMESSAGE::~DXGVMBUSMESSAGE((DXGVMBUSMESSAGE *)&v29);
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v32);
  return 0;
}
