/*
 * XREFs of ?erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x1803591D8
 * Callers:
 *     _lambda_189d139117de0f63592accc827d12a70_::operator() @ 0x1803436BC (_lambda_189d139117de0f63592accc827d12a70_--operator().c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@U?$less@I@2@V?$allocator@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIV?$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverlayExperienceManager@@@std@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x180357D80 (-_Erase@-$_Tree@V-$_Tmap_traits@IV-$shared_ptr@ULaunchForResultsQueuedOperationData@GamingOverla.c)
 */

__int64 __fastcall std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 v2; // r10
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // rax
  unsigned int v7; // r11d
  unsigned int v8; // ecx
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
      if ( *(_DWORD *)(v6 + 32) >= v7 )
      {
        if ( *(_BYTE *)(v4 + 25) && v7 < *(_DWORD *)(v6 + 32) )
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
      if ( v8 >= *(_DWORD *)(v5 + 32) )
        v9 = v4;
      v4 = v9;
      if ( v8 >= *(_DWORD *)(v5 + 32) )
        v5 += 16LL;
      v5 = *(_QWORD *)v5;
    }
    while ( !*(_BYTE *)(v5 + 25) );
  }
  v11[0] = v2;
  v11[1] = v4;
  return std::_Tree<std::_Tmap_traits<unsigned int,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,std::shared_ptr<GamingOverlayExperienceManager::LaunchForResultsQueuedOperationData>>>,0>>::_Erase(
           (_QWORD **)a1,
           v11);
}
