/*
 * XREFs of ?ShareBuffer@SipcEndpoint@@UEAAJPEAXHPEA_K@Z @ 0x180113330
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall SipcEndpoint::ShareBuffer(SipcEndpoint *this, void *a2, __int64 a3, unsigned __int64 *a4)
{
  __int64 v5; // r10

  if ( *((_BYTE *)this + 48) != 1 )
    return 2147942405LL;
  v5 = *((_QWORD *)this + 2);
  if ( !v5 )
    return 2147549183LL;
  if ( !*((_BYTE *)this + 60) )
    return 2147944650LL;
  LOBYTE(a3) = (_DWORD)a3 != 0;
  return (*(__int64 (__fastcall **)(_QWORD, void *, __int64, unsigned __int64 *))(*(_QWORD *)v5 + 64LL))(
           *((_QWORD *)this + 2),
           a2,
           a3,
           a4);
}
