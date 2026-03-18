/*
 * XREFs of ?ivHandleMouseInputPacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021A480
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021AEA0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     RIMLockExclusive @ 0x140033CB0 (RIMLockExclusive.c)
 *     RIMUnlockExclusive @ 0x140033F70 (RIMUnlockExclusive.c)
 *     _anonymous_namespace_::GetMouseProcessor @ 0x140039910 (_anonymous_namespace_--GetMouseProcessor.c)
 *     UserSessionSwitchLeaveCritWithNonPaged @ 0x140047540 (UserSessionSwitchLeaveCritWithNonPaged.c)
 *     EnterSharedCrit @ 0x14008A250 (EnterSharedCrit.c)
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x14019C34C (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 *     ?DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z @ 0x140219800 (-DeliverMouseInputToRIM@@YAXPEBU_IVMouseInputPacket@@PEAURawInputManagerObject@@PEAURIMDEV@@@Z.c)
 *     ?DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z @ 0x1402198A4 (-DeliverSynthesizedMouseInput@@YAXPEBU_IVMouseInputPacket@@PEAX@Z.c)
 *     FindRimDevByName @ 0x14021B4D0 (FindRimDevByName.c)
 *     IsRimObjectUnregistered @ 0x14021B7E4 (IsRimObjectUnregistered.c)
 *     ApiSetTransformPointForIvSpatialInput @ 0x1402260F4 (ApiSetTransformPointForIvSpatialInput.c)
 */

__int64 __fastcall CBaseInput::ivHandleMouseInputPacket(__int64 a1, __int64 a2, struct RawInputManagerObject *a3)
{
  int v3; // eax
  unsigned int v6; // esi
  __int64 v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rbx
  int v10; // eax
  __int64 v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 MouseProcessor; // rax
  __int64 v15; // rbx
  _QWORD *v16; // rbp
  int v17; // ebx
  __int64 RimDevByName; // rax
  __int64 v20; // [rsp+58h] [rbp+10h] BYREF
  __int64 v21; // [rsp+68h] [rbp+20h]

  v3 = *(_DWORD *)(a2 + 16);
  v20 = a2;
  v6 = 1;
  if ( (v3 & 4) != 0 )
    *(_QWORD *)(a2 + 8) = a2 + (*(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFFEuLL);
  CIVDeserializer::Deserialize((CIVDeserializer *)&v20, (void **)(a2 + 24));
  EnterSharedCrit(1u, 1u);
  v8 = 0LL;
  if ( *(_DWORD *)(a2 + 32) )
  {
    while ( 1 )
    {
      v9 = *(_QWORD *)(a2 + 24) + 48 * v8;
      LODWORD(v21) = *(_DWORD *)(v9 + 20);
      v10 = *(_DWORD *)(v9 + 24);
      v20 = 0LL;
      v11 = *(_QWORD *)(v9 + 32);
      HIDWORD(v21) = v10;
      if ( !(unsigned int)ApiSetTransformPointForIvSpatialInput(v11, v21, &v20) )
        break;
      v8 = (unsigned int)(v8 + 1);
      *(_QWORD *)(v9 + 20) = v20;
      if ( (unsigned int)v8 >= *(_DWORD *)(a2 + 32) )
        goto LABEL_6;
    }
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
    return 0LL;
  }
  else
  {
LABEL_6:
    UserSessionSwitchLeaveCritWithNonPaged(0LL, v7);
    if ( (*(_DWORD *)(a2 + 16) & 1) != 0 )
    {
      v20 = *(_QWORD *)(a2 + 36);
      MouseProcessor = anonymous_namespace_::GetMouseProcessor(v13, v12);
      if ( MouseProcessor )
      {
        v15 = MouseProcessor + 4056;
        W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(MouseProcessor + 4056), 0);
        *(_QWORD *)(v15 + 8) = v20;
        *(_BYTE *)(v15 + 16) = 1;
        W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)v15, 0LL);
      }
    }
    v16 = 0LL;
    v17 = *(_DWORD *)(a2 + 16) & 2;
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
        if ( v17 )
        {
          v16 = *(_QWORD **)(RimDevByName + 32);
          if ( v16 )
            v16 = (_QWORD *)v16[9];
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
    if ( v17 )
      DeliverSynthesizedMouseInput((const struct _IVMouseInputPacket *)a2, v16);
    return v6;
  }
}
