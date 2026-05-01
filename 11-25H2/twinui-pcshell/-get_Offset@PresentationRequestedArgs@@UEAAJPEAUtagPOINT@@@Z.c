/*
 * XREFs of ?get_Offset@PresentationRequestedArgs@@UEAAJPEAUtagPOINT@@@Z @ 0x180234920
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_Offset(PresentationRequestedArgs *this, struct tagPOINT *a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v5; // [rsp+30h] [rbp+8h] BYREF
  struct tagPOINT v6; // [rsp+38h] [rbp+10h]

  *a2 = 0LL;
  v2 = *((_QWORD *)this + 7);
  v5 = 0LL;
  result = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v2 + 80LL))(v2, &v5);
  if ( (int)result >= 0 )
  {
    v6.x = (int)*(float *)&v5;
    v6.y = (int)*((float *)&v5 + 1);
    *a2 = v6;
    return 0LL;
  }
  return result;
}
