/*
 * XREFs of _dynamic_atexit_destructor_for__init_atexit__ @ 0x1800BF380
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800C0010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 dynamic_atexit_destructor_for__init_atexit__()
{
  void *v0; // rcx
  void (__fastcall *v1)(__int64); // rax
  __int64 v2; // rcx
  __int64 result; // rax

  while ( 1 )
  {
    result = qword_18017F268;
    if ( (unsigned __int64)qword_18017F268 >= 0xA )
      break;
    v0 = (void *)qword_18017F570[qword_18017F268++];
    v1 = (void (__fastcall *)(__int64))DecodePointer(v0);
    if ( v1 )
      v1(v2);
  }
  return result;
}
