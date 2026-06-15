/*
 * XREFs of ?GetDataFlow@CAudioStream@@UEAA?AW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@XZ @ 0x18006CC30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016E010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_BOOL8 __fastcall CAudioStream::GetDataFlow(CAudioStream *this)
{
  return (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this - 1) + 64LL))((char *)this - 8) != 0;
}
