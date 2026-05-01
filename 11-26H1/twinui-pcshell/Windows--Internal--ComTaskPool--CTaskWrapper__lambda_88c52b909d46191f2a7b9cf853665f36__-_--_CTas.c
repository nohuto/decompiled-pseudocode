/*
 * XREFs of Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::_CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_ @ 0x180586144
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__&_::_scalar_deleting_destructor_ @ 0x1805864E0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36__-_--_scal.c)
 * Callees:
 *     ??$_Freenode@V?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@std@@@?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@SAXAEAV?$allocator@U?$_List_node@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@PEAX@std@@@1@PEAU01@@Z @ 0x180285684 (--$_Freenode@V-$allocator@U-$_List_node@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@.c)
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x180285A90 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall Windows::Internal::ComTaskPool::CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36____::_CTaskWrapper__lambda_88c52b909d46191f2a7b9cf853665f36____(
        __int64 a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  v1 = *(_QWORD ***)(a1 + 24);
  *v1[1] = 0LL;
  v3 = *v1;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_List_node<std::wstring,void *>::_Freenode<std::allocator<std::_List_node<std::wstring,void *>>>(
        a1,
        (__int64)v3);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16>(*(void **)(a1 + 24), (struct std::nothrow_t *)0x30);
  *(_DWORD *)(a1 + 12) = -1073741823;
}
