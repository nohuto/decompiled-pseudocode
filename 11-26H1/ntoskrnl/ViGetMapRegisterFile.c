/*
 * XREFs of ViGetMapRegisterFile @ 0x140C2709C
 * Callers:
 *     VfFlushAdapterBuffers @ 0x140C241D0 (VfFlushAdapterBuffers.c)
 *     VfMapTransfer @ 0x140C252F0 (VfMapTransfer.c)
 *     ViSwap @ 0x140C27F8C (ViSwap.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGetMapRegisterFile(__int64 a1)
{
  unsigned __int64 v1; // rcx
  BOOL v2; // eax

  v1 = a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v2 = v1 && *(_DWORD *)v1 == -1393569779;
  return v1 & -(__int64)v2;
}
