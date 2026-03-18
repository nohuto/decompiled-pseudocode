/*
 * XREFs of ?VmBusOpenAdapter@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x1402288E0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$03@@U2@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U1@U2@U2@U2@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$03@@4AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@3444444@Z @ 0x140003900 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$03@@U2@U-$_tlgWrapBuffer@U_UNICODE_STRING.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x140009344 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x140009840 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     McTemplateK0pqtq_EtwWriteTransfer @ 0x140013990 (McTemplateK0pqtq_EtwWriteTransfer.c)
 *     ??1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ @ 0x140017020 (--1DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@XZ.c)
 *     ??0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z @ 0x140018480 (--0DXGADAPTERSTOPRESETLOCKSHARED@@QEAA@PEAVDXGADAPTER@@E@Z.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     _tlgKeywordOn @ 0x140050B20 (_tlgKeywordOn.c)
 *     ?VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z @ 0x140051508 (-VmBusCompletePacket@@YAXPEAUVMBPACKETCOMPLETION__@@PEAXI@Z.c)
 *     ?GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z @ 0x140058DF8 (-GetKmdProcessHandle@DXGPROCESS@@QEBAPEAXI@Z.c)
 *     ??$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x14005C2E0 (--$CastToVmBusCommand@UDXGKVMB_COMMAND_DESTROYDEVICE@@@@YAPEAUDXGKVMB_COMMAND_DESTROYDEVICE@@PEA.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z @ 0x1401B2628 (-DdiSetVirtualMachineData@ADAPTER_RENDER@@QEAAJPEBU_DXGKARG_SETVIRTUALMACHINEDATA@@@Z.c)
 *     ?CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z @ 0x1402AF2AC (-CreateHandle@DXGADAPTER@@QEAAJPEAVDXGPROCESS@@PEAI@Z.c)
 */

unsigned __int8 __fastcall DXG_HOST_VIRTUALGPU_VMBUS::VmBusOpenAdapter(struct DXGADAPTER_VMBUS_PACKET *a1)
{
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // r8
  __int64 v5; // r15
  int v6; // r12d
  __int64 v7; // rax
  char v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbx
  unsigned int v11; // ecx
  unsigned int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  __int64 v15; // rax
  __int64 v16; // rdx
  DXGPROCESS *v17; // rcx
  void *KmdProcessHandle; // rax
  char v19; // cl
  __int64 v20; // rcx
  struct VMBPACKETCOMPLETION__ *v21; // rcx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v28; // [rsp+28h] [rbp-E0h]
  __int64 v29; // [rsp+30h] [rbp-D8h]
  __int64 v30; // [rsp+38h] [rbp-D0h]
  __int64 v31; // [rsp+38h] [rbp-D0h]
  __int64 v32; // [rsp+40h] [rbp-C8h]
  unsigned int v33; // [rsp+88h] [rbp-80h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h] BYREF
  int v35; // [rsp+98h] [rbp-70h] BYREF
  int v36; // [rsp+9Ch] [rbp-6Ch] BYREF
  int v37; // [rsp+A0h] [rbp-68h] BYREF
  int v38; // [rsp+A4h] [rbp-64h] BYREF
  int v39; // [rsp+A8h] [rbp-60h] BYREF
  int v40; // [rsp+ACh] [rbp-5Ch] BYREF
  int v41; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v42; // [rsp+B8h] [rbp-50h] BYREF
  unsigned __int16 *v43; // [rsp+C0h] [rbp-48h] BYREF
  _BYTE v44[24]; // [rsp+C8h] [rbp-40h] BYREF
  _BYTE v45[24]; // [rsp+E0h] [rbp-28h] BYREF
  _DXGKARG_SETVIRTUALMACHINEDATA v46; // [rsp+F8h] [rbp-10h] BYREF

  v2 = CastToVmBusCommand<DXGKVMB_COMMAND_DESTROYDEVICE>((__int64)a1);
  v5 = v2;
  if ( v2 )
  {
    v6 = 0;
    v7 = *((_QWORD *)a1 + 12);
    v8 = 0;
    v9 = *((_QWORD *)a1 + 10);
    v33 = 0;
    v10 = *(_QWORD *)(v7 + 592);
    if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
      McTemplateK0pqtq_EtwWriteTransfer(v3, &OpenVirtualGpuStart, v4, *(_QWORD *)(v9 + 16), *(_DWORD *)(v9 + 24), 0, 0);
    DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v45, (struct _KTHREAD **)(v9 + 248));
    DXGADAPTERSTOPRESETLOCKSHARED::DXGADAPTERSTOPRESETLOCKSHARED(
      (DXGADAPTERSTOPRESETLOCKSHARED *)v44,
      *(struct DXGADAPTER **)(v9 + 16),
      1);
    v11 = *(_DWORD *)(v5 + 24);
    if ( v11 > 0x2D || (v12 = *(_DWORD *)(v5 + 28), v12 < 0x10) || v11 < v12 )
    {
      WdLogSingleEntry4(2LL, 45LL, 16LL, *(unsigned int *)(v5 + 24), *(unsigned int *)(v5 + 28));
      v32 = *(unsigned int *)(v5 + 28);
      v31 = *(unsigned int *)(v5 + 24);
      WdLogGlobalForLineNumber = 5704;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"VM bus interface mismatch: 0x%I64x, 0x%I64x, 0x%I64x, 0x%I64x",
        45LL,
        16LL,
        v31,
        v32,
        0LL);
      LODWORD(v13) = -1073741637;
      v6 = 9;
    }
    else if ( *(_BYTE *)(v9 + 173) )
    {
      WdLogSingleEntry0(2LL);
      WdLogGlobalForLineNumber = 5712;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"Adapter is already opened by the guest",
        5712LL,
        0LL,
        0LL,
        0LL,
        0LL);
      LODWORD(v13) = -1073741811;
      v6 = 10;
    }
    else
    {
      *(_DWORD *)(v10 + 392) = v11;
      if ( *(_DWORD *)(*(_QWORD *)(v9 + 16) + 200LL) == 1 )
      {
        v14 = DXGADAPTER::CreateHandle(*(DXGADAPTER **)(v9 + 16), *(struct DXGPROCESS **)(v9 + 96), &v33);
        v13 = v14;
        if ( v14 < 0 )
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 5752;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"CreateHandle failed: 0x%I64x",
            v13,
            0LL,
            0LL,
            0LL,
            0LL);
          LODWORD(v13) = -1073741823;
          v6 = 13;
        }
        else
        {
          *(_BYTE *)(v9 + 173) = 1;
          if ( *(_DWORD *)(v5 + 24) > 0x10u )
          {
            if ( *((_DWORD *)a1 + 36) < 0x28u )
            {
              WdLogSingleEntry1(2LL);
              v15 = *((unsigned int *)a1 + 36);
              WdLogGlobalForLineNumber = 5736;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"Invalid command length: 0x%I64x",
                v15,
                0LL,
                0LL,
                0LL,
                0LL);
              LODWORD(v13) = -1073741811;
              v6 = 12;
            }
            *(_QWORD *)(v9 + 344) = *(_QWORD *)(v5 + 32);
          }
          v16 = *(_QWORD *)(v9 + 16);
          v17 = (DXGPROCESS *)*((_QWORD *)a1 + 12);
          *(_QWORD *)&v46.Flags.0 = 0LL;
          v46.pVmGuid = (GUID *)(v10 + 288);
          KmdProcessHandle = DXGPROCESS::GetKmdProcessHandle(v17, *(_DWORD *)(v16 + 240));
          v19 = *(_BYTE *)(v10 + 336);
          v46.hKmdVmWorkerProcess = KmdProcessHandle;
          LODWORD(KmdProcessHandle) = (v46.Flags.Value & 0xFFFFFFFE | v19 & 1) ^ ((*(_BYTE *)&v46.Flags.0 & 0xFE | v19 & 1) ^ (unsigned __int8)(2 * *(_DWORD *)(v10 + 396))) & 2;
          v20 = *(_QWORD *)(v9 + 16);
          v46.Flags.Value = (unsigned int)KmdProcessHandle;
          ADAPTER_RENDER::DdiSetVirtualMachineData(*(ADAPTER_RENDER **)(v20 + 3168), &v46);
        }
      }
      else
      {
        LODWORD(v13) = -1073741130;
        v6 = 11;
      }
    }
    if ( *(_DWORD *)(v5 + 24) <= 0x10u )
    {
      if ( (int)v13 < 0 )
      {
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 5778;
        DxgkLogInternalTriageEvent(
          0LL,
          0x40000,
          -1,
          (__int64)L"CreateHandle failed: 0x%I64x",
          (int)v13,
          0LL,
          0LL,
          0LL,
          0LL);
      }
      else
      {
        VmBusCompletePacket(*((struct VMBPACKETCOMPLETION__ **)a1 + 16), &v33, 4u);
        v8 = 1;
      }
    }
    else
    {
      v21 = (struct VMBPACKETCOMPLETION__ *)*((_QWORD *)a1 + 16);
      v46.hKmdVmWorkerProcess = (HANDLE)__PAIR64__(v13, v33);
      v46.pVmGuid = (GUID *)0x100000002DLL;
      VmBusCompletePacket(v21, &v46, 0x10u);
      v8 = 1;
    }
    v34 = *(_QWORD *)(*(_QWORD *)(v9 + 16) + 412LL);
    if ( (unsigned int)dword_140166660 > 5 && tlgKeywordOn((__int64)&dword_140166660, 0x400000008000LL) )
    {
      v35 = *(_DWORD *)(v24 + 432);
      v36 = *(_DWORD *)(v24 + 428);
      v37 = *(_DWORD *)(v24 + 424);
      v38 = *(_DWORD *)(v24 + 420);
      v25 = *(_QWORD *)(v9 + 104);
      v39 = 45;
      v26 = *(unsigned int *)(v25 + 392);
      v42 = v34;
      v43 = *(unsigned __int16 **)(v24 + 1968);
      v40 = v26;
      v41 = v13;
      LODWORD(v34) = v6;
      v46.hKmdVmWorkerProcess = (HANDLE)0x2000000;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapBuffer<_UNICODE_STRING>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
        v26,
        (__int64)&unk_14014401F,
        v23,
        v24,
        (__int64)&v46,
        (__int64)&v34,
        (__int64)&v41,
        &v43,
        (__int64)&v42,
        (__int64)&v40,
        (__int64)&v39,
        (__int64)&v38,
        (__int64)&v37,
        (__int64)&v36,
        (__int64)&v35);
    }
    if ( bTracingEnabled )
    {
      if ( (int)v13 < 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
      {
        LODWORD(v30) = v6;
        LODWORD(v29) = v13;
        LODWORD(v28) = *(_DWORD *)(v9 + 24);
        McTemplateK0pqtq_EtwWriteTransfer(v22, &OpenVirtualGpuFailed, v23, *(_QWORD *)(v9 + 16), v28, v29, v30);
      }
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
      {
        LODWORD(v30) = v6;
        LODWORD(v29) = v13;
        LODWORD(v28) = *(_DWORD *)(v9 + 24);
        McTemplateK0pqtq_EtwWriteTransfer(
          (unsigned int)v28,
          &OpenVirtualGpuEnd,
          v23,
          *(_QWORD *)(v9 + 16),
          v28,
          v29,
          v30);
      }
    }
    DXGADAPTERSTOPRESETLOCKSHARED::~DXGADAPTERSTOPRESETLOCKSHARED((DXGADAPTERSTOPRESETLOCKSHARED *)v44);
    DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v45);
    LOBYTE(v2) = v8;
  }
  return v2;
}
