/*
 * XREFs of wil::details::lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___::_lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___ @ 0x18002A764
 * Callers:
 *     _CApplicationManager::OnStreamStarted_::_1_::dtor$0 @ 0x18004C430 (_CApplicationManager--OnStreamStarted_--_1_--dtor$0.c)
 * Callees:
 *     McTemplateU0zqq_EventWriteTransfer @ 0x180022700 (McTemplateU0zqq_EventWriteTransfer.c)
 */

__int64 *__fastcall wil::details::lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___::_lambda_call__lambda_74057df9902ed01acca6389457a5e2ac___(
        __int64 **a1)
{
  __int64 *result; // rax
  __int64 v2; // r9

  if ( *((_BYTE *)a1 + 24) )
  {
    *((_BYTE *)a1 + 24) = 0;
    result = *a1;
    v2 = **a1;
    if ( *(_DWORD *)(v2 + 424) )
    {
      if ( Microsoft_Windows_AudioEnableBits < 0 )
        return (__int64 *)McTemplateU0zqq_EventWriteTransfer(
                            (__int64)a1[2],
                            (__int64)&EVT_PBM_STREAM_STARTED,
                            *(const wchar_t **)(*a1[1] + 24),
                            *(_DWORD *)(v2 + 160),
                            *(_DWORD *)a1[2]);
    }
  }
  return result;
}
