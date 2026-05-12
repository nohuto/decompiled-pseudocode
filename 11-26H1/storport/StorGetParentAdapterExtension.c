/*
 * XREFs of StorGetParentAdapterExtension @ 0x14012F670
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     StorGetCommonAdapterMiniport @ 0x140078958 (StorGetCommonAdapterMiniport.c)
 */

__int64 __fastcall StorGetParentAdapterExtension(_DWORD *a1, __int64 a2)
{
  unsigned int v2; // r8d
  _DWORD *CommonAdapterMiniport; // rax
  _DWORD *v4; // rax
  _QWORD *v5; // r9

  if ( a2
    && (CommonAdapterMiniport = StorGetCommonAdapterMiniport(a1)) != 0LL
    && (CommonAdapterMiniport[62] & 0x200) != 0
    && (v4 = StorGetCommonAdapterMiniport(*((_DWORD **)CommonAdapterMiniport + 47))) != 0LL )
  {
    *v5 = *((_QWORD *)v4 + 30) + 16LL;
  }
  else
  {
    return (unsigned int)-1056964602;
  }
  return v2;
}
