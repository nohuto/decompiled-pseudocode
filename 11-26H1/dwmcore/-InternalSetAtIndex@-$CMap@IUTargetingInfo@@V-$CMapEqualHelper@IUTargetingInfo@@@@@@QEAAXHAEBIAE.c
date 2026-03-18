/*
 * XREFs of ?InternalSetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAXHAEBIAEBUTargetingInfo@@@Z @ 0x1800A9E94
 * Callers:
 *     ?SetAtIndex@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTargetingInfo@@@Z @ 0x1800A9DE8 (-SetAtIndex@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHHAEBIAEBUTarget.c)
 *     ?Add@?$CMap@IUTargetingInfo@@V?$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@@@Z @ 0x1801547F8 (-Add@-$CMap@IUTargetingInfo@@V-$CMapEqualHelper@IUTargetingInfo@@@@@@QEAAHAEBIAEBUTargetingInfo@.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ @ 0x1800A9EDC (-InternalAddRef@-$ComPtr@UIInteractionContextWrapper@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 __fastcall CMap<unsigned int,TargetingInfo,CMapEqualHelper<unsigned int,TargetingInfo>>::InternalSetAtIndex(
        __int64 *a1,
        int a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 result; // rax
  __int64 v5; // r10
  _DWORD *v6; // rdx
  _DWORD *v7; // rcx
  _QWORD *v8; // rcx

  result = *a1;
  v5 = a2;
  v6 = (_DWORD *)(*a1 + 4LL * a2);
  if ( v6 )
  {
    result = *a3;
    *v6 = result;
  }
  v7 = (_DWORD *)(16 * v5 + a1[1]);
  if ( v7 )
  {
    *v7 = *(_DWORD *)a4;
    v8 = v7 + 2;
    *v8 = *(_QWORD *)(a4 + 8);
    return Microsoft::WRL::ComPtr<IInteractionContextWrapper>::InternalAddRef(v8);
  }
  return result;
}
