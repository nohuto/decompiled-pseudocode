/*
 * XREFs of ?_Change_array@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXQEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@_K1@Z @ 0x180065798
 * Callers:
 *     ??$_Emplace_reallocate@AEBV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@?$vector@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@std@@@std@@AEAAPEAV?$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@QEAV234@AEBV234@@Z @ 0x18002CE78 (--$_Emplace_reallocate@AEBV-$ComPtr@UIActivationListenerInputObjectProxy@@@WRL@Microsoft@@@-$vec.c)
 * Callees:
 *     ??$_Destroy_range@V?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV?$ComPtr@VInputSite@@@WRL@Microsoft@@QEAV123@AEAV?$allocator@V?$ComPtr@VInputSite@@@WRL@Microsoft@@@0@@Z @ 0x18002B720 (--$_Destroy_range@V-$allocator@V-$ComPtr@VInputSite@@@WRL@Microsoft@@@std@@@std@@YAXPEAV-$ComPtr.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

__int64 *__fastcall std::vector<Microsoft::WRL::ComPtr<IActivationListenerInputObjectProxy>>::_Change_array(
        __int64 **a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4)
{
  __int64 *v6; // rcx
  __int64 *result; // rax

  v6 = *a1;
  if ( v6 )
  {
    std::_Destroy_range<std::allocator<Microsoft::WRL::ComPtr<InputSite>>>(v6, a1[1]);
    std::_Deallocate<16>(*a1, ((char *)a1[2] - (char *)*a1) & 0xFFFFFFFFFFFFFFF8uLL);
  }
  *a1 = a2;
  a1[1] = &a2[a3];
  result = &a2[a4];
  a1[2] = result;
  return result;
}
