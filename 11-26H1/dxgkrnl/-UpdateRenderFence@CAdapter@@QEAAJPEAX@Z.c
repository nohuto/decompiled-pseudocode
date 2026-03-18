/*
 * XREFs of ?UpdateRenderFence@CAdapter@@QEAAJPEAX@Z @ 0x14006A624
 * Callers:
 *     ?Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z @ 0x140036D6C (-Initialize@CAdapter@@IEAAJAEBUCSM_TOKEN_ADAPTER_INFO@@@Z.c)
 *     ?UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z @ 0x14003700C (-UpdateCollection@CAdapterCollection@@QEAA_NPEAUCSM_TOKEN_ADAPTER_INFO@@PEAPEAXI@Z.c)
 * Callees:
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgkDestroyContextInternal @ 0x14019589C (DxgkDestroyContextInternal.c)
 *     DxgkCreateContextVirtualInternal @ 0x1401C1694 (DxgkCreateContextVirtualInternal.c)
 *     DxgkDestroyDeviceInternal @ 0x1401C5C10 (DxgkDestroyDeviceInternal.c)
 *     DxgkCreateDeviceInternal @ 0x14036EED8 (DxgkCreateDeviceInternal.c)
 *     ?DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z @ 0x1403C6950 (-DxgkCddDestroySynchronizationObject@@YAJPEBU_D3DKMT_DESTROYSYNCHRONIZATIONOBJECT@@@Z.c)
 *     DxgkOpenSyncObjectFromNtHandle2Internal @ 0x1403F4984 (DxgkOpenSyncObjectFromNtHandle2Internal.c)
 *     DxgkGetSharedSyncObjectType @ 0x14040B050 (DxgkGetSharedSyncObjectType.c)
 */

__int64 __fastcall CAdapter::UpdateRenderFence(CAdapter *this, void *a2)
{
  int DeviceInternal; // edi
  int v3; // esi
  PVOID v4; // r14
  int v7; // eax
  int v8; // eax
  struct _OBJECT_TYPE *SharedSyncObjectType; // rax
  NTSTATUS v10; // eax
  int v11; // eax
  void *v12; // rcx
  int v13; // eax
  _OWORD v15[6]; // [rsp+38h] [rbp-19h] BYREF
  PVOID Object; // [rsp+C0h] [rbp+6Fh] BYREF

  DeviceInternal = 0;
  v3 = 0;
  v4 = 0LL;
  if ( !a2 )
    goto LABEL_15;
  v7 = *((_DWORD *)this + 11);
  if ( !v7 )
  {
    memset(v15, 0, 0x40uLL);
    v8 = *((_DWORD *)this + 10);
    DWORD2(v15[0]) |= 4u;
    LODWORD(v15[0]) = v8;
    DeviceInternal = DxgkCreateDeviceInternal(v15);
    if ( DeviceInternal < 0 )
      goto LABEL_13;
    v7 = HIDWORD(v15[0]);
    *((_DWORD *)this + 11) = HIDWORD(v15[0]);
  }
  if ( *((_DWORD *)this + 18) )
    goto LABEL_8;
  memset(v15, 0, 40);
  HIDWORD(v15[0]) = 8;
  LODWORD(v15[0]) = v7;
  DeviceInternal = DxgkCreateContextVirtualInternal(v15);
  if ( DeviceInternal < 0 )
  {
LABEL_13:
    if ( v4 )
      ObfDereferenceObject(v4);
    return (unsigned int)DeviceInternal;
  }
  *((_DWORD *)this + 18) = v15[2];
LABEL_8:
  Object = 0LL;
  SharedSyncObjectType = (struct _OBJECT_TYPE *)DxgkGetSharedSyncObjectType();
  v10 = ObReferenceObjectByHandle(a2, 0x1F0000u, SharedSyncObjectType, 1, &Object, 0LL);
  v4 = Object;
  DeviceInternal = v10;
  if ( v10 < 0 )
    goto LABEL_13;
  if ( Object == *((PVOID *)this + 8) )
    goto LABEL_13;
  memset(v15, 0, 0x58uLL);
  v11 = *((_DWORD *)this + 11);
  HIDWORD(v15[0]) |= 0x83u;
  DWORD2(v15[0]) = v11;
  *(_QWORD *)&v15[0] = a2;
  DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15, 0LL, 0LL);
  if ( DeviceInternal < 0 )
  {
    HIDWORD(v15[0]) &= ~0x80u;
    DeviceInternal = DxgkOpenSyncObjectFromNtHandle2Internal(v15, 0LL, 0LL);
    if ( DeviceInternal < 0 )
      goto LABEL_13;
  }
  v3 = v15[1];
  if ( !LODWORD(v15[1]) )
    goto LABEL_13;
LABEL_15:
  v12 = (void *)*((_QWORD *)this + 8);
  if ( v12 )
    ObfDereferenceObject(v12);
  v13 = *((_DWORD *)this + 14);
  *((_QWORD *)this + 8) = v4;
  if ( v13 )
  {
    LODWORD(Object) = v13;
    DxgkCddDestroySynchronizationObject((const struct _D3DKMT_DESTROYSYNCHRONIZATIONOBJECT *)&Object);
  }
  *((_DWORD *)this + 14) = v3;
  if ( !v3 )
  {
    if ( *((_DWORD *)this + 18) )
    {
      LODWORD(Object) = *((_DWORD *)this + 18);
      DxgkDestroyContextInternal(&Object);
      *((_DWORD *)this + 18) = 0;
    }
    if ( *((_DWORD *)this + 11) )
    {
      LODWORD(Object) = *((_DWORD *)this + 11);
      DxgkDestroyDeviceInternal(&Object);
      *((_DWORD *)this + 11) = 0;
    }
  }
  return (unsigned int)DeviceInternal;
}
