/*
 * XREFs of ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC
 * Callers:
 *     DxgkDeviceIoctl @ 0x140078F90 (DxgkDeviceIoctl.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021CAB0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_PARAV@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 *     ?SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z @ 0x14021F4C0 (-SetVirtualGpuVmBus@DXGK_VIRTUAL_GPU_GPUP@@UEAAJPEAU_DXGKARG_SETVIRTUALGPUVMBUS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x14000D6A0 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x14000E0B0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ @ 0x140016BA0 (--1DXGPROCESSCOPYPROTECTIONMUTEX@@QEAA@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?Release@DxgkCompositionObject@@QEBA_JXZ @ 0x14004A520 (-Release@DxgkCompositionObject@@QEBA_JXZ.c)
 *     ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x140194D18 (-CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z.c)
 *     ?SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z @ 0x1401F79D4 (-SetVailObject@DXGVIRTUALMACHINE@@QEAAXPEAVDXGVAILOBJECT@@@Z.c)
 *     ?Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z @ 0x14020D5EC (-Create@DXGVAILOBJECT@@SAJPEAPEAV1@@Z.c)
 *     ?InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z @ 0x14020E3FC (-InitializeVmBus@DXGVAILOBJECT@@QEAAJPEAX@Z.c)
 *     ?IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ @ 0x14020E4A0 (-IsFeatureEnabled@DXGVAILOBJECT@@SAEXZ.c)
 *     ?UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z @ 0x1402136A4 (-UpdateVmBusHandle@DXGVMBUSCHANNEL@@QEAAJPEAX@Z.c)
 */

__int64 __fastcall DXGVIRTUALMACHINE::InitializeVirtualMachine(struct DXGPROCESSVMWP **this, void *a2, char a3)
{
  __int64 updated; // rdi
  struct VMBCHANNEL__ **v7; // rcx
  int VmBusChannel; // eax
  int v9; // eax
  struct DXGPROCESSVMWP *v10; // rbx
  int v11; // eax
  const wchar_t *v12; // r9
  _BYTE v14[16]; // [rsp+50h] [rbp-28h] BYREF
  DxgkCompositionObject *v15; // [rsp+88h] [rbp+10h] BYREF

  LODWORD(updated) = 0;
  if ( a2 )
  {
    v7 = this + 20;
    if ( *v7 )
      return 0LL;
    VmBusChannel = DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(v7, a2, this[7]);
    updated = VmBusChannel;
    if ( VmBusChannel < 0 )
    {
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 6296;
      DxgkLogInternalTriageEvent(
        0LL,
        0x40000,
        -1,
        (__int64)L"CreateVmBusChannel failed: 0x%I64x",
        updated,
        0LL,
        0LL,
        0LL,
        0LL);
    }
  }
  if ( !DXGVAILOBJECT::IsFeatureEnabled() )
  {
    if ( (int)updated < 0 )
      return (unsigned int)updated;
    goto LABEL_22;
  }
  if ( (int)updated >= 0 )
  {
    if ( !this[41] && a3 )
    {
      v15 = 0LL;
      v9 = DXGVAILOBJECT::Create(&v15);
      updated = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL);
        v12 = L"DXGVAILOBJECT::Create failed: 0x%I64x";
        WdLogGlobalForLineNumber = 6324;
        goto LABEL_16;
      }
      DXGVIRTUALMACHINE::SetVailObject((DXGVIRTUALMACHINE *)this, v15);
      DxgkCompositionObject::Release(v15);
    }
    if ( a2 )
    {
      v10 = this[41];
      if ( v10 )
      {
        if ( *((_QWORD *)v10 + 14) )
        {
          DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v14, (struct DXGPROCESSVMWP *)((char *)v10 + 40), 1);
          DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v14);
          updated = (int)DXGVMBUSCHANNEL::UpdateVmBusHandle(*((DXGVMBUSCHANNEL **)v10 + 14), a2);
          DXGPROCESSCOPYPROTECTIONMUTEX::~DXGPROCESSCOPYPROTECTIONMUTEX((DXGPROCESSCOPYPROTECTIONMUTEX *)v14);
          if ( (int)updated < 0 )
          {
            WdLogSingleEntry1(2LL);
            v12 = L"DXGVAILOBJECT::UpdateVmBus failed: 0x%I64x";
            WdLogGlobalForLineNumber = 6343;
            goto LABEL_16;
          }
        }
        else
        {
          v11 = DXGVAILOBJECT::InitializeVmBus(this[41], a2);
          updated = v11;
          if ( v11 < 0 )
          {
            WdLogSingleEntry1(2LL);
            v12 = L"DXGVAILOBJECT::InitializeVmBus failed: 0x%I64x";
            WdLogGlobalForLineNumber = 6335;
LABEL_16:
            DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)v12, updated, 0LL, 0LL, 0LL, 0LL);
            return (unsigned int)updated;
          }
        }
      }
    }
LABEL_22:
    *((_BYTE *)this + 337) = 0;
  }
  return (unsigned int)updated;
}
