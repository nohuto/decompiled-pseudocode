/*
 * XREFs of ?ivHandleTouchInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021F270
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     rimProcessCompleteFrame @ 0x140074484 (rimProcessCompleteFrame.c)
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x1400E937C (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1401B6458 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     ??0ApiSetEditionCrit@@QEAA@H@Z @ 0x1401C50C4 (--0ApiSetEditionCrit@@QEAA@H@Z.c)
 *     ??1ApiSetEditionCrit@@QEAA@XZ @ 0x1401C5F50 (--1ApiSetEditionCrit@@QEAA@XZ.c)
 *     rimGetCompleteFrameFromIVCompleteFrame @ 0x14020D8E4 (rimGetCompleteFrameFromIVCompleteFrame.c)
 *     FindRimDevByName @ 0x14021F9A4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x14021FBF4 (IsRimObjectUnregistered.c)
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
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  char *v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  PVOID Buffer; // [rsp+58h] [rbp+38h] BYREF
  char v22; // [rsp+68h] [rbp+48h] BYREF

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
    ApiSetEditionCrit::ApiSetEditionCrit((ApiSetEditionCrit *)&v22);
    RIMLockExclusive(a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      RIMUnlockExclusive(a3 + 104);
      ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v22);
      return 2LL;
    }
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
    RIMUnlockExclusive(a3 + 104);
    if ( RimDevByName )
    {
      Buffer = 0LL;
      rimGetCompleteFrameFromIVCompleteFrame(a2, RimDevByName, (__int64 *)&Buffer);
      if ( Buffer )
      {
        RIMLockExclusive(a3 + 104);
        RIMLockExclusive(a3 + 760);
        rimProcessCompleteFrame(a3, RimDevByName, (__int64)Buffer);
        RIMUnlockExclusive(a3 + 760);
        RIMUnlockExclusive(a3 + 104);
      }
    }
    else
    {
      v6 = 0;
    }
    ApiSetEditionCrit::~ApiSetEditionCrit((ApiSetEditionCrit *)&v22);
  }
  else
  {
    Buffer = 0LL;
    rimGetCompleteFrameFromIVCompleteFrame(a2, 0LL, (__int64 *)&Buffer);
    v16 = (char *)Buffer;
    if ( Buffer )
    {
      v17 = *(_QWORD *)(W32GetUserSessionState(v14, v13, v15) + 16832);
      *(_QWORD *)(v17 + 1408) = v16;
      CRIMBase::SensorDoWorkAndWait(v17, 0xEu);
      GreDeleteFastMutex(v16, v18, v19, v20);
    }
  }
  return v6;
}
