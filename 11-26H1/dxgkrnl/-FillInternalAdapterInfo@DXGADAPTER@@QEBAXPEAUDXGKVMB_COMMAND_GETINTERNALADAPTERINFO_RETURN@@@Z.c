/*
 * XREFs of ?FillInternalAdapterInfo@DXGADAPTER@@QEBAXPEAUDXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN@@@Z @ 0x140220B64
 * Callers:
 *     ?VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z @ 0x140195EF0 (-VmBusGetInternalAdapterInfo@DXG_HOST_VIRTUALGPU_VMBUS@@SAEPEAUDXGADAPTER_VMBUS_PACKET@@@Z.c)
 * Callees:
 *     ?RtlStringCbCopyW@@YAJPEAG_KPEBG@Z @ 0x1400361A4 (-RtlStringCbCopyW@@YAJPEAG_KPEBG@Z.c)
 *     ?GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z @ 0x140039EE0 (-GetDeviceDescriptor@DXGADAPTER@@QEBAXKPEAG@Z.c)
 *     DpiGetDevicePropertyDataString @ 0x140411AC4 (DpiGetDevicePropertyDataString.c)
 */

void __fastcall DXGADAPTER::FillInternalAdapterInfo(
        DXGADAPTER *this,
        struct DXGKVMB_COMMAND_GETINTERNALADAPTERINFO_RETURN *a2)
{
  int v4; // r8d
  int v5; // r8d
  unsigned int v6; // edx
  int v7; // ecx
  int v8; // edx
  __int64 v9; // r11
  __int64 v10; // rax
  __int64 v11; // [rsp+40h] [rbp+8h] BYREF
  PVOID P; // [rsp+48h] [rbp+10h] BYREF

  *(_DWORD *)a2 = *((_DWORD *)this + 111);
  v4 = 69640;
  if ( *((_DWORD *)this + 580) < 0x11008u )
    v4 = *((_DWORD *)this + 580);
  *((_DWORD *)a2 + 2) = v4;
  v5 = *((_DWORD *)a2 + 3) ^ ((unsigned __int8)*((_DWORD *)a2 + 3) ^ (unsigned __int8)(**((_DWORD **)this + 381) >> 14)) & 8;
  *((_DWORD *)a2 + 3) = v5;
  v6 = v5 & 0xFFFFFFEF | ((**((_DWORD **)this + 381) & 0x18000) != 0 ? 0x10 : 0);
  *((_DWORD *)a2 + 3) = v6;
  v7 = v6 ^ ((unsigned __int16)v6 ^ (unsigned __int16)(**((_DWORD **)this + 381) >> 8)) & 0x180;
  *((_DWORD *)a2 + 3) = v7;
  v8 = v7 ^ ((unsigned __int16)v7 ^ (unsigned __int16)(**((_DWORD **)this + 381) >> 8)) & 0xC00;
  *((_DWORD *)a2 + 3) = v8;
  *((_DWORD *)a2 + 3) = v8 ^ ((unsigned __int16)v8 ^ (unsigned __int16)(**((_DWORD **)this + 381) >> 11)) & 0x200;
  *((_QWORD *)a2 + 2) = *(_QWORD *)((char *)this + 412);
  DXGADAPTER::GetDeviceDescriptor(this, 0xA0u, (unsigned __int16 *)a2 + 12);
  v10 = *(_QWORD *)(v9 + 216);
  P = 0LL;
  if ( (int)DpiGetDevicePropertyDataString(
              *(PDEVICE_OBJECT *)(*(_QWORD *)(v10 + 64) + 152LL),
              (DEVPROPKEY *)&DEVPKEY_Device_InstanceId,
              (__int64)&P,
              (__int64)&v11) >= 0 )
  {
    RtlStringCbCopyW((char *)a2 + 184, 0x208uLL, (char *)P);
    ExFreePoolWithTag(P, 0);
  }
}
