/*
 * XREFs of ?UpdateStreamResourcePriority@CBaseStreamGroupProxy@@UEAAJW4_ResourcePriorityAction@@KK@Z @ 0x18003F0A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z @ 0x18003F240 (-AddResourcePriorityToMap@CResourcePriorityTracker@@IEAAJK@Z.c)
 *     ??$erase@V?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@std@@$0A@@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@QEAA?AV?$_Tree_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBKK@std@@@std@@@std@@@1@V21@@Z @ 0x180056FD0 (--$erase@V-$_Tree_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBKK@std@@@std@@@std@@@s.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CBaseStreamGroupProxy::UpdateStreamResourcePriority(
        struct _RTL_CRITICAL_SECTION *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  struct _RTL_CRITICAL_SECTION *v4; // rbp
  struct _RTL_CRITICAL_SECTION *OwningThread; // rbx
  char v10; // si
  unsigned int v11; // r13d
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rdx
  PRTL_CRITICAL_SECTION_DEBUG v13; // r8
  __int64 i; // rcx
  __int64 *v15; // rax
  int v16; // eax
  unsigned int v17; // edi
  int v18; // eax
  ULONG_PTR SpinCount; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  char v23; // [rsp+90h] [rbp+8h] BYREF

  v4 = a1 + 3;
  EnterCriticalSection(a1 + 3);
  OwningThread = (struct _RTL_CRITICAL_SECTION *)a1[2].OwningThread;
  v10 = 0;
  v11 = (unsigned int)OwningThread[1].OwningThread;
  EnterCriticalSection(OwningThread);
  if ( a2 - 1 <= 1 )
  {
    DebugInfo = OwningThread[1].DebugInfo;
    v13 = DebugInfo;
    for ( i = (__int64)DebugInfo->CriticalSection; !*(_BYTE *)(i + 25); i = *v15 )
    {
      v15 = (__int64 *)(i + 16);
      if ( *(_DWORD *)(i + 28) >= a4 )
      {
        v15 = (__int64 *)i;
        v13 = (PRTL_CRITICAL_SECTION_DEBUG)i;
      }
    }
    if ( v13 != DebugInfo
      && !BYTE1(v13->ProcessLocksList.Blink)
      && a4 >= HIDWORD(v13->ProcessLocksList.Blink)
      && v13->EntryCount-- == 1 )
    {
      std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::erase<std::_Tree_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<unsigned long const,unsigned long>>>>,0>(
        &OwningThread[1],
        &v23);
    }
  }
  if ( a2 <= 1
    && (v16 = CResourcePriorityTracker::AddResourcePriorityToMap((CResourcePriorityTracker *)OwningThread, a3),
        v17 = v16,
        v16 < 0) )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x75,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\devicegraphmanagement.cpp",
      (const char *)(unsigned int)v16);
    if ( OwningThread )
      LeaveCriticalSection(OwningThread);
  }
  else
  {
    if ( *(_QWORD *)&OwningThread[1].LockCount )
    {
      v18 = *(_DWORD *)(*(_QWORD *)OwningThread[1].DebugInfo + 28LL);
      if ( v18 != LODWORD(OwningThread[1].OwningThread) )
      {
        v10 = 1;
        LODWORD(OwningThread[1].OwningThread) = v18;
      }
    }
    if ( OwningThread )
      LeaveCriticalSection(OwningThread);
    v17 = 0;
    if ( v10 )
    {
      SpinCount = a1[2].SpinCount;
      if ( SpinCount )
        v17 = (*(__int64 (__fastcall **)(ULONG_PTR, __int64, _QWORD, _QWORD))(*(_QWORD *)SpinCount + 88LL))(
                SpinCount,
                1LL,
                *((unsigned int *)a1[2].OwningThread + 14),
                v11);
    }
  }
  if ( v4 )
    LeaveCriticalSection(v4);
  return v17;
}
