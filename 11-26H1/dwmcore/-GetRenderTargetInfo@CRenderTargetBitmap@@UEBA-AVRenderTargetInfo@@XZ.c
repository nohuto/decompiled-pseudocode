/*
 * XREFs of ?GetRenderTargetInfo@CRenderTargetBitmap@@UEBA?AVRenderTargetInfo@@XZ @ 0x18018D0B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CRenderTargetBitmap::GetRenderTargetInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx

  v2 = *(_QWORD *)(a1 + 40);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 16) + 120LL))(v2 + 16);
  }
  else
  {
    *(_QWORD *)a2 = 0LL;
    *(_QWORD *)(a2 + 12) = 0LL;
    *(_BYTE *)(a2 + 20) = 0;
    *(_DWORD *)(a2 + 8) = -2;
    *(_WORD *)(a2 + 21) = 0;
    *(_BYTE *)(a2 + 23) = 0;
  }
  return a2;
}
