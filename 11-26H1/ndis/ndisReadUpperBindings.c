/*
 * XREFs of ndisReadUpperBindings @ 0x14004BD10
 * Callers:
 *     NdisReadConfiguration @ 0x140020C40 (NdisReadConfiguration.c)
 * Callees:
 *     memmove @ 0x1400EA1C0 (memmove.c)
 */

__int64 __fastcall ndisReadUpperBindings(_NDIS_M_DRIVER_BLOCK *a1, __int64 *a2, unsigned int *a3)
{
  int v4; // ebx
  KIRQL v7; // al
  struct _NDIS_MINIPORT_BLOCK *v8; // r9
  KIRQL v9; // r12
  unsigned int v10; // ebx
  __int64 Pool2; // rax
  __int64 v12; // rdi
  struct _NDIS_MINIPORT_BLOCK *v14; // rsi
  _WORD *v15; // r13
  __int64 Length; // rcx
  KIRQL i; // [rsp+58h] [rbp+10h]

  *a2 = 0LL;
  v4 = 0;
  *a3 = 0;
  v7 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v8 = ndisMiniportList;
  v9 = v7;
  for ( i = v7; v8; v8 = v8->NextGlobalMiniport )
  {
    if ( v8->DriverHandle == a1 )
      v4 += v8->MiniportName.Length + 2;
  }
  v10 = v4 + 2;
  Pool2 = ExAllocatePool2(66LL, v10, 1852851278LL);
  v12 = Pool2;
  if ( Pool2 )
  {
    v14 = ndisMiniportList;
    v15 = (_WORD *)Pool2;
    if ( ndisMiniportList )
    {
      do
      {
        if ( v14->DriverHandle == a1 )
        {
          memmove(v15, v14->MiniportName.Buffer, v14->MiniportName.Length);
          Length = v14->MiniportName.Length;
          *(_WORD *)((char *)v15 + Length) = 0;
          v15 = (_WORD *)((char *)v15 + Length + 2);
        }
        v14 = v14->NextGlobalMiniport;
      }
      while ( v14 );
      v9 = i;
    }
    *a2 = v12;
    *v15 = 0;
    *a3 = v10;
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
    return 0LL;
  }
  else
  {
    KeReleaseSpinLock(&ndisMiniportListLock, v9);
    return 3221225626LL;
  }
}
