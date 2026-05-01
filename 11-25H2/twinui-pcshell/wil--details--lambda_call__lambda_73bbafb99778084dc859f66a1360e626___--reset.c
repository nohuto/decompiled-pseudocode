/*
 * XREFs of wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::reset @ 0x18037AF70
 * Callers:
 *     wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::_lambda_call__lambda_73bbafb99778084dc859f66a1360e626___ @ 0x1803783AC (wil--details--lambda_call__lambda_73bbafb99778084dc859f66a1360e626___--_lambda_call__lambda_73bb.c)
 *     ?OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180379CF0 (-OnViewShowing@CPeopleBarFlyoutExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?IgnoreCurrentThread@?$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x180017928 (-IgnoreCurrentThread@-$ActivityBase@VTaskbarLogging@@$00$0CAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflect.c)
 */

void __fastcall wil::details::lambda_call__lambda_73bbafb99778084dc859f66a1360e626___::reset(__int64 a1)
{
  if ( *(_BYTE *)(a1 + 8) )
  {
    *(_BYTE *)(a1 + 8) = 0;
    wil::ActivityBase<TaskbarLogging,1,35184372088832,5,16777216,_TlgReflectorTag_Param0IsProviderType>::IgnoreCurrentThread(*(_QWORD *)a1);
  }
}
