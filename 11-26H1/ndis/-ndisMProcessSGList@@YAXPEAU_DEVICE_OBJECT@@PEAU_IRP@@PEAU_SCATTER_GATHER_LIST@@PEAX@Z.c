/*
 * XREFs of ?ndisMProcessSGList@@YAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z @ 0x1400CA880
 * Callers:
 *     <none>
 * Callees:
 *     ?NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z @ 0x1400588A0 (-NDIS_STACK_RESERVED_FROM_PACKET@@YAXPEAU_NDIS_PACKET@@PEAPEAU_NDIS_STACK_RESERVED@@@Z.c)
 *     ?ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z @ 0x14008B440 (-ndisMSendCompleteX@@YAXPEAXPEAU_NDIS_PACKET@@H@Z.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 */

void __fastcall ndisMProcessSGList(
        struct _DEVICE_OBJECT *a1,
        struct _IRP *a2,
        struct _SCATTER_GATHER_LIST *a3,
        struct _NDIS_PACKET *a4)
{
  __int64 NdisPacketOobOffset; // rax
  __int64 v5; // r10
  struct _NDIS_STACK_RESERVED *v6; // rdx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rcx
  unsigned int v10; // eax
  struct _NDIS_PACKET *v11; // [rsp+40h] [rbp+18h] BYREF
  struct _NDIS_STACK_RESERVED *v12; // [rsp+48h] [rbp+20h] BYREF

  v11 = a4;
  NdisPacketOobOffset = a4->Private.NdisPacketOobOffset;
  v12 = 0LL;
  *(unsigned __int64 *)((char *)a4->Reserved + NdisPacketOobOffset) = (unsigned __int64)a3;
  NDIS_STACK_RESERVED_FROM_PACKET(v11, &v12);
  v6 = v12;
  v7 = 16LL;
  if ( **(_BYTE **)v12 == 5 )
    v7 = 32LL;
  v8 = *(_QWORD *)(v7 + *(_QWORD *)v12);
  *(_BYTE *)(v5 + 41) |= 0x10u;
  if ( (*(_DWORD *)(v8 + 120) & 0x20000) != 0 )
  {
    (*(void (__fastcall **)(_QWORD, struct _NDIS_PACKET **, __int64))(*((_QWORD *)v6 + 1) + 208LL))(
      *(_QWORD *)(*((_QWORD *)v6 + 1) + 200LL),
      &v11,
      1LL);
  }
  else
  {
    v9 = *(_QWORD *)(v8 + 24);
    if ( (*(_BYTE *)(v8 + 928) & 1) != 0 )
    {
      (*(void (__fastcall **)(__int64, struct _NDIS_PACKET **, __int64))(v8 + 1808))(v9, &v11, 1LL);
    }
    else
    {
      v10 = (*(__int64 (__fastcall **)(__int64, struct _NDIS_PACKET *, _QWORD))(*(_QWORD *)(v8 + 3760) + 200LL))(
              v9,
              v11,
              v11->Private.Flags);
      if ( v10 != 259 )
        ndisMSendCompleteX((struct _NDIS_MINIPORT_BLOCK *)v8, v11, v10);
    }
  }
}
