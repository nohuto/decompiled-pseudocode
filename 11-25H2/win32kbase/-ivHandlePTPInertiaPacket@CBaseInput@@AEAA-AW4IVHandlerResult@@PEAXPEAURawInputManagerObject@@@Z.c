/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A620
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021AEA0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x140081F58 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1401A6050 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140210C00 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     FindRimDevByName @ 0x14021B4D0 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x14021B7E4 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 RimDevByName; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 UserSessionState; // rax
  __int64 v15; // rdx
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rdx
  char v20; // [rsp+48h] [rbp+10h] BYREF
  char v21; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = 1;
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v21);
  RIMLockExclusive(a3 + 104);
  v6 = 0LL;
  if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
  {
    RIMUnlockExclusive(a3 + 104);
    v5 = 2;
  }
  else
  {
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
    v8 = a3 + 104;
    v9 = RimDevByName;
    RIMUnlockExclusive(v8);
    if ( v9 )
    {
      v12 = *(_QWORD *)(v9 + 456);
      if ( v12 && *(_DWORD *)(v12 + 24) == 7 )
      {
        v13 = *(_QWORD *)(v9 + 32);
        if ( v13 )
          v6 = *(_QWORD *)(v13 + 72);
        UserSessionState = W32GetUserSessionState(v11, v10);
        LOBYTE(v15) = 1;
        v16 = *(_QWORD *)(UserSessionState + 16840);
        v17 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(v16 + 1424) = v6;
        *(_QWORD *)(v16 + 1432) = v17;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v20, v15);
        CRIMBase::SensorDoWorkAndWait(v16, 0xFu);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v20, v18);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v21);
  return v5;
}
