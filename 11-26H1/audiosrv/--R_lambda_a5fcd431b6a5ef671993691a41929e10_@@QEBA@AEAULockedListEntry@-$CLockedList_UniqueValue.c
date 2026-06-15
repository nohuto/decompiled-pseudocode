/*
 * XREFs of ??R_lambda_a5fcd431b6a5ef671993691a41929e10_@@QEBA@AEAULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@Z @ 0x1800D1E38
 * Callers:
 *     ??$remove_if@V?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@std@@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@std@@YA?AV?$_Vector_iterator@V?$_Vector_val@U?$_Simple_types@ULockedListEntry@?$CLockedList_UniqueValuesOnly@VCAudioSessionNotificationProcess@@$0A@@@@std@@@std@@@0@V10@V10@V_lambda_a5fcd431b6a5ef671993691a41929e10_@@@Z @ 0x1800D1AF4 (--$remove_if@V-$_Vector_iterator@V-$_Vector_val@U-$_Simple_types@ULockedListEntry@-$CLockedList_.c)
 * Callees:
 *     ??8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z @ 0x180073754 (--8@YA_NAEAVCAudioSessionNotificationProcess@@0@Z.c)
 */

bool __fastcall _lambda_a5fcd431b6a5ef671993691a41929e10_::operator()(__int64 a1, __int64 a2)
{
  if ( !operator==((__int64 *)a2, *(_QWORD **)a1) )
    return 0;
  **(_BYTE **)(a1 + 8) = 1;
  return (*(_DWORD *)(a2 + 8))-- == 1;
}
