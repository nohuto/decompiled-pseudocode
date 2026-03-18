/*
 * XREFs of ?GetRenderTargetInfo@CDeviceTextureTarget@@UEBA?AVRenderTargetInfo@@XZ @ 0x18016E720
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDeviceTextureTarget::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  bool v4; // al

  *(_QWORD *)a2 = *(_QWORD *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 256) + 40LL))(a1 - 256) + 944);
  *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 - 28);
  *(_DWORD *)(a2 + 12) = *(_DWORD *)(a1 + 24);
  *(_DWORD *)(a2 + 16) = *(_DWORD *)(a1 + 28);
  if ( *(_BYTE *)(a1 + 32) )
    v4 = 1;
  else
    v4 = (*(_DWORD *)(a1 - 72) & 0x80000) != 0;
  *(_BYTE *)(a2 + 20) = v4;
  *(_WORD *)(a2 + 21) = 0;
  *(_BYTE *)(a2 + 23) = 0;
  return a2;
}
