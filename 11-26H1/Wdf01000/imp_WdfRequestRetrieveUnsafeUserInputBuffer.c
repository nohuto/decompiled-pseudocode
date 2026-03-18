/*
 * XREFs of imp_WdfRequestRetrieveUnsafeUserInputBuffer @ 0x1400740D0
 * Callers:
 *     <none>
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x14000A7C0 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x14000AD10 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     WPP_IFR_SF_qd @ 0x140012548 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z @ 0x140017B00 (-FxVerifierCheckIrqlLevel@@YAJPEAU_FX_DRIVER_GLOBALS@@E@Z.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qdid @ 0x140092F20 (WPP_IFR_SF_qdid.c)
 *     ?Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1400DD438 (-Vf_VerifyRequestIsInCallerContext@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall imp_WdfRequestRetrieveUnsafeUserInputBuffer(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFREQUEST__ *Request,
        unsigned __int64 RequiredLength,
        void **InputBuffer,
        unsigned __int64 *Length)
{
  unsigned __int64 *v8; // rdi
  _FX_DRIVER_GLOBALS *v9; // rbx
  __int64 result; // rax
  unsigned __int8 v11; // r8
  FxRequest *v12; // r8
  unsigned int v13; // esi
  _IRP *m_Irp; // r9
  _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned __int8 MajorFunction; // al
  unsigned __int64 Options; // rax
  unsigned __int64 v18; // rax
  unsigned __int8 v19; // r8
  FxRequest *v20; // rcx
  int v21; // eax
  unsigned __int16 v22; // r9
  unsigned __int16 v23; // r9
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
  if ( !InputBuffer )
    FxVerifierNullBugCheck(irql, retaddr);
  v8 = Length;
  *InputBuffer = 0LL;
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
      if ( (v13 & 0x80000000) != 0 )
        return v13;
    }
    v12 = pRequest;
    v13 = -1073741808;
    m_Irp = pRequest->m_Irp.m_Irp;
    CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction == 3 )
    {
      if ( !v9->FxVerboseOn )
        return v13;
      v22 = 29;
    }
    else
    {
      if ( MajorFunction != 15 )
      {
        if ( MajorFunction == 14 )
        {
          if ( (CurrentStackLocation->Parameters.LockControl.ByteOffset.LowPart & 3) == 3 )
          {
            Options = CurrentStackLocation->Parameters.Create.Options;
            if ( Options >= RequiredLength )
            {
              *InputBuffer = CurrentStackLocation->Parameters.CreatePipe.Parameters;
              if ( !v8 )
                return 0LL;
              v18 = v12->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options;
LABEL_13:
              *v8 = v18;
              return 0LL;
            }
            if ( v9->FxVerboseOn )
            {
              v23 = 31;
LABEL_36:
              WPP_IFR_SF_qdid(
                v9,
                (unsigned __int8)CurrentStackLocation,
                (unsigned int)pRequest,
                v23,
                (const _GUID *)ObjectGlobals,
                Request,
                Options,
                RequiredLength,
                v25);
              return 3221225507LL;
            }
            return 3221225507LL;
          }
        }
        else if ( MajorFunction == 4
               && *(_DWORD *)(*((_QWORD *)CurrentStackLocation->DeviceObject->DeviceExtension - 6) + 212LL) == 1 )
        {
          Options = CurrentStackLocation->Parameters.Read.Length;
          if ( Options >= RequiredLength )
          {
            *InputBuffer = m_Irp->UserBuffer;
            if ( !v8 )
              return 0LL;
            v18 = v12->m_Irp.m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length;
            goto LABEL_13;
          }
          if ( v9->FxVerboseOn )
          {
            v23 = 32;
            goto LABEL_36;
          }
          return 3221225507LL;
        }
        WPP_IFR_SF_qd(v9, 2u, 0x10u, 0x21u, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
        FxVerifierDbgBreakPoint(v9);
        return v13;
      }
      if ( !v9->FxVerboseOn )
        return v13;
      v22 = 30;
    }
    WPP_IFR_SF_qd(v9, 5u, 0x10u, v22, WPP_FxRequestApi_cpp_Traceguids, Request, -1073741808);
    return v13;
  }
  return result;
}
