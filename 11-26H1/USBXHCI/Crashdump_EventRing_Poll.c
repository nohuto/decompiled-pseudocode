/*
 * XREFs of Crashdump_EventRing_Poll @ 0x140052DA4
 * Callers:
 *     Crashdump_Command_SendCommand @ 0x14005342C (Crashdump_Command_SendCommand.c)
 *     Crashdump_Command_Stop @ 0x1400535D0 (Crashdump_Command_Stop.c)
 *     Crashdump_Endpoint_SendTransferAndPollForCompletion @ 0x140053FEC (Crashdump_Endpoint_SendTransferAndPollForCompletion.c)
 * Callees:
 *     Crashdump_EventRing_UpdateDequeuePointer @ 0x1400532A4 (Crashdump_EventRing_UpdateDequeuePointer.c)
 *     _guard_dispatch_icall @ 0x140059490 (_guard_dispatch_icall.c)
 */

__int64 __fastcall Crashdump_EventRing_Poll(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 (__fastcall *a5)(__int64, __int64, int *))
{
  int v7; // ebp
  int v9; // r14d
  unsigned int v10; // esi
  __int64 v11; // rdi
  int v12; // ecx
  int v13; // r9d
  int v14; // edx
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // eax
  unsigned int v18; // eax
  int v19; // eax
  __int64 v20; // rax
  unsigned int v22; // [rsp+20h] [rbp-58h]
  __int64 v23; // [rsp+20h] [rbp-58h]
  int v24; // [rsp+90h] [rbp+18h] BYREF

  v24 = a3;
  v7 = 0;
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: begin\n");
  v9 = 0;
  LOBYTE(v24) = 1;
  while ( 1 )
  {
    v10 = 0;
    v11 = *(_QWORD *)(a1 + 72) + 16LL * *(unsigned int *)(a1 + 92);
    do
    {
      if ( (*(_DWORD *)(v11 + 12) & 1) == *(_DWORD *)(a1 + 88) )
        break;
      KeStallExecutionProcessor(0xC8u);
      ++v10;
    }
    while ( v10 < 0x4E20 );
    v22 = 200 * v10 / 0x3E8;
    if ( v10 == 20000 )
      break;
    DbgPrintEx(0x93u, 3u, "XHCIDUMP: Events available after %u retries, %u ms\n", v10, v22);
    while ( (_BYTE)v24 )
    {
      v12 = *(_DWORD *)(v11 + 12);
      v13 = *(_DWORD *)(a1 + 88);
      if ( (v12 & 1) != v13 )
        break;
      v14 = (unsigned __int16)v12 >> 10;
      if ( v14 == 32 && (v12 & 4) != 0 )
        v15 = 0LL;
      else
        v15 = *(_QWORD *)v11;
      DbgPrintEx(
        0x93u,
        3u,
        "XHCIDUMP: EventRing: CS: %u, EI: %03u, ET: %u, CC: %u, Len: %u, Addr: 0x%I64X\n",
        v13,
        *(_DWORD *)(a1 + 92),
        v14,
        *(unsigned __int8 *)(v11 + 11),
        *(_DWORD *)(v11 + 8) & 0xFFFFFF,
        v15);
      v16 = (unsigned __int8)HIBYTE(*(_WORD *)(v11 + 12)) >> 2;
      if ( (_DWORD)v16 == a2 )
      {
        v17 = a5(a4, v11, &v24);
        v7 = v17;
        if ( v17 < 0 )
        {
          LODWORD(v23) = (unsigned __int8)v24;
          DbgPrintEx(
            0x93u,
            3u,
            "XHCIDUMP: Callback failed with ntStatus 0x%x, ContinueDraining %u\n",
            (unsigned int)v17,
            v23);
        }
      }
      else if ( (_DWORD)v16 == 34 )
      {
        DbgPrintEx(
          0x93u,
          3u,
          "XHCIDUMP: Ignoring port status change event for port %u, CCS: %u, CSC: %u\n",
          *(unsigned __int8 *)(v11 + 3),
          *(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                    + 16 * ((unsigned int)*(unsigned __int8 *)(v11 + 3) - 1 + 64LL)) & 1,
          (*(_DWORD *)(*(_QWORD *)(**(_QWORD **)(a1 + 8) + 32LL)
                     + 16 * ((unsigned int)*(unsigned __int8 *)(v11 + 3) - 1 + 64LL)) >> 17) & 1);
      }
      else
      {
        LODWORD(v23) = *(unsigned __int8 *)(v11 + 11);
        DbgPrintEx(0x93u, 2u, "XHCIDUMP: Unsolicited event encountered: ET: %u, CC: %u\n", v16, v23);
      }
      v18 = *(_DWORD *)(a1 + 92) + 1;
      *(_DWORD *)(a1 + 92) = v18;
      if ( v18 == *(_DWORD *)(a1 + 84) )
      {
        v19 = ++*(_DWORD *)(a1 + 96);
        *(_DWORD *)(a1 + 92) = 0;
        if ( v19 == *(_DWORD *)(a1 + 80) )
        {
          *(_DWORD *)(a1 + 96) = 0;
          *(_DWORD *)(a1 + 88) = *(_DWORD *)(a1 + 88) == 0;
          v20 = *(_QWORD *)(a1 + 112);
        }
        else
        {
          v20 = **(_QWORD **)(a1 + 104);
        }
        *(_QWORD *)(a1 + 104) = v20;
        *(_QWORD *)(a1 + 72) = *(_QWORD *)(v20 + 16);
        v18 = 0;
      }
      ++v9;
      v11 = *(_QWORD *)(a1 + 72) + 16LL * v18;
      if ( v7 < 0 )
        goto LABEL_29;
    }
    Crashdump_EventRing_UpdateDequeuePointer(a1);
    if ( !(_BYTE)v24 )
    {
      v7 = 0;
      goto LABEL_29;
    }
  }
  DbgPrintEx(0x93u, 1u, "XHCIDUMP: No more events available after %u retries, %u ms\n", 20000, v22);
  v7 = -1073741643;
LABEL_29:
  DbgPrintEx(0x93u, 3u, "XHCIDUMP: Crashdump_EventRing_Poll: end 0x%X, events drained %u\n", v7, v9);
  return (unsigned int)v7;
}
