/*
 * XREFs of ??4Edge@@QEAAAEAV0@$$QEAV0@@Z @ 0x1801ADE70
 * Callers:
 *     ?erase@?$vector@VEdge@@V?$allocator@VEdge@@@std@@@std@@QEAA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@V?$_Vector_const_iterator@V?$_Vector_val@U?$_Simple_types@VEdge@@@std@@@std@@@2@@Z @ 0x1801AF324 (-erase@-$vector@VEdge@@V-$allocator@VEdge@@@std@@@std@@QEAA-AV-$_Vector_iterator@V-$_Vector_val@.c)
 * Callees:
 *     ??4?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800B33AC (--4-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV01@$$QEAV01@@Z.c)
 *     ?_Tidy@?$vector@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V?$allocator@V?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@@std@@@std@@AEAAXXZ @ 0x1801ACCD8 (-_Tidy@-$vector@V-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@V-$allocator@V-$ComPtr@VEd.c)
 *     ??4?$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z @ 0x1801ADE2C (--4-$ComPtr@VEdgyControllerClientProxy@@@WRL@Microsoft@@QEAAAEAV012@$$QEAV012@@Z.c)
 */

__int64 __fastcall Edge::operator=(__int64 a1, __int64 a2)
{
  int v4; // eax
  _QWORD *v5; // rbx

  *(_QWORD *)a1 = *(_QWORD *)a2;
  std::wstring::operator=((_QWORD *)(a1 + 8), (_QWORD *)(a2 + 8));
  Microsoft::WRL::ComPtr<EdgyControllerClientProxy>::operator=((__int64 *)(a1 + 40), (__int64 *)(a2 + 40));
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 52) = *(_OWORD *)(a2 + 52);
  *(_OWORD *)(a1 + 68) = *(_OWORD *)(a2 + 68);
  *(_QWORD *)(a1 + 84) = *(_QWORD *)(a2 + 84);
  *(_DWORD *)(a1 + 92) = *(_DWORD *)(a2 + 92);
  v4 = *(_DWORD *)(a2 + 96);
  v5 = (_QWORD *)(a2 + 104);
  *(_DWORD *)(a1 + 96) = v4;
  if ( (_QWORD *)(a1 + 104) != v5 )
  {
    std::vector<Microsoft::WRL::ComPtr<EdgyControllerClientProxy>>::_Tidy(a1 + 104);
    *(_QWORD *)(a1 + 104) = *v5;
    *(_QWORD *)(a1 + 112) = v5[1];
    *(_QWORD *)(a1 + 120) = v5[2];
    *v5 = 0LL;
    v5[1] = 0LL;
    v5[2] = 0LL;
  }
  return a1;
}
