/*
 * XREFs of ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021F0A0
 * Callers:
 *     ?ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z @ 0x14021F6F0 (-ivOnPacketReceived@CBaseInput@@KA_NPEBXKKPEAX1@Z.c)
 * Callees:
 *     ?Deserialize@CIVDeserializer@@AEAAXAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1401B63AC (-Deserialize@CIVDeserializer@@AEAAXAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z.c)
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1401B6458 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 */

__int64 __fastcall CBaseInput::ivHandlePnpCreatePacket(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  __int64 v3; // r10
  int v4; // r8d
  __int64 v6; // [rsp+38h] [rbp+10h] BYREF

  v2 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFEuLL;
  v6 = a2;
  *(_QWORD *)(a2 + 16) = a2 + v2;
  CIVDeserializer::Deserialize((CIVDeserializer *)&v6, (void **)(a2 + 72));
  if ( *(_DWORD *)(v3 + 24) == 2 )
  {
    CIVDeserializer::Deserialize((CIVDeserializer *)&v6, (void **)(v3 + 208));
    if ( v4 )
      CIVDeserializer::Deserialize((CIVDeserializer *)&v6, (struct _IV_HID_POINTER_DEVICE_INFO *)(v3 + 216));
  }
  *(_QWORD *)(v3 + 1360) = v3 + (*(_QWORD *)(v3 + 1360) & 0xFFFFFFFFFFFFFFFEuLL);
  return 0LL;
}
