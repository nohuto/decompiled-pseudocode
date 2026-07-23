/*
 * XREFs of VslpRegisterKsrCallback @ 0x140CC0060
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VslpRegisterKsrCallback(__int64 a1)
{
  *(_QWORD *)&stru_140FC11F0.SchedulerApc.Type = a1;
}
