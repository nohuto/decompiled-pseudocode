/*
 * XREFs of wil::details::lambda_call__lambda_7c50886b03c86b56a6efa08729fad73e___::_lambda_call__lambda_7c50886b03c86b56a6efa08729fad73e___ @ 0x180338164
 * Callers:
 *     _winrt::Windows::Internal::GamingExperiences::Posture::implementation::GamingPostureSystemDialog::ShowAsync$_ResumeCoro$1_::_1_::dtor$1 @ 0x1806E3307 (_winrt--Windows--Internal--GamingExperiences--Posture--implementation--GamingPostur_ea_1806E3307.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall wil::details::lambda_call__lambda_7c50886b03c86b56a6efa08729fad73e___::_lambda_call__lambda_7c50886b03c86b56a6efa08729fad73e___(
        __int64 *a1)
{
  __int64 result; // rax

  if ( *((_BYTE *)a1 + 8) )
  {
    result = *a1;
    *((_BYTE *)a1 + 8) = 0;
    *(_BYTE *)(result + 50) = 0;
  }
  return result;
}
