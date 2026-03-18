/*
 * XREFs of ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoteOpenParams@@@Z @ 0x140007314
 * Callers:
 *     ?Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z @ 0x140006830 (-Open@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qdD @ 0x140007548 (WPP_IFR_SF_qdD.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 */

__int64 __fastcall FxIoTargetRemote::OpenTargetHandle(
        FxIoTargetRemote *this,
        _WDF_IO_TARGET_OPEN_PARAMS *OpenParams,
        FxIoTargetRemoteOpenParams *pParams)
{
  void **p_m_TargetHandle; // r12
  ACCESS_MASK DesiredAccess; // edx
  _LARGE_INTEGER *AllocationSize; // rax
  NTSTATUS v9; // eax
  unsigned int Information; // edx
  unsigned int v11; // esi
  unsigned __int16 m_ObjectSize; // r8
  const void *v13; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v15; // rax
  _FILE_OBJECT **p_m_TargetFileObject; // r15
  NTSTATUS v17; // eax
  _DEVICE_OBJECT *RelatedDeviceObject; // rax
  ULONG FileAttributes; // [rsp+28h] [rbp-A0h]
  ULONG ShareAccess; // [rsp+30h] [rbp-98h]
  unsigned int CreateDisposition; // [rsp+38h] [rbp-90h]
  unsigned int CreateOptions; // [rsp+40h] [rbp-88h]
  void *EaBuffer; // [rsp+48h] [rbp-80h]
  unsigned int EaLength; // [rsp+50h] [rbp-78h]
  _IO_STATUS_BLOCK ioStatus; // [rsp+60h] [rbp-68h] BYREF
  _OBJECT_ATTRIBUTES oa; // [rsp+70h] [rbp-58h] BYREF

  p_m_TargetHandle = &this->m_TargetHandle;
  EaLength = pParams->EaBufferLength;
  EaBuffer = pParams->EaBuffer;
  CreateOptions = pParams->CreateOptions;
  DesiredAccess = pParams->DesiredAccess;
  CreateDisposition = pParams->CreateDisposition;
  ShareAccess = pParams->ShareAccess;
  FileAttributes = pParams->FileAttributes;
  AllocationSize = pParams->AllocationSizePointer;
  oa.ObjectName = &pParams->TargetDeviceName;
  *(_QWORD *)&oa.Length = 48LL;
  *(_QWORD *)&oa.Attributes = 512LL;
  ioStatus = 0LL;
  oa.RootDirectory = 0LL;
  *(_OWORD *)&oa.SecurityDescriptor = 0LL;
  v9 = ZwCreateFile(
         &this->m_TargetHandle,
         DesiredAccess,
         &oa,
         &ioStatus,
         AllocationSize,
         FileAttributes,
         ShareAccess,
         CreateDisposition,
         CreateOptions,
         EaBuffer,
         EaLength);
  Information = ioStatus.Information;
  v11 = v9;
  OpenParams->FileInformation = ioStatus.Information;
  m_ObjectSize = this->m_ObjectSize;
  v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
  m_Globals = this->m_Globals;
  if ( v9 < 0 )
  {
    if ( !m_ObjectSize )
      v13 = 0LL;
    WPP_IFR_SF_qdD(m_Globals, 2u, 0xEu, 0x13u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v13, v9, Information);
  }
  else
  {
    v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v15 = 0LL;
    WPP_IFR_SF_qdD(m_Globals, 3u, 0xEu, 0x10u, WPP_FxIoTargetRemotekm_cpp_Traceguids, v15, v11, Information);
    p_m_TargetFileObject = &this->m_TargetFileObject;
    v17 = ObReferenceObjectByHandle(
            *p_m_TargetHandle,
            pParams->DesiredAccess,
            (POBJECT_TYPE)IoFileObjectType,
            0,
            (PVOID *)&this->m_TargetFileObject,
            0LL);
    v11 = v17;
    if ( v17 < 0 )
    {
      if ( !this->m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qqd(
        this->m_Globals,
        2u,
        0xEu,
        0x12u,
        WPP_FxIoTargetRemotekm_cpp_Traceguids,
        v13,
        *p_m_TargetHandle,
        v17);
    }
    else
    {
      RelatedDeviceObject = IoGetRelatedDeviceObject(*p_m_TargetFileObject);
      this->m_TargetDevice = RelatedDeviceObject;
      if ( !RelatedDeviceObject )
      {
        if ( !this->m_ObjectSize )
          v13 = 0LL;
        WPP_IFR_SF_qq(
          this->m_Globals,
          2u,
          0xEu,
          0x11u,
          WPP_FxIoTargetRemotekm_cpp_Traceguids,
          v13,
          *p_m_TargetFileObject);
        return (unsigned int)-1073741810;
      }
    }
  }
  return v11;
}
