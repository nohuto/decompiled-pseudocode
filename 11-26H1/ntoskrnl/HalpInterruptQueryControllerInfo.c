/*
 * XREFs of HalpInterruptQueryControllerInfo @ 0x140783C20
 * Callers:
 *     HaliQuerySystemInformation @ 0x140BF38E0 (HaliQuerySystemInformation.c)
 * Callees:
 *     HalpInterruptModel @ 0x140434CC0 (HalpInterruptModel.c)
 *     HalpInterruptIsRemappingRequired @ 0x1404E1048 (HalpInterruptIsRemappingRequired.c)
 */

__int64 __fastcall HalpInterruptQueryControllerInfo(unsigned int a1, _DWORD *a2, _DWORD *a3)
{
  __int64 v3; // r9
  int v4; // eax
  _DWORD *v5; // rdx
  _DWORD *v6; // r8

  *a3 = 0;
  if ( a1 >= 4 )
  {
    *a2 = 0;
    v4 = HalpInterruptModel();
    if ( v4 == 2 || v4 == 3 || v4 == 1 && ((*v5 = 1, qword_140FBB408 != v3) || HalpInterruptIsRemappingRequired()) )
      *v5 = 3;
    *v6 = 4;
  }
  else
  {
    LODWORD(v3) = -1073741789;
  }
  return (unsigned int)v3;
}
