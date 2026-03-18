/*
 * XREFs of ?SupportsAnyPointerType@CInteractionProcessor@@QEBAHXZ @ 0x180178DAC
 * Callers:
 *     ?IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ @ 0x1800A7A54 (-IsStrictlyHoverPointerSource@CInteraction@@QEBA_NXZ.c)
 * Callees:
 *     ?SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z @ 0x1801797F0 (-SupportsPointerType@CInteractionProcessor@@QEBAHW4InputType@@W4SupportedTypeOption@@@Z.c)
 */

__int64 __fastcall CInteractionProcessor::SupportsAnyPointerType(CInteractionProcessor *this)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (unsigned int)CInteractionProcessor::SupportsPointerType(this, 2LL)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 4LL)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 3LL)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 5LL)
    || (unsigned int)CInteractionProcessor::SupportsPointerType(this, 6LL) )
  {
    return 1;
  }
  return v2;
}
