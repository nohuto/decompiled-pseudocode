/*
 * XREFs of ?SyncAndTestFreeze@tagPROCESSINFO@@QEAA_NXZ @ 0x1401A6E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Arm@AtomicExecutionCheck@@QEAAXXZ @ 0x1401A4F40 (-Arm@AtomicExecutionCheck@@QEAAXXZ.c)
 *     ?JITThaw@tagPROCESSINFO@@AEAA_NXZ @ 0x1401A6820 (-JITThaw@tagPROCESSINFO@@AEAA_NXZ.c)
 */

char __fastcall tagPROCESSINFO::SyncAndTestFreeze(tagPROCESSINFO *this)
{
  int IsProcessDeepFrozen; // eax
  int v3; // r8d
  _BOOL8 v4; // rdx
  char result; // al
  _BYTE v6[8]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v7; // [rsp+28h] [rbp-10h]

  IsProcessDeepFrozen = KfIsProcessDeepFrozen(*(_QWORD *)this);
  v3 = *((_DWORD *)this + 290);
  v4 = IsProcessDeepFrozen == 0;
  if ( v4 == v3 )
    return v3 == 0;
  if ( IsProcessDeepFrozen )
    return 1;
  v7 = 0LL;
  v6[0] = 0;
  AtomicExecutionCheck::Arm((AtomicExecutionCheck *)v6, v4);
  result = tagPROCESSINFO::JITThaw(this) ^ 1;
  if ( v6[0] )
    --*(_DWORD *)(v7 + 28);
  return result;
}
