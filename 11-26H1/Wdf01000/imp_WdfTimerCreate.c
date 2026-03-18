/*
 * XREFs of imp_WdfTimerCreate @ 0x140018B50
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z @ 0x140010870 (-FxObjectHandleGetPtrAndGlobals@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAXPEAPEAU1@@Z.c)
 *     ?FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x14001867C (-FxValidateObjectAttributesForParentHandle@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTE.c)
 *     ?_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x140019D0C (-_Create@FxTimer@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_TIMER_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z @ 0x140025AB0 (-FxValidateObjectAttributes@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAU_WDF_OBJECT_ATTRIBUTES@@K@Z.c)
 *     WPP_IFR_SF_D @ 0x140026890 (WPP_IFR_SF_D.c)
 *     WPP_IFR_SF_DDd @ 0x140055DDC (WPP_IFR_SF_DDd.c)
 *     WPP_IFR_SF_Dd @ 0x1400803F8 (WPP_IFR_SF_Dd.c)
 *     ?FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z @ 0x1400832CC (-FxVerifierNullBugCheck@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAX@Z.c)
 */

int __fastcall imp_WdfTimerCreate(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        _WDF_TIMER_CONFIG *Config,
        _WDF_OBJECT_ATTRIBUTES *Attributes,
        WDFTIMER__ **Timer)
{
  _FX_DRIVER_GLOBALS *v5; // rdi
  int result; // eax
  unsigned __int8 v9; // dl
  unsigned int Size; // ecx
  unsigned int Period; // eax
  _FX_DRIVER_GLOBALS *v12; // rdi
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int _a1; // eax
  unsigned __int16 v15; // r9
  int v16; // ebx
  FxObject *pParent; // [rsp+40h] [rbp-18h] BYREF
  void *retaddr; // [rsp+58h] [rbp+0h]
  _FX_DRIVER_GLOBALS *pFxDriverGlobals; // [rsp+60h] [rbp+8h] BYREF

  pParent = 0LL;
  v5 = (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8];
  pFxDriverGlobals = CONTAINING_RECORD(DriverGlobals, _FX_DRIVER_GLOBALS, Public);
  result = FxValidateObjectAttributesForParentHandle((_FX_DRIVER_GLOBALS *)&DriverGlobals[-8], Attributes, 24);
  if ( result >= 0 )
  {
    FxObjectHandleGetPtrAndGlobals(
      v5,
      (unsigned __int64)Attributes->ParentObject,
      0x1000u,
      (void **)&pParent,
      &pFxDriverGlobals);
    if ( !Config )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    if ( !Timer )
      FxVerifierNullBugCheck(pFxDriverGlobals, retaddr);
    Size = Config->Size;
    if ( Config->Size != 40 && ((Size - 24) & 0xFFFFFFF7) != 0 )
    {
      v16 = -1073741820;
      WPP_IFR_SF_DDd(pFxDriverGlobals, v9, 0x12u, 0xAu, WPP_FxTimerApi_cpp_Traceguids, Size, 0x28u, -1073741820);
      return v16;
    }
    Period = Config->Period;
    if ( Period > 0x7FFFFFFF )
    {
      v16 = -1073741811;
      WPP_IFR_SF_Dd(pFxDriverGlobals, 2u, 0x12u, 0xBu, WPP_FxTimerApi_cpp_Traceguids, Period, -1073741811);
      return v16;
    }
    v12 = pFxDriverGlobals;
    if ( Size > 0x18 )
    {
      WdfBindInfo = pFxDriverGlobals->WdfBindInfo;
      if ( WdfBindInfo->Version.Major <= 1 && (WdfBindInfo->Version.Major != 1 || WdfBindInfo->Version.Minor < 0xD) )
      {
        _a1 = Config->TolerableDelay;
        if ( _a1 > 0x7FFFFFFF )
        {
          v15 = 12;
          goto LABEL_20;
        }
      }
    }
    if ( Size > 0x20 )
    {
      _a1 = Config->TolerableDelay;
      if ( _a1 )
      {
        if ( Config->UseHighResolutionTimer )
        {
          v15 = 14;
LABEL_20:
          v16 = -1073741811;
          WPP_IFR_SF_Dd(pFxDriverGlobals, 2u, 0x12u, v15, WPP_FxTimerApi_cpp_Traceguids, _a1, -1073741811);
          return v16;
        }
      }
    }
    result = FxValidateObjectAttributes(pFxDriverGlobals, Attributes, 2u);
    if ( result >= 0 )
    {
      if ( Config->Period && Attributes->ExecutionLevel == WdfExecutionLevelPassive )
      {
        v16 = -1073741637;
        WPP_IFR_SF_D(v12, 2u, 0x12u, 0xFu, WPP_FxTimerApi_cpp_Traceguids, 0xC00000BB);
        return v16;
      }
      return FxTimer::_Create(v12, Config, Attributes, pParent, Timer);
    }
  }
  return result;
}
