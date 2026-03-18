/*
 * XREFs of rimDoRimDevChangeAsyncWorkItem @ 0x140096618
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401288B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14007C0AC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x140095794 (rimOnPnpRemoveCompleteInUserCrit.c)
 *     rimDoRimDevChange @ 0x140096D74 (rimDoRimDevChange.c)
 *     RIMStartDeviceSpecificRead @ 0x1400996FC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140099DD0 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimFreeSpecificDevFinal @ 0x1401BB4C0 (rimFreeSpecificDevFinal.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1401FD85C (RIMFreeSpecificDevOnCreateFailure.c)
 */

void __fastcall rimDoRimDevChangeAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  struct RawInputManagerObject *v3; // rsi
  __int64 v5; // rdx
  bool v6; // cf
  int v7; // eax
  __int64 v8; // rdi
  int v9; // eax
  int v10; // eax
  int PointerDeviceInfo; // eax
  int v12; // edx
  int v13; // r8d
  bool v14; // bp
  bool v15; // r14
  __int64 UserSessionState; // rax
  int v17; // r8d
  int v18; // edx

  v1 = *(_QWORD *)(a1 + 56);
  v2 = 1;
  v3 = *(struct RawInputManagerObject **)(a1 + 24);
  v5 = v1 + 72;
  v6 = v1 != 0;
  v7 = *(_DWORD *)(a1 + 96);
  v8 = v5 & -(__int64)v6;
  if ( v7 == 1 )
  {
    if ( (*(_DWORD *)((v5 & -(__int64)v6) + 0x50) & 1) != 0 )
    {
      PointerDeviceInfo = rimInUserCritCreatePointerDeviceInfo(a1, v8);
      *(_DWORD *)(v8 + 80) &= ~1u;
      if ( PointerDeviceInfo < 0 )
      {
        v14 = WPP_GLOBAL_Control != (CTouchProcessor *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v15 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v14 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState((_DWORD)WPP_GLOBAL_Control, v12, v13);
          LOBYTE(v17) = v15;
          LOBYTE(v18) = v14;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v18,
            v17,
            *(_QWORD *)(UserSessionState + 19368),
            2,
            1,
            16,
            (__int64)&WPP_8f2753a93c4e3e90acbb2f7643baf67d_Traceguids);
        }
        RIMFreeSpecificDevOnCreateFailure(v3, v8);
        return;
      }
    }
    goto LABEL_3;
  }
  if ( v7 != 3 || (v2 = rimOnPnpRemoveCompleteInUserCrit(*(struct RawInputManagerObject **)(a1 + 24), v8)) != 0 )
LABEL_3:
    rimDoRimDevChange(v3, v8, *(unsigned int *)(a1 + 96));
  v9 = *(_DWORD *)(a1 + 96);
  switch ( v9 )
  {
    case 3:
      if ( v2 )
        RIMFreeDev(v3, (struct RIMDEV *)v8);
      break;
    case 2:
      RIMLockExclusive((__int64)v3 + 760);
      v10 = *(_DWORD *)(v8 + 80);
      if ( (v10 & 2) != 0 )
      {
        *(_DWORD *)(v8 + 80) = v10 & 0xFFFFFFFD;
        RIMStartDeviceSpecificRead(v3, v8);
      }
      RIMUnlockExclusive((__int64)v3 + 760);
      break;
    case 4:
      rimFreeSpecificDevFinal(v3, v8);
      break;
  }
}
