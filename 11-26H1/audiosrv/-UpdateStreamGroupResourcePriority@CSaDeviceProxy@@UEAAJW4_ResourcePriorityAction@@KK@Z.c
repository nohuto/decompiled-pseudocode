/*
 * XREFs of ?UpdateStreamGroupResourcePriority@CSaDeviceProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18003EF00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18003F240 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V21@@Z @ 0x180056FD0 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CSaDeviceProxy::UpdateStreamGroupResourcePriority(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  __int64 v4; // rbx
  char v9; // si
  __int64 *v10; // rdx
  __int64 *v11; // r8
  __int64 *v12; // rcx
  __int64 *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  unsigned int v18; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  char v22; // [rsp+70h] [rbp+8h] BYREF

  v4 = *(_QWORD *)(a1 + 48);
  v9 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)v4);
  if ( a2 - 1 <= 1 )
  {
    v10 = *(__int64 **)(v4 + 40);
    v11 = v10;
    v12 = (__int64 *)v10[1];
    if ( !*((_BYTE *)v12 + 25) )
    {
      do
      {
        v13 = v12 + 2;
        if ( *((_DWORD *)v12 + 7) >= a4 )
        {
          v13 = v12;
          v11 = v12;
        }
        v12 = (__int64 *)*v13;
      }
      while ( !*(_BYTE *)(*v13 + 25) );
    }
    if ( !*((_BYTE *)v11 + 25) && a4 >= *((_DWORD *)v11 + 7) && v11 != v10 && (*((_DWORD *)v11 + 8))-- == 1 )
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>>,0>(
        v4 + 40,
        &v22);
  }
  if ( a2 <= 1
    && (v14 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)v4, a3), v15 = v14, v14 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v14);
    if ( v4 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBD2,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)v15);
    return v15;
  }
  else
  {
    if ( *(_QWORD *)(v4 + 48) )
    {
      v16 = *(_DWORD *)(**(_QWORD **)(v4 + 40) + 28LL);
      if ( v16 != *(_DWORD *)(v4 + 56) )
      {
        v9 = 1;
        *(_DWORD *)(v4 + 56) = v16;
      }
    }
    if ( v4 )
      LeaveCriticalSection((LPCRITICAL_SECTION)v4);
    if ( v9
      && (v17 = (*(__int64 (__fastcall **)(struct IAudioResourceManager *, _QWORD, __int64))(*(_QWORD *)g_AudioResourceManager
                                                                                           + 48LL))(
                  g_AudioResourceManager,
                  *(unsigned int *)(*(_QWORD *)(a1 + 48) + 56LL),
                  a1 + 56),
          v18 = v17,
          v17 < 0) )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xBD7,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
        (const char *)(unsigned int)v17);
      return v18;
    }
    else
    {
      return 0LL;
    }
  }
}
