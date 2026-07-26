/*
 * XREFs of ?Initialize@KPushLockManualConstruct@@QEAAXXZ @ 0x14014A32C
 * Callers:
 *     ?ndisInitializeDmaSubsystem@@YAXXZ @ 0x1400C9AC0 (-ndisInitializeDmaSubsystem@@YAXXZ.c)
 *     DriverEntry @ 0x14018E240 (DriverEntry.c)
 *     ?ndisPcwInitialize@@YAJXZ @ 0x1401905D0 (-ndisPcwInitialize@@YAJXZ.c)
 *     ?ndisMpHookNmrInitializeClient@@YAJXZ @ 0x140190D24 (-ndisMpHookNmrInitializeClient@@YAJXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall KPushLockManualConstruct::Initialize(KPushLockManualConstruct *this)
{
  *(_QWORD *)this = 0LL;
}
