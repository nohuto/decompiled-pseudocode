/*
 * XREFs of MiGetAweNode @ 0x1405289D4
 * Callers:
 *     MiWriteAwePtes @ 0x140471690 (MiWriteAwePtes.c)
 *     MiReferenceIncomingPhysicalPages @ 0x140707250 (MiReferenceIncomingPhysicalPages.c)
 *     MiProtectAwePrepare @ 0x14087F400 (MiProtectAwePrepare.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14087FCE0 (NtMapUserPhysicalPagesScatter.c)
 *     NtMapUserPhysicalPages @ 0x140B3C1D0 (NtMapUserPhysicalPages.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiGetAweNode(unsigned __int64 a1)
{
  _QWORD *v1; // r8
  unsigned __int64 v2; // r9
  __int64 v3; // r10

  v1 = (_QWORD *)KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors[4].StaticBitmap[30];
  if ( !v1 )
    return 0LL;
  v2 = a1 >> 12;
  do
  {
    v3 = v1[3];
    if ( v2 > (*(unsigned int *)(v3 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 33) << 32)) )
    {
      v1 = (_QWORD *)v1[1];
    }
    else
    {
      if ( v2 >= (*(unsigned int *)(v3 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v3 + 32) << 32)) )
        return (unsigned __int64)(v1 - 2) & -(__int64)(v1 != 0LL);
      v1 = (_QWORD *)*v1;
    }
  }
  while ( v1 );
  return (unsigned __int64)(v1 - 2) & -(__int64)(v1 != 0LL);
}
