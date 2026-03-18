/*
 * XREFs of ?ConnectDisplayBroker@DispBrokerClient@@QEAAJXZ @ 0x140403CEC
 * Callers:
 *     ?ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ @ 0x1401C7154 (-ConnectSessionDisplayBroker@DXGSESSIONDATA@@QEAAJXZ.c)
 * Callees:
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 *     ?EnsureConnected@DispBrokerClient@@AEAAJXZ @ 0x140403D8C (-EnsureConnected@DispBrokerClient@@AEAAJXZ.c)
 */

__int64 __fastcall DispBrokerClient::ConnectDisplayBroker(DispBrokerClient *this)
{
  int v2; // eax
  __int64 v3; // rsi
  __int64 v5; // [rsp+20h] [rbp-38h]

  v2 = DispBrokerClient::EnsureConnected(this);
  v3 = v2;
  if ( v2 >= 0 )
    return 0LL;
  WdLogSingleEntry2(2LL, **(unsigned int **)this, v2);
  v5 = **(unsigned int **)this;
  WdLogGlobalForLineNumber = 359;
  DxgkLogInternalTriageEvent(
    0LL,
    0x40000,
    -1,
    (__int64)L"Failed to connect the display broker ALPC port for session 0x%I64x (Status = 0x%I64x).",
    v5,
    v3,
    0LL,
    0LL,
    0LL);
  return (unsigned int)v3;
}
