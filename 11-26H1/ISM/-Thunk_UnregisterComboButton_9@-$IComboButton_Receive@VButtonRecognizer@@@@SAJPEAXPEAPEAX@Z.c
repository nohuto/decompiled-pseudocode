/*
 * XREFs of ?Thunk_UnregisterComboButton_9@?$IComboButton_Receive@VButtonRecognizer@@@@SAJPEAXPEAPEAX@Z @ 0x1801AB310
 * Callers:
 *     <none>
 * Callees:
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@IUComboButtonRegistration@@U?$less@I@std@@V?$allocator@U?$pair@$$CBIUComboButtonRegistration@@@std@@@3@$0A@@std@@@std@@AEAA_KU?$pair@PEAU?$_Tree_node@U?$pair@$$CBIUComboButtonRegistration@@@std@@PEAX@std@@PEAU12@@2@@Z @ 0x1801AB3A4 (-_Erase@-$_Tree@V-$_Tmap_traits@IUComboButtonRegistration@@U-$less@I@std@@V-$allocator@U-$pair@$.c)
 */

__int64 __fastcall IComboButton_Receive<ButtonRecognizer>::Thunk_UnregisterComboButton_9(__int64 a1, __int64 a2)
{
  __int64 v2; // r10
  __int64 *v3; // r8
  __int64 *v4; // rcx
  __int64 v5; // r9
  __int64 *v6; // rax
  __int64 *i; // rdx
  _QWORD v9[3]; // [rsp+20h] [rbp-18h] BYREF

  v2 = a1 + 32;
  v3 = *(__int64 **)(a1 + 32);
  v4 = v3;
  v5 = **(unsigned int **)(a2 + 8);
  v6 = (__int64 *)v3[1];
  for ( i = v6; !*((_BYTE *)i + 25); i = (__int64 *)*i )
  {
    if ( *((_DWORD *)i + 8) >= (unsigned int)v5 )
    {
      if ( *((_BYTE *)v4 + 25) && (unsigned int)v5 < *((_DWORD *)i + 8) )
        v4 = i;
      v3 = i;
    }
    else
    {
      i += 2;
    }
  }
  if ( !*((_BYTE *)v4 + 25) )
    v6 = (__int64 *)*v4;
  while ( !*((_BYTE *)v6 + 25) )
  {
    if ( (unsigned int)v5 >= *((_DWORD *)v6 + 8) )
    {
      v6 = (__int64 *)v6[2];
    }
    else
    {
      v4 = v6;
      v6 = (__int64 *)*v6;
    }
  }
  v9[1] = v4;
  v9[0] = v3;
  ((void (__fastcall *)(__int64, _QWORD *, __int64 *, __int64))std::_Tree<std::_Tmap_traits<unsigned int,ComboButtonRegistration,std::less<unsigned int>,std::allocator<std::pair<unsigned int const,ComboButtonRegistration>>,0>>::_Erase)(
    v2,
    v9,
    v3,
    v5);
  return 0LL;
}
