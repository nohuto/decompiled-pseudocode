/*
 * XREFs of ?ArManagerCreate@@YAJPEAPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074CF4
 * Callers:
 *     PsmInitializeServiceExtension4 @ 0x180074560 (PsmInitializeServiceExtension4.c)
 * Callees:
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     CempLockInitialize @ 0x180034D44 (CempLockInitialize.c)
 *     CemRcTableInitialize @ 0x180049464 (CemRcTableInitialize.c)
 *     ?ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z @ 0x180074DBC (-ArManagerDestroy@@YAXPEAU_ACTIVITY_RESTARTER@@@Z.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 */

__int64 __fastcall ArManagerCreate(struct _ACTIVITY_RESTARTER **a1)
{
  struct _ACTIVITY_RESTARTER *Heap; // rax
  unsigned int v3; // edi
  struct _ACTIVITY_RESTARTER *v4; // rbx
  int v5; // esi

  Heap = (struct _ACTIVITY_RESTARTER *)HampAllocateHeap(0x58uLL);
  v3 = 0;
  v4 = Heap;
  if ( Heap )
  {
    memset_0(Heap, 0, 0x58uLL);
    CemRcTableInitialize((__int64)HampHostIdStoreSessionDestroy, v4);
    CempLockInitialize((__int64)v4 + 48);
    v5 = HamConnectToServer(ArHamCallback, (char *)v4 + 80);
    if ( v5 < 0 || (v5 = TpAllocWork((char *)v4 + 64, ArCsStateChangeCallback, v4, 0LL), v5 < 0) )
    {
      ArManagerDestroy(v4);
      return (unsigned int)v5;
    }
    else
    {
      *a1 = v4;
    }
  }
  else
  {
    return (unsigned int)-1073741801;
  }
  return v3;
}
