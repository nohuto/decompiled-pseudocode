/*
 * XREFs of ??Evector_iterator_nothrow@?$vector_range_nothrow@U?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@Windows@@@wil@@QEAAAEAV012@XZ @ 0x18000D528
 * Callers:
 *     ?_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ @ 0x180010A10 (-_Start@FindAllOperation@GamesEnumeration@Preview@Gaming@Windows@@AEAAJXZ.c)
 *     ?_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@AEAAJPEAU?$IVectorView@PEAVUnifiedTile@Shim@1Shell@WindowsInternal@@@Collections@Foundation@5@V?$function@$$A6AJPEAUIUnifiedTile@Shim@UnifiedTile@Shell@WindowsInternal@@@Z@std@@_N@Z @ 0x180022E34 (-_ProcessAddedOrRemovedTiles@GameListFactoryServerImpl@GamesEnumeration@Preview@Gaming@Windows@@.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180045010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
_DWORD *__fastcall wil::vector_range_nothrow<Windows::Foundation::Collections::IVectorView<WindowsInternal::Shell::UnifiedTile::Shim::UnifiedTile *>>::vector_iterator_nothrow::operator++(
        _DWORD *a1)
{
  unsigned int v2; // esi
  __int64 *v3; // rbx
  __int64 v4; // r15
  __int64 (__fastcall *v5)(__int64, _QWORD, _QWORD *); // rbp
  _QWORD *v6; // r14
  __int64 v7; // rcx
  _DWORD *v8; // rbx

  v2 = a1[2] + 1;
  a1[2] = v2;
  v3 = *(__int64 **)a1;
  if ( **(int **)(*(_QWORD *)a1 + 16LL) >= 0 && v2 < *((_DWORD *)v3 + 2) )
  {
    v4 = *v3;
    v5 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD *))(*(_QWORD *)*v3 + 48LL);
    v6 = v3 + 4;
    v7 = v3[4];
    if ( v7 )
    {
      *v6 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
    }
    v8 = (_DWORD *)v3[2];
    *v8 = v5(v4, v2, v6);
  }
  return a1;
}
