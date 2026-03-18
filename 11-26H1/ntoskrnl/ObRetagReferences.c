/*
 * XREFs of ObRetagReferences @ 0x140966310
 * Callers:
 *     PspAllocateProcess @ 0x140964C24 (PspAllocateProcess.c)
 *     SepUpdateSiloInClientSecurity @ 0x140B65550 (SepUpdateSiloInClientSecurity.c)
 * Callees:
 *     ObpPushStackInfo @ 0x1402659F0 (ObpPushStackInfo.c)
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
