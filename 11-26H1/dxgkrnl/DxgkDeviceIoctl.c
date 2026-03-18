/*
 * XREFs of DxgkDeviceIoctl @ 0x140078F90
 * Callers:
 *     <none>
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ??1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ @ 0x140035B44 (--1DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@XZ.c)
 *     ?CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z @ 0x140056A54 (-CreateHandle@DxgkCompositionObject@@QEBAJK_NDPEAPEAX@Z.c)
 *     RtlCopyFromUser @ 0x14006E4A4 (RtlCopyFromUser.c)
 *     ?CheckTokenForVMGroupMembership@@YAJXZ @ 0x140078878 (-CheckTokenForVMGroupMembership@@YAJXZ.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     RtlCopyToUser @ 0x1401966EC (RtlCopyToUser.c)
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 *     ?InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALMACHINE@@@Z @ 0x1401F6944 (-InitializeVmwpProcess@DXGPROCESSVMWP@@QEAAJPEAXPEAVDXGPROCESS@@PEAU_EPROCESS@@2EPEAVDXGVIRTUALM.c)
 *     ?SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z @ 0x1401F7A64 (-SetVmGuid@DXGVIRTUALMACHINE@@QEAAXPEBU_GUID@@@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x14020E4A0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1402EABB0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z @ 0x1403AF638 (-CreateDxgProcess@DXGPROCESS@@SAJPEAPEAV1@PEAV1@1EPEAU_EPROCESS@@@Z.c)
 *     ?ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ @ 0x1403CBD1C (-ReferenceVailObject@DXGVIRTUALMACHINE@@QEAAPEAVDXGVAILOBJECT@@XZ.c)
 */

__int64 __fastcall DxgkDeviceIoctl(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  DWORD LowPart; // ecx
  ULONG Length; // r12d
  ULONG Options; // ebx
  __int64 v7; // rsi
  DXGVIRTUALMACHINE **v8; // r14
  DxgkCompositionObject *v9; // r15
  NTSTATUS v10; // eax
  unsigned __int64 Current; // rax
  int DxgProcess; // eax
  const wchar_t *v13; // r9
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // edx
  __int64 v18; // r8
  unsigned int v20; // [rsp+50h] [rbp-A8h]
  void *Src; // [rsp+58h] [rbp-A0h] BYREF
  volatile void *Address; // [rsp+60h] [rbp-98h]
  DxgkCompositionObject *v23; // [rsp+68h] [rbp-90h]
  DXGVIRTUALMACHINE *v24; // [rsp+70h] [rbp-88h]
  void *v25[3]; // [rsp+78h] [rbp-80h] BYREF
  IRP *v26; // [rsp+90h] [rbp-68h]
  _BYTE v27[24]; // [rsp+98h] [rbp-60h] BYREF
  struct _GUID v28; // [rsp+B0h] [rbp-48h] BYREF

  v25[2] = a2;
  v26 = a2;
  v20 = 0;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  Address = a2->UserBuffer;
  v25[1] = (void *)Address;
  Length = CurrentStackLocation->Parameters.Read.Length;
  Src = CurrentStackLocation->Parameters.CreatePipe.Parameters;
  Options = CurrentStackLocation->Parameters.Create.Options;
  if ( LowPart != 2310147 )
  {
    LODWORD(v7) = -1073741808;
    WdLogSingleEntry2(3LL, LowPart, -1073741808LL);
    WdLogGlobalForLineNumber = 1077;
    goto LABEL_42;
  }
  v8 = 0LL;
  v9 = 0LL;
  v23 = 0LL;
  v25[0] = 0LL;
  v28 = 0LL;
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 934;
    LODWORD(v7) = -1073741637;
    goto LABEL_42;
  }
  if ( Options != 16 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 941;
LABEL_7:
    LODWORD(v7) = -1073741306;
    goto LABEL_42;
  }
  if ( Length != 8 )
  {
    WdLogSingleEntry0(3LL);
    WdLogGlobalForLineNumber = 948;
    goto LABEL_7;
  }
  RtlCopyFromUser(&v28, Src, 0x10uLL);
  ProbeForWrite(Address, 8uLL, 1u);
  v10 = CheckTokenForVMGroupMembership();
  v7 = v10;
  if ( v10 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 972;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"CheckTokenForVMGroupMembership failed: 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  if ( (int)v7 < 0 )
    goto LABEL_40;
  Current = (unsigned __int64)DXGPROCESS::GetCurrent();
  Src = (void *)Current;
  if ( Current )
  {
    v17 = *(_DWORD *)(Current + 408);
    if ( (v17 & 0x80) != 0 )
    {
      if ( (v17 & 0x100) != 0 )
        v8 = *(DXGVIRTUALMACHINE ***)(Current + 592);
      else
        v8 = (DXGVIRTUALMACHINE **)(Current & -(__int64)((v17 & 0x80) != 0));
      LODWORD(v7) = 0;
      goto LABEL_32;
    }
    v7 = -1073741811LL;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1020;
    v13 = L"Process is belonging to VM group, but not VMWP or VMMEM : 0x%I64x";
    goto LABEL_30;
  }
  DxgProcess = DXGPROCESS::CreateDxgProcess((struct DXGPROCESS **)&Src, 0LL, 0LL, 1u, 0LL);
  v7 = DxgProcess;
  if ( DxgProcess < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 985;
    v13 = L"DXGPROCESS::CreateDxgProcess failed: : 0x%I64x";
LABEL_30:
    DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v13, v7, 0LL, 0LL, 0LL, 0LL);
    goto LABEL_31;
  }
  v14 = *((_DWORD *)Src + 102);
  if ( (v14 & 0x100) != 0 )
    v8 = (DXGVIRTUALMACHINE **)*((_QWORD *)Src + 74);
  else
    v8 = (DXGVIRTUALMACHINE **)((unsigned __int64)Src & -(__int64)((v14 & 0x80u) != 0));
  v15 = DXGPROCESSVMWP::InitializeVmwpProcess((DXGPROCESSVMWP *)v8, 0LL, 0LL, 0LL, 0LL, 0, 0LL);
  v7 = v15;
  if ( v15 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 995;
    v13 = L"DXGPROCESS::InitializeVmwpProcess failed: : 0x%I64x";
    goto LABEL_30;
  }
  v24 = v8[74];
  v16 = DXGVIRTUALMACHINE::InitializeVirtualMachine(v24, 0LL, 1u);
  v7 = v16;
  if ( v16 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1005;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to initalize virtual machine : 0x%I64x",
      v7,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  DXGVIRTUALMACHINE::SetVmGuid(v24, &v28);
LABEL_31:
  if ( (int)v7 >= 0 )
  {
LABEL_32:
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v27, (struct _KTHREAD **)v8[74] + 8);
    v9 = DXGVIRTUALMACHINE::ReferenceVailObject(v8[74]);
    v23 = v9;
    if ( !v9 )
    {
      LODWORD(v7) = -1073741275;
      WdLogSingleEntry1(1LL);
      WdLogGlobalForLineNumber = 1032;
      DxgkLogInternalTriageEvent(
        0LL,
        262146,
        -1,
        (__int64)L"Failed to find Vail object: 0xI64x",
        -1073741275LL,
        0LL,
        0LL,
        0LL,
        0LL);
    }
    DXGHANDLETABLELOCKEXCLUSIVE::~DXGHANDLETABLELOCKEXCLUSIVE((DXGHANDLETABLELOCKEXCLUSIVE *)v27);
    if ( (int)v7 >= 0 )
    {
      LODWORD(v7) = DxgkCompositionObject::CreateHandle(v9, 0xC0060000, v18, 1, v25);
      if ( (int)v7 >= 0 )
      {
        v20 = 8;
      }
      else
      {
        WdLogSingleEntry1(3LL);
        WdLogGlobalForLineNumber = 1044;
      }
      if ( (int)v7 >= 0 )
        RtlCopyToUser((void *)Address, v25, 8uLL);
    }
  }
LABEL_40:
  if ( v9 )
    ObfDereferenceObject(v9);
LABEL_42:
  v26->IoStatus.Information = v20;
  a2->IoStatus.Status = v7;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v7;
}
