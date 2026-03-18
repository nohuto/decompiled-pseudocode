/*
 * XREFs of ?IsClientHandleValid@DispBrokerClient@@AEAA_NXZ @ 0x1403F6CC0
 * Callers:
 *     _lambda_ff68d9f4220b437b53c0eb7366e88ea5_::operator() @ 0x1401C6F7C (_lambda_ff68d9f4220b437b53c0eb7366e88ea5_--operator().c)
 *     ?ReferencePort@DispBrokerClient@@AEAA?AVDispBrokerClientReference@@XZ @ 0x1403F6C4C (-ReferencePort@DispBrokerClient@@AEAA-AVDispBrokerClientReference@@XZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

char __fastcall DispBrokerClient::IsClientHandleValid(DispBrokerClient *this)
{
  __int64 v2; // rcx
  int v3; // eax
  __int64 v4; // rbx
  __int64 v6; // [rsp+20h] [rbp-48h]
  __int128 v7; // [rsp+50h] [rbp-18h] BYREF
  int v8; // [rsp+70h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  if ( !v2 )
    return 0;
  v8 = 0;
  v7 = 0LL;
  v3 = ZwAlpcQueryInformation(*(_QWORD *)(v2 + 8), 0LL, &v7, 16LL, &v8);
  if ( v3 < 0 || v8 != 16 )
  {
    v4 = v3;
    WdLogSingleEntry2(2LL, **(unsigned int **)this, v3);
    v6 = **(unsigned int **)this;
    WdLogGlobalForLineNumber = 149;
    DxgkLogInternalTriageEvent(
      0LL,
      0x40000,
      -1,
      (__int64)L"Failed to validate the ALCP port of display broker in session 0x%I64x (Status = 0x%I64x)",
      v6,
      v4,
      0LL,
      0LL,
      0LL);
    return 0;
  }
  return 1;
}
