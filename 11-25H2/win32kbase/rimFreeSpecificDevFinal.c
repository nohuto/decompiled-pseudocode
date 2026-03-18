/*
 * XREFs of rimFreeSpecificDevFinal @ 0x14017E314
 * Callers:
 *     rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMFreeSpecificDev @ 0x1401D5330 (RIMFreeSpecificDev.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1401D5400 (RIMFreeSpecificDevOnCreateFailure.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     rimDereferenceDev @ 0x1401382E4 (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x1401562A4 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019E99C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x1401A70D8 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 */

LONG_PTR __fastcall rimFreeSpecificDevFinal(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rdx
  _QWORD *v5; // rax
  __int64 v6; // rcx
  __int64 UserSessionState; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rax

  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline()
    && (*(_DWORD *)(a2 + 168) & 0x40000000) != 0 )
  {
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000LL, 812LL);
  }
  v5 = (_QWORD *)(a2 + 88);
  v6 = *(_QWORD *)(a2 + 88);
  if ( v6 != a2 + 88 )
  {
    if ( *(_QWORD **)(v6 + 8) != v5 || (v4 = *(_QWORD **)(a2 + 96), (_QWORD *)*v4 != v5) )
      __fastfail(3u);
    *v4 = v6;
    *(_QWORD *)(v6 + 8) = v4;
    *(_QWORD *)(a2 + 96) = a2 + 88;
    *v5 = v5;
  }
  if ( (*(_DWORD *)(a2 + 168) & 0x2000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v6, v4);
    RIMLockExclusive(UserSessionState + 56);
    *(_DWORD *)(a2 + 184) |= 4u;
    v10 = W32GetUserSessionState(v9, v8);
    RIMUnlockExclusive(v10 + 56);
  }
  if ( *(_DWORD *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
