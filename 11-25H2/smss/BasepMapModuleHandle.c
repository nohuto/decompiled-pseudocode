/*
 * XREFs of BasepMapModuleHandle @ 0x14001EE5C
 * Callers:
 *     GetProcAddressForCaller @ 0x14001D308 (GetProcAddressForCaller.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall BasepMapModuleHandle(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return *(_QWORD *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 16LL);
  if ( (a1 & 3) == 0 )
    return a1;
  return result;
}
