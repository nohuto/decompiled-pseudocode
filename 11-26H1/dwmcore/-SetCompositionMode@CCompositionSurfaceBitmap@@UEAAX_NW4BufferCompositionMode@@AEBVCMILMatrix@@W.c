/*
 * XREFs of ?SetCompositionMode@CCompositionSurfaceBitmap@@UEAAX_NW4BufferCompositionMode@@AEBVCMILMatrix@@W4DXGI_COLOR_SPACE_TYPE@@PEBUtagCOMPOSITION_TARGET_ID@@@Z @ 0x1801804E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCompositionSurfaceBitmap::SetCompositionMode(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6)
{
  __int64 v6; // rcx
  __int64 result; // rax

  v6 = *(_QWORD *)(a1 + 24);
  if ( v6 )
    return (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64, int, __int64))(*(_QWORD *)v6 + 224LL))(
             v6,
             a2,
             a3,
             a4,
             a5,
             a6);
  return result;
}
