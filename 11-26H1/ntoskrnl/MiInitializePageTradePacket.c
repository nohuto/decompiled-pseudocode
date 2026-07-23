/*
 * XREFs of MiInitializePageTradePacket @ 0x140292A70
 * Callers:
 *     MiTradePageMarkedActive @ 0x140292720 (MiTradePageMarkedActive.c)
 * Callees:
 *     MiUnlockStealVm @ 0x140294270 (MiUnlockStealVm.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiLockStealSystemVm @ 0x14044D760 (MiLockStealSystemVm.c)
 *     MiLockStealUserVm @ 0x140458690 (MiLockStealUserVm.c)
 *     MiHyperSpaceSize @ 0x140478EE8 (MiHyperSpaceSize.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 __fastcall MiInitializePageTradePacket(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v8; // r15
  unsigned __int8 v9; // r14
  __int64 v10; // rdi
  int v11; // r12d
  int v12; // eax
  unsigned __int64 v13; // r9
  __int64 v14; // rcx
  unsigned __int64 v15; // r9
  __int64 v16; // r10
  __int64 v17; // r11
  unsigned __int64 v18; // rax
  unsigned int v19; // r8d
  __int64 result; // rax
  int v21; // eax
  __int64 v22; // rdx
  char v23; // cl

  _InterlockedIncrement(MiCont);
  *(_QWORD *)a1 = 0LL;
  memset_0((void *)(a1 + 12), 0, 0x74uLL);
  memset_0((void *)(a1 + 157), 0, 0x83uLL);
  v8 = 48LL * *(_QWORD *)a2;
  v9 = *(_BYTE *)(a2 + 8);
  v10 = a1 + 8;
  v11 = *(_DWORD *)(a3 + 24);
  *(_QWORD *)(a1 + 136) = *(_QWORD *)(a3 + 8);
  v12 = *(_DWORD *)(a3 + 28);
  *(_DWORD *)(a1 + 8) = v11;
  *(_DWORD *)(a1 + 152) = v12;
  *(_QWORD *)(a1 + 144) = a4;
  *(_BYTE *)(a1 + 156) = v9;
  *(_QWORD *)(a1 + 128) = -1LL;
  v13 = *(_QWORD *)(v8 - 0x220000000000LL + 8) | 0x8000000000000000uLL;
  *(_QWORD *)(a1 + 192) = v13;
  v14 = (__int64)(v13 << 25) >> 16;
  *(_QWORD *)(a1 + 176) = v14;
  *(_QWORD *)(a1 + 184) = MiGetLeafVa(v14);
  if ( v15 < 0xFFFFF68000000000uLL || v15 > 0xFFFFF6FFFFFFFFFFuLL )
    *(_DWORD *)(a1 + 16) |= 1u;
  else
    *(_DWORD *)(a1 + 16) |= 8u;
  *(_QWORD *)(a1 + 240) = v17;
  *(_QWORD *)(a1 + 256) = v16;
  *(_QWORD *)(a1 + 248) = -1LL;
  v18 = *(_QWORD *)(a1 + 184);
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8 * ((*(_QWORD *)(v16 + 40) >> 43) & 0x3FFLL));
  if ( v18 < 0xFFFF800000000000uLL )
    goto LABEL_4;
  if ( v18 <= qword_140E2DFD0 && v18 >= qword_140E2DFC0 )
  {
    v21 = *(_DWORD *)(a1 + 16);
    if ( (v21 & 1) != 0 )
    {
      *(_DWORD *)(a1 + 16) = v21 | 0xA;
      if ( *(_QWORD *)(a1 + 176) >= (unsigned __int64)qword_140E2DFC8
        && *(_QWORD *)(a1 + 176) < (unsigned __int64)(qword_140E2DFC8 + MiHyperSpaceSize()) )
      {
        *(_DWORD *)(a1 + 16) |= 0x80u;
      }
    }
    else
    {
      *(_DWORD *)(a1 + 16) = v21 | 0xC;
    }
LABEL_4:
    *(_DWORD *)(a1 + 16) |= 0x800u;
  }
  if ( (*(_DWORD *)(a1 + 16) & 0x800) != 0 )
  {
    v19 = MiLockStealUserVm(*(_QWORD *)(a1 + 216), v16, v9, *(_QWORD *)(a1 + 192), v10);
    if ( !v19 )
    {
      *(_QWORD *)(a1 + 224) = KeGetCurrentThread()->ApcState.Process;
      *(_QWORD *)(a1 + 200) = *(_QWORD *)(a1 + 32);
      *(_DWORD *)(a1 + 208) = 0;
      return 0LL;
    }
  }
  else
  {
    v19 = MiLockStealSystemVm(v16, v9, *(_QWORD *)(a1 + 192), v10);
    if ( !v19 )
    {
      v22 = *(_QWORD *)(a1 + 32);
      *(_QWORD *)(a1 + 200) = v22;
      *(_DWORD *)(a1 + 208) = 1;
      v23 = *(_DWORD *)(v22 + 184) & 0xF;
      if ( v23 == 7 )
      {
        if ( (v11 & 0x10000000) != 0 )
        {
          _InterlockedIncrement(&dword_140EF90BC);
          MiUnlockStealVm(v10);
          return 1LL;
        }
      }
      else if ( v23 == 2 || *(_DWORD *)(a1 + 56) != 1 )
      {
        return 0LL;
      }
      *(_DWORD *)(a1 + 208) = 2;
      return 0LL;
    }
  }
  _InterlockedIncrement(&dword_140EF9048);
  result = v19;
  _InterlockedExchange64(&qword_140EF9050, v8 / 48);
  return result;
}
