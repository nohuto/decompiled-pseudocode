/*
 * XREFs of ?get_Size@PresentationRequestedArgs@@UEAAJPEAUtagSIZE@@@Z @ 0x1802E94F0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_Size(PresentationRequestedArgs *this, struct tagSIZE *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  struct tagSIZE v6; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 7);
  v5 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 72LL))(v2, &v5);
  if ( (int)result >= 0 )
  {
    v6.cx = (int)*(float *)&v5;
    v6.cy = (int)*((float *)&v5 + 1);
    *a2 = v6;
    return 0LL;
  }
  return result;
}
