/*
 * XREFs of ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x140116BE0
 * Callers:
 *     <none>
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x140179E6C (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 */

char __fastcall tagPROCESSINFO::SyncAndTestFreeze(tagPROCESSINFO *this)
{
  int IsProcessDeepFrozen; // eax
  int v3; // r8d
  int v4; // edx
  char result; // al
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  IsProcessDeepFrozen = KfIsProcessDeepFrozen(*(_QWORD *)this);
  v3 = *((_DWORD *)this + 296);
  v4 = IsProcessDeepFrozen == 0;
  if ( v4 == v3 )
    return v3 == 0;
  if ( IsProcessDeepFrozen )
    return 1;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v6, v4, v3);
  result = !tagPROCESSINFO::JITThaw(this);
  if ( v6[0] )
    --*(_DWORD *)(v7 + 28);
  return result;
}
