/*
 * XREFs of RtlSetSecurityDescriptorRMControl @ 0x180108020
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int16 __fastcall RtlSetSecurityDescriptorRMControl(__int64 a1, char *a2)
{
  __int16 v2; // ax
  char v3; // r8
  __int16 result; // ax

  v2 = *(_WORD *)(a1 + 2);
  v3 = 0;
  if ( a2 )
  {
    result = v2 | 0x4000;
    *(_WORD *)(a1 + 2) = result;
    v3 = *a2;
  }
  else
  {
    result = v2 & 0xBFFF;
    *(_WORD *)(a1 + 2) = result;
  }
  *(_BYTE *)(a1 + 1) = v3;
  return result;
}
