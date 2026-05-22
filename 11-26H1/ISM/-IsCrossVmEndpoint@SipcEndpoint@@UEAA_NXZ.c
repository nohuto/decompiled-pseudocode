/*
 * XREFs of ?IsCrossVmEndpoint@SipcEndpoint@@UEAA_NXZ @ 0x180112350
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall SipcEndpoint::IsCrossVmEndpoint(SipcEndpoint *this)
{
  return (*(unsigned __int16 (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 48LL))(*((_QWORD *)this + 2)) != 0;
}
