/*
 * XREFs of MiInitializePageChainPacket @ 0x140412300
 * Callers:
 *     MiGetPageToTrade @ 0x140294740 (MiGetPageToTrade.c)
 *     MiGetClusterPage @ 0x140508040 (MiGetClusterPage.c)
 *     MiPfPrepareSequentialReadList @ 0x140A5A190 (MiPfPrepareSequentialReadList.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageChainPacket(
        __int64 a1,
        unsigned int *a2,
        char a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        __int64 a9,
        unsigned __int8 a10,
        _QWORD *a11,
        __int64 a12,
        __int64 a13)
{
  unsigned int *p_PageColor; // rbx
  int v14; // eax
  struct _KTHREAD *CurrentThread; // rcx
  struct _KPRCB *CurrentPrcb; // r9
  unsigned int IdealGlobalNode; // eax
  __int64 v18; // rdx
  unsigned __int8 i; // dl
  int v20; // ecx
  __int64 result; // rax
  __int64 v22; // rdi

  p_PageColor = a2;
  v14 = *(_DWORD *)(a13 + 28);
  *(_QWORD *)a13 = a1;
  *(_QWORD *)(a13 + 8) = a2;
  *(_DWORD *)(a13 + 28) = v14 ^ ((unsigned __int8)v14 ^ (unsigned __int8)(16 * a3)) & 0x30;
  *(_QWORD *)(a13 + 16) = a4;
  *(_DWORD *)(a13 + 24) = a5;
  if ( a5 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    IdealGlobalNode = a5 - 1;
  }
  else
  {
    CurrentThread = KeGetCurrentThread();
    if ( a2 && (a2[46] & 0xF) == 0 && CurrentThread->ApcStateIndex == 1 )
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
  v18 = 56320LL * IdealGlobalNode;
  if ( (*(_DWORD *)(qword_140E37E50 + v18 + 14096) & 1) != 0 )
  {
    v22 = qword_140E37E50 + v18;
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
    {
      if ( *(_BYTE *)(i + v22 + 14149) == 1 )
        goto LABEL_8;
    }
    for ( i = 0; i < (unsigned __int8)byte_140E2D898; ++i )
    {
      if ( *(_BYTE *)(i + v22 + 14149) == 2 )
        goto LABEL_8;
    }
  }
  i = 0;
LABEL_8:
  *(_DWORD *)(a13 + 48) = (i & 1 | (2 * (IdealGlobalNode & 0x3F | 0x380))) << 8;
  if ( !p_PageColor || (p_PageColor[46] & 0xF) != 0 )
    p_PageColor = &CurrentPrcb->PageColor;
  *(_QWORD *)(a13 + 40) = p_PageColor;
  *(_DWORD *)(a13 + 48) ^= (*(_DWORD *)(a13 + 48) ^ (a6 << 18)) & 0xC0000;
  *(_DWORD *)(a13 + 32) = a7 | 8;
  *(_QWORD *)(a13 + 56) = a8;
  if ( a11 )
    *a11 = 0LL;
  *(_QWORD *)(a13 + 72) = a11;
  *(_QWORD *)(a13 + 64) = a9;
  v20 = *(_DWORD *)(a13 + 28) ^ (a10 ^ (unsigned __int8)*(_DWORD *)(a13 + 28)) & 0xF;
  *(_QWORD *)(a13 + 80) = a12;
  result = 0LL;
  *(_DWORD *)(a13 + 28) = v20;
  *(_OWORD *)(a13 + 88) = 0LL;
  *(_QWORD *)(a13 + 104) = 0LL;
  return result;
}
