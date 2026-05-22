/*
 * XREFs of ?GetInstance@CUIHierarchy@@SAAEAV1@XZ @ 0x180098AE4
 * Callers:
 *     ?OnConnected@CUIHostInputObjectProxy@@MEAAJXZ @ 0x1801343E0 (-OnConnected@CUIHostInputObjectProxy@@MEAAJXZ.c)
 *     ?OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ @ 0x180135100 (-OnConnected@CUIComponentInputObjectProxy@@MEAAJXZ.c)
 * Callees:
 *     atexit @ 0x18009A4BC (atexit.c)
 *     _Init_thread_footer @ 0x18009AF8C (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009AFF4 (_Init_thread_header.c)
 *     ??0CUIHierarchy@@AEAA@XZ @ 0x1800A7AA4 (--0CUIHierarchy@@AEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=1
struct CUIHierarchy *CUIHierarchy::GetInstance(void)
{
  CUIHierarchy *v0; // rcx

  if ( dword_180254E44 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 32LL) )
  {
    Init_thread_header(&dword_180254E44);
    if ( dword_180254E44 == -1 )
    {
      CUIHierarchy::CUIHierarchy(v0);
      atexit(CUIHierarchy::GetInstance_::_2_::_dynamic_atexit_destructor_for__instance__);
      Init_thread_footer(&dword_180254E44);
    }
  }
  return (struct CUIHierarchy *)&qword_180254E50;
}
