/*
 * XREFs of MiInitializePageFaultPacket @ 0x14033B3D0
 * Callers:
 *     MiPerformFaultClusterMaintenance @ 0x1402CD110 (MiPerformFaultClusterMaintenance.c)
 *     MiFlushWaitForReadInProgress @ 0x1403398B8 (MiFlushWaitForReadInProgress.c)
 *     MiTranslatePageForCopy @ 0x14033ADCC (MiTranslatePageForCopy.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     MiWalkReadInProgressPte @ 0x14070A398 (MiWalkReadInProgressPte.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiInitializePageFaultPacket(
        unsigned __int64 a1,
        unsigned __int64 a2,
        char a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  __int16 v6; // bx
  unsigned __int64 v7; // r10
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // r8
  _DWORD *v12; // rdx
  __int64 result; // rax

  v6 = a3;
  v7 = a1;
  *(_OWORD *)a6 = 0LL;
  *(_OWORD *)(a6 + 16) = 0LL;
  *(_OWORD *)(a6 + 32) = 0LL;
  *(_OWORD *)(a6 + 48) = 0LL;
  *(_OWORD *)(a6 + 64) = 0LL;
  *(_OWORD *)(a6 + 80) = 0LL;
  *(_OWORD *)(a6 + 96) = 0LL;
  *(_OWORD *)(a6 + 112) = 0LL;
  *(_OWORD *)(a6 + 128) = 0LL;
  *(_QWORD *)(a6 + 144) = 0LL;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 24) = v9;
  v10 = ((v9 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 32) = v10;
  v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 40) = v11;
  v12 = (_DWORD *)(a6 + 80);
  *(_QWORD *)(a6 + 48) = ((v11 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  *(_QWORD *)(a6 + 96) = a5;
  if ( (a1 & 0x40) != 0 )
  {
    *v12 |= 0x80u;
    v7 = a1 & 0xFFFFFFFFFFFFFFFDuLL;
  }
  *(_QWORD *)(a6 + 8) = v7;
  *(_QWORD *)a6 = a2;
  *(_QWORD *)(a6 + 16) = a4;
  result = (unsigned int)*v12;
  *v12 = result ^ ((unsigned __int16)result ^ (unsigned __int16)(v6 << 8)) & 0x100;
  return result;
}
