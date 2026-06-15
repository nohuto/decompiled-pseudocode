/*
 * XREFs of ?EndAppSvcCall@AtmosCheck@@AEAAJXZ @ 0x180083F38
 * Callers:
 *     wil::details::lambda_call__lambda_86871cef99ccda234418e908d473a535___::_lambda_call__lambda_86871cef99ccda234418e908d473a535___ @ 0x180154B30 (wil--details--lambda_call__lambda_86871cef99ccda234418e908d473a535___--_lambda_call__lambda_8687.c)
 *     wil::details::lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___::_lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___ @ 0x180154B70 (wil--details--lambda_call__lambda_f7a716bfe224096f553bb41568304cf0___--_lambda_call__lambda_f7a7.c)
 * Callees:
 *     ??$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z @ 0x18005C018 (--$_Copy_memmove@PEAU_GUID@@PEAU1@@std@@YAPEAU_GUID@@PEAU1@00@Z.c)
 */

__int64 __fastcall AtmosCheck::EndAppSvcCall(AtmosCheck *this)
{
  DWORD CurrentThreadId; // edi
  _DWORD *v3; // rdx
  _DWORD *i; // r8
  _DWORD *j; // rax
  _DWORD *v6; // rcx

  CurrentThreadId = GetCurrentThreadId();
  CoDisableCallCancellation(0LL);
  v3 = (_DWORD *)*((_QWORD *)this + 92);
  for ( i = (_DWORD *)*((_QWORD *)this + 91); i != v3 && CurrentThreadId != *i; ++i )
    ;
  if ( i != v3 )
  {
    for ( j = i + 1; j != v3; ++j )
    {
      if ( CurrentThreadId != *j )
        *i++ = *j;
    }
  }
  v6 = (_DWORD *)*((_QWORD *)this + 92);
  if ( i != v6 )
    *((_QWORD *)this + 92) = std::_Copy_memmove<_GUID *,_GUID *>(v6, *((_QWORD *)this + 92), i);
  return 0LL;
}
