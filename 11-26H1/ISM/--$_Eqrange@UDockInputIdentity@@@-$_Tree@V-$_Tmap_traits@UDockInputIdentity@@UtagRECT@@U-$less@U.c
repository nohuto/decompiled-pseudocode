/*
 * XREFs of ??$_Eqrange@UDockInputIdentity@@@?$_Tree@V?$_Tmap_traits@UDockInputIdentity@@UtagRECT@@U?$less@UDockInputIdentity@@@std@@V?$allocator@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@@4@$0A@@std@@@std@@IEBA?AU?$pair@PEAU?$_Tree_node@U?$pair@$$CBUDockInputIdentity@@UtagRECT@@@std@@PEAX@std@@PEAU12@@1@AEBUDockInputIdentity@@@Z @ 0x180182A34
 * Callers:
 *     ?OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z @ 0x180183E08 (-OnDockInput@DeviceDockServer@@QEAAJPEAUDockInputInfo@@@Z.c)
 * Callees:
 *     <none>
 */

_QWORD *__fastcall std::_Tree<std::_Tmap_traits<DockInputIdentity,tagRECT,std::less<DockInputIdentity>,std::allocator<std::pair<DockInputIdentity const,tagRECT>>,0>>::_Eqrange<DockInputIdentity>(
        __int64 *a1,
        _QWORD *a2,
        unsigned int *a3)
{
  __int64 *v3; // rdi
  _QWORD *v4; // rsi
  __int64 *v6; // r10
  __int64 *v7; // rcx
  __int64 *i; // r9
  unsigned int v9; // r8d
  _QWORD *v10; // rbx
  bool v11; // cf
  bool v12; // cf
  unsigned int v13; // r8d
  bool v14; // cf
  _QWORD *result; // rax

  v3 = (__int64 *)*a1;
  v4 = a3 + 2;
  v6 = (__int64 *)*a1;
  v7 = *(__int64 **)(*a1 + 8);
  for ( i = v7; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    v9 = *((_DWORD *)i + 8);
    v10 = i + 5;
    v11 = v9 < *a3;
    if ( v9 == *a3 )
    {
      v11 = *v10 < *v4;
      if ( *v10 == *v4 )
        v11 = *((_WORD *)i + 24) < *((_WORD *)a3 + 8);
    }
    if ( v11 )
    {
      i += 2;
    }
    else
    {
      if ( *((_BYTE *)v6 + 25) )
      {
        v12 = *a3 < v9;
        if ( *a3 == v9 )
        {
          v12 = *v4 < *v10;
          if ( *v4 == *v10 )
            v12 = *((_WORD *)a3 + 8) < *((_WORD *)i + 24);
        }
        if ( v12 )
          v6 = i;
      }
      v3 = i;
    }
  }
  if ( !*((_BYTE *)v6 + 25) )
    v7 = (__int64 *)*v6;
  if ( !*((_BYTE *)v7 + 25) )
  {
    v13 = *a3;
    do
    {
      v14 = v13 < *((_DWORD *)v7 + 8);
      if ( v13 == *((_DWORD *)v7 + 8) )
      {
        v14 = *v4 < (unsigned __int64)v7[5];
        if ( *v4 == v7[5] )
          v14 = *((_WORD *)a3 + 8) < *((_WORD *)v7 + 24);
      }
      if ( v14 )
      {
        v6 = v7;
        v7 = (__int64 *)*v7;
      }
      else
      {
        v7 = (__int64 *)v7[2];
      }
    }
    while ( !*((_BYTE *)v7 + 25) );
  }
  result = a2;
  *a2 = v3;
  a2[1] = v6;
  return result;
}
