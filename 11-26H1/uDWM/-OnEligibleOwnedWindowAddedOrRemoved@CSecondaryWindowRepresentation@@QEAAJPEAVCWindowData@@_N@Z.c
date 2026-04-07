/*
 * XREFs of ?OnEligibleOwnedWindowAddedOrRemoved@CSecondaryWindowRepresentation@@QEAAJPEAVCWindowData@@_N@Z @ 0x18002AD28
 * Callers:
 *     ?UpdateOwnerLists@CWindowData@@QEAAX_N@Z @ 0x180017FC0 (-UpdateOwnerLists@CWindowData@@QEAAX_N@Z.c)
 *     ?AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002A9F4 (-AddSecondaryWindowRepresentation@CWindowData@@AEAAJPEAVCSecondaryWindowRepresentation@@W4Window.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4WindowRepresentationType@@_N@Z @ 0x18002ABE4 (-RemoveSecondaryWindowRepresentation@CWindowData@@AEAAXPEAVCSecondaryWindowRepresentation@@W4Win.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18001BCE0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z @ 0x18001BD7C (-AddChild@CContainerVisual@@QEAAJPEAVCVisual@@_N@Z.c)
 *     ?AddRef@CBaseObject@@QEAAKXZ @ 0x18001C65C (-AddRef@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?Create@CSecondaryWindowRepresentation@@SAJU?$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISecondaryWindowRepresentationChangedListener@@PEAVCWindowData@@IW4DEVICE_SCALE_FACTOR@@PEAPEAV1@@Z @ 0x180028B6C (-Create@CSecondaryWindowRepresentation@@SAJU-$TMILFlagsEnum@W4FlagsEnum@SWRUsage@@@@PEAUISeconda.c)
 *     ?RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z @ 0x18002CD00 (-RemoveOwnedWindowRepresentation@CSecondaryWindowRepresentation@@AEAAXI@Z.c)
 *     ?AddMultipleAndSet@?$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAJPEFBQEAVCSecondaryWindowRepresentation@@I@Z @ 0x180065478 (-AddMultipleAndSet@-$DynArray@PEAVCSecondaryWindowRepresentation@@$0A@@@QEAAJPEFBQEAVCSecondaryW.c)
 *     ?EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ @ 0x18008B908 (-EnsureOwnedWindowVisual@CSecondaryWindowRepresentation@@QEAAJXZ.c)
 */

__int64 __fastcall CSecondaryWindowRepresentation::OnEligibleOwnedWindowAddedOrRemoved(
        CContainerVisual **this,
        struct CWindowData *a2,
        char a3)
{
  unsigned int v3; // ebx
  __int64 i; // rdx
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  CBaseObject *v12; // [rsp+40h] [rbp+8h] BYREF

  v3 = 0;
  v12 = 0LL;
  if ( this[4] )
  {
    if ( a3 )
    {
      v8 = CSecondaryWindowRepresentation::Create(
             1LL,
             (unsigned __int64)(this + 2) & -(__int64)(this != 0LL),
             (__int64)a2,
             0,
             100,
             &v12);
      v3 = v8;
      if ( v8 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x22Eu, 0LL);
      }
      else
      {
        v9 = DynArray<CSecondaryWindowRepresentation *,0>::AddMultipleAndSet(this + 16, &v12);
        v3 = v9;
        if ( v9 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v9, 0x230u, 0LL);
        }
        else
        {
          CBaseObject::AddRef(v12);
          v10 = CSecondaryWindowRepresentation::EnsureOwnedWindowVisual((CSecondaryWindowRepresentation *)this);
          v3 = v10;
          if ( v10 < 0 )
          {
            MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x233u, 0LL);
          }
          else
          {
            v11 = CContainerVisual::AddChild(this[6], *((struct CVisual **)v12 + 6));
            v3 = v11;
            if ( v11 < 0 )
              MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v11, 0x236u, 0LL);
          }
        }
      }
LABEL_8:
      if ( v12 )
        CBaseObject::Release(v12);
    }
    else
    {
      for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 38); i = (unsigned int)(i + 1) )
      {
        if ( *(struct CWindowData **)(*((_QWORD *)this[16] + i) + 32LL) == a2 )
        {
          CSecondaryWindowRepresentation::RemoveOwnedWindowRepresentation((CSecondaryWindowRepresentation *)this, i);
          goto LABEL_8;
        }
      }
    }
  }
  return v3;
}
