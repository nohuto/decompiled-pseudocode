/*
 * XREFs of GetBaseObject @ 0x140037400
 * Callers:
 *     DerefOf @ 0x140011F60 (DerefOf.c)
 *     AMLIFindNameSpaceObject @ 0x14004B3A4 (AMLIFindNameSpaceObject.c)
 *     AMLIEvalPackageElement @ 0x14006C2F0 (AMLIEvalPackageElement.c)
 *     DebugRunMethod @ 0x14006EF70 (DebugRunMethod.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBaseObject(__int64 a1)
{
  while ( *(_WORD *)(a1 + 66) == 128 )
    a1 = *(_QWORD *)(a1 + 80);
  if ( (gdwfAMLI & 4) != 0 )
    _InterlockedIncrement((volatile signed __int32 *)(a1 + 112));
  return a1;
}
