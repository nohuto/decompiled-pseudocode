/*
 * XREFs of ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x14010A2A8
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400681D4 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1400682F0 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
        int a1,
        unsigned int a2,
        int a3,
        _BYTE *a4)
{
  __int64 result; // rax

  if ( a3 == 8 )
    goto LABEL_6;
  if ( a3 != 3 )
  {
    if ( a3 != 1 )
    {
      a2 = a1 & ~a2;
      goto LABEL_5;
    }
LABEL_6:
    a2 |= a1;
  }
LABEL_5:
  result = a2;
  *a4 |= a2 != a1;
  return result;
}
