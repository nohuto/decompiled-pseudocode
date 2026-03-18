/*
 * XREFs of ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_JPEA_N@Z @ 0x14019C940
 * Callers:
 *     <none>
 * Callees:
 *     ??$GetNewTValue@I@CManipulationMarshaler@DirectComposition@@IEAAIIIW4ManipulationMarshalerFlag@01@PEA_N@Z @ 0x14016B334 (--$GetNewTValue@I@CManipulationMarshaler@DirectComposition@@IEAAIIIW4ManipulationMarshalerFlag@0.c)
 *     ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMPOSITION_PROPERTY_ID@@_NPEA_N@Z @ 0x14016F834 (-SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@UDCOMP.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetIntegerProperty(
        _DWORD *a1,
        __int64 a2,
        int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v5; // r10d
  int v6; // eax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  int New; // eax
  __int64 v11; // rcx
  int v12; // edx

  v5 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1:
        if ( (unsigned int)a4 <= 2 )
        {
          New = DirectComposition::CManipulationMarshaler::GetNewTValue<unsigned int>((__int64)a1, a1[28], a4, a4, a5);
          *(_DWORD *)(v11 + 112) = New;
          return v5;
        }
        break;
      case 2:
        if ( (unsigned int)a4 <= 2 )
        {
          v8 = DirectComposition::CManipulationMarshaler::GetNewTValue<unsigned int>((__int64)a1, a1[29], a4, a4, a5);
          *(_DWORD *)(v9 + 116) = v8;
          return v5;
        }
        break;
      case 3:
        if ( (unsigned int)a4 <= 2 )
        {
          v6 = DirectComposition::CManipulationMarshaler::GetNewTValue<unsigned int>((__int64)a1, a1[30], a4, a4, a5);
          *(_DWORD *)(v7 + 120) = v6;
          return v5;
        }
        break;
      default:
        LOBYTE(a4) = (_DWORD)a4 != 0;
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetBoolProperty(
                               (__int64)a1,
                               a2,
                               a3,
                               a4,
                               (__int64)a5);
    }
    return (unsigned int)-1073741811;
  }
  v12 = a1[26];
  if ( v12 != (_DWORD)a4 )
  {
    v12 = a4;
    *a5 = 1;
    a1[4] |= 0x80u;
  }
  a1[26] = v12;
  return v5;
}
