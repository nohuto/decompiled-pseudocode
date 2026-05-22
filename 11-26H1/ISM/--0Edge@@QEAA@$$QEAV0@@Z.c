/*
 * XREFs of ??0Edge@@QEAA@$$QEAV0@@Z @ 0x1801ADC0C
 * Callers:
 *     ??$_Uninitialized_move@PEAVEdge@@V?$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV?$allocator@VEdge@@@0@@Z @ 0x1801ADAF8 (--$_Uninitialized_move@PEAVEdge@@V-$allocator@VEdge@@@std@@@std@@YAPEAVEdge@@QEAV1@0PEAV1@AEAV-$.c)
 * Callees:
 *     ??0?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAA@$$QEAV01@@Z @ 0x1800B3168 (--0-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAA@$$QEAV01@@Z.c)
 */

__int64 __fastcall Edge::Edge(_QWORD *a1, _QWORD *a2)
{
  __int64 v2; // r8
  __int64 v3; // r9
  _QWORD *v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 result; // rax

  *a1 = *a2;
  std::wstring::wstring((__int64)(a1 + 1));
  v4 = (_QWORD *)(v2 + 40);
  *(_QWORD *)(v3 + 40) = 0LL;
  if ( v3 + 40 != v2 + 40 )
  {
    *(_QWORD *)(v3 + 40) = *v4;
    *v4 = 0LL;
  }
  *(_DWORD *)(v3 + 48) = *(_DWORD *)(v2 + 48);
  *(_OWORD *)(v3 + 52) = *(_OWORD *)(v2 + 52);
  *(_OWORD *)(v3 + 68) = *(_OWORD *)(v2 + 68);
  *(_QWORD *)(v3 + 84) = *(_QWORD *)(v2 + 84);
  *(_DWORD *)(v3 + 92) = *(_DWORD *)(v2 + 92);
  *(_DWORD *)(v3 + 96) = *(_DWORD *)(v2 + 96);
  v5 = *(_QWORD *)(v2 + 120);
  *(_QWORD *)(v2 + 120) = 0LL;
  v6 = *(_QWORD *)(v2 + 112);
  *(_QWORD *)(v2 + 112) = 0LL;
  v7 = *(_QWORD *)(v2 + 104);
  *(_QWORD *)(v2 + 104) = 0LL;
  *(_QWORD *)(v3 + 104) = v7;
  result = v3;
  *(_QWORD *)(v3 + 112) = v6;
  *(_QWORD *)(v3 + 120) = v5;
  return result;
}
