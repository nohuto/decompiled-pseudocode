/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@$0A@@std@@@std@@QEAA_KAEBK@Z @ 0x1800CB79C
 * Callers:
 *     ?OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z @ 0x1800C9C78 (-OnHapticInterfaceRemoval@HapticProcessor@@QEAAJK@Z.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U?$less@K@std@@V?$allocator@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@@4@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBKUHapticInterfaceInfo@HapticProcessor@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1800CB150 (-_Erase@-$_Tree@V-$_Tmap_traits@KUHapticInterfaceInfo@HapticProcessor@@U-$less@K@std@@V-$allocat.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned long,HapticProcessor::HapticInterfaceInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // r10
  __int64 v3; // r8
  __int64 v4; // rax
  __int64 v5; // r9
  unsigned int v6; // r11d
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = *a1;
  v3 = *a1;
  v4 = *(_QWORD *)(*a1 + 8);
  v5 = v4;
  if ( !*(_BYTE *)(v4 + 25) )
  {
    v6 = *a2;
    do
    {
      if ( *(_DWORD *)(v5 + 32) >= v6 )
      {
        if ( *(_BYTE *)(v3 + 25) && v6 < *(_DWORD *)(v5 + 32) )
          v3 = v5;
        v2 = v5;
      }
      else
      {
        v5 += 16LL;
      }
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  if ( !*(_BYTE *)(v3 + 25) )
    v4 = *(_QWORD *)v3;
  while ( !*(_BYTE *)(v4 + 25) )
  {
    if ( *a2 >= *(_DWORD *)(v4 + 32) )
    {
      v4 = *(_QWORD *)(v4 + 16);
    }
    else
    {
      v3 = v4;
      v4 = *(_QWORD *)v4;
    }
  }
  v8[0] = v2;
  v8[1] = v3;
  return std::_Tree<std::_Tmap_traits<unsigned long,HapticProcessor::HapticInterfaceInfo,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,HapticProcessor::HapticInterfaceInfo>>,0>>::_Erase(
           a1,
           v8);
}
