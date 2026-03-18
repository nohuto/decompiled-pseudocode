/*
 * XREFs of TR_InitializeTransferRing @ 0x14001E854
 * Callers:
 *     Endpoint_ControlEndpointResetCompletion @ 0x14001E270 (Endpoint_ControlEndpointResetCompletion.c)
 *     Endpoint_InitializeTransferRing @ 0x14001E72C (Endpoint_InitializeTransferRing.c)
 *     TR_Enable_Internal @ 0x14001F0B0 (TR_Enable_Internal.c)
 * Callees:
 *     TR_InitializeTransferSegment @ 0x140039744 (TR_InitializeTransferSegment.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall TR_InitializeTransferRing(__int64 a1)
{
  _QWORD *v1; // rdi
  __int64 v3; // rcx
  __int64 result; // rax

  v1 = (_QWORD *)(a1 + 176);
  if ( *(_BYTE *)(a1 + 288) )
    TR_InitializeTransferSegment(a1, *v1);
  memset(*(void **)(*v1 + 16LL), 0, *(unsigned int *)(*v1 + 44LL));
  v3 = *v1;
  *(_QWORD *)(a1 + 184) = *(_QWORD *)(*v1 + 16LL);
  *(_DWORD *)(a1 + 192) = 0;
  result = (unsigned int)((*(_DWORD *)(v3 + 44) >> 4) - 1);
  *(_DWORD *)(a1 + 200) = 1;
  *(_DWORD *)(a1 + 196) = result;
  return result;
}
