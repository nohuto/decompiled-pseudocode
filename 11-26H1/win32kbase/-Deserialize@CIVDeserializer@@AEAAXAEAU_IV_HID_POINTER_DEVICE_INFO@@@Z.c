/*
 * XREFs of ?Deserialize@CIVDeserializer@@AEAAXAEAU_IV_HID_POINTER_DEVICE_INFO@@@Z @ 0x1401B63AC
 * Callers:
 *     ?ivHandlePnpCreatePacket@CBaseInput@@AEAA?AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z @ 0x14021F0A0 (-ivHandlePnpCreatePacket@CBaseInput@@AEAA-AW4IVHandlerResult@@PEAXPEAURawInputManagerObject@@@Z.c)
 * Callees:
 *     ?Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z @ 0x1401B6458 (-Deserialize@CIVDeserializer@@QEAAXPEAPEAX@Z.c)
 */

void __fastcall CIVDeserializer::Deserialize(CIVDeserializer *this, struct _IV_HID_POINTER_DEVICE_INFO *a2)
{
  __int64 v2; // r8
  CIVDeserializer *v3; // rcx
  __int64 v4; // r8
  CIVDeserializer *v5; // rcx
  __int64 v6; // r8
  CIVDeserializer *v7; // rcx
  __int64 v8; // r8
  CIVDeserializer *v9; // rcx
  __int64 v10; // r8
  CIVDeserializer *v11; // rcx
  __int64 v12; // r9
  CIVDeserializer *v13; // rcx
  __int64 v14; // r9
  CIVDeserializer *v15; // rcx
  _QWORD *v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rax

  *((_QWORD *)a2 + 51) = *(_QWORD *)this + (*((_QWORD *)a2 + 51) & 0xFFFFFFFFFFFFFFFEuLL);
  CIVDeserializer::Deserialize(this, (void **)a2 + 53);
  CIVDeserializer::Deserialize(v3, (void **)(v2 + 16));
  CIVDeserializer::Deserialize(v5, (void **)(v4 + 32));
  CIVDeserializer::Deserialize(v7, (void **)(v6 + 48));
  CIVDeserializer::Deserialize(v9, (void **)(v8 + 64));
  CIVDeserializer::Deserialize(v11, (void **)(v10 + 80));
  CIVDeserializer::Deserialize(v13, (void **)(v12 + 928));
  CIVDeserializer::Deserialize(v15, (void **)(v14 + 976));
  *(_QWORD *)(v17 + 1064) = *v16 + (*(_QWORD *)(v17 + 1064) & 0xFFFFFFFFFFFFFFFEuLL);
  v18 = *(_QWORD *)(v17 + 1104);
  if ( v18 )
    *(_QWORD *)(v17 + 1104) = *v16 + (v18 & 0xFFFFFFFFFFFFFFFEuLL);
}
