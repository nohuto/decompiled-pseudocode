/*
 * XREFs of imp_WdfRequestRetrieveUnsafeUserOutputBuffer @ 0x14006FD60
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     WPP_IFR_SF_qdid @ 0x140092F20 (WPP_IFR_SF_qdid.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD438 (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserOutputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **OutputBuffer,
        unsigned __int64 *Length)
{
  unsigned __int64 *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // r8
  FxRequest *v12; // r8
  int v13; // esi
  _IRP *m_Irp; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int64 level; // rax
  unsigned __int16 v18; // r9
  unsigned __int8 v19; // r8
  FxRequest *v20; // rcx
  int v21; // eax
  unsigned __int16 v22; // r9
  unsigned __int8 v23; // dl
  _FX_DRIVER_GLOBALS **ObjectGlobals; // [rsp+20h] [rbp-30h]
  int v25; // [rsp+40h] [rbp-10h]
  void *retaddr; // [rsp+78h] [rbp+28h]
  _FX_DRIVER_GLOBALS *irql; // [rsp+80h] [rbp+30h] BYREF
  FxRequest *pRequest; // [rsp+98h] [rbp+48h] BYREF

  irql = 0LL;
  pRequest = 0LL;
  FxObjectHandleGetPtrAndGlobals(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8],
    (unsigned __int64)Request,
    0x1008u,
    (void **)&pRequest,
    &irql);
  if ( !OutputBuffer )
    FxVerifierNullBugCheck(irql, retaddr);
  v8 = Length;
  *OutputBuffer = 0LL;
  if ( v8 )
    *v8 = 0LL;
  v9 = irql;
  result = FxVerifierCheckIrqlLevel(irql, 0);
  if ( (int)result >= 0 )
  {
    if ( v9->FxVerifierOn )
    {
      LOBYTE(irql) = 0;
      FxNonPagedObject::Lock(pRequest, (unsigned __int8 *)&irql, v11);
      v20 = pRequest;
      if ( v9->FxVerifierOn )
      {
        v21 = FxRequest::Vf_VerifyRequestIsInCallerContext(pRequest, v9);
        v20 = pRequest;
        v13 = v21;
      }
      else
      {
        v13 = 0;
      }
      FxNonPagedObject::Unlock(v20, (unsigned __int8)irql, v19);
      if ( v13 < 0 )
        return (unsigned int)v13;
    }
    v12 = pRequest;
    v13 = -1073741808;
    m_Irp = pRequest->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 4 )
    {
      if ( v9->FxVerboseOn )
      {
        v22 = 35;
LABEL_32:
        v23 = 5;
LABEL_36:
        WPP_IFR_SF_qd(v9, v23, 0x10u, v22, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
      }
    }
    else
    {
      if ( MajorFunction != 15 )
      {
        if ( MajorFunction == 14 )
        {
          if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
          {
            level = CurrentStackLocation->Parameters.Read.Length;
            if ( level >= RequiredLength )
            {
LABEL_11:
              *OutputBuffer = m_Irp->UserBuffer;
              if ( v8 )
                *v8 = v12->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
              return 0LL;
            }
            if ( v9->FxVerboseOn )
            {
              v18 = 37;
              goto LABEL_20;
            }
            return 3221225507LL;
          }
        }
        else if ( MajorFunction == 3
               && *(_DWORD *)(*((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6) + 212LL) == 1 )
        {
          level = CurrentStackLocation->Parameters.Read.Length;
          if ( level >= RequiredLength )
            goto LABEL_11;
          if ( v9->FxVerboseOn )
          {
            v18 = 38;
LABEL_20:
            WPP_IFR_SF_qdid(
              v9,
              (unsigned __int8)CurrentStackLocation,
              (unsigned int)pRequest,
              v18,
              (const _GUID *)ObjectGlobals,
              Request,
              level,
              RequiredLength,
              v25);
          }
          return 3221225507LL;
        }
        v22 = 39;
        v23 = 2;
        goto LABEL_36;
      }
      if ( v9->FxVerboseOn )
      {
        v22 = 36;
        goto LABEL_32;
      }
    }
    return (unsigned int)v13;
  }
  return result;
}
