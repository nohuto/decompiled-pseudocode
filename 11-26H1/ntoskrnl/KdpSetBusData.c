/*
 * XREFs of KdpSetBusData @ 0x140C1B198
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpSysWriteBusData @ 0x140C1B3AC (KdpSysWriteBusData.c)
 */

__int64 __fastcall KdpSetBusData(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r9
  __int64 v4; // r8
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v10; // [rsp+28h] [rbp-30h]
  _QWORD v11[3]; // [rsp+40h] [rbp-18h] BYREF
  __int64 v12; // [rsp+70h] [rbp+18h] BYREF

  v12 = a3;
  v3 = (unsigned int)a1[7];
  v4 = (unsigned int)a1[6];
  v11[0] = 56LL;
  v11[1] = a1;
  v10 = a1[8];
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (unsigned int)a1[5];
  v8 = (unsigned int)a1[4];
  LODWORD(v12) = 0;
  a1[2] = KdpSysWriteBusData(v8, v7, v4, v3, v6, v10, &v12);
  a1[8] = v12;
  return KdSendPacket(2LL, v11, 0LL, &KdpContext);
}
