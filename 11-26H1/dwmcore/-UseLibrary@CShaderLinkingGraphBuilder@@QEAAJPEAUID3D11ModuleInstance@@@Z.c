/*
 * XREFs of ?UseLibrary@CShaderLinkingGraphBuilder@@QEAAJPEAUID3D11ModuleInstance@@@Z @ 0x180145A44
 * Callers:
 *     UseFragmentsModuleNoRef @ 0x180145C30 (UseFragmentsModuleNoRef.c)
 *     AppendLights @ 0x1801D25E0 (AppendLights.c)
 *     ?LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V?$span@$$CBUPixelFormatInfo@@$0?0@gsl@@W4DXGI_COLOR_SPACE_TYPE@@PEAPEAUID3D10Blob@@@Z @ 0x18025E2F8 (-LinkCompositingShader@@YAJW4D3DShaderProfileVersion@@V-$span@$$CBUPixelFormatInfo@@$0-0@gsl@@W4.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CShaderLinkingGraphBuilder::UseLibrary(
        CShaderLinkingGraphBuilder *this,
        struct ID3D11ModuleInstance *a2)
{
  return (*(__int64 (__fastcall **)(_QWORD, struct ID3D11ModuleInstance *))(**(_QWORD **)this + 32LL))(
           *(_QWORD *)this,
           a2);
}
