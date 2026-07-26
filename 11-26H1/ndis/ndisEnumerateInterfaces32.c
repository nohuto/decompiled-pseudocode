/*
 * XREFs of ndisEnumerateInterfaces32 @ 0x140174CBC
 * Callers:
 *     ?ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z @ 0x1401832D0 (-ndisHandlePnPRequest@@_Y2PAGENPNP@@AJPEAU_IRP@@@Z.c)
 * Callees:
 *     ?ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z @ 0x14001C710 (-ndisGetNsiClientInfo@@YAXPEAU_NDIS_NSI_CLIENT_INFO@@@Z.c)
 *     ?ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_INFO@@E@Z @ 0x140043800 (-ndisIsCompartmentAccessibleByClient@@YAEPEBU_NDIS_IF_COMPARTMENT_BLOCK@@PEBU_NDIS_NSI_CLIENT_IN.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisEnumerateInterfaces32(char *a1, size_t Size, _DWORD *a3)
{
  size_t v4; // rbp
  size_t v7; // r14
  char *v8; // r13
  KIRQL v9; // al
  struct _NDIS_M_DRIVER_BLOCK *v10; // rsi
  char *v11; // r14
  KSPIN_LOCK *p_SpinLock; // r12
  _NDIS_MINIPORT_BLOCK *MiniportQueue; // rbx
  unsigned int v14; // r12d
  unsigned int v15; // edx
  size_t Length; // r8
  char *v17; // r13
  size_t v18; // r8
  unsigned __int64 v19; // rcx
  __int128 v20; // [rsp+20h] [rbp-58h] BYREF
  __int64 v21; // [rsp+30h] [rbp-48h]
  KIRQL v22; // [rsp+88h] [rbp+10h]
  unsigned int v23; // [rsp+90h] [rbp+18h]

  v4 = (unsigned int)Size;
  v20 = 0LL;
  v21 = 0LL;
  ndisGetNsiClientInfo((struct _NDIS_NSI_CLIENT_INFO *)&v20);
  *a3 = 0;
  if ( (unsigned int)v4 < 0x20 )
    return 3221225507LL;
  v23 = v4 - 32;
  v7 = v4;
  memset(a1, 0, v4);
  v8 = &a1[v4];
  v9 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
  v10 = ndisMiniDriverList;
  v22 = v9;
  if ( ndisMiniDriverList )
  {
    v11 = a1 + 16;
    do
    {
      p_SpinLock = &v10->Ref.SpinLock;
      KeAcquireSpinLockAtDpcLevel(&v10->Ref.SpinLock);
      MiniportQueue = v10->MiniportQueue;
      if ( MiniportQueue )
      {
        v14 = v23;
        do
        {
          if ( MiniportQueue->PnPDeviceState == NdisPnPDeviceStarted
            && ndisIsCompartmentAccessibleByClient(
                 MiniportQueue->IfBlock->Compartment,
                 (const struct _NDIS_NSI_CLIENT_INFO *)&v20,
                 0) )
          {
            ++*((_DWORD *)a1 + 1);
            v15 = MiniportQueue->pAdapterInstanceName->Length + MiniportQueue->MiniportName.Length + 16;
            *((_DWORD *)a1 + 2) += v15;
            if ( v14 >= v15 )
            {
              ++*(_DWORD *)a1;
              v14 -= v15;
              Length = MiniportQueue->MiniportName.Length;
              v17 = &v8[-Length];
              *(_WORD *)v11 = Length;
              *((_WORD *)v11 + 1) = Length;
              memmove(v17, MiniportQueue->MiniportName.Buffer, Length);
              *((_DWORD *)v11 + 1) = (_DWORD)v17 - (_DWORD)a1;
              v18 = MiniportQueue->pAdapterInstanceName->Length;
              *((_WORD *)v11 + 4) = v18;
              v8 = &v17[-v18];
              *((_WORD *)v11 + 5) = v18;
              memmove(v8, MiniportQueue->pAdapterInstanceName->Buffer, v18);
              *((_DWORD *)v11 + 3) = (_DWORD)v8 - (_DWORD)a1;
              v11 += 16;
            }
          }
          MiniportQueue = MiniportQueue->NextMiniport;
        }
        while ( MiniportQueue );
        v23 = v14;
        p_SpinLock = &v10->Ref.SpinLock;
      }
      KeReleaseSpinLockFromDpcLevel(p_SpinLock);
      v10 = v10->NextDriver;
    }
    while ( v10 );
    v9 = v22;
    v7 = v4;
  }
  KeReleaseSpinLock(&ndisMiniDriverListLock, v9);
  v19 = *((unsigned int *)a1 + 2);
  *a3 = v4;
  return v7 - 32 < v19 ? 0x80000005 : 0;
}
