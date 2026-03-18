/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x18011613C
 * Callers:
 *     ?Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z @ 0x1801156C0 (-Update@CPointerDeviceCache@@SAAEBUDEVICE_INFO@@PEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x1800C44D0 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 *     ??E?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@U_Iterator_base0@2@@std@@QEAAAEAV01@XZ @ 0x1801BE120 (--E-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@.c)
 *     ?_Extract@?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAPEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@2@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@U_Iterator_base0@2@@2@@Z @ 0x1801BE174 (-_Extract@-$_Tree_val@U-$_Tree_simple_types@U-$pair@QEAXUDEVICE_INFO@@@std@@@std@@@std@@QEAAPEAU.c)
 *     ?clear@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAAXXZ @ 0x1801BE40C (-clear@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 *     ??$_Eqrange@PEAX@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@PEAU12@@1@AEBQEAX@Z @ 0x1801CAE9C (--$_Eqrange@PEAX@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pai.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::erase(
        __int64 a1,
        __int64 a2)
{
  __int64 *v2; // rax
  __int64 v3; // rdi
  __int64 v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rax
  __int64 v7; // r10
  void *v8; // rax
  _BYTE v10[24]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+50h] [rbp+8h] BYREF

  v11 = a1;
  v2 = (__int64 *)std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Eqrange<void *>(
                    a1,
                    v10,
                    a2);
  v3 = 0LL;
  v4 = v2[1];
  v6 = *v2;
  v5 = v6;
  v11 = v6;
  while ( v6 != v4 )
  {
    ++v3;
    std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>,std::_Iterator_base0>::operator++(&v11);
    v6 = v11;
  }
  v11 = v5;
  if ( v5 == *(_QWORD *)CPointerDeviceCache::s_deviceCache && *(_BYTE *)(v4 + 25) )
  {
    std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::clear();
  }
  else
  {
    while ( v5 != v4 )
    {
      std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>,std::_Iterator_base0>::operator++(&v11);
      v8 = (void *)std::_Tree_val<std::_Tree_simple_types<std::pair<void * const,DEVICE_INFO>>>::_Extract(
                     &CPointerDeviceCache::s_deviceCache,
                     v7);
      std::_Deallocate<16>(v8, 0x60uLL);
      v5 = v11;
    }
  }
  return v3;
}
