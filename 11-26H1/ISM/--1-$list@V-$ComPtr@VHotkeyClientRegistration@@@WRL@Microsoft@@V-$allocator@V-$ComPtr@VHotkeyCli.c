/*
 * XREFs of ??1?$list@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@@std@@@std@@QEAA@XZ @ 0x1801CEEF8
 * Callers:
 *     _HotKeyProcessor::HotKeyProcessor_::_1_::dtor$1 @ 0x1801DD764 (_HotKeyProcessor--HotKeyProcessor_--_1_--dtor$1.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@std@@@?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEAX@std@@@1@PEAU01@@Z @ 0x1801CE374 (--$_Freenode@V-$allocator@U-$_List_node@V-$ComPtr@VHotkeyClientRegistration@@@WRL@Microsoft@@PEA.c)
 */

void __fastcall std::list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>::~list<Microsoft::WRL::ComPtr<HotkeyClientRegistration>>(
        void **a1)
{
  __int64 **v1; // rdx
  __int64 *v3; // rdx
  __int64 v4; // rbx

  v1 = (__int64 **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = *v3;
      std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>::_Freenode<std::allocator<std::_List_node<Microsoft::WRL::ComPtr<HotkeyClientRegistration>,void *>>>(
        (__int64)a1,
        v3);
      v3 = (__int64 *)v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x18);
}
