/*
 * XREFs of Crashdump_UsbDevice_ConfigureEndpoints @ 0x1400547E4
 * Callers:
 *     Crashdump_UsbDevice_Configure @ 0x140054524 (Crashdump_UsbDevice_Configure.c)
 * Callees:
 *     Crashdump_Command_SendCommand @ 0x14005342C (Crashdump_Command_SendCommand.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall Crashdump_UsbDevice_ConfigureEndpoints(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 v3; // r8
  __int64 *v4; // rsi
  unsigned int v5; // r11d
  unsigned int i; // r10d
  __int64 v7; // r9
  __int64 v8; // r11
  __int64 v9; // rcx
  int v10; // edx
  unsigned __int64 v11; // rcx
  unsigned int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // ecx
  __int64 v16; // rcx
  int v17; // edi
  int v18; // r8d
  __int64 v20; // [rsp+30h] [rbp-18h] BYREF
  int v21; // [rsp+38h] [rbp-10h]
  int v22; // [rsp+3Ch] [rbp-Ch]

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: begin\n");
  v2 = *a1;
  memset(*(void **)(*a1 + 472), 0, *(unsigned int *)(*a1 + 480));
  v3 = *(_QWORD *)(v2 + 472);
  v4 = a1 + 16;
  *(_DWORD *)(v3 + 4) |= 1u;
  v5 = 0;
  for ( i = 2; i < 0x20; ++i )
  {
    if ( ((1 << i) & 0xFFFFFFFC) != 0 )
    {
      v7 = *v4;
      if ( *v4 )
      {
        v8 = (i - 1 + 2LL) * ((*(_DWORD *)(*(_QWORD *)a1[1] + 104LL) & 4) != 0 ? 64LL : 32LL);
        *(_DWORD *)(v8 + v3 + 4) ^= (*(_DWORD *)(v7 + 52) ^ *(_DWORD *)(v8 + v3 + 4)) & 0x38;
        *(_WORD *)(v8 + v3 + 6) = *(_WORD *)(v7 + 54);
        *(_DWORD *)(v8 + v3 + 4) ^= (*(_DWORD *)(v7 + 52) ^ *(_DWORD *)(v8 + v3 + 4)) & 6;
        *(_BYTE *)(v8 + v3 + 5) = BYTE1(*(_DWORD *)(v7 + 52));
        *(_WORD *)(v8 + v3 + 16) = *(_WORD *)(v7 + 64);
        if ( *(_BYTE *)(v7 + 128) )
          v9 = *(_QWORD *)(v7 + 136);
        else
          v9 = *(_QWORD *)(v7 + 24LL * *(unsigned int *)(v7 + 160) + 80);
        v10 = *(_DWORD *)(v8 + v3);
        *(_QWORD *)(v8 + v3 + 8) = v9;
        if ( (*(_DWORD *)(v7 + 48) & 0x7C00) != 0 )
        {
          v11 = v9 & 0xFFFFFFFFFFFFFFFEuLL;
          v12 = v10 & 0xFFFF03FF | 0x8400;
        }
        else
        {
          v11 = v9 | 1;
          v12 = v10 & 0xFFFF03FF;
        }
        *(_DWORD *)(v8 + v3) = v12;
        *(_QWORD *)(v8 + v3 + 8) = v11;
        v5 = i;
        *(_DWORD *)(v3 + 4) |= 1 << i;
      }
    }
    ++v4;
  }
  v13 = a1[1];
  v21 = 0;
  v14 = (*(_DWORD *)(*(_QWORD *)v13 + 104LL) & 4) != 0 ? 0x20 : 0;
  v15 = (v5 << 27) | *(_DWORD *)(v14 + v3 + 32) & 0x7FFFFFF;
  *(_DWORD *)(v14 + v3 + 32) = v15;
  *(_DWORD *)(v14 + v3 + 32) = v15 ^ (*((_DWORD *)a1 + 20) ^ v15) & 0x4000000;
  *(_BYTE *)(v14 + v3 + 39) = *((_BYTE *)a1 + 87);
  v16 = a1[2];
  v22 = (*((unsigned __int8 *)a1 + 56) << 24) | 0x3000;
  v20 = *(_QWORD *)(v2 + 464);
  v17 = Crashdump_Command_SendCommand(v16, (__int64)&v20, 0LL);
  if ( v17 >= 0 )
  {
    v18 = *(_DWORD *)(a1[9] + 12) >> 27;
    if ( v18 != 3 )
    {
      DbgPrintEx(
        0x93u,
        1u,
        "XHCIDUMP: SlotId %u: After reset device command, slot state is not configured, it is %u\n",
        *((unsigned __int8 *)a1 + 56),
        v18);
      v17 = -1073741630;
    }
  }
  else
  {
    DbgPrintEx(0x93u, 1u, "XHCIDUMP: SlotId %u: Configure Endpoint command failed\n", *((unsigned __int8 *)a1 + 56));
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_UsbDevice_ConfigureEndpoints: end 0x%X\n", v17);
  return (unsigned int)v17;
}
