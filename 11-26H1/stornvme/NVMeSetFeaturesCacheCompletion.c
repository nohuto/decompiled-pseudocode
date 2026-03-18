/*
 * XREFs of NVMeSetFeaturesCacheCompletion @ 0x140018FE0
 * Callers:
 *     <none>
 * Callees:
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 */

__int64 __fastcall NVMeSetFeaturesCacheCompletion(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // r8
  __int64 v4; // r9

  result = GetSrbExtension(a2);
  if ( *(_BYTE *)(v4 + 3) == 1 && !v3 )
    *(_BYTE *)(v4 + 3) = 4;
  *(_BYTE *)(result + 4225) |= 8u;
  return result;
}
