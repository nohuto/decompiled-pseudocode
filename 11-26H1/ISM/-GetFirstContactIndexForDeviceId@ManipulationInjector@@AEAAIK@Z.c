/*
 * XREFs of ?GetFirstContactIndexForDeviceId@ManipulationInjector@@AEAAIK@Z @ 0x180113E64
 * Callers:
 *     ?EndManipulation@ManipulationInjector@@QEAAXK@Z @ 0x180113CF8 (-EndManipulation@ManipulationInjector@@QEAAXK@Z.c)
 *     ?UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z @ 0x1801158A4 (-UpdateContact@ManipulationInjector@@AEAAXUtagPOINT@@_NK@Z.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 */

__int64 __fastcall ManipulationInjector::GetFirstContactIndexForDeviceId(
        ManipulationInjector *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  __int64 i; // r8
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 12) )
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x495,
        (int)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
        a4);
    if ( *((_DWORD *)this + i + 178) == a2 )
      break;
  }
  return (unsigned int)i;
}
