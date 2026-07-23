/*
 * XREFs of CmpEnableLazyFlushDpcRoutine @ 0x140467E40
 * Callers:
 *     <none>
 * Callees:
 *     CmpEnableLazyFlush @ 0x140468400 (CmpEnableLazyFlush.c)
 *     _local_unwind @ 0x140538480 (_local_unwind.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     KiCustomAccessRoutine4 @ 0x1407378C0 (KiCustomAccessRoutine4.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

void __fastcall CmpEnableLazyFlushDpcRoutine(
        struct _KDPC *Dpc,
        __int64 DeferredContext,
        unsigned __int64 SystemArgument1,
        unsigned __int64 SystemArgument2)
{
  _DWORD v8[20]; // [rsp+0h] [rbp-F8h] BYREF
  _BYTE v9[37]; // [rsp+50h] [rbp-A8h] BYREF
  __int64 v10; // [rsp+75h] [rbp-83h]
  __int64 v11; // [rsp+7Dh] [rbp-7Bh]
  unsigned __int64 v12; // [rsp+A5h] [rbp-53h]
  _DWORD *v13; // [rsp+B0h] [rbp-48h]

  v13 = v8;
  memset_0(v9, 0, 0x5DuLL);
  if ( DeferredContext >> 47 != -1 && DeferredContext >> 47 != 0 )
  {
    v8[12] = 0;
    Dpc->Type = 0;
    Dpc->DeferredContext = (PVOID)(SystemArgument2 >> 8);
    v12 = SystemArgument1;
    v10 = __ROL8__(DeferredContext, SystemArgument1);
    v11 = __ROR8__(Dpc, SystemArgument1);
    Dpc->SystemArgument1 = (PVOID)((unsigned __int64)Dpc->SystemArgument1 ^ SystemArgument2);
    Dpc->SystemArgument2 = (PVOID)((unsigned __int64)Dpc->SystemArgument2 ^ SystemArgument1);
    KiCustomAccessRoutine4(DeferredContext);
  }
  CmpEnableLazyFlush(1LL);
}
