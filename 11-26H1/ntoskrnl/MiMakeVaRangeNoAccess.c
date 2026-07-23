/*
 * XREFs of MiMakeVaRangeNoAccess @ 0x140312D14
 * Callers:
 *     MiProtectValidPte @ 0x140313A6C (MiProtectValidPte.c)
 * Callees:
 *     MiGetWsleContents @ 0x1402965D0 (MiGetWsleContents.c)
 *     MiRewritePteWithLockBit @ 0x14029EA68 (MiRewritePteWithLockBit.c)
 *     MiMakeTransitionPte @ 0x1402EFC80 (MiMakeTransitionPte.c)
 *     MiUpdatePfnProtection @ 0x140313BB0 (MiUpdatePfnProtection.c)
 *     MiRotatedToFrameBuffer @ 0x1403145E4 (MiRotatedToFrameBuffer.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiFreeWsleList @ 0x14032AE80 (MiFreeWsleList.c)
 *     MiInsertLargeTbFlushEntry @ 0x1403459B0 (MiInsertLargeTbFlushEntry.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiCaptureWriteWatchDirtyBit @ 0x14049109C (MiCaptureWriteWatchDirtyBit.c)
 *     MiUnlockVa @ 0x1404A3E1C (MiUnlockVa.c)
 */

__int64 __fastcall MiMakeVaRangeNoAccess(__int64 *a1, unsigned __int64 a2)
{
  __int64 v2; // r13
  unsigned __int64 v3; // rsi
  __int64 v4; // rbp
  signed __int64 v6; // r11
  unsigned __int64 v7; // r12
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rbp
  char v11; // r13
  __int64 v12; // r8
  __int64 v13; // r9
  signed __int64 v14; // r11
  __int64 v15; // rdx
  unsigned __int64 v16; // r15
  unsigned __int64 v17; // rbx
  unsigned __int64 v19; // r12
  unsigned int v20; // r15d
  unsigned int v21; // eax
  __int64 v22; // rbx
  __int64 v23; // r14
  unsigned __int64 v24; // rdi
  BOOL v25; // r14d
  __int64 LeafVa; // rax
  unsigned __int64 TransitionPte; // rax
  BOOL v28; // [rsp+A0h] [rbp+18h]
  signed __int64 v29; // [rsp+A8h] [rbp+20h]

  v2 = *a1;
  v3 = a2;
  v4 = a1[10];
  v6 = a1[1];
  v7 = a1[8];
  v8 = *(_DWORD *)(*a1 + 48);
  v29 = v6;
  v9 = a1[6];
  if ( v9 == 1 )
  {
    v10 = v4 + 4136;
    v11 = 0;
    MiInitializeTbFlushList(v10, v6, *(_DWORD *)(v10 + 12), 2, 1);
    v15 = -4096LL;
    v16 = (__int64)(v3 << 25) >> 16;
    if ( (v3 & 0xFFFFFFFFFFFFF000uLL) != (v7 & 0xFFFFFFFFFFFFF000uLL) )
      v7 = (v3 & 0xFFFFFFFFFFFFF000uLL) + 4088;
    if ( v3 <= v7 )
    {
      while ( 1 )
      {
        v17 = *(_QWORD *)v3;
        if ( (*(_QWORD *)v3 & 1) == 0
          || (v8 & 0x1C) == 0x10 && (unsigned int)MiRotatedToFrameBuffer(v3, v15, v12, v13)
          || *(__int64 *)(48 * ((v17 >> 12) & 0xFFFFFFFFFFLL) - 0x21FFFFFFFFD8LL) < 0 )
        {
LABEL_11:
          v14 = v29;
          goto LABEL_12;
        }
        if ( (MiGetWsleContents(0xFFFFDE0000000028uLL, v16) & 0xF) == 8 )
          break;
        MiInsertTbFlushEntry(v10, v16, 1LL);
        if ( *(_DWORD *)(v10 + 28) == *(_DWORD *)(v10 + 12) )
          goto LABEL_18;
LABEL_10:
        v16 += 4096LL;
        v3 += 8LL;
        if ( v3 > v7 )
          goto LABEL_11;
      }
      v11 = 1;
      *((_DWORD *)a1 + 6) = 1;
LABEL_18:
      if ( *(_DWORD *)(v10 + 28) )
        MiFreeWsleList(v29, v15, v10, 0LL);
      if ( v11 )
      {
        MiUnlockVa(v29, v16);
        v11 = 0;
      }
      goto LABEL_10;
    }
LABEL_12:
    if ( *(_DWORD *)(v10 + 28) )
      MiFreeWsleList(v14, v15, v10, 0LL);
    return 0LL;
  }
  else
  {
    v19 = a1[5];
    v20 = 0;
    v28 = (v8 & 0x100000) != 0 && (v8 & 0x80000) != 0;
    v21 = *((_DWORD *)a1 + 5);
    if ( v21 > 1 )
    {
      MiInsertTbFlushEntry(v4, (__int64)(a2 << 25) >> 16, v9);
    }
    else
    {
      v20 = 2 - v21;
      MiInsertLargeTbFlushEntry(v4, 2 - v21, a2);
    }
    v22 = (*(_QWORD *)v3 >> 12) & 0xFFFFFFFFFFLL;
    v23 = 48 * v22 - 0x220000000000LL;
    v24 = 0LL;
    if ( v19 )
    {
      v25 = v28;
      do
      {
        if ( v25 && (*(_QWORD *)v3 & 0x42) != 0 )
        {
          LeafVa = MiGetLeafVa(v3);
          MiCaptureWriteWatchDirtyBit(KeGetCurrentThread()->ApcState.Process, LeafVa, v2);
          v25 = 0;
        }
        TransitionPte = MiMakeTransitionPte(v22 + v24, 24);
        if ( v20 )
          MiRewritePteWithLockBit(v29, 0, v3, TransitionPte);
        else
          *(_QWORD *)v3 = TransitionPte;
        v3 += 8LL;
        ++v24;
      }
      while ( v24 < v19 );
      v23 = 48 * v22 - 0x220000000000LL;
    }
    *(_DWORD *)(v4 + 20) |= 1u;
    MiUpdatePfnProtection(v2, v23, 24LL);
    return 1LL;
  }
}
