/*
 * XREFs of ??1SurfaceShader@CSurfaceShaderComposer@@QEAA@XZ @ 0x1801533E8
 * Callers:
 *     ??1CSurfaceShaderComposer@@QEAA@XZ @ 0x180153380 (--1CSurfaceShaderComposer@@QEAA@XZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
void __fastcall CSurfaceShaderComposer::SurfaceShader::~SurfaceShader(__int64 *this)
{
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(this);
}
