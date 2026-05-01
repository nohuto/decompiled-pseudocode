/*
 * XREFs of ?IsEmpty@CMultitaskingViewElementBase@@UEAA_NXZ @ 0x1804B0930
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CMultitaskingViewElementBase::IsEmpty(CMultitaskingViewElementBase *this)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rdi

  if ( !(*(unsigned __int8 (__fastcall **)(CMultitaskingViewElementBase *))(*(_QWORD *)this + 608LL))(this) )
    return 0;
  v2 = (_QWORD *)*((_QWORD *)this + 2);
  v3 = &v2[*((_QWORD *)this + 3)];
  while ( v2 != v3 )
  {
    if ( !(*(unsigned __int8 (__fastcall **)(_QWORD))(*(_QWORD *)*v2 + 408LL))(*v2) )
      return 0;
    ++v2;
  }
  return 1;
}
