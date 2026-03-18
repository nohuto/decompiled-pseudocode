/*
 * XREFs of ZwAlpcCancelMessage @ 0x14069C080
 * Callers:
 *     SshpAlpcProcessAlpcMessage @ 0x14075844C (SshpAlpcProcessAlpcMessage.c)
 *     PopUmpoProcessMessage @ 0x140A1899C (PopUmpoProcessMessage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwAlpcCancelMessage(__int64 a1, __int64 a2)
{
  _disable();
  __readeflags();
  return KiServiceInternal(a1, a2);
}
