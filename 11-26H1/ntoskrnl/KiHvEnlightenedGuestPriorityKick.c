/*
 * XREFs of KiHvEnlightenedGuestPriorityKick @ 0x1404675F0
 * Callers:
 *     KiInsertQueueDpc @ 0x1402BD330 (KiInsertQueueDpc.c)
 *     KiInsertTimer2 @ 0x140337730 (KiInsertTimer2.c)
 *     KeSetTimer2 @ 0x14037A500 (KeSetTimer2.c)
 *     KiIpiEnlightenedGuestPriorityKick @ 0x140467500 (KiIpiEnlightenedGuestPriorityKick.c)
 *     KiApplyForegroundBoostThread @ 0x140521D48 (KiApplyForegroundBoostThread.c)
 * Callees:
 *     EtwTraceXSchedulerPriorityKickSend @ 0x140527744 (EtwTraceXSchedulerPriorityKickSend.c)
 */

__int64 __fastcall KiHvEnlightenedGuestPriorityKick(__int64 a1, __int64 a2, char *a3)
{
  __int64 result; // rax
  _DWORD *v4; // rdx
  bool v5; // zf
  __int64 v6; // rdx
  __int64 v7; // rbx

  result = a2;
  v4 = *(_DWORD **)(a2 + 36600);
  if ( v4
    && *(_QWORD *)(a1 + 36600)
    && a1 != result
    && ((*v4 & 0x100000) != 0 || (*v4 & 0x40000) != 0 && (unsigned __int8)*v4 < (int)a3) )
  {
    v5 = HvlpVirtualProcessorsIdentityMapped == 0;
    v6 = *(_QWORD *)(a1 + 36600);
    *(_DWORD *)(v6 + 12) = 2;
    v7 = *(unsigned int *)(result + 36);
    if ( v5 )
    {
      a3 = HvlpVirtualProcessorMapping;
      LODWORD(v7) = (unsigned __int8)HvlpVirtualProcessorMapping[2 * (unsigned int)v7 + 1] | ((unsigned __int8)HvlpVirtualProcessorMapping[2 * v7] << 6);
    }
    *(_DWORD *)(v6 + 8) = v7;
    if ( (BYTE4(xmmword_140FBFC10) & 0x20) != 0 )
      EtwTraceXSchedulerPriorityKickSend(*(unsigned int *)(result + 36), 2LL, a3);
    result = (unsigned int)v7;
    __writemsr(0x400000C2u, (unsigned int)v7);
  }
  return result;
}
