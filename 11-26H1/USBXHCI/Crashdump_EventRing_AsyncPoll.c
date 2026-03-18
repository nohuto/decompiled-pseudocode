/*
 * XREFs of Crashdump_EventRing_AsyncPoll @ 0x140052A1C
 * Callers:
 *     Crashdump_PollForCompletion @ 0x1400514E0 (Crashdump_PollForCompletion.c)
 * Callees:
 *     Crashdump_EventRing_UpdateDequeuePointer @ 0x1400532A4 (Crashdump_EventRing_UpdateDequeuePointer.c)
 */

__int64 __fastcall Crashdump_EventRing_AsyncPoll(__int64 a1, __int64 *a2)
{
  unsigned int v4; // ebx
  __int64 v5; // rbp
  int v6; // r10d
  __int64 v7; // rsi
  int v8; // ecx
  int v9; // edx
  __int64 v10; // r8
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v14; // rdx
  int v15; // r9d
  int v16; // ecx
  int v17; // r9d
  int v18; // r9d
  int v19; // eax
  __int64 v20; // r8
  bool v21; // zf

  v4 = 259;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: begin\n");
  v5 = *(_QWORD *)(a1 + 72);
  v6 = *(_DWORD *)(a1 + 88);
  v7 = 2LL * *(unsigned int *)(a1 + 92);
  v8 = *(_DWORD *)(v5 + 16LL * *(unsigned int *)(a1 + 92) + 12);
  if ( (v8 & 1) != v6 )
    goto LABEL_34;
  v9 = (unsigned __int16)v8 >> 10;
  if ( v9 == 32 && (v8 & 4) != 0 )
    v10 = 0LL;
  else
    v10 = *(_QWORD *)(v5 + 16LL * *(unsigned int *)(a1 + 92));
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: EventRing: CS: %u, EI: %03u, ET: %u, CC: %u, Len: %u, Addr: 0x%I64X\n",
    v6,
    *(_DWORD *)(a1 + 92),
    v9,
    *(unsigned __int8 *)(v5 + 16LL * *(unsigned int *)(a1 + 92) + 11),
    *(_DWORD *)(v5 + 16LL * *(unsigned int *)(a1 + 92) + 8) & 0xFFFFFF,
    v10);
  v11 = *(unsigned int *)(v5 + 8 * v7 + 12);
  if ( (*(_DWORD *)(v5 + 8 * v7 + 12) & 0xFC00) != 0x8000 )
  {
    v17 = (unsigned __int16)v11 >> 10;
    if ( v17 == 34 )
    {
      v18 = *(unsigned __int8 *)(v5 + 8 * v7 + 3);
      DbgPrintEx(
        0x93u,
        3u,
        "XHCIDUMP: Ignoring port status change event for port %u, CCS: %u, CSC: %u\n",
        v18,
        *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL) + 16 * ((unsigned int)(v18 - 1) + 64LL)) & 1,
        (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL) + 16 * ((unsigned int)(v18 - 1) + 64LL)) >> 17) & 1);
    }
    else
    {
      DbgPrintEx(
        0x93u,
        2u,
        "XHCIDUMP: Unsolicited event encountered: ET: %u, CC: %u\n",
        v17,
        *(unsigned __int8 *)(v5 + 8 * v7 + 11));
    }
    goto LABEL_28;
  }
  v12 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 576LL) + 8 * ((v11 >> 16) & 0x1F) + 112);
  *a2 = *(_QWORD *)(v12 + 176);
  v13 = *(_QWORD *)((-(__int64)(*(_DWORD *)(v12 + 160) != 0) & 0xFFFFFFFFFFFFFFE8uLL) + v12 + 112);
  *(_DWORD *)(v13 + 12) &= ~1u;
  ++*(_QWORD *)(v12 + 168);
  v14 = *a2;
  *(_DWORD *)(*a2 + 36) = 0;
  switch ( *(_BYTE *)(v5 + 8 * v7 + 11) )
  {
    case 1:
      if ( (*(_DWORD *)(v5 + 8 * v7 + 12) & 4) == 0 )
        goto LABEL_22;
      break;
    case 2:
      v15 = -1073741805;
      goto LABEL_23;
    case 3:
      v15 = -1073741806;
      goto LABEL_23;
    case 4:
      goto LABEL_22;
    case 6:
      v15 = -1073741820;
      goto LABEL_23;
    case 0xD:
      break;
    case 0x17:
      v15 = -1073545216;
      goto LABEL_23;
    case 0x24:
LABEL_22:
      v15 = -1073741807;
      goto LABEL_23;
    default:
      v15 = -2147481600;
LABEL_23:
      *(_DWORD *)(v14 + 4) = v15;
      v4 = -1073741823;
      v16 = 0;
      goto LABEL_24;
  }
  v4 = 0;
  v16 = *(_DWORD *)(v5 + 8 * v7 + 8) & 0xFFFFFF;
  *(_DWORD *)(v14 + 4) = 0;
  *(_DWORD *)(v14 + 36) = v16;
  v15 = 0;
LABEL_24:
  DbgPrintEx(
    0x93u,
    3u,
    "XHCIDUMP: URB Status %u: URB Transfer Length %u, TRB Completion Code: %u, status =0x%X\n",
    v15,
    v16,
    *(unsigned __int8 *)(v5 + 8 * v7 + 11),
    v4);
LABEL_28:
  if ( ++*(_DWORD *)(a1 + 92) == *(_DWORD *)(a1 + 84) )
  {
    v19 = ++*(_DWORD *)(a1 + 96);
    *(_DWORD *)(a1 + 92) = 0;
    if ( v19 == *(_DWORD *)(a1 + 80) )
    {
      v20 = *(_QWORD *)(a1 + 112);
      v21 = *(_DWORD *)(a1 + 88) == 0;
      *(_DWORD *)(a1 + 96) = 0;
      *(_DWORD *)(a1 + 88) = v21;
    }
    else
    {
      v20 = **(_QWORD **)(a1 + 104);
    }
    *(_QWORD *)(a1 + 104) = v20;
    *(_QWORD *)(a1 + 72) = *(_QWORD *)(v20 + 16);
  }
  Crashdump_EventRing_UpdateDequeuePointer(a1);
LABEL_34:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: end 0x%X\n", v4);
  return v4;
}
