/*
 * XREFs of ?erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@QEAA_KAEBI@Z @ 0x180294DA8
 * Callers:
 *     ?ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Windows@winrt@@@Z @ 0x180294CAC (-ProcessUpEvent@PointerEventsDetector@TouchGestureProcessor@@QEAAXAEBUPointerPoint@Input@UI@Wind.c)
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tset_traits@IU?$less@I@std@@V?$allocator@I@2@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@IPEAX@std@@PEAU12@@2@@Z @ 0x180294E48 (-_Erase@-$_Tree@V-$_Tset_traits@IU-$less@I@std@@V-$allocator@I@2@$0A@@std@@@std@@AEAA_KU-$pair@P.c)
 */

__int64 __fastcall std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::erase(
        __int64 *a1,
        unsigned int *a2)
{
  __int64 **v2; // r10
  __int64 **v4; // r8
  __int64 *v5; // r9
  __int64 *v6; // rax
  unsigned int v7; // r11d
  unsigned int v8; // ecx
  __int64 **v9; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = (__int64 **)*a1;
  v4 = (__int64 **)*a1;
  v5 = *(__int64 **)(*a1 + 8);
  v6 = v5;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v7 = *a2;
    do
    {
      if ( *((_DWORD *)v6 + 7) >= v7 )
      {
        if ( *((_BYTE *)v4 + 25) && v7 < *((_DWORD *)v6 + 7) )
          v4 = (__int64 **)v6;
        v2 = (__int64 **)v6;
      }
      else
      {
        v6 += 2;
      }
      v6 = (__int64 *)*v6;
    }
    while ( !*((_BYTE *)v6 + 25) );
  }
  if ( !*((_BYTE *)v4 + 25) )
    v5 = *v4;
  if ( !*((_BYTE *)v5 + 25) )
  {
    v8 = *a2;
    do
    {
      v9 = (__int64 **)v5;
      if ( v8 >= *((_DWORD *)v5 + 7) )
        v9 = v4;
      v4 = v9;
      if ( v8 >= *((_DWORD *)v5 + 7) )
        v5 += 2;
      v5 = (__int64 *)*v5;
    }
    while ( !*((_BYTE *)v5 + 25) );
  }
  v11[0] = v2;
  v11[1] = v4;
  return std::_Tree<std::_Tset_traits<unsigned int,std::less<unsigned int>,std::allocator<unsigned int>,0>>::_Erase(
           a1,
           v11);
}
