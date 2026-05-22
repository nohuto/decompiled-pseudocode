/*
 * XREFs of ??$emplace_back@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@QEAAAEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x1801ADB48
 * Callers:
 *     ?Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z @ 0x1801AEFDC (-Set@Edge@@AEAAXPEBGPEAVEdgyControllerClientProxy@@@Z.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ @ 0x180159AE8 (-InternalAddRef@-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAV234@AEAPEAVEdgyControllerClientProxy@@@Z @ 0x1801AD618 (--$_Emplace_reallocate@AEAPEAVEdgyControllerClientProxy@@@-$vector@V-$ComPtr@VEdgyControllerClie.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::emplace_back<EdgyControllerClientProxy * &>(
        _QWORD *a1,
        __int64 *a2)
{
  __int64 *v4; // rdx
  __int64 *v5; // rcx
  __int64 v6; // rcx

  v4 = (__int64 *)a1[1];
  if ( v4 == (__int64 *)a1[2] )
    return std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Emplace_reallocate<EdgyControllerClientProxy * &>(
             a1,
             (__int64)v4,
             a2);
  v5 = (__int64 *)a1[1];
  *v4 = *a2;
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::InternalAddRef(v5);
  v6 = a1[1];
  a1[1] = v6 + 8;
  return (__int64 *)v6;
}
