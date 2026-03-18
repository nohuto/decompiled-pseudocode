/*
 * XREFs of CitSetInfo @ 0x14007D270
 * Callers:
 *     NtUserCitSetInfo @ 0x1400FEE90 (NtUserCitSetInfo.c)
 * Callees:
 *     ?CitIsEnabled@@YAEXZ @ 0x14007D3EC (-CitIsEnabled@@YAEXZ.c)
 *     ?CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D4BC (-CitpSetCompositionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007D854 (-CitpSetOtherInputInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007E468 (-CitpSetAudioInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14007EE6C (-CitpSetViewEngagementInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 *     ?CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z @ 0x14019BCF0 (-CitpSetSpeechRecognitionInfo@@YAJPEAT_CIT_SI_INFOFLAGS@@PEAT_CIT_SI_INFO@@@Z.c)
 */

__int64 __fastcall CitSetInfo(__int64 a1, __int64 a2)
{
  __int16 v2; // di
  unsigned __int16 v3; // bx
  union _CIT_SI_INFO *v4; // rdx
  __int64 result; // rax
  __int64 v6; // [rsp+30h] [rbp+8h] BYREF
  __int64 v7; // [rsp+38h] [rbp+10h] BYREF

  v7 = a2;
  v6 = a1;
  v2 = a2;
  v3 = a1;
  if ( !CitIsEnabled() )
    return -1073741641LL;
  if ( v3 == 2LL )
  {
    LODWORD(result) = CitpSetCompositionInfo((union _CIT_SI_INFOFLAGS *)&v6, (union _CIT_SI_INFO *)&v7);
    return (int)result;
  }
  if ( (unsigned __int64)v3 - 3 <= 1 )
  {
    LODWORD(result) = CitpSetAudioInfo((union _CIT_SI_INFOFLAGS *)&v6, v4);
    return (int)result;
  }
  if ( v3 == 5LL )
  {
    LODWORD(result) = CitpSetViewEngagementInfo((union _CIT_SI_INFOFLAGS *)5, (union _CIT_SI_INFO *)&v7);
    return (int)result;
  }
  if ( v3 == 1LL )
  {
    if ( v2 == 64 )
      LODWORD(result) = CitpSetSpeechRecognitionInfo((union _CIT_SI_INFOFLAGS *)&v6, (union _CIT_SI_INFO *)&v7);
    else
      LODWORD(result) = CitpSetOtherInputInfo((union _CIT_SI_INFOFLAGS *)1, (union _CIT_SI_INFO *)&v7);
    return (int)result;
  }
  return -1073741821LL;
}
