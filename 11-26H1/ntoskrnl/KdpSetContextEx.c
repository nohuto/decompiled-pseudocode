/*
 * XREFs of KdpSetContextEx @ 0x1405E67A4
 * Callers:
 *     KdpSendWaitContinue @ 0x140C1D038 (KdpSendWaitContinue.c)
 * Callees:
 *     KdpQuickMoveMemory @ 0x140C1816C (KdpQuickMoveMemory.c)
 *     KdpSanitizeContextFlags @ 0x140C1C274 (KdpSanitizeContextFlags.c)
 *     KdpCopyContext @ 0x140C1D9C0 (KdpCopyContext.c)
 */

__int64 __fastcall KdpSetContextEx(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  unsigned __int64 v6; // rsi
  __int64 v7; // rax
  __int64 v8; // rdi
  __int64 v9; // r15
  __int64 v10; // rcx
  _QWORD v12[7]; // [rsp+20h] [rbp-38h] BYREF
  unsigned int v13; // [rsp+60h] [rbp+8h] BYREF

  v13 = 0;
  v12[0] = 56LL;
  v12[1] = a1;
  v4 = *(unsigned __int16 *)(a1 + 6);
  if ( (unsigned __int16)v4 < 0x800u && KiProcessorBlock[v4] && KdpContextSent )
  {
    v6 = *(unsigned int *)(a1 + 24);
    if ( (unsigned int)v6 <= 0x3000
      && (v7 = *(unsigned int *)(a1 + 16), (unsigned int)v7 < (unsigned int)v6)
      && (v8 = *(unsigned int *)(a1 + 20), (_DWORD)v8)
      && (v9 = v7 + v8, v7 + v8 <= v6) )
    {
      KdpQuickMoveMemory((char *)&unk_140E5EE88 + (unsigned int)v7, *(void **)(a2 + 8));
      if ( v9 == v6 )
      {
        v10 = *(unsigned __int16 *)(a1 + 6);
        if ( (_WORD)v10 != (unsigned __int16)KeGetPcr()->Prcb.Number )
          a3 = *(_QWORD *)(KiProcessorBlock[v10] + 36864);
        KdpSanitizeContextFlags(&unk_140E5EE88, (unsigned int)v6, &v13);
        KdpCopyContext(a3, v13, &unk_140E5EE88);
      }
      *(_DWORD *)(a1 + 8) = 0;
      *(_DWORD *)(a1 + 24) = v8;
    }
    else
    {
      *(_DWORD *)(a1 + 8) = -1073741811;
    }
  }
  else
  {
    *(_DWORD *)(a1 + 8) = -1073741823;
  }
  return KdSendPacket(2LL, v12, 0LL, &KdpContext);
}
