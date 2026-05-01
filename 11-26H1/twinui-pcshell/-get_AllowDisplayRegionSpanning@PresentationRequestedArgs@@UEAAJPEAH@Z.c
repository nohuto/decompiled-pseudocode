/*
 * XREFs of ?get_AllowDisplayRegionSpanning@PresentationRequestedArgs@@UEAAJPEAH@Z @ 0x1802E9220
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PresentationRequestedArgs::get_AllowDisplayRegionSpanning(PresentationRequestedArgs *this, int *a2)
{
  int v2; // ebx
  __int64 v4; // rcx
  __int64 result; // rax
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  *a2 = 0;
  v4 = *((_QWORD *)this + 7);
  v6 = 0;
  result = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v4 + 96LL))(v4, &v6);
  if ( (int)result >= 0 )
  {
    LOBYTE(v2) = v6 != 0;
    result = 0LL;
    *a2 = v2;
  }
  return result;
}
