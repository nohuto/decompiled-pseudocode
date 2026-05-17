/*
 * XREFs of RtlSetExtendedFeaturesMask @ 0x180146400
 * Callers:
 *     <none>
 * Callees:
 *     RtlpRemoveArchDisallowedXStateFeatures @ 0x1800B4C00 (RtlpRemoveArchDisallowedXStateFeatures.c)
 *     RtlpLocateXStateChunk @ 0x1800CBBE0 (RtlpLocateXStateChunk.c)
 *     RtlLocateLegacyContext @ 0x1800D9F40 (RtlLocateLegacyContext.c)
 */

__int64 __fastcall RtlSetExtendedFeaturesMask(_DWORD *a1, __int64 a2)
{
  char *XStateChunk; // rbx
  _DWORD *v3; // rcx
  char *LegacyContext; // rax
  __int64 result; // rax
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v6 = a2;
  XStateChunk = RtlpLocateXStateChunk(a1);
  LegacyContext = RtlLocateLegacyContext(v3, 0LL);
  result = RtlpRemoveArchDisallowedXStateFeatures(*((_DWORD *)LegacyContext + 12), &v6);
  *(_QWORD *)XStateChunk = v6 & (MEMORY[0x7FFE0708] | MEMORY[0x7FFE03D8]) & 0xFFFFFFFFFFFFFFFCuLL;
  return result;
}
