/*
 * XREFs of Crashdump_Endpoint_SendControlTransfer @ 0x140053E00
 * Callers:
 *     Crashdump_SendUrb @ 0x140051710 (Crashdump_SendUrb.c)
 *     Crashdump_SendUrbAsync @ 0x140051800 (Crashdump_SendUrbAsync.c)
 *     Crashdump_UsbDevice_ChangePortFeature @ 0x140054350 (Crashdump_UsbDevice_ChangePortFeature.c)
 *     Crashdump_UsbDevice_Configure @ 0x140054524 (Crashdump_UsbDevice_Configure.c)
 *     Crashdump_UsbDevice_GetDeviceDescriptor @ 0x140054B64 (Crashdump_UsbDevice_GetDeviceDescriptor.c)
 *     Crashdump_UsbDevice_GetPortStatus @ 0x140054CF8 (Crashdump_UsbDevice_GetPortStatus.c)
 *     Crashdump_UsbDevice_SuspendPort @ 0x140055A0C (Crashdump_UsbDevice_SuspendPort.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x140053FEC (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendControlTransfer(__int64 a1, _QWORD *a2, int a3, _QWORD *a4)
{
  int v8; // ecx
  _QWORD *v9; // r10
  int v10; // r8d
  unsigned int v11; // r9d
  __int64 v12; // rdi
  unsigned int v13; // ecx
  unsigned int v14; // eax
  __int64 v15; // rcx
  unsigned int v16; // r9d
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  signed __int32 v23[10]; // [rsp+0h] [rbp-28h] BYREF

  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: begin\n");
  v8 = *(_DWORD *)(a1 + 160);
  v9 = (_QWORD *)(a1 + 104);
  v10 = *(unsigned __int8 *)a2 >> 7;
  v11 = 1;
  if ( v8 )
    v9 = (_QWORD *)(a1 + 80);
  v12 = *(_QWORD *)((v8 != 0 ? 0x18 : 0) + a1 + 88);
  *(_OWORD *)v12 = 0LL;
  *(_QWORD *)v12 = *a2;
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(v12 + 8) & 0xFFFE0000 | 8;
  *(_DWORD *)(v12 + 12) = *(_DWORD *)(v12 + 12) & 0xFFFF03BF | 0x840;
  if ( a3 )
  {
    *(_OWORD *)(v12 + 16) = 0LL;
    v11 = 2;
    v13 = *(_DWORD *)(v12 + 28) & 0xFFFE0FFF | (v10 << 16) | 0xC00;
    *(_DWORD *)(v12 + 28) = v13;
    *(_QWORD *)(v12 + 16) = *a4;
    v14 = *(_DWORD *)(v12 + 24) & 0xFFC00000;
    *(_DWORD *)(v12 + 28) = v13 | 1;
    *(_DWORD *)(v12 + 24) = a3 & 0x1FFFF ^ v14;
  }
  v15 = 2LL * v11;
  v16 = v11 + 1;
  v17 = 16LL * v16;
  *(_OWORD *)(v12 + 8 * v15) = 0LL;
  *(_DWORD *)(v12 + 8 * v15 + 12) = *(_DWORD *)(v12 + 8 * v15 + 12) & 0xFFFE13FF | ((v10 ^ 1) << 16) | 0x1011;
  *(_OWORD *)(v17 + v12) = 0LL;
  LODWORD(v15) = *(_DWORD *)(v17 + v12 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v17 + v12 + 12) = v15;
  v18 = *(_QWORD *)(a1 + 168);
  *(_DWORD *)(v17 + v12 + 8) &= 0x3FFFFFu;
  *(_DWORD *)(v17 + v12 + 12) = v15 | 0x21;
  *(_QWORD *)(v17 + v12) = v18;
  v19 = 2LL * (v16 + 1);
  *(_OWORD *)(v12 + 8 * v19) = 0LL;
  LODWORD(v15) = *(_DWORD *)(v12 + 16LL * (v16 + 1) + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v12 + 8 * v19 + 12) = v15;
  *(_QWORD *)(v12 + 8 * v19) = *v9;
  *(_DWORD *)(v12 + 8 * v19 + 12) = v15 & 0xFFFFFFFC | 1;
  *(_DWORD *)(a1 + 160) = *(_DWORD *)(a1 + 160) == 0;
  *(_BYTE *)(v12 + 12) ^= 1u;
  _InterlockedOr(v23, 0);
  v20 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
  *(_DWORD *)(v12 + 12) &= ~1u;
  v21 = v20;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendControlTransfer: end 0x%X\n", v20);
  return v21;
}
