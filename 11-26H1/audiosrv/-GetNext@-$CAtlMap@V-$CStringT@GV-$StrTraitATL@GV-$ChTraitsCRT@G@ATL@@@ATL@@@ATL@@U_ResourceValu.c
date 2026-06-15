/*
 * XREFs of ?GetNext@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@QEAAPEAVCPair@12@AEAPEAU__POSITION@@@Z @ 0x18015A198
 * Callers:
 *     ?CopyResourceIDMap@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@0@Z @ 0x1801598AC (-CopyResourceIDMap@CConstraintModel@@AEAAJPEAV-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraits.c)
 *     ?VerifyNoRepeatedResources@CConstraintModel@@AEAAJPEAV?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@U_ResourceValue@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@U_ResourceValue@@@2@@ATL@@0@Z @ 0x18015B91C (-VerifyNoRepeatedResources@CConstraintModel@@AEAAJPEAV-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,_ResourceValue,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<_ResourceValue>>::GetNext(
        __int64 a1,
        __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // r8
  __int64 v5; // rax
  __int64 v6; // rdx

  v2 = *a2;
  v3 = 0LL;
  if ( *a2 )
  {
    v5 = *(_QWORD *)(v2 + 24);
    if ( !v5 )
    {
      LODWORD(v6) = *(_DWORD *)(v2 + 32) % *(_DWORD *)(a1 + 16);
      do
      {
        v6 = (unsigned int)(v6 + 1);
        v5 = 0LL;
        if ( (unsigned int)v6 >= *(_DWORD *)(a1 + 16) )
          break;
        v5 = *(_QWORD *)(*(_QWORD *)a1 + 8 * v6);
      }
      while ( !v5 );
    }
    v3 = v5;
  }
  *a2 = v3;
  return v2;
}
