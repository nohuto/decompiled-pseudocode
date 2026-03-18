/*
 * XREFs of ?OPMAllocateMemory@OPM@@YAPEAX_K0@Z @ 0x140144FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall OPM::OPMAllocateMemory(OPM *this, __int64 a2)
{
  return ExAllocatePool2(a2 | 2, this, 1297108807LL);
}
