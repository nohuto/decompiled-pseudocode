/*
 * XREFs of PostEvent @ 0x14021BE38
 * Callers:
 *     NtMITPostWindowEventMessage @ 0x1401E1450 (NtMITPostWindowEventMessage.c)
 * Callees:
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400D0B5C (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 *     EditionPostInputEvent @ 0x140162660 (EditionPostInputEvent.c)
 */

bool __fastcall PostEvent(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  bool result; // al
  _BYTE v10[8]; // [rsp+30h] [rbp-18h] BYREF
  __int64 v11; // [rsp+38h] [rbp-10h]

  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v10, a2, a3);
  result = (unsigned int)EditionPostInputEvent(30LL, a1, a2, a3, a4, a5) != 0;
  if ( v10[0] )
    --*(_DWORD *)(v11 + 28);
  return result;
}
