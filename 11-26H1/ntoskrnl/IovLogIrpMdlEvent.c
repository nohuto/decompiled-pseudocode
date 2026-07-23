/*
 * XREFs of IovLogIrpMdlEvent @ 0x140533384
 * Callers:
 *     IopAllocateMdl @ 0x1403A0940 (IopAllocateMdl.c)
 *     IoAllocateMdl @ 0x1404046D0 (IoAllocateMdl.c)
 *     IovpLocalCompletionRoutine @ 0x140C4B580 (IovpLocalCompletionRoutine.c)
 *     IovFreeIrpPrivate @ 0x140C4B9D0 (IovFreeIrpPrivate.c)
 * Callees:
 *     DifNotifyPluginSystemEvent @ 0x1404CFE80 (DifNotifyPluginSystemEvent.c)
 *     VfIsRuleClassEnabled @ 0x140C4C320 (VfIsRuleClassEnabled.c)
 */

void __fastcall IovLogIrpMdlEvent(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v6; // [rsp+20h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-28h]
  __int64 v8; // [rsp+38h] [rbp-20h]
  __int128 v9; // [rsp+40h] [rbp-18h]

  if ( KernelVerifier == 1 )
  {
    if ( (unsigned __int8)VfIsRuleClassEnabled(53LL) )
    {
      *(_QWORD *)&v6 = 3LL;
      *((_QWORD *)&v6 + 1) = a1;
      v7 = a2;
      v9 = 0LL;
      v8 = a3;
      DifNotifyPluginSystemEvent(3, &v6);
    }
  }
}
