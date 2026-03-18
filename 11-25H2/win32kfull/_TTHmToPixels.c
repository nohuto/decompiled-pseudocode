/*
 * XREFs of _TTHmToPixels @ 0x1401C1E58
 * Callers:
 *     ?xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@K@Z @ 0x1401C0364 (-xxxPointerInsideNCTargeting@@YAXPEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@.c)
 *     ?_TTAdjustContactSide@@YAXJPEAJ0J@Z @ 0x1401C1D74 (-_TTAdjustContactSide@@YAXJPEAJ0J@Z.c)
 *     TouchTargetingDownrank @ 0x1401C1FB8 (TouchTargetingDownrank.c)
 *     ?_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z @ 0x1402F322C (-_TTLimitDeepTargetingPoint@@YAXJJPEAJ@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall TTHmToPixels(int a1, int a2)
{
  unsigned int v2; // r8d
  __int64 v3; // rax

  v2 = 0x7FFFFFFF;
  v3 = 1000LL * a1 / a2;
  if ( (unsigned __int64)(v3 + 0x80000000LL) <= 0xFFFFFFFF )
    return (unsigned int)v3;
  return v2;
}
