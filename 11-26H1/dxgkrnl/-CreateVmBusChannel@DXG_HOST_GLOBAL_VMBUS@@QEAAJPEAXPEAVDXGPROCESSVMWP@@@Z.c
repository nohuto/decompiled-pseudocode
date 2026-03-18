/*
 * XREFs of ?CreateVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAJPEAXPEAVDXGPROCESSVMWP@@@Z @ 0x140194D18
 * Callers:
 *     ?InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z @ 0x1401F66FC (-InitializeVirtualMachine@DXGVIRTUALMACHINE@@QEAAJPEAXE@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x14000E010 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     ?DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ @ 0x14018F6F0 (-DestroyVmBusChannel@DXG_HOST_GLOBAL_VMBUS@@QEAAXXZ.c)
 *     ?CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CHANNEL_STATE_CHANGE_CALLBACKS@@P6AXPEAUVMBCHANNEL__@@PEAUVMBPACKETCOMPLETION__@@0II@ZP6AX5I@ZIPEAPEAU5@@Z @ 0x14041C98C (-CreateServerVmBusChannel@@YAJPEAX0PEAU_DEVICE_OBJECT@@U_GUID@@2PEBU_UNICODE_STRING@@PEAU_VMB_CH.c)
 */

__int64 __fastcall DXG_HOST_GLOBAL_VMBUS::CreateVmBusChannel(
        struct VMBCHANNEL__ **this,
        void *a2,
        struct DXGPROCESSVMWP *a3)
{
  struct DXGGLOBAL *Global; // rax
  void *v7; // rdx
  int v8; // eax
  __int64 v9; // rdi
  unsigned int v11; // [rsp+48h] [rbp-51h]
  struct _UNICODE_STRING v12; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v13[2]; // [rsp+70h] [rbp-29h] BYREF
  __int64 (__fastcall *v14)(struct VMBCHANNEL__ *); // [rsp+78h] [rbp-21h]
  void (__fastcall *v15)(struct VMBCHANNEL__ *); // [rsp+80h] [rbp-19h]
  void (__fastcall *v16)(struct VMBCHANNEL__ *); // [rsp+88h] [rbp-11h]
  void (__fastcall *v17)(struct VMBCHANNEL__ *); // [rsp+90h] [rbp-9h]
  void (__fastcall *v18)(struct VMBCHANNEL__ *); // [rsp+98h] [rbp-1h]
  struct _GUID v19; // [rsp+A0h] [rbp+7h] BYREF
  struct _GUID v20; // [rsp+B0h] [rbp+17h] BYREF
  __int128 v21; // [rsp+C0h] [rbp+27h] BYREF
  int v22; // [rsp+D0h] [rbp+37h]

  if ( *this )
    DXG_HOST_GLOBAL_VMBUS::DestroyVmBusChannel((DXG_HOST_GLOBAL_VMBUS *)this);
  v22 = *(_DWORD *)L"t";
  v12.Buffer = (wchar_t *)&v21;
  v14 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelOpened;
  v15 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelClosed;
  v16 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelSuspend;
  v17 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelStarted;
  v18 = DXG_HOST_GLOBAL_VMBUS::VmBusChannelPostStarted;
  v21 = *(_OWORD *)L"DXGK_Host";
  *(_QWORD *)&v12.Length = 1310738LL;
  v13[0] = 1;
  v13[1] = 48;
  Global = DXGGLOBAL::GetGlobal();
  v7 = (void *)*((_QWORD *)a3 + 74);
  v11 = *((_QWORD *)Global + 218) >> 20;
  v19 = (struct _GUID)DxgkPerVmVmBusChanelInstanceId;
  v20 = (struct _GUID)DxgkPerVmVmBusChannelType;
  v8 = CreateServerVmBusChannel(
         a2,
         v7,
         g_pDeviceObject,
         &v20,
         &v19,
         &v12,
         (struct _VMB_CHANNEL_STATE_CHANGE_CALLBACKS *)v13,
         (void (*)(struct VMBCHANNEL__ *, struct VMBPACKETCOMPLETION__ *, void *, unsigned int, unsigned int))DXG_HOST_GLOBAL_VMBUS::VmBusChannelProcessPacket,
         (void (*)(struct VMBCHANNEL__ *, unsigned int))CompositionSurfaceObject::SetPaired,
         v11,
         this);
  v9 = v8;
  if ( v8 < 0 )
  {
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 6635;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to create VGPU VM bus channel: 0x%I64x",
      v9,
      0LL,
      0LL,
      0LL,
      0LL);
  }
  else
  {
    this[1] = *this;
    *((_BYTE *)this + 68) = 1;
    this[11] = a3;
  }
  return (unsigned int)v9;
}
