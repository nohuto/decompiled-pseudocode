/*
 * XREFs of KeGetThreadQos @ 0x1405F8CE0
 * Callers:
 *     ?PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z @ 0x14080525C (-PspQueryWobTicketQos@@YAJPEAXDKPEAK@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall KeGetThreadQos(__int64 a1)
{
  return *(_BYTE *)(a1 + 516);
}
