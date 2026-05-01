/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@_KP6AH_K@Z$1?CryptDestroyHash@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18054D9D8
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@_KP6AH_K@Z$1?CryptDestroyHash@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@_K_K$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18054D950 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@_KP6AH_K@Z$1-CryptDestroyHash@@YAH0@ZU-$i.c)
 *     ?HashAndBase32Encode@@YA?AV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEBG@Z @ 0x18054DB84 (-HashAndBase32Encode@@YA-AV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@PEBG@Z.c)
 * Callees:
 *     <none>
 */

BOOL __fastcall wil::details::unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned __int64,int (*)(unsigned __int64),&int CryptDestroyHash(unsigned __int64),wistd::integral_constant<unsigned __int64,0>,unsigned __int64,unsigned __int64,0,std::nullptr_t>>(
        HCRYPTHASH *a1)
{
  HCRYPTHASH v1; // rcx
  BOOL result; // eax

  v1 = *a1;
  if ( v1 )
    return CryptDestroyHash(v1);
  return result;
}
