/*
 * XREFs of rimFreeSpecificDevFinal @ 0x1401BB4C0
 * Callers:
 *     RIMFreeSpecificDev @ 0x14009270C (RIMFreeSpecificDev.c)
 *     rimDoRimDevChangeAsyncWorkItem @ 0x140096618 (rimDoRimDevChangeAsyncWorkItem.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1401FD85C (RIMFreeSpecificDevOnCreateFailure.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x14005FB10 (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     rimDereferenceDev @ 0x14013217C (rimDereferenceDev.c)
 *     RIMRemoveHoldingFrame @ 0x140192634 (RIMRemoveHoldingFrame.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x1401B44F4 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

LONG_PTR __fastcall rimFreeSpecificDevFinal(__int64 a1, __int64 a2)
{
  _DWORD *v4; // rdi
  _QWORD *v5; // rdx
  int v6; // r8d
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 UserSessionState; // rax
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax

  v4 = (_DWORD *)(a2 + 168);
  if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() && (*v4 & 0x40000000) != 0 )
    MicrosoftTelemetryAssertTriggeredArgsKM((__int64)"IXPTelAssert", 0x20000, 809);
  v7 = (_QWORD *)(a2 + 88);
  v8 = *(_QWORD *)(a2 + 88);
  if ( v8 != a2 + 88 )
  {
    if ( *(_QWORD **)(v8 + 8) != v7 || (v5 = *(_QWORD **)(a2 + 96), (_QWORD *)*v5 != v7) )
      __fastfail(3u);
    *v5 = v8;
    *(_QWORD *)(v8 + 8) = v5;
    *(_QWORD *)(a2 + 96) = a2 + 88;
    *v7 = v7;
  }
  if ( (*v4 & 0x2000) != 0 )
  {
    UserSessionState = W32GetUserSessionState(v8, (_DWORD)v5, v6);
    RIMLockExclusive(UserSessionState + 56);
    *(_DWORD *)(a2 + 184) |= 4u;
    v13 = W32GetUserSessionState(v11, v10, v12);
    RIMUnlockExclusive(v13 + 56);
  }
  if ( *(_DWORD *)(a2 + 48) == 2 )
    RIMRemoveHoldingFrame(a1, a2);
  return rimDereferenceDev(a2);
}
