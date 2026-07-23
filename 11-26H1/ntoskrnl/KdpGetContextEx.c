/*
 * XREFs of KdpGetContextEx @ 0x1405E66C0
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpQuickMoveMemory @ 0x140C1816C (KdpQuickMoveMemory.c)
 *     KdpGetContext @ 0x140C1A0B8 (KdpGetContext.c)
 */

__int64 __fastcall KdpGetContextEx(_DWORD *a1, unsigned __int16 *a2)
{
  unsigned int v2; // r14d
  unsigned int v3; // r15d
  bool v6; // zf
  unsigned int v7; // ebx
  unsigned int v8; // esi
  unsigned int v9; // ebx
  int v10; // ecx
  _QWORD v12[5]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a1[4];
  v3 = a1[5];
  v12[0] = 56LL;
  v12[1] = a1;
  KdpGetContext(a1, a2);
  v6 = a1[2] == 0;
  a1[6] = 0;
  if ( v6 )
  {
    v7 = *a2;
    v8 = v7;
    if ( v2 < v7 )
      v8 = v2;
    v9 = v7 - v8;
    if ( v3 <= v9 )
      v9 = v3;
    if ( v8 && v9 )
      KdpQuickMoveMemory(*((void **)a2 + 1), (void *)(*((_QWORD *)a2 + 1) + v8));
    a1[4] = v8;
    a1[5] = *a2;
    a1[6] = v9;
    v10 = *a2;
    if ( v9 == v10 || v9 && v9 + v8 == v10 )
      KdpContextSent = 1;
    *a2 = v9;
  }
  return KdSendPacket(2LL, v12, a2, &KdpContext);
}
