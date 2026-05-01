/*
 * XREFs of ?GetPresentedWindow@CFrameApplicationPresentation@@UEBA?AV?$ComPtr@UITaskWindow@@@WRL@Microsoft@@XZ @ 0x1801E2730
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180020878 (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall CFrameApplicationPresentation::GetPresentedWindow(__int64 a1, __int64 *a2)
{
  if ( !*(_DWORD *)(a1 + 216)
    && *(_BYTE *)(a1 + 552)
    && *(_QWORD *)(a1 + 80)
    && *(_QWORD *)(a1 + 88)
    && *(_BYTE *)(a1 + 96) )
  {
    *a2 = **(_QWORD **)(a1 + 104);
    Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(a2);
  }
  else
  {
    *a2 = 0LL;
  }
  return a2;
}
