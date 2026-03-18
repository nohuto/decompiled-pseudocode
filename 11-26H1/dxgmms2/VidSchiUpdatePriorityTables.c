/*
 * XREFs of VidSchiUpdatePriorityTables @ 0x1400209D0
 * Callers:
 *     VidSchiSubmitCommandPacketToQueueDirectSubmitAware @ 0x140055344 (VidSchiSubmitCommandPacketToQueueDirectSubmitAware.c)
 * Callees:
 *     VidSchiInsertCommandToSoftwareQueue @ 0x140020A30 (VidSchiInsertCommandToSoftwareQueue.c)
 */

__int64 __fastcall VidSchiUpdatePriorityTables(__int64 a1, __int64 a2, _DWORD *a3)
{
  unsigned int v3; // ebx
  int v6; // eax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0;
  v8 = 0;
  v6 = 0;
  if ( a2 )
  {
    VidSchiInsertCommandToSoftwareQueue(a2, &v8);
    v6 = v8;
  }
  LOBYTE(v3) = *(_DWORD *)(a1 + 784) != 0;
  if ( a3 )
    *a3 = v6;
  return v3;
}
