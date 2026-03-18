/*
 * XREFs of ??$_Eqrange@PEAX@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@QEAXUDEVICE_INFO@@@std@@PEAX@std@@PEAU12@@1@AEBQEAX@Z @ 0x1801CAE9C
 * Callers:
 *     ?erase@?$_Tree@V?$_Tmap_traits@PEAXUDEVICE_INFO@@U?$less@PEAX@std@@V?$allocator@U?$pair@QEAXUDEVICE_INFO@@@std@@@3@$0A@@std@@@std@@QEAA_KAEBQEAX@Z @ 0x18011613C (-erase@-$_Tree@V-$_Tmap_traits@PEAXUDEVICE_INFO@@U-$less@PEAX@std@@V-$allocator@U-$pair@QEAXUDEV.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall std::_Tree<std::_Tmap_traits<void *,DEVICE_INFO,std::less<void *>,std::allocator<std::pair<void * const,DEVICE_INFO>>,0>>::_Eqrange<void *>(
        __int64 a1,
        __int64 *a2,
        unsigned __int64 *a3)
{
  __int64 v3; // r10
  __int64 v4; // rcx
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r11
  __int64 *result; // rax
  unsigned __int64 v9; // r11
  __int64 v10; // rax

  v3 = CPointerDeviceCache::s_deviceCache;
  v4 = CPointerDeviceCache::s_deviceCache;
  v5 = *(_QWORD *)(CPointerDeviceCache::s_deviceCache + 8);
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a3;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v4 = v6;
        v3 = v6;
      }
      else
      {
        v6 += 16LL;
      }
      v6 = *(_QWORD *)v6;
    }
    while ( !*(_BYTE *)(v6 + 25) );
  }
  if ( !*(_BYTE *)(v4 + 25) )
    v5 = *(_QWORD *)v4;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v9 = *a3;
    do
    {
      v10 = v5;
      if ( v9 >= *(_QWORD *)(v5 + 32) )
        v10 = v4;
      v4 = v10;
      if ( v9 >= *(_QWORD *)(v5 + 32) )
        v5 += 16LL;
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  *a2 = v3;
  result = a2;
  a2[1] = v4;
  return result;
}
