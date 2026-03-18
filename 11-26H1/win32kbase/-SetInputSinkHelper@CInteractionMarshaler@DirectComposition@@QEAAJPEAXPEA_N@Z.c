/*
 * XREFs of ?SetInputSinkHelper@CInteractionMarshaler@DirectComposition@@QEAAJPEAXPEA_N@Z @ 0x1400A44F0
 * Callers:
 *     ?RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND__@@PEBUtagMsgRoutingInfo@@KK@Z @ 0x140145750 (-RedirectMouseToHwnd@CVisualMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@PEAUHWND.c)
 *     ?SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAXPEA_N@Z @ 0x140242080 (-SetHandleProperty@CInteractionMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@PEAX.c)
 * Callees:
 *     ?LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z @ 0x14006ED00 (-LockForWrite@CompositionInputObject@@QEAAJPEAPEAVCInputSink@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x14006F370 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1400A4600 (-ResolveHandle@CompositionInputObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ @ 0x1400A4990 (-ReleaseCompositionInputObject@CInteractionMarshaler@DirectComposition@@IEAAXXZ.c)
 *     ?AssociateWithVisual@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEBX@Z @ 0x1400A4A24 (-AssociateWithVisual@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@PEBX@Z.c)
 *     ?CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ @ 0x1400A55BC (-CheckInputSinkTypes@CInteractionMarshaler@DirectComposition@@AEAAJXZ.c)
 */

__int64 __fastcall DirectComposition::CInteractionMarshaler::SetInputSinkHelper(
        DirectComposition::CInteractionMarshaler *this,
        void *a2,
        bool *a3)
{
  char *v3; // rbx
  int v4; // esi
  int v7; // eax
  CInputSink *v8; // rbp
  DirectComposition::CInteractionMarshaler *v9; // rax
  PVOID Object; // [rsp+48h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = 0;
  Object = 0LL;
  if ( !a2
    || (v7 = CompositionInputObject::ResolveHandle(a2, 1u, 1, (struct CompositionInputObject **)&Object),
        v3 = (char *)Object,
        v4 = v7,
        v7 >= 0) )
  {
    if ( *((char **)this + 33) == v3 )
    {
LABEL_15:
      DirectComposition::CInteractionMarshaler::CheckInputSinkTypes(this);
      goto LABEL_16;
    }
    if ( !v3 || (Object = 0LL, v4 = CompositionInputObject::LockForWrite(v3, (struct CInputSink **)&Object), v4 < 0) )
    {
LABEL_11:
      if ( v4 >= 0 )
      {
        DirectComposition::CInteractionMarshaler::ReleaseCompositionInputObject(this);
        if ( v3 )
        {
          *((_QWORD *)this + 33) = v3;
          v3 = 0LL;
        }
        *((_DWORD *)this + 4) |= 0x40u;
        *a3 = 1;
      }
      goto LABEL_15;
    }
    v8 = (CInputSink *)Object;
    v9 = (DirectComposition::CInteractionMarshaler *)*((_QWORD *)Object + 10);
    if ( this != v9 )
    {
      if ( v9 )
      {
        v4 = -1073741823;
        goto LABEL_10;
      }
      *((_QWORD *)Object + 10) = this;
    }
    v4 = 0;
    InputTraceLogging::InputSink::AssociateWithVisual((const struct CompositionInputObject *)v3, this);
LABEL_10:
    CInputSink::UnlockAndRelease(v8);
    goto LABEL_11;
  }
LABEL_16:
  if ( v3 )
    ObfDereferenceObject(v3);
  return (unsigned int)v4;
}
