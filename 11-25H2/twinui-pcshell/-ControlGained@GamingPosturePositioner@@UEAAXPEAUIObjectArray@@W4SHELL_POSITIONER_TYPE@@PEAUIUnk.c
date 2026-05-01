/*
 * XREFs of ?ControlGained@GamingPosturePositioner@@UEAAXPEAUIObjectArray@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@PEAUIPresentationRequestedArgs@@@Z @ 0x1804E1FE0
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@$$V@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2@Z @ 0x180015BDC (--$Write@$$V@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESC.c)
 *     _lambda_c50edb546f97258990e484aed70b6f7b_::operator() @ 0x1804E1C44 (_lambda_c50edb546f97258990e484aed70b6f7b_--operator().c)
 *     ?OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z @ 0x1804E428C (-OnGamingPostureChanged@GamingPosturePositioner@@AEAAJH@Z.c)
 *     ?Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x1804E47FC (-Provider@GamingPosturePositionerTraceProvider@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall GamingPosturePositioner::ControlGained(__int64 a1, __int64 a2)
{
  const struct _tlgProvider_t *v3; // rax
  __int64 v4; // rcx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 result; // rax
  const char *v8; // r9
  unsigned int v9; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v10; // [rsp+24h] [rbp-24h] BYREF
  __int64 *v11[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  __int64 v13; // [rsp+58h] [rbp+10h] BYREF

  v13 = a2;
  v3 = GamingPosturePositionerTraceProvider::Provider();
  if ( *(_DWORD *)v3 > 4u )
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<>(
      (__int64)v3,
      byte_1807DCF16,
      0LL);
  v5 = IsGamingFullScreenExperienceActive(v4);
  try
  {
    v6 = 0;
    if ( v5 )
      GamingPosturePositioner::OnGamingPostureChanged((GamingPosturePositioner *)(a1 - 16), 1);
    v10 = 0;
    result = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v13 + 24LL))(v13, &v10);
    while ( 1 )
    {
      v9 = v6;
      if ( v6 >= v10 )
        break;
      v11[0] = &v13;
      v11[1] = (__int64 *)&v9;
      v11[2] = (__int64 *)(a1 - 16);
      result = lambda_c50edb546f97258990e484aed70b6f7b_::operator()(v11);
      v6 = v9 + 1;
    }
  }
  catch ( ... )
  {
    return wil::details::in1diag3::Log_CaughtException(
             retaddr,
             (void *)0x2B7,
             (int)"pcshell\\twinui\\shellpositioners\\lib\\gamingposturepositioner.cpp",
             v8);
  }
  return result;
}
