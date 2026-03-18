/*
 * XREFs of ?ivHandlePTPInertiaPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EF90
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1400E937C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ??0LeaveEnterCrit@@QEAA@_N@Z @ 0x1400EA650 (--0LeaveEnterCrit@@QEAA@_N@Z.c)
 *     ??1LeaveEnterCrit@@QEAA@XZ @ 0x1400EAAF4 (--1LeaveEnterCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1401C50C4 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1401C5F50 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     FindRimDevByName @ 0x14021F9A4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x14021FBF4 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandlePTPInertiaPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 RimDevByName; // rax
  __int64 v8; // rcx
  __int64 v9; // rbx
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 UserSessionState; // rax
  __int64 v16; // rdx
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // r8
  __int64 v20; // r9
  int v21; // edx
  int v22; // r8d
  char v24; // [rsp+48h] [rbp+10h] BYREF
  char v25; // [rsp+58h] [rbp+20h] BYREF

  *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  v5 = 1;
  ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v25);
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
      v13 = *(_QWORD *)(v9 + 456);
      if ( v13 && *(_DWORD *)(v13 + 24) == 7 )
      {
        v14 = *(_QWORD *)(v9 + 32);
        if ( v14 )
          v6 = *(_QWORD *)(v14 + 72);
        UserSessionState = W32GetUserSessionState(v11, v10, v12);
        LOBYTE(v16) = 1;
        v17 = *(_QWORD *)(UserSessionState + 16832);
        v18 = *(_QWORD *)(a2 + 16);
        *(_QWORD *)(v17 + 1416) = v6;
        *(_QWORD *)(v17 + 1424) = v18;
        LeaveEnterCrit::LeaveEnterCrit((LeaveEnterCrit *)&v24, v16, v19, v20);
        CRIMBase::SensorDoWorkAndWait(v17, 0xFu);
        LeaveEnterCrit::~LeaveEnterCrit((LeaveEnterCrit *)&v24, v21, v22);
      }
    }
    else
    {
      v5 = 0;
    }
  }
  ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v25);
  return v5;
}
