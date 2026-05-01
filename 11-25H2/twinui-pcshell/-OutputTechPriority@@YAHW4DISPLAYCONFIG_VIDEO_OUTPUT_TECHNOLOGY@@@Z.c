/*
 * XREFs of ?OutputTechPriority@@YAHW4DISPLAYCONFIG_VIDEO_OUTPUT_TECHNOLOGY@@@Z @ 0x18064F1F0
 * Callers:
 *     ?TargetInfoSort@@YAHPEBU_TargetInfo@@0_J@Z @ 0x18064F2D0 (-TargetInfoSort@@YAHPEBU_TargetInfo@@0_J@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall OutputTechPriority(unsigned int a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx
  __int64 result; // rax

  v1 = a1;
  LODWORD(v1) = a1 & 0x7FFFFFFF;
  if ( v1 >= 0xF )
    v2 = 11;
  else
    v2 = *(_DWORD *)&asc_18079A8A0[4 * v1];
  result = v2 + 20;
  if ( (a1 & 0x80000000) != 0 )
    return v2;
  return result;
}
