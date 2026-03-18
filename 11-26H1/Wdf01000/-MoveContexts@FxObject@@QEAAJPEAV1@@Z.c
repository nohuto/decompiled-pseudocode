/*
 * XREFs of ?MoveContexts@FxObject@@QEAAJPEAV1@@Z @ 0x1400976C8
 * Callers:
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x14001FCC8 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x14000642C (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_qqd @ 0x14000EA80 (WPP_IFR_SF_qqd.c)
 *     WPP_IFR_SF_q @ 0x1400488BC (WPP_IFR_SF_q.c)
 *     ?AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x14005B060 (-AddContext@FxObject@@QEAAJPEAUFxContextHeader@@PEAPEAXPEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x140083568 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxObject::MoveContexts(FxObject *this, FxObject *TargetObject)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  unsigned int _a3; // ebx
  char *v6; // rdi
  FxContextHeader *_a1; // r14
  int v8; // eax
  KIRQL NewIrql; // [rsp+80h] [rbp+8h]
  FxContextHeader *NextHeader; // [rsp+90h] [rbp+18h]

  m_Globals = this->m_Globals;
  _a3 = 0;
  if ( this->m_ObjectSize )
  {
    v6 = (char *)this + this->m_ObjectSize;
    if ( v6 )
    {
      if ( *((_QWORD *)v6 + 4) )
      {
        _a3 = -1073741811;
        WPP_IFR_SF_q(m_Globals, 2u, 0xBu, 0xBu, WPP_FxObject_cpp_Traceguids, this);
      }
      else if ( (TargetObject->m_ObjectFlags & 8) != 0 )
      {
        NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_SpinLock.m_Lock);
        while ( 1 )
        {
          _a1 = (FxContextHeader *)*((_QWORD *)v6 + 1);
          if ( !_a1 )
            break;
          NextHeader = _a1->NextHeader;
          _a1->Object = TargetObject;
          _a1->NextHeader = 0LL;
          v8 = FxObject::AddContext(TargetObject, _a1, 0LL, 0LL);
          _a3 = v8;
          if ( v8 == 0x40000000 )
          {
            WPP_IFR_SF_qq(m_Globals, 2u, 0xBu, 0xDu, WPP_FxObject_cpp_Traceguids, _a1, TargetObject);
            FxVerifierDbgBreakPoint(m_Globals);
            _a3 = -1073741635;
LABEL_12:
            WPP_IFR_SF_qqd(m_Globals, 2u, 0xBu, 0xEu, WPP_FxObject_cpp_Traceguids, _a1, TargetObject, _a3);
            _a1->NextHeader = NextHeader;
            _a1->Object = this;
            break;
          }
          if ( v8 < 0 )
            goto LABEL_12;
          *((_QWORD *)v6 + 1) = NextHeader;
        }
        KeReleaseSpinLock(&this->m_SpinLock.m_Lock, NewIrql);
      }
      else
      {
        _a3 = -1073741811;
        WPP_IFR_SF_q(m_Globals, 2u, 0xBu, 0xCu, WPP_FxObject_cpp_Traceguids, TargetObject);
      }
    }
  }
  return _a3;
}
