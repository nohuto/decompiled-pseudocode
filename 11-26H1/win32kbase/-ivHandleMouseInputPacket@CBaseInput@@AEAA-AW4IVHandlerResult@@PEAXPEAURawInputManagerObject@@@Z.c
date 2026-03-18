/*
 * XREFs of ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021EDE0
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x14003D530 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14003D800 (EnterSharedCrit.c)
 *     RIMUnlockExclusive @ 0x14005A690 (RIMUnlockExclusive.c)
 *     RIMLockExclusive @ 0x14005A6D0 (RIMLockExclusive.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x1400D0BF0 (_anonymous_namespace_--GetMouseProcessor.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1401B6458 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x14021E21C (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x14021E300 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     FindRimDevByName @ 0x14021F9A4 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x14021FBF4 (IsRimObjectUnregistered.c)
 *     ApiSetTransformPointForIvSpatialInput @ 0x140228348 (ApiSetTransformPointForIvSpatialInput.c)
 */

__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, struct RawInputManagerObject *a3)
{
  int v3; // eax
  unsigned int v6; // esi
  __int64 v7; // r8
  __int64 v8; // r9
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  __int64 v14; // r14
  __int64 v15; // rbp
  int v17; // edx
  int v18; // ecx
  int v19; // r8d
  __int64 MouseProcessor; // rax
  __int64 v21; // rbx
  _QWORD *v22; // rbp
  int v23; // ebx
  __int64 RimDevByName; // rax
  __int64 v25; // [rsp+58h] [rbp+10h] BYREF
  __int64 v26; // [rsp+68h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 16);
  v25 = a2;
  v6 = 1;
  if ( (v3 & 4) != 0 )
    *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v25, (void **)(a2 + 24));
  EnterSharedCrit(1LL, 1LL, v7, v8);
  v13 = 0LL;
  while ( (unsigned int)v13 < *(_DWORD *)(a2 + 32) )
  {
    v14 = *(_QWORD *)(a2 + 24);
    v15 = 6 * v13;
    v26 = *(_QWORD *)(v14 + 48 * v13 + 20);
    v25 = 0LL;
    if ( !(unsigned int)ApiSetTransformPointForIvSpatialInput(*(_QWORD *)(v14 + 48 * v13 + 32), v26, &v25) )
    {
      UserSessionSwitchLeaveCritWithNonPaged(v10, v9, v11, v12);
      return 0LL;
    }
    v13 = (unsigned int)(v13 + 1);
    *(_QWORD *)(v14 + 8 * v15 + 20) = v25;
  }
  UserSessionSwitchLeaveCritWithNonPaged(v10, v9, v11, v12);
  if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
  {
    v25 = *(_QWORD *)(a2 + 36);
    MouseProcessor = anonymous_namespace_::GetMouseProcessor(v18, v17, v19);
    if ( MouseProcessor )
    {
      v21 = MouseProcessor + 4064;
      W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(MouseProcessor + 4064));
      *(_QWORD *)(v21 + 8) = v25;
      *(_BYTE *)(v21 + 16) = 1;
      W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v21);
    }
  }
  v22 = 0LL;
  v23 = *(_DWORD *)(a2 + 16) & 2;
  if ( (*(_DWORD *)(a2 + 16) & 4) != 0 )
  {
    RIMLockExclusive((__int64)a3 + 104);
    if ( (unsigned __int8)IsRimObjectUnregistered(a3) )
    {
      RIMUnlockExclusive((__int64)a3 + 104);
      return 2LL;
    }
    RimDevByName = FindRimDevByName((PCUNICODE_STRING)a2);
    if ( RimDevByName )
    {
      if ( v23 )
      {
        v22 = *(_QWORD **)(RimDevByName + 32);
        if ( v22 )
          v22 = (_QWORD *)v22[9];
      }
      else
      {
        DeliverMouseInputToRIM((const struct _IVMouseInputPacket *)a2, a3, (struct RIMDEV *)RimDevByName);
      }
    }
    else
    {
      v6 = 0;
    }
    RIMUnlockExclusive((__int64)a3 + 104);
  }
  if ( v23 )
    DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)a2, v22);
  return v6;
}
