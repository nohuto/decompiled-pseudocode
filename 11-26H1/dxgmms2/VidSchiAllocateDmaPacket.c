/*
 * XREFs of VidSchiAllocateDmaPacket @ 0x1400E9AF0
 * Callers:
 *     VidSchiSubmitPagingCommand @ 0x1400E8924 (VidSchiSubmitPagingCommand.c)
 *     VidSchiSubmitPreemptionCommand @ 0x1400EAA60 (VidSchiSubmitPreemptionCommand.c)
 *     VidSchiSubmitRenderCommand @ 0x1400EAB34 (VidSchiSubmitRenderCommand.c)
 *     VidSchiSwitchNodeFromContext @ 0x1400EBAC0 (VidSchiSwitchNodeFromContext.c)
 * Callees:
 *     VidSchiInterlockedRemoveHeadListIfExist @ 0x140026470 (VidSchiInterlockedRemoveHeadListIfExist.c)
 *     memset @ 0x14005BBC0 (memset.c)
 *     VidSchWaitForCompletionEvent @ 0x1400EA1E8 (VidSchWaitForCompletionEvent.c)
 */

_QWORD *__fastcall VidSchiAllocateDmaPacket(__int64 a1)
{
  __int64 i; // rbx
  _QWORD *v3; // rax
  int v4; // eax
  _QWORD *v5; // rbx
  _DWORD v7[40]; // [rsp+20h] [rbp-B8h] BYREF

  for ( i = *(_QWORD *)(a1 + 24); ; VidSchWaitForCompletionEvent(i, v7, 20LL) )
  {
    *(_QWORD *)(i + 1728) = MEMORY[0xFFFFF78000000320];
    KeResetEvent((PRKEVENT)(i + 1688));
    v3 = VidSchiInterlockedRemoveHeadListIfExist((KSPIN_LOCK *)(i + 2024), (_QWORD **)(a1 + 16528), 0LL);
    if ( v3 )
      break;
    memset(v7, 0, sizeof(v7));
    v4 = *(unsigned __int16 *)(a1 + 4);
    v7[8] |= 0x41u;
    v7[12] = v4;
    v7[5] = 1;
  }
  v5 = v3 - 2;
  memset(v3 - 2, 0, 0xD0uLL);
  return v5;
}
