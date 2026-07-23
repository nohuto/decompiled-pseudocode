/*
 * XREFs of PnpRecordBlackboxPnpEventInformation @ 0x1409B4458
 * Callers:
 *     PnpProcessQueryRemoveAndEject @ 0x1409B3C10 (PnpProcessQueryRemoveAndEject.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     PiGetTargetDeviceNode @ 0x1409B45EC (PiGetTargetDeviceNode.c)
 *     NtPowerInformation @ 0x140A1B510 (NtPowerInformation.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall PnpRecordBlackboxPnpEventInformation(__int64 a1, int a2, __int64 a3, char a4)
{
  int v6; // r14d
  const void **v7; // rsi
  __int64 v8; // rbx
  __int64 v9; // r8
  char v10; // r9
  unsigned int v11; // ebp
  int v12; // eax
  __int64 Pool2; // rax
  _DWORD *v14; // rdi
  __int128 v15; // xmm0
  _QWORD InputBuffer[3]; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+48h] [rbp-40h]
  int v18; // [rsp+4Ch] [rbp-3Ch]
  __int64 TargetDeviceNode; // [rsp+A0h] [rbp+18h]

  v6 = 0;
  v7 = 0LL;
  v8 = MEMORY[0xFFFFF78000000014];
  TargetDeviceNode = PiGetTargetDeviceNode();
  v11 = *(unsigned __int16 *)(TargetDeviceNode + 40) + 50;
  if ( a3 )
  {
    v7 = (const void **)(a3 + 8);
    if ( !v10 && a3 != -8 )
    {
      v12 = *(unsigned __int16 *)v7;
      if ( (_WORD)v12 )
      {
        if ( *(_QWORD *)(a3 + 16) != v9 )
          v6 = v12 + 2;
      }
    }
  }
  Pool2 = ExAllocatePool2(0x40uLL);
  v14 = (_DWORD *)Pool2;
  if ( Pool2 )
  {
    InputBuffer[2] = 0LL;
    v18 = 0;
    v15 = *(_OWORD *)(a1 + 88);
    *(_QWORD *)(Pool2 + 16) = v8;
    *(_OWORD *)Pool2 = v15;
    *(_DWORD *)(Pool2 + 32) = *(_DWORD *)(a1 + 16);
    *(_DWORD *)(Pool2 + 24) = a2;
    *(_BYTE *)(Pool2 + 28) = a4;
    memmove((void *)(Pool2 + 44), *(const void **)(TargetDeviceNode + 48), *(unsigned __int16 *)(TargetDeviceNode + 40));
    *((_WORD *)v14 + ((unsigned __int64)*(unsigned __int16 *)(TargetDeviceNode + 40) >> 1) + 22) = 0;
    if ( v6 )
    {
      v14[9] = *(_DWORD *)a3;
      v14[10] = v11;
      memmove((char *)v14 + v11, v7[1], *(unsigned __int16 *)v7);
      *(_WORD *)((char *)v14 + 2 * ((unsigned __int64)*(unsigned __int16 *)v7 >> 1) + v11) = 0;
    }
    v17 = 2;
    InputBuffer[0] = v14;
    InputBuffer[1] = v6 + v11;
    NtPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    ExFreePoolWithTag(v14, 0x4B706E50u);
  }
}
