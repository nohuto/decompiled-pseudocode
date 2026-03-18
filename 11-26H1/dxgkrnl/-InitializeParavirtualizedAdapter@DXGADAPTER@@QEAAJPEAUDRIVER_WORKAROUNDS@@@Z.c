/*
 * XREFs of ?InitializeParavirtualizedAdapter@DXGADAPTER@@QEAAJPEAUDRIVER_WORKAROUNDS@@@Z @ 0x14019C2FC
 * Callers:
 *     ?Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z @ 0x140199398 (-Initialize@DXGADAPTER@@QEAAJPEAU_DEVICE_OBJECT@@PEAU_DXGK_ADAPTER_CAPS@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     DpReadDeviceSpace @ 0x14004DE30 (DpReadDeviceSpace.c)
 *     DpWriteDeviceSpace @ 0x140057960 (DpWriteDeviceSpace.c)
 *     McTemplateK0pqqqqxx_EtwWriteTransfer @ 0x14006FC84 (McTemplateK0pqqqqxx_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?CopyRegistryKeys@DXGADAPTER@@QEAAJXZ @ 0x1401974FC (-CopyRegistryKeys@DXGADAPTER@@QEAAJXZ.c)
 *     ?CopyDriverStore@DXGADAPTER@@QEAAJXZ @ 0x1401D5DC4 (-CopyDriverStore@DXGADAPTER@@QEAAJXZ.c)
 *     ?EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ @ 0x1401DD134 (-EnsureVmBusInterface@DXGGLOBAL@@QEAAJXZ.c)
 *     ?HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ @ 0x1401DD6F8 (-HandleVirtualMachineReset@DXGGLOBAL@@QEAAXXZ.c)
 *     ?GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z @ 0x140220CB0 (-GetMmioSpaceInfo@DXG_GUEST_GLOBAL_VMBUS@@QEAAJPEA_K0@Z.c)
 *     ?VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1@@@Z @ 0x14022F55C (-VmBusSendGetInternalAdapterInfo19h1@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINT.c)
 *     ?VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x14022F6B8 (-VmBusSendGetInternalAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAUDXGKVMB_COMMAND_GETINTERNA.c)
 *     ?VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z @ 0x1402305F0 (-VmBusSendLogEvent@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAXJW4DXGKVMB_EVENT_SCENARIO@@I_K1@Z.c)
 *     ?VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z @ 0x140230D54 (-VmBusSendOpenAdapter@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAIPEBU_LUID@@@Z.c)
 *     ?VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z @ 0x140232064 (-VmBusSendSetIoSpaceRegion@DXG_GUEST_GLOBAL_VMBUS@@QEAAJ_K0I@Z.c)
 *     DpiGetAdapterInfo @ 0x140238980 (DpiGetAdapterInfo.c)
 *     DpiSetDriverVersion @ 0x14023A8E8 (DpiSetDriverVersion.c)
 *     ?CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z @ 0x1403BE250 (-CreateVmBusChannel@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGADAPTER@@@Z.c)
 *     ?VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADAPTERINFO@@I@Z @ 0x14042FC54 (-VmBusSendQueryAdapterInfo@DXG_GUEST_VIRTUALGPU_VMBUS@@QEAAJPEAVDXGPROCESS@@PEAU_D3DKMT_QUERYADA.c)
 */

__int64 __fastcall DXGADAPTER::InitializeParavirtualizedAdapter(DXGADAPTER *this, struct DRIVER_WORKAROUNDS *a2)
{
  unsigned int v4; // esi
  char v5; // r13
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // eax
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  struct DXGGLOBAL *Global; // rax
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdi
  unsigned int v18; // eax
  struct DXGGLOBAL *v19; // rax
  DXG_GUEST_VIRTUALGPU_VMBUS *v20; // rcx
  struct DXGGLOBAL *v21; // rax
  int v22; // ecx
  unsigned int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // rcx
  char v26; // cl
  bool v27; // cf
  int v28; // eax
  DXGGLOBAL *v29; // rax
  DXGGLOBAL *v30; // rax
  unsigned int v31; // r9d
  int v32; // eax
  unsigned int v33; // r9d
  int v34; // eax
  DXG_GUEST_GLOBAL_VMBUS *v35; // rbx
  struct DXGGLOBAL *v36; // rax
  __int64 v37; // r8
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r8
  __int64 v42; // [rsp+20h] [rbp-E0h]
  __int64 v43; // [rsp+20h] [rbp-E0h]
  __int64 v44; // [rsp+28h] [rbp-D8h]
  __int64 v45; // [rsp+28h] [rbp-D8h]
  __int64 v46; // [rsp+30h] [rbp-D0h]
  __int64 v47; // [rsp+30h] [rbp-D0h]
  __int64 v48; // [rsp+38h] [rbp-C8h]
  __int64 v49; // [rsp+38h] [rbp-C8h]
  ULONG v50; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v51; // [rsp+54h] [rbp-ACh] BYREF
  int v52; // [rsp+58h] [rbp-A8h] BYREF
  _D3DKMT_QUERYADAPTERINFO v53; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v54; // [rsp+78h] [rbp-88h] BYREF
  unsigned __int64 v55; // [rsp+80h] [rbp-80h] BYREF
  int v56; // [rsp+88h] [rbp-78h] BYREF
  __int128 v57; // [rsp+8Ch] [rbp-74h]
  __int64 v58; // [rsp+9Ch] [rbp-64h]
  _QWORD v59[89]; // [rsp+A8h] [rbp-58h] BYREF

  *((_BYTE *)this + 209) = 1;
  v51 = 0;
  v50 = 0;
  v4 = 4;
  v5 = 0;
  v6 = DpReadDeviceSpace(*((_QWORD *)this + 27), 0LL, &v51, 0xD0u, 4u, &v50);
  if ( v6 < 0 || v50 != 4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v8, v7) + 24) = v6;
    WdLogGlobalForLineNumber = 6598;
    goto LABEL_10;
  }
  if ( v51 >= 0x28 )
  {
    v9 = 45;
    if ( v51 < 0x2D )
      v9 = v51;
    v52 = v9;
    *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) = v9;
    v10 = DpWriteDeviceSpace(*((_QWORD *)this + 27), 0, &v52, 0xD0u, 4u, &v50);
    if ( v10 < 0 || v50 != 4 )
    {
      *(_QWORD *)(WdLogNewEntry5_WdTrace(v12, v11) + 24) = v10;
      WdLogGlobalForLineNumber = 6613;
LABEL_10:
      v51 = 0;
    }
  }
  *((_DWORD *)DXGGLOBAL::GetGlobal() + 439) = v51;
  Global = DXGGLOBAL::GetGlobal();
  v14 = DpReadDeviceSpace(*((_QWORD *)this + 27), 0LL, (char *)Global + 1760, 0xDCu, 4u, &v50);
  if ( v14 < 0 || v50 != 4 )
  {
    *(_QWORD *)(WdLogNewEntry5_WdTrace(v16, v15) + 24) = v14;
    WdLogGlobalForLineNumber = 6628;
  }
  LODWORD(v17) = DXG_GUEST_VIRTUALGPU_VMBUS::CreateVmBusChannel((struct VMBCHANNEL__ **)this + 589, this);
  if ( (int)v17 >= 0 )
  {
    v18 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendOpenAdapter(
            (DXGADAPTER *)((char *)this + 4712),
            (const struct _LUID *)(*(_QWORD *)(*((_QWORD *)this + 27) + 64LL) + 2696LL));
    *((_DWORD *)this + 1200) = v18;
    if ( v18 )
    {
      memset(v59, 0, sizeof(v59));
      v19 = DXGGLOBAL::GetGlobal();
      v20 = (DXGADAPTER *)((char *)this + 4712);
      if ( *((_DWORD *)v19 + 438) <= 0x10u )
      {
        LODWORD(v17) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo19h1(
                         v20,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN1 *)v59);
        if ( (int)v17 < 0 )
          goto LABEL_61;
      }
      else
      {
        LODWORD(v17) = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendGetInternalAdapterInfo(
                         v20,
                         (struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *)v59);
        if ( (int)v17 < 0 )
        {
          v4 = 3;
          goto LABEL_61;
        }
      }
      *(_DWORD *)a2 ^= (*(_DWORD *)a2 ^ (HIDWORD(v59[1]) << 14)) & 0x20000;
      v21 = DXGGLOBAL::GetGlobal();
      v22 = *(_DWORD *)a2;
      if ( *((_DWORD *)v21 + 438) < 0x26u )
      {
        if ( (v59[1] & 0x1000000000LL) != 0 )
          v23 = v22 & 0xFFFE7FFF | 0x10000;
        else
          v23 = v22 & 0xFFFE7FFF;
      }
      else
      {
        v23 = v22 & 0xFFFE7FFF | ((WORD2(v59[1]) & 0x180) << 8);
      }
      *(_DWORD *)a2 = v23;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) < 0x29u )
        v24 = *(_DWORD *)a2 & 0xFFE3FFFF;
      else
        v24 = ((WORD2(v59[1]) & 0x200) << 11) | *(_DWORD *)a2 & 0xFFE3FFFF | ((WORD2(v59[1]) & 0xC00) << 8) & 0xFFEFFFFF;
      *(_DWORD *)a2 = v24;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x22u )
        *(_QWORD *)((char *)this + 4820) = v59[88];
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x28u && (v59[1] & 0x4000000000LL) != 0 )
        *((_BYTE *)DXGGLOBAL::GetGlobal() + 1764) = 1;
      if ( *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x10u )
        DpiSetDriverVersion(*((_QWORD *)this + 27), LODWORD(v59[1]), &v59[3], &v59[23]);
      v25 = *((_QWORD *)this + 27);
      *((_BYTE *)this + 1825) = 1;
      LODWORD(v17) = DpiGetAdapterInfo(v25, (char *)this + 1784, (char *)this + 288);
      if ( (int)v17 < 0 )
        goto LABEL_38;
      *((_DWORD *)this + 111) = v59[0] & 0x18 | *((_DWORD *)this + 111) & 0xFFFFFFE7;
      v26 = BYTE4(v59[1]);
      *((_BYTE *)this + 210) = BYTE4(v59[1]) & 1;
      v27 = HIDWORD(v59[0]) < 2;
      *((_BYTE *)this + 211) = (v26 & 4) != 0;
      v28 = 2;
      if ( v27 )
        v28 = HIDWORD(v59[0]);
      *((_DWORD *)this + 776) = v28;
      *(_QWORD *)((char *)this + 4812) = v59[2];
      if ( (v26 & 2) != 0 )
      {
        v29 = DXGGLOBAL::GetGlobal();
        DXGGLOBAL::HandleVirtualMachineReset(v29);
      }
      v30 = DXGGLOBAL::GetGlobal();
      LODWORD(v17) = DXGGLOBAL::EnsureVmBusInterface(v30);
      if ( (int)v17 < 0 )
      {
LABEL_38:
        v4 = 5;
      }
      else
      {
        if ( *((_BYTE *)DXGGLOBAL::GetGlobal() + 1764) )
          *((_QWORD *)this + 590) = **((_QWORD **)DXGGLOBAL::GetGlobal() + 212);
        v52 = 0;
        v53.pPrivateDriverData = &v52;
        v53.hAdapter = 0;
        *(_QWORD *)&v53.PrivateDriverDataSize = 4LL;
        v53.Type = KMTQAITYPE_PHYSICALADAPTERCOUNT;
        v32 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo((DXGADAPTER *)((char *)this + 4712), 0LL, &v53, v31);
        v17 = v32;
        if ( v32 >= 0 )
        {
          *((_DWORD *)this + 74) = v52;
          if ( !*((_DWORD *)this + 105) && !*((_DWORD *)this + 106) )
          {
            v58 = 0LL;
            v53.hAdapter = 0;
            v53.pPrivateDriverData = &v56;
            *(_QWORD *)&v53.PrivateDriverDataSize = 28LL;
            v56 = 0;
            v57 = 0LL;
            v53.Type = KMTQAITYPE_PHYSICALADAPTERDEVICEIDS;
            v34 = DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendQueryAdapterInfo(
                    (DXGADAPTER *)((char *)this + 4712),
                    0LL,
                    &v53,
                    v33);
            v17 = v34;
            if ( v34 < 0 )
            {
              WdLogSingleEntry1(2LL);
              WdLogGlobalForLineNumber = 6815;
              DxgkLogInternalTriageEvent(
                0LL,
                0x40000,
                -1,
                (__int64)L"KMTQAITYPE_PHYSICALADAPTERDEVICEIDS failed: 0x%I64x",
                v17,
                0LL,
                0LL,
                0LL,
                0LL);
              v4 = 12;
              goto LABEL_61;
            }
            *(_OWORD *)((char *)this + 420) = v57;
            *((_DWORD *)this + 109) = v58;
          }
          v55 = 0LL;
          v54 = 0LL;
          v35 = (DXG_GUEST_GLOBAL_VMBUS *)*((_QWORD *)DXGGLOBAL::GetGlobal() + 212);
          LODWORD(v17) = DXG_GUEST_GLOBAL_VMBUS::GetMmioSpaceInfo(v35, &v55, &v54);
          if ( (int)v17 >= 0 )
          {
            v36 = DXGGLOBAL::GetGlobal();
            LODWORD(v17) = DXG_GUEST_GLOBAL_VMBUS::VmBusSendSetIoSpaceRegion(v35, v55, v54, *((_DWORD *)v36 + 431));
            if ( (int)v17 >= 0 )
            {
              v4 = 8;
              if ( (*((_DWORD *)this + 111) & 8) != 0
                || (LODWORD(v17) = DXGADAPTER::CopyDriverStore(this), (int)v17 >= 0) )
              {
                LODWORD(v17) = DXGADAPTER::CopyRegistryKeys(this);
                if ( (int)v17 >= 0 )
                  return (unsigned int)v17;
                v4 = 9;
                v5 = 1;
              }
            }
            else
            {
              v4 = 7;
            }
          }
          else
          {
            v4 = 6;
          }
        }
        else
        {
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 6793;
          DxgkLogInternalTriageEvent(
            0LL,
            0x40000,
            -1,
            (__int64)L"KMTQAITYPE_PHYSICALADAPTERCOUNT failed: 0x%I64x",
            v17,
            0LL,
            0LL,
            0LL,
            0LL);
          v4 = 11;
        }
      }
    }
    else
    {
      v4 = 2;
      LODWORD(v17) = -1073741823;
    }
  }
  else
  {
    v4 = 1;
  }
LABEL_61:
  if ( v5 )
  {
    WdLogSingleEntry2(3LL, (int)v17, v4);
    WdLogGlobalForLineNumber = 6882;
    LODWORD(v17) = 0;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x100000000LL) != 0 )
    {
      LODWORD(v48) = v4;
      LODWORD(v46) = 0;
      LODWORD(v44) = 0;
      LODWORD(v42) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(0LL, &VirtualGpuGuestEvent, v37, this, v42, v44, v46, v48, 0LL, 0LL);
    }
  }
  else
  {
    WdLogSingleEntry2(2LL, (int)v17, v4);
    WdLogGlobalForLineNumber = 6888;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Status:0x%I64x Reason: 0x%I64x ",
      (int)v17,
      v4,
      0LL,
      0LL,
      0LL);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80000000LL) != 0 )
    {
      LODWORD(v49) = v4;
      LODWORD(v47) = 0;
      LODWORD(v45) = v17;
      LODWORD(v43) = 0;
      McTemplateK0pqqqqxx_EtwWriteTransfer(v38, &VirtualGpuGuestEventFailure, v39, this, v43, v45, v47, v49, 0LL, 0LL);
    }
  }
  if ( v4 != 1 && *((_DWORD *)DXGGLOBAL::GetGlobal() + 438) >= 0x1Au )
    DXG_GUEST_VIRTUALGPU_VMBUS::VmBusSendLogEvent((char *)this + 4712, (unsigned int)v17, v40, v4);
  return (unsigned int)v17;
}
