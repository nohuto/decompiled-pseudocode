/*
 * XREFs of ??4?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1806B31B0
 * Callers:
 *     ?Swap@?$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsInternal@@$00@Platform@@QEAAXAEAV12@@Z @ 0x1806B739C (-Swap@-$Agile@PE$AAUISwitchItemContextMenuMetadata@Switcher@Experiences@ComposableShell@WindowsI.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180046FE0 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??0?$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z @ 0x1800A38E0 (--0-$ComPtr@VCFrameApplicationPresentation@@@WRL@Microsoft@@QEAA@$$QEAV012@@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<IUnknown>::operator=(__int64 *a1, _QWORD *a2)
{
  __int64 *v3; // rax
  __int64 v4; // r8
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = Microsoft::WRL::ComPtr<CFrameApplicationPresentation>::ComPtr<CFrameApplicationPresentation>(&v6, a2);
  v4 = *v3;
  *v3 = *a1;
  *a1 = v4;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v6);
  return a1;
}
