/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A900
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021AEA0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x14001E920 (GreDeleteFastMutex.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x140033268 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x140033288 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     rimProcessCompleteFrame @ 0x140183590 (rimProcessCompleteFrame.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x14019C34C (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x1401EF51C (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140210C00 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     FindRimDevByName @ 0x14021B4D0 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x14021B7E4 (IsRimObjectUnregistered.c)
 */

__int64 __fastcall CBaseInput::ivHandleTouchInputPacket(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v4; // rax
  unsigned int v6; // r15d
  void **i; // rdx
  __int64 v8; // r8
  __int64 v9; // rdx
  int v10; // r8d
  __int64 RimDevByName; // r14
  __int64 v13; // rdx
  __int64 v14; // rcx
  char *v15; // rbx
  __int64 v16; // rcx
  PVOID Buffer; // [rsp+58h] [rbp+38h] BYREF
  char v18; // [rsp+68h] [rbp+48h] BYREF

  v4 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL;
  Buffer = (PVOID)a2;
  *(_QWORD *)(a2 + 8) = a2 + v4;
  v6 = 1;
  for ( i = (void **)(a2 + 208); ; i = (void **)(v8 + 16) )
  {
    CIVDeserializer::Deserialize((CIVDeserializer *)&Buffer, i);
    if ( !*(_QWORD *)v9 )
      break;
    CIVDeserializer::Deserialize((CIVDeserializer *)&Buffer, (void **)(*(_QWORD *)v9 + 8LL));
  }
  CIVDeserializer::Deserialize((CIVDeserializer *)&Buffer, (void **)(a2 + 216));
  if ( *(_DWORD *)(a2 + 224) == v10 )
  {
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v18);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      RIMUnlockExclusive(a3 + 104);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v18);
      return 2LL;
    }
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
    RIMUnlockExclusive(a3 + 104);
    if ( RimDevByName )
    {
      Buffer = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(a2, RimDevByName, &Buffer);
      if ( Buffer )
      {
        RIMLockExclusive(a3 + 104);
        RIMLockExclusive(a3 + 760);
        rimProcessCompleteFrame(a3, RimDevByName, (int *)Buffer);
        RIMUnlockExclusive(a3 + 760);
        RIMUnlockExclusive(a3 + 104);
      }
    }
    else
    {
      v6 = 0;
    }
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v18);
  }
  else
  {
    Buffer = 0LL;
    rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, &Buffer);
    v15 = (char *)Buffer;
    if ( Buffer )
    {
      v16 = *(_QWORD *)(W32GetUserSessionState(v14, v13) + 16840);
      *(_QWORD *)(v16 + 1416) = v15;
      CRIMBase::SensorDoWorkAndWait(v16, 0xEu);
      GreDeleteFastMutex(v15);
    }
  }
  return v6;
}
