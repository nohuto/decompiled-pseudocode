/*
 * XREFs of MiInitializePoolPageChainPacket @ 0x14036836C
 * Callers:
 *     MiGetPoolPages @ 0x1403677D0 (MiGetPoolPages.c)
 * Callees:
 *     MiAssignDefaultChannel @ 0x140283900 (MiAssignDefaultChannel.c)
 */

__int64 __fastcall MiInitializePoolPageChainPacket(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *p_PageColor; // rdi
  unsigned int v5; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // rbx
  unsigned int IdealGlobalNode; // r9d
  unsigned __int8 v10; // al
  int v11; // r10d
  __int64 v12; // r11
  char v13; // r9
  unsigned int v14; // eax
  unsigned int v15; // eax
  __int64 result; // rax

  *(_QWORD *)(a4 + 16) = 0LL;
  *(_QWORD *)a4 = &MiSystemPartition;
  p_PageColor = (unsigned int *)&unk_140E375C0;
  v5 = *(_DWORD *)(a4 + 28) & 0xFFFFFFEF;
  *(_QWORD *)(a4 + 8) = &unk_140E375C0;
  *(_DWORD *)(a4 + 24) = a1;
  *(_DWORD *)(a4 + 28) = v5 | 0x20;
  if ( a1 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IdealGlobalNode = a1 - 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( (dword_140E37678 & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
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
  v10 = MiAssignDefaultChannel(IdealGlobalNode);
  *(_DWORD *)(v12 + 48) = ((2 * (v13 & 0x3F | 0x380)) | v10 & 1) << 8;
  if ( (dword_140E37678 & 0xF) != 0 )
    p_PageColor = &CurrentPrcb->PageColor;
  *(_QWORD *)(v12 + 40) = p_PageColor;
  v14 = *(_DWORD *)(v12 + 48) & 0xFFF3FFFF | 0x40000;
  *(_QWORD *)(v12 + 80) = a3;
  *(_DWORD *)(v12 + 48) = v14;
  v15 = *(_DWORD *)(v12 + 28) & 0xFFFFFFF9;
  *(_DWORD *)(v12 + 32) = v11 | 8;
  *(_QWORD *)(v12 + 56) = -1LL;
  *(_DWORD *)(v12 + 28) = v15 | 9;
  result = 0LL;
  *(_QWORD *)(v12 + 72) = 0LL;
  *(_QWORD *)(v12 + 64) = 0LL;
  *(_OWORD *)(v12 + 88) = 0LL;
  *(_QWORD *)(v12 + 104) = 0LL;
  return result;
}
