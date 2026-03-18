/*
 * XREFs of Crashdump_Endpoint_SendBulkTransfer @ 0x140053AE4
 * Callers:
 *     Crashdump_DoBulkTransfer @ 0x140050A70 (Crashdump_DoBulkTransfer.c)
 * Callees:
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x140053FEC (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 */

__int64 __fastcall Crashdump_Endpoint_SendBulkTransfer(__int64 *a1, __int64 a2, _QWORD *a3, char a4)
{
  _QWORD *v4; // r14
  int v7; // ecx
  unsigned int v8; // ebp
  _QWORD *v9; // rdx
  unsigned int v10; // r15d
  unsigned int v11; // r13d
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned int v14; // r12d
  int v15; // edi
  __int64 v16; // r9
  unsigned int v17; // ecx
  int v18; // r8d
  unsigned int v19; // ecx
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned int v24; // ecx
  __int64 v25; // r8
  int v26; // r10d
  __int64 v27; // r9
  int *v28; // rdx
  unsigned int v29; // ebx
  unsigned int v30; // eax
  signed __int32 v32[8]; // [rsp+0h] [rbp-68h] BYREF
  int v33; // [rsp+28h] [rbp-40h]
  _QWORD *v34; // [rsp+70h] [rbp+8h]

  v4 = a3;
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: begin: length: 0x%X TransferPA: 0x%I64X\n",
    *(_DWORD *)(a2 + 36),
    *a3);
  v7 = *((_DWORD *)a1 + 40);
  v8 = *(_DWORD *)(a2 + 36);
  v9 = a1 + 13;
  if ( v7 )
    v9 = a1 + 10;
  v34 = v9;
  v10 = 0;
  v11 = 0;
  v12 = *(__int64 *)((char *)a1 + (v7 != 0 ? 0x18 : 0) + 88);
  v13 = *a1;
  a1[22] = a2;
  if ( *(_BYTE *)(v13 + 627) )
    v14 = ((unsigned int)*((unsigned __int16 *)a1 + 27) + *(_DWORD *)(a2 + 36) - 1) / *((unsigned __int16 *)a1 + 27);
  else
    v14 = 0;
  for ( ; v8; v8 -= v15 )
  {
    if ( (*(_DWORD *)v4 & 0xFFFLL) != 0 )
    {
      v15 = v8;
      if ( v8 >= 4096 - (*(_DWORD *)v4 & 0xFFFu) )
        v15 = 4096 - (*(_DWORD *)v4 & 0xFFF);
    }
    else
    {
      v15 = 4096;
      if ( v8 < 0x1000 )
        v15 = v8;
    }
    v11 += v15;
    v16 = 2LL * v10;
    *(_OWORD *)(v12 + 8 * v16) = 0LL;
    v17 = *(_DWORD *)(v12 + 16LL * v10 + 12) & 0xFFFF03EF | 0x410;
    *(_DWORD *)(v12 + 8 * v16 + 12) = v17;
    *(_QWORD *)(v12 + 8 * v16) = *v4;
    v18 = *(_DWORD *)(v12 + 16LL * v10 + 8) ^ (v15 ^ *(_DWORD *)(v12 + 16LL * v10 + 8)) & 0x1FFFF;
    *(_DWORD *)(v12 + 8 * v16 + 8) = v18;
    *(_DWORD *)(v12 + 8 * v16 + 12) = v17 & 0xFFFFFFFE | (v10 != 0);
    if ( !*(_BYTE *)(*a1 + 627) || v8 == v15 )
    {
      v19 = 0;
    }
    else
    {
      v19 = v14 - v11 / *((unsigned __int16 *)a1 + 27);
      if ( v19 > 0x1F )
        v19 = 31;
    }
    v33 = v15;
    *(_DWORD *)(v12 + 16LL * v10 + 8) = v18 ^ (v18 ^ (v19 << 17)) & 0x3E0000;
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Normal TRB %u: PA: 0x%I64X, length: 0x%X\n", v10++, *v4++, v33);
  }
  v20 = 16LL * v10;
  *(_DWORD *)(16LL * (v10 - 1) + v12 + 12) |= 2u;
  *(_OWORD *)(v20 + v12) = 0LL;
  v21 = *(_DWORD *)(v20 + v12 + 12) & 0xFFFF03FF | 0x1C00;
  *(_DWORD *)(v20 + v12 + 12) = v21;
  v22 = a1[21];
  *(_DWORD *)(v20 + v12 + 8) &= 0x3FFFFFu;
  *(_QWORD *)(v20 + v12) = v22;
  *(_DWORD *)(v20 + v12 + 12) = v21 | 0x21;
  v23 = 2LL * (v10 + 1);
  *(_OWORD *)(v12 + 8 * v23) = 0LL;
  v24 = *(_DWORD *)(v12 + 16LL * (v10 + 1) + 12) & 0xFFFF03FF | 0x1800;
  *(_DWORD *)(v12 + 8 * v23 + 12) = v24;
  *(_QWORD *)(v12 + 8 * v23) = *v34;
  *(_DWORD *)(v12 + 8 * v23 + 12) = v24 & 0xFFFFFFFC | 1;
  *((_DWORD *)a1 + 40) = *((_DWORD *)a1 + 40) == 0;
  *(_BYTE *)(v12 + 12) ^= 1u;
  _InterlockedOr(v32, 0);
  if ( a4 )
  {
    v25 = a1[3];
    v26 = *((_DWORD *)a1 + 8);
    v27 = *(_QWORD *)(**(_QWORD **)(v25 + 8) + 48LL);
    if ( v27 )
      v28 = (int *)(v27 + 4LL * *(unsigned __int8 *)(v25 + 56));
    else
      v28 = 0LL;
    *v28 = (unsigned __int8)v26 | (*((_BYTE *)a1 + 128) != 0 ? 0x10000 : 0);
    _InterlockedOr(v32, 0);
    DbgPrintEx(
      0x93u,
      3u,
      "XHCIDUMP: Ringing doorbell: SlotId: %u, EndpointDCI: %u\n",
      *(unsigned __int8 *)(v25 + 56),
      v26);
    v29 = 259;
  }
  else
  {
    v30 = Crashdump_Endpoint_SendTransferAndPollForCompletion(a1);
    *(_DWORD *)(v12 + 12) &= ~1u;
    v29 = v30;
  }
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_Endpoint_SendBulkTransfer: end 0x%X\n", v29);
  return v29;
}
