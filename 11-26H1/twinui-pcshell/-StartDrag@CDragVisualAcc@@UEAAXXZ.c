/*
 * XREFs of ?StartDrag@CDragVisualAcc@@UEAAXXZ @ 0x18054A800
 * Callers:
 *     <none>
 * Callees:
 *     ?InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z @ 0x1804D1760 (-InitVariantFromString@@YAJPEBGPEAUtagVARIANT@@@Z.c)
 *     ?_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ @ 0x18054A9E0 (-_DismissPlaceModeButtons@CDragVisualAcc@@AEAAXXZ.c)
 */

void __fastcall CDragVisualAcc::StartDrag(CDragVisualAcc *this)
{
  IRawElementProviderSimple *v1; // rdi
  bool v3; // zf
  const unsigned __int16 *v4; // rcx
  __int128 v5; // xmm0
  IRecordInfo *v6; // xmm1_8
  VARIANTARG pvarg; // [rsp+20h] [rbp-60h] BYREF
  VARIANT newValue; // [rsp+40h] [rbp-40h] BYREF
  VARIANT oldValue; // [rsp+60h] [rbp-20h] BYREF

  v1 = (IRawElementProviderSimple *)((char *)this - 32);
  if ( !*((_BYTE *)this + 20) )
  {
    v3 = *((_DWORD *)this + 6) == 6;
    *((_BYTE *)this + 20) = 1;
    if ( v3 )
    {
      v4 = &pvData;
      if ( *((_QWORD *)this + 10) )
        v4 = (const unsigned __int16 *)*((_QWORD *)this + 10);
      memset(&pvarg, 0, sizeof(pvarg));
      if ( (int)InitVariantFromString(v4, &pvarg) >= 0 )
      {
        *(_OWORD *)&newValue.vt = *(_OWORD *)&pvarg.vt;
        v5 = *(_OWORD *)((char *)this + 56);
        newValue.pRecInfo = pvarg.pRecInfo;
        v6 = (IRecordInfo *)*((_QWORD *)this + 9);
        *(_OWORD *)&oldValue.vt = v5;
        oldValue.pRecInfo = v6;
        UiaRaiseAutomationPropertyChangedEvent(v1, 30005, &oldValue, &newValue);
        VariantClear(&pvarg);
      }
    }
    CDragVisualAcc::_DismissPlaceModeButtons(v1);
    UiaRaiseAutomationEvent(v1, 20026);
  }
}
