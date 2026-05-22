/*
 * XREFs of ??1?$list@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@V?$allocator@U?$pair@$$CBKPEAVInputInfoValidator@@@std@@@2@@std@@QEAA@XZ @ 0x1800F0D5C
 * Callers:
 *     _Win32kInterop::Win32kInterop_::_1_::dtor$34 @ 0x1801DA506 (_Win32kInterop--Win32kInterop_--_1_--dtor$34.c)
 * Callees:
 *     ??$_Deallocate@$0BA@@std@@YAXPEAX_K@Z @ 0x18008A790 (--$_Deallocate@$0BA@@std@@YAXPEAX_K@Z.c)
 */

void __fastcall std::list<std::pair<unsigned long const,InputInfoValidator *>>::~list<std::pair<unsigned long const,InputInfoValidator *>>(
        void **a1)
{
  _QWORD **v1; // rdx
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  v1 = (_QWORD **)*a1;
  **((_QWORD **)*a1 + 1) = 0LL;
  v3 = *v1;
  if ( *v1 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      std::_Deallocate<16>(v3, (struct std::nothrow_t *)0x20);
      v3 = v4;
    }
    while ( v4 );
  }
  std::_Deallocate<16>(*a1, (struct std::nothrow_t *)0x20);
}
