/*
 * XREFs of ObRetagReferences @ 0x140A68380
 * Callers:
 *     SepUpdateSiloInClientSecurity @ 0x140B685F0 (SepUpdateSiloInClientSecurity.c)
 *     PspAllocateProcess @ 0x140B7E8A8 (PspAllocateProcess.c)
 * Callees:
 *     ObpPushStackInfo @ 0x140264F60 (ObpPushStackInfo.c)
 */

__int64 __fastcall ObRetagReferences(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rbx
  __int64 result; // rax

  if ( ObpTraceFlags )
  {
    v3 = a1 - 48;
    ObpPushStackInfo(a1 - 48, 1, a3);
    return ObpPushStackInfo(v3, -1, 0x746C6644u);
  }
  return result;
}
