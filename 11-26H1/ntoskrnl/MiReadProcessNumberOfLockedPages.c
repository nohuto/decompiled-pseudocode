/*
 * XREFs of MiReadProcessNumberOfLockedPages @ 0x1404DED10
 * Callers:
 *     MmUpdateMdlTrackerForMdlSwitch @ 0x1406EAAC0 (MmUpdateMdlTrackerForMdlSwitch.c)
 *     MmDeleteProcessAddressSpace @ 0x140B3F940 (MmDeleteProcessAddressSpace.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiReadProcessNumberOfLockedPages(__int64 a1)
{
  __int64 result; // rax
  __int64 *v2; // rdx
  __int64 v3; // r8
  __int64 v4; // rcx

  result = 0LL;
  v2 = (__int64 *)(*(_QWORD *)(a1 + 1040) + 576LL);
  v3 = 4LL;
  do
  {
    v4 = *v2;
    v2 += 8;
    result += v4;
    --v3;
  }
  while ( v3 );
  return result;
}
