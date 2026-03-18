/*
 * XREFs of ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A5900
 * Callers:
 *     ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A59E8 (-ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmIntera.c)
 * Callees:
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1400A5AF4 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchpadConfiguration(
        __int64 a1,
        _DWORD *a2,
        int a3,
        _BYTE *a4)
{
  unsigned int v6; // ecx
  int v7; // eax
  __int64 result; // rax
  _DWORD v9[6]; // [rsp+30h] [rbp-18h] BYREF

  *a4 = 0;
  v6 = a2[2];
  if ( a2[1] > v6 )
    return 3221225485LL;
  v9[0] = a2[1];
  v7 = a2[3];
  v9[1] = v6;
  v9[2] = v7;
  result = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
             v6,
             a3,
             (unsigned int)v9,
             (int)a1 + 40,
             (__int64)a4);
  if ( (int)result >= 0 )
  {
    if ( *a4 )
    {
      *(_DWORD *)(a1 + 12) |= 8u;
      *(_DWORD *)(a1 + 56) = 0;
    }
  }
  return result;
}
