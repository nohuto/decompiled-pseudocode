/*
 * XREFs of ?ProcessUpdateConfiguration@CInteractionConfigurationGroup@DirectComposition@@QEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A59E8
 * Callers:
 *     ?SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@PEBX_KPEA_N@Z @ 0x1401957D0 (-SetBufferProperty@CInteractionMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOM.c)
 * Callees:
 *     ?ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A5900 (-ProcessUpdateTouchpadConfiguration@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUD.c)
 *     ?ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDwmInteractionConfiguration@@W4Enum@InteractionProperty@@PEA_N@Z @ 0x1400A5974 (-ProcessUpdatePenConfigurationList@CInteractionConfigurationGroup@DirectComposition@@AEAAJPEBUDw.c)
 *     ?UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4Enum@InteractionProperty@@UContactRangeConfiguration@12@PEAV?$CStructDynamicArray@UContactRangeConfiguration@CInteractionConfigurationGroup@DirectComposition@@@@PEA_N@Z @ 0x1400A5AF4 (-UpdateContactCountConfigurationArray@CInteractionConfigurationGroup@DirectComposition@@AEAAJW4E.c)
 *     ?ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionProperty@@PEA_N@Z @ 0x1401499F4 (-ApplyConfigOperation@CInteractionConfigurationGroup@DirectComposition@@CAIIIW4Enum@InteractionP.c)
 */

__int64 __fastcall DirectComposition::CInteractionConfigurationGroup::ProcessUpdateConfiguration(
        _DWORD *a1,
        _DWORD *a2,
        int a3,
        _BYTE *a4)
{
  unsigned int v6; // ecx
  int v7; // eax
  int updated; // eax
  unsigned int v9; // ebx
  _BYTE *v11; // r9
  _BYTE *v12; // r9
  _DWORD v13[6]; // [rsp+30h] [rbp-18h] BYREF

  switch ( *a2 )
  {
    case 1:
      *a4 = 0;
      v6 = a2[2];
      if ( a2[1] > v6 )
      {
        return (unsigned int)-1073741811;
      }
      else
      {
        v13[0] = a2[1];
        v7 = a2[3];
        v13[1] = v6;
        v13[2] = v7;
        updated = DirectComposition::CInteractionConfigurationGroup::UpdateContactCountConfigurationArray(
                    v6,
                    a3,
                    (unsigned int)v13,
                    (int)a1 + 16,
                    (__int64)a4);
        if ( updated >= 0 && *a4 )
        {
          a1[3] |= 4u;
          a1[8] = 0;
        }
      }
      return (unsigned int)updated;
    case 2:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdateTouchpadConfiguration(
                             (__int64)a1,
                             a2,
                             a3,
                             a4);
    case 3:
      return (unsigned int)DirectComposition::CInteractionConfigurationGroup::ProcessUpdatePenConfigurationList(
                             (__int64)a1,
                             a2,
                             a3,
                             a4);
    case 4:
      v9 = 0;
      *a4 = 0;
      a1[21] = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                 (unsigned int)a1[21],
                 (unsigned int)a2[1]);
      if ( *v12 )
        a1[3] |= 1u;
      break;
    case 5:
      v9 = 0;
      *a4 = 0;
      a1[24] = DirectComposition::CInteractionConfigurationGroup::ApplyConfigOperation(
                 (unsigned int)a1[24],
                 (unsigned int)a2[1]);
      a1[22] = 1;
      a1[23] = -1;
      if ( *v11 )
        a1[3] |= 0x10u;
      break;
    default:
      return (unsigned int)-1073741811;
  }
  return v9;
}
