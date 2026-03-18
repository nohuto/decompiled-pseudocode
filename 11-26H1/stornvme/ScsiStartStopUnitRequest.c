/*
 * XREFs of ScsiStartStopUnitRequest @ 0x140001C40
 * Callers:
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 * Callees:
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     GetSrbExtension @ 0x140003A40 (GetSrbExtension.c)
 *     SrbAssignQueueId @ 0x1400047C0 (SrbAssignQueueId.c)
 */

__int64 __fastcall ScsiStartStopUnitRequest(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 SrbExtension; // rbx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v6; // r10
  int v8; // eax
  unsigned __int8 v9; // di
  __int64 v10; // rax
  int v11; // eax

  SrbExtension = GetSrbExtension(a2);
  if ( (*(_BYTE *)(v4 + 1) & 1) != 0 )
  {
    LOBYTE(v5) = 36;
    LOBYTE(v4) = 5;
    LOBYTE(v2) = 6;
    NVMeSetSenseData(v6, v2, v4, v5);
    return 3238002694LL;
  }
  if ( (*(_BYTE *)(v4 + 4) & 1) != 0 )
  {
    v8 = *(_DWORD *)(v5 + 24);
    if ( (v8 & 0x200) == 0 )
    {
      *(_DWORD *)(v5 + 228) = 0;
      *(_DWORD *)(v5 + 24) = v8 | 0x200;
      v9 = 0;
LABEL_9:
      *(_BYTE *)(SrbExtension + 4225) = *(_BYTE *)(SrbExtension + 4225) & 0xFC | 1;
      SrbAssignQueueId(v5, v6);
      v11 = *(_DWORD *)(SrbExtension + 4140);
      *(_BYTE *)(SrbExtension + 4096) = 9;
      *(_BYTE *)(SrbExtension + 4136) = 2;
      *(_DWORD *)(SrbExtension + 4140) = v11 ^ ((unsigned __int8)v11 ^ v9) & 0x1F;
      return 0LL;
    }
  }
  else if ( ++*(_DWORD *)(v5 + 228) >= *(_DWORD *)(v5 + 212) )
  {
    v10 = *(_QWORD *)(v5 + 1560);
    *(_DWORD *)(v5 + 24) &= ~0x200u;
    v9 = *(_BYTE *)(v10 + 263);
    goto LABEL_9;
  }
  *(_BYTE *)(v6 + 3) = 1;
  return 0LL;
}
