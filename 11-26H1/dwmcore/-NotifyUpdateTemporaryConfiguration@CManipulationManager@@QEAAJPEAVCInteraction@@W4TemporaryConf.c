/*
 * XREFs of ?NotifyUpdateTemporaryConfiguration@CManipulationManager@@QEAAJPEAVCInteraction@@W4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1800E5E6C
 * Callers:
 *     ?SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionConfigurationUpdateType@@_NU?$TMILFlagsEnum@W4FlagsEnum@DwmInteractionTypeTouchPrimitiveType@@@@@Z @ 0x1800E6080 (-SetTemporaryConfiguration@CInteraction@@UEAAJW4TemporaryConfigurationAxis@@W4Enum@InteractionCo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180016FF8 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ??4?$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z @ 0x1800E53B0 (--4-$ComPtr@VCBaseExpression@@@WRL@Microsoft@@QEAAAEAV012@PEAVCBaseExpression@@@Z.c)
 *     ??_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z @ 0x1800E62B0 (--_GInteractionUpdate@CManipulationManager@@QEAAPEAXI@Z.c)
 *     ?Insert@?$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CManipulationManager@@@Z @ 0x1800E8658 (-Insert@-$CQueue@PEAUInteractionUpdate@CManipulationManager@@@@AEAAJ_NPEAUInteractionUpdate@CMan.c)
 *     ??2@YAPEAX_K@Z @ 0x1800E9260 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x180220694 (--3@YAXPEAX_K@Z.c)
 *     memset_0 @ 0x1802215C0 (memset_0.c)
 */

__int64 __fastcall CManipulationManager::NotifyUpdateTemporaryConfiguration(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        char a5,
        int a6)
{
  __int64 *v9; // rax
  __int64 *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  _DWORD *v13; // rsi
  unsigned int v14; // edi
  unsigned int v16; // eax
  unsigned int v17; // edx

  v9 = (__int64 *)operator new(0x48uLL);
  v10 = v9;
  if ( !v9 )
  {
    v14 = -2147024882;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024882, 0x343u, 0LL);
    return v14;
  }
  memset_0(v9, 0, 0x48uLL);
  *(_DWORD *)v10 = 8;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v10 + 1);
  Microsoft::WRL::ComPtr<CBaseExpression>::operator=(v10 + 2, a2);
  *((_BYTE *)v10 + 64) &= ~1u;
  *((_BYTE *)v10 + 64) |= a5;
  *((_DWORD *)v10 + 10) = a4;
  *((_DWORD *)v10 + 11) = a3;
  *((_DWORD *)v10 + 12) = 1;
  v13 = operator new(4uLL);
  if ( v13 )
  {
    *v13 = a6;
    v10[7] = (__int64)v13;
    v14 = CQueue<CManipulationManager::InteractionUpdate *>::Insert(v12, v11, v10);
    if ( (v14 & 0x80000000) == 0 )
      return v14;
    v16 = 858;
  }
  else
  {
    v13 = 0LL;
    v14 = -2147024882;
    v16 = 847;
  }
  MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v14, v16, 0LL);
  CManipulationManager::InteractionUpdate::`scalar deleting destructor'(
    (CManipulationManager::InteractionUpdate *)v10,
    v17);
  if ( v13 )
    operator delete(v13, 4uLL);
  return v14;
}
