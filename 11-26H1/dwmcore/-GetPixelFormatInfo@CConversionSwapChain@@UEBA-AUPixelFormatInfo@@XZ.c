/*
 * XREFs of ?GetPixelFormatInfo@CConversionSwapChain@@UEBA?AUPixelFormatInfo@@XZ @ 0x1801DB6E0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CConversionSwapChain::GetPixelFormatInfo(__int64 a1, __int64 a2)
{
  __int64 v2; // rax

  v2 = *(_QWORD *)(a1 + 488);
  if ( v2 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)(v2 + 8) + 24LL))(v2 + 8);
  }
  else
  {
    *(_QWORD *)a2 = *(_QWORD *)(a1 + 496);
    *(_DWORD *)(a2 + 8) = *(_DWORD *)(a1 + 504);
  }
  return a2;
}
