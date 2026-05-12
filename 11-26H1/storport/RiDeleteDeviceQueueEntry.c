/*
 * XREFs of RiDeleteDeviceQueueEntry @ 0x14003AD8C
 * Callers:
 *     RaidDeleteDeviceQueueEntry @ 0x140012998 (RaidDeleteDeviceQueueEntry.c)
 * Callees:
 *     <none>
 */

int __fastcall RiDeleteDeviceQueueEntry(__int64 a1, int a2)
{
  int v2; // eax
  __int64 v3; // rax

  if ( a2 )
    *(_BYTE *)(a1 + 38) = 0;
  v2 = *(_DWORD *)(a1 + 28);
  if ( v2 )
    *(_DWORD *)(a1 + 28) = v2 - 1;
  _InterlockedAdd64((volatile signed __int64 *)(a1 + 88), 0xFFFFFFFFFFFFFFFCuLL);
  v3 = (__int64)*(unsigned int *)(a1 + 88) >> 2;
  if ( (v3 & 0x3FFFFFFF) == 0 && *(_DWORD *)(a1 + 40) )
    LODWORD(v3) = KeSetEvent((PRKEVENT)(a1 + 48), 0, 0);
  return v3;
}
