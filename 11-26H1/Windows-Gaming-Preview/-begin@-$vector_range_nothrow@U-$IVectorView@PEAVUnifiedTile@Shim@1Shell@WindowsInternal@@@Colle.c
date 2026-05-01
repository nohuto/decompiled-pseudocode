/*
 * XREFs of ?begin@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAA?AVvector_iterator_nothrow@12@XZ @ 0x180011168
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x180022E34 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::begin(
        __int64 *a1,
        __int64 a2)
{
  __int64 v4; // r15
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD *); // rbp
  _QWORD *v6; // r14
  __int64 v7; // rcx
  _DWORD *v8; // rbx

  if ( *(int *)a1[2] >= 0 && *((_DWORD *)a1 + 2) )
  {
    v4 = *a1;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)*a1 + 48LL);
    v6 = a1 + 4;
    v7 = a1[4];
    if ( v7 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (_DWORD *)a1[2];
    *v8 = v5(v4, 0LL, v6);
  }
  *(_QWORD *)a2 = a1;
  *(_DWORD *)(a2 + 8) = 0;
  return a2;
}
