/*
 * XREFs of MiCopyOnWriteGetPage @ 0x14036E07C
 * Callers:
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 *     MiGetPage @ 0x140285C00 (MiGetPage.c)
 *     MiGetSlabPage @ 0x14033C304 (MiGetSlabPage.c)
 */

__int64 __fastcall MiCopyOnWriteGetPage(__int64 a1, __int64 *a2)
{
  int v4; // r9d
  __int64 v5; // r11
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // rdi
  unsigned int IdealGlobalNode; // r9d
  unsigned __int8 v9; // al
  char v10; // r9
  int v11; // r10d
  unsigned int *p_PageColor; // r11
  int v13; // ecx
  unsigned int v14; // edi
  struct _KTHREAD *v15; // rcx
  __int64 result; // rax

  v4 = *(_DWORD *)(a1 + 48);
  v5 = *(_QWORD *)(a1 + 72);
  if ( v4 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IdealGlobalNode = v4 - 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( v5 && (*(_DWORD *)(v5 + 184) & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
    {
      IdealGlobalNode = CurrentThread->ApcState.Process->IdealGlobalNode;
      CurrentPrcb = KeGetCurrentPrcb();
    }
    else
    {
      CurrentPrcb = (struct _KPRCB *)KiProcessorBlock[CurrentThread->IdealProcessor];
      IdealGlobalNode = CurrentPrcb->NodeColor;
    }
  }
  v9 = MiAssignDefaultChannel(IdealGlobalNode);
  if ( !p_PageColor || (p_PageColor[46] & 0xF) != 0 )
    p_PageColor = &CurrentPrcb->PageColor;
  v13 = ((2 * (v10 & 0x3F | 0x380)) | v9 & 1) << 8;
  v14 = v13 ^ (v13 ^ (v11 << 18)) & 0xC0000 | (unsigned __int8)_InterlockedExchangeAdd(
                                                                 (volatile signed __int32 *)p_PageColor,
                                                                 1u);
  if ( (*(_DWORD *)(*(_QWORD *)(a1 + 72) + 184LL) & 0xF) != 0 )
    return MiGetPage(*(_QWORD *)(a1 + 96), v14, 1u);
  v15 = KeGetCurrentThread();
  if ( (v15[1].SavedApcStateFill[15] == 0xFF || (BYTE2(v15[1].Queue) & 1) != 0)
    && BYTE6(v15->ApcState.Process[3].PerProcessorCycleTimes) == 0xFF )
  {
    return MiGetPage(*(_QWORD *)(a1 + 96), v14, 1u);
  }
  result = MiGetSlabPage(*(_QWORD *)(a1 + 96), 8, v14, 0x10u, a2, 0);
  if ( result == -1 && !*a2 )
    return MiGetPage(*(_QWORD *)(a1 + 96), v14, 1u);
  return result;
}
