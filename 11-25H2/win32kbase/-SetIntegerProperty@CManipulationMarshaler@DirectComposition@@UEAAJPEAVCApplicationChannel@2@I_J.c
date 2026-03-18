/*
 * XREFs of ?SetIntegerProperty@CManipulationMarshaler@DirectComposition@@UEAAJPEAVCApplicationChannel@2@I_JPEA_N@Z @ 0x140115250
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA_N@Z @ 0x14011531C (-SetBoolProperty@CManipulationMarshaler@DirectComposition@@QEAAJPEAVCApplicationChannel@2@I_NPEA.c)
 *     ??$GetNewTValue@I@CManipulationMarshaler@DirectComposition@@IEAAIIIW4ManipulationMarshalerFlag@01@PEA_N@Z @ 0x140134538 (--$GetNewTValue@I@CManipulationMarshaler@DirectComposition@@IEAAIIIW4ManipulationMarshalerFlag@0.c)
 */

__int64 __fastcall DirectComposition::CManipulationMarshaler::SetIntegerProperty(
        DirectComposition::CManipulationMarshaler *this,
        struct DirectComposition::CApplicationChannel *a2,
        unsigned int a3,
        unsigned int a4,
        bool *a5)
{
  unsigned int v5; // r10d
  unsigned int v7; // edx
  int v8; // eax
  __int64 v9; // rcx
  int v10; // eax
  __int64 v11; // rcx
  int New; // eax
  __int64 v13; // rcx

  v5 = 0;
  if ( a3 )
  {
    switch ( a3 )
    {
      case 1u:
        if ( a4 <= 2 )
        {
          New = DirectComposition::CManipulationMarshaler::GetNewTValue<unsigned int>(
                  (_DWORD)this,
                  *((_DWORD *)this + 28),
                  a4,
                  a4,
                  (__int64)a5);
          *(_DWORD *)(v13 + 112) = New;
          return v5;
        }
        break;
      case 2u:
        if ( a4 <= 2 )
        {
          v8 = DirectComposition::CManipulationMarshaler::GetNewTValue<unsigned int>(
                 (_DWORD)this,
                 *((_DWORD *)this + 29),
                 a4,
                 a4,
                 (__int64)a5);
          *(_DWORD *)(v9 + 116) = v8;
          return v5;
        }
        break;
      case 3u:
        if ( a4 <= 2 )
        {
          v10 = DirectComposition::CManipulationMarshaler::GetNewTValue<unsigned int>(
                  (_DWORD)this,
                  *((_DWORD *)this + 30),
                  a4,
                  a4,
                  (__int64)a5);
          *(_DWORD *)(v11 + 120) = v10;
          return v5;
        }
        break;
      default:
        return (unsigned int)DirectComposition::CManipulationMarshaler::SetBoolProperty(this, a2, a3, a4 != 0, a5);
    }
    return (unsigned int)-1073741811;
  }
  v7 = *((_DWORD *)this + 26);
  if ( v7 != a4 )
  {
    v7 = a4;
    *a5 = 1;
    *((_DWORD *)this + 4) |= 0x40u;
  }
  *((_DWORD *)this + 26) = v7;
  return v5;
}
