/*
 * XREFs of imp_WdfIoQueueCreate @ 0x140018EE0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x140019184 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z @ 0x14001DC74 (-InitializeDefaultQueue@FxPkgIo@@QEAAJPEAVFxDevice@@PEAVFxIoQueue@@@Z.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x140026990 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_DDDDd @ 0x1400A0E20 (WPP_IFR_SF_DDDDd.c)
 */

int __fastcall imp_WdfIoQueueCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFDEVICE__ *Device,
        _WDF_IO_QUEUE_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *QueueAttributes,
        WDFQUEUE__ **Queue)
{
  _FX_DRIVER_GLOBALS *v9; // rdi
  int result; // eax
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  unsigned __int16 v13; // r9
  unsigned int Size; // ecx
  unsigned __int8 DefaultQueue; // cl
  WDFQUEUE__ **v16; // r14
  FxPkgIo *m_PkgIo; // r15
  int v18; // ebx
  FxIoQueue *v19; // rbx
  unsigned __int64 v20; // rbx
  unsigned __int16 v21; // r9
  unsigned int v22; // r8d
  int v23; // esi
  const void *v24; // rax
  FxIoQueue **ppQueue; // [rsp+20h] [rbp-78h]
  unsigned int _a2; // [rsp+30h] [rbp-68h]
  unsigned int v27; // [rsp+38h] [rbp-60h]
  unsigned int v28; // [rsp+40h] [rbp-58h]
  int v29; // [rsp+48h] [rbp-50h]
  FxIoQueue *pQueue; // [rsp+50h] [rbp-48h] BYREF
  void *retaddr; // [rsp+98h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+A0h] [rbp+8h] BYREF
  FxDevice *pDevice; // [rsp+B0h] [rbp+18h] BYREF

  pFxDriverGlobals = 0LL;
  pDevice = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Device,
    0x1002u,
    (void **)&pDevice,
    &pFxDriverGlobals);
  pQueue = 0LL;
  if ( !Config )
    FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
  v9 = pFxDriverGlobals;
  result = FxValidateObjectAttributes(pFxDriverGlobals, QueueAttributes, 6u);
  if ( result >= 0 )
  {
    Size = Config->Size;
    if ( Config->Size != 96 && ((Size - 80) & 0xFFFFFFF7) != 0 )
    {
      WPP_IFR_SF_DDDDd(v9, v11, v12, v13, (const _GUID *)ppQueue, Size, _a2, v27, v28, v29);
      return -1073741820;
    }
    DefaultQueue = Config->DefaultQueue;
    v16 = Queue;
    if ( !DefaultQueue && !Queue )
    {
      v18 = -1073741582;
      WPP_IFR_SF_D(v9, 2u, 0xDu, 0xBu, WPP_FxIoQueueApi_cpp_Traceguids, 0xC00000F2);
      return v18;
    }
    m_PkgIo = pDevice->m_PkgIo;
    if ( !DefaultQueue )
      goto LABEL_7;
    if ( pDevice->m_Legacy )
    {
      if ( (pDevice->m_DeviceObject.m_DeviceObject->Flags & 0x80u) == 0 )
      {
        v22 = 12;
        v21 = 12;
        goto LABEL_25;
      }
    }
    else if ( pDevice->m_CurrentPnpState != WdfDevStatePnpInit )
    {
      v21 = 13;
      v22 = 12;
LABEL_25:
      v18 = -1073741436;
LABEL_18:
      WPP_IFR_SF_qd(v9, 2u, v22, v21, WPP_FxIoQueueApi_cpp_Traceguids, Device, v18);
      return v18;
    }
LABEL_7:
    v18 = FxPkgIo::CreateQueue(
            m_PkgIo,
            Config,
            QueueAttributes,
            *(FxDriver **)&DriverGlobals[-7].DriverName[8],
            &pQueue);
    if ( v18 >= 0 )
    {
      v19 = pQueue;
      if ( Config->DefaultQueue && (v23 = FxPkgIo::InitializeDefaultQueue(m_PkgIo, pDevice, pQueue), v23 < 0) )
      {
        WPP_IFR_SF_qq(v9, 2u, 0xDu, 0xFu, WPP_FxIoQueueApi_cpp_Traceguids, m_PkgIo, Device);
        FxObject::DeleteFromFailedCreate(v19);
        return v23;
      }
      else
      {
        if ( v9->FxVerboseOn )
        {
          if ( v19->m_ObjectSize )
            v24 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
          else
            v24 = 0LL;
          WPP_IFR_SF_q(v9, 5u, 0xDu, 0x10u, WPP_FxIoQueueApi_cpp_Traceguids, v24);
        }
        if ( v16 )
        {
          if ( v19->m_ObjectSize )
            v20 = (unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL;
          else
            v20 = 0LL;
          *v16 = (WDFQUEUE__ *)v20;
        }
        return 0;
      }
    }
    v21 = 14;
    v22 = 13;
    goto LABEL_18;
  }
  return result;
}
