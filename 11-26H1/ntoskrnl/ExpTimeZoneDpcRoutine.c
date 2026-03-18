/*
 * XREFs of ExpTimeZoneDpcRoutine @ 0x1406CB350
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216B70 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x140278B30 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140381C70 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140536000 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1407311E0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine8 @ 0x140732AB0 (KiCustomAccessRoutine8.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

void __fastcall ExpTimeZoneDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void *v8; // rcx
  __int64 v9; // rdi
  _DWORD v10[24]; // [rsp+0h] [rbp-1B8h] BYREF
  _BYTE v11[17]; // [rsp+70h] [rbp-148h] BYREF
  __int64 v12; // [rsp+81h] [rbp-137h]
  __int64 v13; // [rsp+B9h] [rbp-FFh]
  __int64 v14; // [rsp+C9h] [rbp-EFh]
  _DWORD *v15; // [rsp+190h] [rbp-28h]

  v15 = v10;
  memset_0(v11, 0, 0x61uLL);
  if ( a2 >> 47 != -1 && a2 >> 47 != 0 )
  {
    v10[12] = 0;
    *(_BYTE *)a1 = 0;
    *(_QWORD *)(a1 + 32) = a4 >> 8;
    v14 = a3;
    v13 = __ROL8__(a2, a3);
    v12 = __ROR8__(a1, a3);
    *(_QWORD *)(a1 + 40) ^= a4;
    *(_QWORD *)(a1 + 48) ^= a3;
    KiCustomAccessRoutine8(a2);
  }
  v9 = *((_QWORD *)PsGetServerSiloGlobals(a2) + 153);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( a2 )
      ObfReferenceObjectWithTag(v8, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 576), DelayedWorkQueue);
  }
}
