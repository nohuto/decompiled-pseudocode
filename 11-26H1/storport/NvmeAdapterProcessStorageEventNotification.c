/*
 * XREFs of NvmeAdapterProcessStorageEventNotification @ 0x14012C4F0
 * Callers:
 *     NvmeControllerAsyncEventCommandCompletion @ 0x1400F06B0 (NvmeControllerAsyncEventCommandCompletion.c)
 *     NvmeControllerProcessHealthInfoLogForAen @ 0x1400F8E6C (NvmeControllerProcessHealthInfoLogForAen.c)
 *     NvmeControllerReset @ 0x1400FA490 (NvmeControllerReset.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000A250 (RaidAllocatePool.c)
 *     McTemplateK0qjzqxxqqq_EtwWriteTransfer @ 0x14008DF3C (McTemplateK0qjzqxxqqq_EtwWriteTransfer.c)
 *     StorEnqueueEventNotificationForProcessing @ 0x140097200 (StorEnqueueEventNotificationForProcessing.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

void __fastcall NvmeAdapterProcessStorageEventNotification(__int64 a1, _QWORD *a2, const void *a3, unsigned int a4)
{
  unsigned int v4; // r15d
  size_t v5; // rdi
  char v9; // bl
  int v10; // edx
  __int64 v11; // rcx
  int v12; // eax
  __int64 Pool; // rsi
  __int16 v14; // ax
  int v15; // eax
  __int128 v16; // [rsp+60h] [rbp-28h]

  LOBYTE(v4) = 0;
  v5 = a4;
  if ( !*(_QWORD *)(a1 + 1432) )
    return;
  if ( *(_QWORD *)(a1 + 608) )
  {
    v9 = -69;
    goto LABEL_28;
  }
  if ( !a3 )
  {
    if ( !a4 )
      goto LABEL_6;
LABEL_10:
    v9 = 6;
    goto LABEL_28;
  }
  if ( a4 - 1 > 0xFFF )
    goto LABEL_10;
LABEL_6:
  v10 = *a2 && ((*a2 - 1LL) & *a2) == 0;
  v11 = a2[1];
  v12 = v11 && ((v11 - 1) & v11) == 0;
  if ( v10 == v12 )
  {
    v9 = 13;
    goto LABEL_28;
  }
  v4 = a4 + 52;
  if ( !a4 )
    v4 = 56;
  Pool = RaidAllocatePool(64LL, v4, 1313169746LL, *(_QWORD *)(a1 + 8));
  if ( !Pool )
  {
    v9 = -102;
    goto LABEL_28;
  }
  v14 = v5 + 36;
  v16 = *(_OWORD *)a2;
  if ( !(_DWORD)v5 )
    v14 = 40;
  *(_WORD *)(Pool + 18) = v14;
  *(_OWORD *)(Pool + 24) = v16;
  *(_WORD *)(Pool + 16) = 1;
  *(_DWORD *)(Pool + 20) = 0;
  *(_DWORD *)(Pool + 48) = v5;
  if ( (_DWORD)v5 )
    memmove((void *)(Pool + 52), a3, v5);
  v15 = StorEnqueueEventNotificationForProcessing(*(_QWORD *)(a1 + 1432), (struct _LIST_ENTRY *)Pool);
  v9 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag((PVOID)Pool, 0x4E456152u);
LABEL_28:
    if ( (byte_140173448 & 0x40) != 0 )
      McTemplateK0qjzqxxqqq_EtwWriteTransfer(
        a1 + 1048,
        (*(_BYTE *)(a1 + 144) & 1) != 0 ? 20 : 17,
        (__int64)a3,
        *(_DWORD *)(a1 + 56),
        a1 + 1048,
        *(const wchar_t **)(a1 + 1032),
        (*(_BYTE *)(a1 + 144) & 1) != 0 ? 20 : 17,
        *a2,
        a2[1],
        v5,
        v4,
        v9);
  }
}
