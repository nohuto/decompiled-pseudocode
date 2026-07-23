/*
 * XREFs of ExpCenturyDpcRoutine @ 0x1404F6EE0
 * Callers:
 *     <none>
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140216EA0 (PsGetServerSiloGlobals.c)
 *     ObfReferenceObjectWithTag @ 0x1402780A0 (ObfReferenceObjectWithTag.c)
 *     ExQueueWorkItem @ 0x140383A20 (ExQueueWorkItem.c)
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine9 @ 0x140737740 (KiCustomAccessRoutine9.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall ExpCenturyDpcRoutine(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4)
{
  void *v8; // rcx
  __int64 v9; // rdi
  _DWORD v10[24]; // [rsp+0h] [rbp-1A8h] BYREF
  _BYTE v11[10]; // [rsp+60h] [rbp-148h] BYREF
  __int64 v12; // [rsp+6Ah] [rbp-13Eh]
  __int64 v13; // [rsp+B2h] [rbp-F6h]
  __int64 v14; // [rsp+BAh] [rbp-EEh]
  _DWORD *v15; // [rsp+180h] [rbp-28h]

  v15 = v10;
  memset_0(v11, 0, 0x62uLL);
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
    KiCustomAccessRoutine9(a2);
  }
  v9 = *((_QWORD *)PsGetServerSiloGlobals(a2) + 153);
  if ( _InterlockedIncrement((volatile signed __int32 *)(v9 + 928)) == 1 )
  {
    if ( a2 )
      ObfReferenceObjectWithTag(v8, 0x53707845u);
    ExQueueWorkItem((PWORK_QUEUE_ITEM)(v9 + 736), DelayedWorkQueue);
  }
}
