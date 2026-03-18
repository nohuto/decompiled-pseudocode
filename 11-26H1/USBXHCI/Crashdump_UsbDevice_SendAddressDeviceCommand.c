/*
 * XREFs of Crashdump_UsbDevice_SendAddressDeviceCommand @ 0x14005554C
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x140054524 (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x14005342C (Crashdump_Command_SendCommand.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Crashdump_UsbDevice_SendAddressDeviceCommand(__int64 *a1)
{
  __int64 v2; // rbx
  __int64 v3; // r10
  int v4; // r9d
  __int64 v5; // r8
  int v6; // ecx
  int v7; // edx
  __int64 v8; // r8
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rcx
  int v12; // esi
  __int64 v13; // r9
  int v14; // r8d
  __int64 v16; // [rsp+60h] [rbp-18h] BYREF
  int v17; // [rsp+68h] [rbp-10h]
  unsigned __int32 v18; // [rsp+6Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 472), 0, *(unsigned int *)(*a1 + 480));
  v3 = *(_QWORD *)(v2 + 472);
  *(_DWORD *)(v3 + 4) |= 3u;
  v4 = *(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4;
  v5 = v4 != 0 ? 0x20 : 0;
  v6 = *(_DWORD *)(v5 + v3 + 32) ^ (*((_DWORD *)a1 + 20) ^ *(_DWORD *)(v5 + v3 + 32)) & 0xFFFFF;
  *(_DWORD *)(v5 + v3 + 32) = v6;
  v7 = v6 ^ (*((_DWORD *)a1 + 20) ^ v6) & 0xF00000;
  *(_DWORD *)(v5 + v3 + 32) = v7;
  *(_BYTE *)(v5 + v3 + 38) = *((_BYTE *)a1 + 86);
  *(_DWORD *)(v5 + v3 + 32) = v7 & 0x7FFFFFF | 0x8000000;
  v8 = a1[15];
  v9 = v4 != 0 ? 0x40 : 0;
  *(_DWORD *)(v9 + v3 + 68) ^= (*(_DWORD *)(v8 + 52) ^ *(_DWORD *)(v9 + v3 + 68)) & 0x38;
  *(_WORD *)(v9 + v3 + 70) = *(_WORD *)(v8 + 54);
  *(_DWORD *)(v9 + v3 + 68) ^= (*(_DWORD *)(v8 + 52) ^ *(_DWORD *)(v9 + v3 + 68)) & 6;
  if ( *(_BYTE *)(v8 + 128) )
    v10 = *(_QWORD *)(v8 + 136);
  else
    v10 = *(_QWORD *)(v8 + 24LL * *(unsigned int *)(v8 + 160) + 80);
  v17 = 0;
  *(_QWORD *)((v4 != 0 ? 0x40 : 0) + v3 + 72) = v10 | 1;
  v11 = a1[2];
  v18 = _byteswap_ulong(*((unsigned __int8 *)a1 + 56)) | 0x2C00;
  v16 = *(_QWORD *)(v2 + 464);
  v12 = Crashdump_Command_SendCommand(v11, (__int64)&v16, 0LL);
  if ( v12 >= 0 )
  {
    v13 = a1[9];
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Slot %u: RH %u, RS %u, Speed %u, IsHub %u, NumEntries %u, Addr %u, State %u\n",
      *((unsigned __int8 *)a1 + 56),
      *(unsigned __int8 *)(v13 + 6),
      *(_DWORD *)v13 & 0xFFFFF,
      (*(_DWORD *)v13 >> 20) & 0xF,
      (*(_DWORD *)v13 >> 26) & 1,
      *(_DWORD *)v13 >> 27,
      (unsigned __int8)*(_DWORD *)(v13 + 12),
      *(_DWORD *)(v13 + 12) >> 27);
    v14 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v14 != 2 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After address device command, slot state is not addressed, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v14);
      v12 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Address device command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_SendAddressDeviceCommand: end 0x%X\n", v12);
  return (unsigned int)v12;
}
