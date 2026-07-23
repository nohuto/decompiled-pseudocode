/*
 * XREFs of IovLogNulledMdl @ 0x140646190
 * Callers:
 *     <none>
 * Callees:
 *     DifNotifyPluginSystemEvent @ 0x1404CFE80 (DifNotifyPluginSystemEvent.c)
 *     IovAiIsInvalidIrpMdlMarking @ 0x140645D04 (IovAiIsInvalidIrpMdlMarking.c)
 */

__int64 __fastcall IovLogNulledMdl(__int64 a1, __int64 a2, __int64 a3)
{
  __int128 v7; // [rsp+20h] [rbp-38h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int128 v10; // [rsp+40h] [rbp-18h]
  unsigned __int64 retaddr; // [rsp+58h] [rbp+0h]

  DWORD1(v7) = 0;
  if ( (VfRuleClasses & 0x10) == 0 || (VfRuleClasses & 0x20000000000000LL) == 0 || retaddr < 0x7FFFFFFF0000LL )
    return 3221225659LL;
  if ( !a1 )
    return 3221225711LL;
  if ( *(_QWORD *)(a1 + 8) )
    return 3221225659LL;
  if ( !a2 )
    return 3221225712LL;
  if ( !a3 )
    return 3221225713LL;
  if ( !IovAiIsInvalidIrpMdlMarking(a1, a2) )
    return 3221225485LL;
  *(_QWORD *)&v7 = 3LL;
  *((_QWORD *)&v7 + 1) = a2;
  v8 = a1;
  v10 = 0LL;
  v9 = a3;
  DifNotifyPluginSystemEvent(3, &v7);
  return 0LL;
}
