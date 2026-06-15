/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEB_K@Z @ 0x1800E83CC
 * Callers:
 *     ?UnregisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJI@Z @ 0x1800E7670 (-UnregisterBidirectionalModeChangedCallback@CBtAudioResourceManagerBase@@UEAAJI@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@_KV?$function@$$A6AXXZ@std@@U?$less@_K@2@V?$allocator@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CB_KV?$function@$$A6AXXZ@std@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800E7BE0 (-_Erase@-$_Tree@V-$_Tmap_traits@_KV-$function@$$A6AXXZ@std@@U-$less@_K@2@V-$allocator@U-$pair@$$.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<void (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<void (void)>>>,0>>::erase(
        __int64 *a1,
        unsigned __int64 *a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned __int64 v7; // r11
  unsigned __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v4 = *a1;
  v5 = *(_QWORD *)(*a1 + 8);
  v6 = v5;
  if ( !*(_BYTE *)(v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *(_QWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_QWORD *)(v6 + 32) )
          v4 = v6;
        v2 = v6;
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
    v8 = *a2;
    do
    {
      v9 = v5;
      if ( v8 >= *(_QWORD *)(v5 + 32) )
        v9 = v4;
      v4 = v9;
      if ( v8 >= *(_QWORD *)(v5 + 32) )
        v5 += 16LL;
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  v11[0] = v2;
  v11[1] = v4;
  return std::_Tree<std::_Tmap_traits<unsigned __int64,std::function<void (void)>,std::less<unsigned __int64>,std::allocator<std::pair<unsigned __int64 const,std::function<void (void)>>>,0>>::_Erase(
           a1,
           v11);
}
