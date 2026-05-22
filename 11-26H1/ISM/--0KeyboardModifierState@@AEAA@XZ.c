/*
 * XREFs of ??0KeyboardModifierState@@AEAA@XZ @ 0x18019D020
 * Callers:
 *     ?Create@KeyboardModifierState@@SAJPEAPEAV1@@Z @ 0x180011120 (-Create@KeyboardModifierState@@SAJPEAPEAV1@@Z.c)
 * Callees:
 *     ?_Assign_grow@?$_Hash_vec@V?$allocator@V?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@std@@@std@@@std@@QEAAX_KV?$_List_unchecked_iterator@V?$_List_val@U?$_List_simple_types@U?$pair@$$CBKUMessageInfo@ResizeProcessor@@@std@@@std@@@std@@@2@@Z @ 0x180011A60 (-_Assign_grow@-$_Hash_vec@V-$allocator@V-$_List_unchecked_iterator@V-$_List_val@U-$_List_simple_.c)
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=3
KeyboardModifierState *__fastcall KeyboardModifierState::KeyboardModifierState(KeyboardModifierState *this)
{
  _DWORD *v2; // rbx
  unsigned __int64 size_of; // rax
  _QWORD *v4; // rax

  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &KeyboardModifierState::`vftable';
  v2 = (_DWORD *)((char *)this + 16);
  *((_DWORD *)this + 4) = 0;
  *((_QWORD *)this + 3) = 0LL;
  *((_QWORD *)this + 4) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v4 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v4 = v4;
  v4[1] = v4;
  *((_QWORD *)this + 3) = v4;
  *((_QWORD *)this + 5) = 0LL;
  *((_QWORD *)this + 6) = 0LL;
  *((_QWORD *)this + 7) = 0LL;
  *((_QWORD *)this + 8) = 7LL;
  *((_QWORD *)this + 9) = 8LL;
  *v2 = 1065353216;
  std::_Hash_vec<std::allocator<std::_List_unchecked_iterator<std::_List_val<std::_List_simple_types<std::pair<unsigned long const,ResizeProcessor::MessageInfo>>>>>>::_Assign_grow(
    (unsigned __int64 **)this + 5,
    0x10uLL,
    *((_QWORD *)this + 3));
  KeyboardModifierState::s_pKeyboardModifierState = 0LL;
  *((_DWORD *)this + 20) = 0;
  return this;
}
