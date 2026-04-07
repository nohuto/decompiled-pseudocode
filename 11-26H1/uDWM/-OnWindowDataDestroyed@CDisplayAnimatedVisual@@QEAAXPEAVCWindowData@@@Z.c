/*
 * XREFs of ?OnWindowDataDestroyed@CDisplayAnimatedVisual@@QEAAXPEAVCWindowData@@@Z @ 0x180075084
 * Callers:
 *     ?OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z @ 0x18008005C (-OnWindowDataDestroyed@CWindowList@@QEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?erase@?$_Tree@V?$_Tset_traits@PEAVCWindowData@@U?$less@PEAVCWindowData@@@std@@V?$allocator@PEAVCWindowData@@@3@$0A@@std@@@std@@QEAA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@PEAVCWindowData@@@std@@@std@@@2@V32@@Z @ 0x1800AF8AC (-erase@-$_Tree@V-$_Tset_traits@PEAVCWindowData@@U-$less@PEAVCWindowData@@@std@@V-$allocator@PEAV.c)
 */

void __fastcall CDisplayAnimatedVisual::OnWindowDataDestroyed(CDisplayAnimatedVisual *this, struct CWindowData *a2)
{
  char *v3; // rcx
  __int64 *v5; // r8
  __int64 *v6; // rdx
  __int64 *v7; // rdx
  __int64 *v8; // r8
  __int64 *v9; // rcx
  __int64 *v10; // rax
  __int64 *v11; // rax
  char v12; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 )
  {
    v3 = (char *)this + 304;
    v5 = *(__int64 **)v3;
    v6 = *(__int64 **)(*(_QWORD *)v3 + 8LL);
    if ( !*((_BYTE *)v6 + 25) )
    {
      do
      {
        v10 = v6 + 2;
        if ( v6[4] >= (unsigned __int64)a2 )
        {
          v10 = v6;
          v5 = v6;
        }
        v6 = (__int64 *)*v10;
      }
      while ( !*(_BYTE *)(*v10 + 25) );
    }
    if ( !*((_BYTE *)v5 + 25) && v5 != *(__int64 **)v3 && (unsigned __int64)a2 >= v5[4] )
      std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::erase(
        v3,
        &v12);
    v7 = (__int64 *)*((_QWORD *)this + 40);
    v8 = v7;
    v9 = (__int64 *)v7[1];
    if ( !*((_BYTE *)v9 + 25) )
    {
      do
      {
        v11 = v9 + 2;
        if ( v9[4] >= (unsigned __int64)a2 )
        {
          v11 = v9;
          v8 = v9;
        }
        v9 = (__int64 *)*v11;
      }
      while ( !*(_BYTE *)(*v11 + 25) );
    }
    if ( !*((_BYTE *)v8 + 25) && v8 != v7 && (unsigned __int64)a2 >= v8[4] )
      std::_Tree<std::_Tset_traits<CWindowData *,std::less<CWindowData *>,std::allocator<CWindowData *>,0>>::erase(
        (char *)this + 320,
        &v12);
  }
}
