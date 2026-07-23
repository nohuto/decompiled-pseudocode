/*
 * XREFs of MiNodeFromFaultPacket @ 0x1403A7670
 * Callers:
 *     MiComputeFaultNode @ 0x140372808 (MiComputeFaultNode.c)
 *     MiInPagePageTable @ 0x1403A69D0 (MiInPagePageTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiNodeFromFaultPacket(__int64 a1)
{
  __int64 v1; // rax
  _BYTE *v2; // rcx

  v1 = *(_QWORD *)(a1 + 16);
  v2 = (_BYTE *)(v1 & 0xFFFFFFFFFFFFFFFEuLL);
  if ( (v1 & 1) != 0 && (*v2 == 2 || (unsigned __int8)(*v2 - 7) <= 1u || *v2 == 4) )
    return *(unsigned int *)((v1 & 0xFFFFFFFFFFFFFFFEuLL) + 40);
  else
    return 0LL;
}
