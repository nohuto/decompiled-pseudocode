/*
 * XREFs of rimDoRimDevChangeAsyncWorkItem @ 0x14002B53C
 * Callers:
 *     RIMOnAsyncWorkItemNotification @ 0x1401998B4 (RIMOnAsyncWorkItemNotification.c)
 * Callees:
 *     rimOnPnpRemoveCompleteInUserCrit @ 0x14002B6EC (rimOnPnpRemoveCompleteInUserCrit.c)
 *     rimInUserCritCreatePointerDeviceInfo @ 0x14002C2BC (rimInUserCritCreatePointerDeviceInfo.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     rimDoRimDevChange @ 0x140033D40 (rimDoRimDevChange.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     RIMStartDeviceSpecificRead @ 0x140033FDC (RIMStartDeviceSpecificRead.c)
 *     WPP_RECORDER_AND_TRACE_SF_ @ 0x140036610 (WPP_RECORDER_AND_TRACE_SF_.c)
 *     rimFreeSpecificDevFinal @ 0x14017E314 (rimFreeSpecificDevFinal.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 *     RIMFreeSpecificDevOnCreateFailure @ 0x1401D5400 (RIMFreeSpecificDevOnCreateFailure.c)
 */

__int64 __fastcall rimDoRimDevChangeAsyncWorkItem(__int64 a1)
{
  __int64 v1; // rax
  int v2; // ebx
  struct RawInputManagerObject *v3; // rsi
  __int64 v5; // rdx
  bool v6; // cf
  int v7; // eax
  __int64 v8; // rdi
  __int64 result; // rax
  __int64 v10; // rdx
  __int64 v11; // r8
  int v12; // eax
  int PointerDeviceInfo; // eax
  __int64 v14; // rdx
  bool v15; // bp
  bool v16; // r14
  __int64 UserSessionState; // rax
  int v18; // r8d
  int v19; // edx

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
        v15 = WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 11) & 1) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 41) >= 2u;
        v16 = WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED;
        if ( v15 || WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          UserSessionState = W32GetUserSessionState(WPP_GLOBAL_Control, v14);
          LOBYTE(v18) = v16;
          LOBYTE(v19) = v15;
          WPP_RECORDER_AND_TRACE_SF_(
            *((_QWORD *)WPP_GLOBAL_Control + 3),
            v19,
            v18,
            *(_QWORD *)(UserSessionState + 19336),
            2,
            1,
            16,
            (__int64)&WPP_68930b79bb6d3bf986a646580dbfeb5c_Traceguids);
        }
        return RIMFreeSpecificDevOnCreateFailure(v3, v8);
      }
    }
    goto LABEL_3;
  }
  if ( v7 != 3 || (v2 = rimOnPnpRemoveCompleteInUserCrit(*(_QWORD *)(a1 + 24), v8)) != 0 )
LABEL_3:
    rimDoRimDevChange(v3, v8, *(unsigned int *)(a1 + 96));
  result = *(unsigned int *)(a1 + 96);
  switch ( (_DWORD)result )
  {
    case 3:
      if ( v2 )
        return RIMFreeDev(v3, (struct RIMDEV *)v8);
      break;
    case 2:
      RIMLockExclusive((char *)v3 + 760);
      v12 = *(_DWORD *)(v8 + 80);
      if ( (v12 & 2) != 0 )
      {
        *(_DWORD *)(v8 + 80) = v12 & 0xFFFFFFFD;
        RIMStartDeviceSpecificRead(v3, v8);
      }
      return RIMUnlockExclusive((char *)v3 + 760, v10, v11);
    case 4:
      return rimFreeSpecificDevFinal(v3, v8);
  }
  return result;
}
