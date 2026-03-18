/*
 * XREFs of ?SendMouseInputToContainer@Detail@Mouse@IVRootDeliver@@YAJAEBUCONTAINER_ID@@PEAXAEBUContainerMouseInput@@@Z @ 0x140221860
 * Callers:
 *     ?SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z @ 0x14022172C (-SendMouseInput@Mouse@IVRootDeliver@@YAJAEAUCONTAINER_ID@@AEAUContainerMouseInput@@@Z.c)
 * Callees:
 *     RawInputManagerDeviceObjectResolveHandle @ 0x140060220 (RawInputManagerDeviceObjectResolveHandle.c)
 *     IsTouchpadDevice @ 0x14006E7CC (IsTouchpadDevice.c)
 *     ??0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z @ 0x1401B4D38 (--0CIVSerializer@@QEAA@W4IVPacketType@@KK@Z.c)
 *     ??1CIVSerializer@@UEAA@XZ @ 0x1401B71EC (--1CIVSerializer@@UEAA@XZ.c)
 *     ?ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z @ 0x1401BA300 (-ivrIVSend@@YAJAEBVCIVSerializer@@KAEBUCONTAINER_ID@@@Z.c)
 *     ?SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICODE_STRING@@_NAEBUContainerMouseInput@@@Z @ 0x140221FD0 (-SerializeContainerMouseInput@Detail@Mouse@IVRootDeliver@@YAJAEAVCIVMouseSerializer@@AEBU_UNICOD.c)
 */

__int64 __fastcall IVRootDeliver::Mouse::Detail::SendMouseInputToContainer(
        IVRootDeliver::Mouse::Detail *this,
        const struct CONTAINER_ID *a2,
        struct ContainerMouseInput *a3,
        const struct ContainerMouseInput *a4)
{
  PVOID v4; // rbx
  __int64 v8; // rdx
  const struct _UNICODE_STRING *v9; // r8
  __int64 v10; // r9
  int v11; // edi
  unsigned int v12; // esi
  char v13; // r14
  __int64 v14; // rdx
  int v15; // ebx
  __int64 v16; // r9
  struct _UNICODE_STRING v18; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v19[6]; // [rsp+30h] [rbp-30h] BYREF
  char *v20; // [rsp+A8h] [rbp+48h] BYREF

  v4 = 0LL;
  v20 = 0LL;
  v18 = 0LL;
  CIVSerializer::CIVSerializer((__int64)v19, 4);
  v19[0] = &CIVGenericSerializer::`vftable';
  if ( v19[2] )
  {
    v12 = 0;
    v13 = *(_BYTE *)(*(_QWORD *)a3 + 32LL);
    if ( a2 )
    {
      v15 = RawInputManagerDeviceObjectResolveHandle((char *)a2, 3u, 0, (PVOID *)&v20);
      if ( v15 < 0 )
      {
        CIVSerializer::~CIVSerializer((CIVSerializer *)v19, v14, (__int64)v9, v16);
        return (unsigned int)v15;
      }
      v4 = v20;
      v18 = *(struct _UNICODE_STRING *)(v20 + 264);
      if ( v13 && IsTouchpadDevice(*((_QWORD *)v20 + 9), v14) )
        v12 = 2;
    }
    LOBYTE(v9) = v13;
    v11 = IVRootDeliver::Mouse::Detail::SerializeContainerMouseInput(
            (IVRootDeliver::Mouse::Detail *)v19,
            &v18,
            v9,
            a3,
            *(const struct ContainerMouseInput **)&v18.Length);
    if ( v4 )
      ObfDereferenceObject(v4);
    if ( v11 >= 0 )
      v11 = ivrIVSend((const struct CIVSerializer *)v19, v12, this);
  }
  else
  {
    v11 = -1073741801;
  }
  v19[0] = &CIVGenericSerializer::`vftable';
  CIVSerializer::~CIVSerializer((CIVSerializer *)v19, v8, (__int64)v9, v10);
  return (unsigned int)v11;
}
