/*
 * XREFs of MiSetProbePagesAhead @ 0x1402D1B90
 * Callers:
 *     MiProbeAndLockPacket @ 0x1402D0300 (MiProbeAndLockPacket.c)
 *     MmStoreProbeAndLockPages @ 0x1402D26F0 (MmStoreProbeAndLockPages.c)
 *     MmProbeAndLockSelectedPages @ 0x1403A1040 (MmProbeAndLockSelectedPages.c)
 * Callees:
 *     MiGetPfnPageSizeIndexUnsynchronized @ 0x1402D2C40 (MiGetPfnPageSizeIndexUnsynchronized.c)
 *     MiGetPageTablePfnBuddyRaw @ 0x1403FD950 (MiGetPageTablePfnBuddyRaw.c)
 */

char __fastcall MiSetProbePagesAhead(__int64 a1)
{
  unsigned __int64 InitialStack; // rax
  unsigned __int64 v3; // rbx
  BOOL v4; // r12d
  int v5; // r15d
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  __int64 v8; // r14
  unsigned __int64 v9; // r11
  unsigned __int64 v10; // r9
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rax
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rsi
  unsigned __int64 v21; // r8
  unsigned __int64 v22; // rcx
  int v23; // ecx
  int v25; // [rsp+60h] [rbp+8h] BYREF
  int v26; // [rsp+68h] [rbp+10h] BYREF

  LOBYTE(InitialStack) = *(_DWORD *)(a1 + 104) & 0x1E;
  if ( (_BYTE)InitialStack == 2 )
  {
    v3 = *(_QWORD *)(a1 + 48);
    InitialStack = (v3 >> 12) & 0xFFFFFFFFFFLL;
    if ( InitialStack <= qword_140E2D920 )
    {
      InitialStack = *(_QWORD *)(48 * InitialStack - 0x21FFFFFFFFD8LL);
      v4 = (InitialStack & 0x40000000000000LL) != 0;
    }
    else
    {
      v4 = 0;
    }
    v5 = (*(_DWORD *)(a1 + 96) >> 1) & 3;
    if ( v5 != 3 )
    {
      v6 = v3 & 0xF0F0000000000FFFuLL;
      v7 = *(_QWORD *)(a1 + 24) + 8LL;
      v8 = 0LL;
      v9 = 0xFFFFF6FB7DBED7F8uLL;
      v10 = 0xFFFFDE0000000000uLL;
      v11 = 0xFFFFF68000000000uLL;
      while ( 1 )
      {
        LOBYTE(InitialStack) = 0;
        if ( (v7 & 0xFFF) == 0 || v7 > *(_QWORD *)(a1 + 32) )
          break;
        v12 = *(_QWORD *)v7;
        if ( v7 >= 0xFFFFF6FB7DBED000uLL && v7 <= v9 )
        {
          v16 = *(_QWORD *)v7;
          if ( (v12 & 1) != 0 && ((v12 & 0x20) == 0 || (v12 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
          {
            Process = KeGetCurrentThread()->ApcState.Process;
            if ( Process->AddressPolicy != 1 )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v19 = *(_QWORD *)(KernelWaitTime + 8 * ((v7 >> 3) & 0x1FF));
                if ( (v19 & 0x20) != 0 )
                  v16 = v12 | 0x20;
                v12 = v16 | 0x42;
                if ( (v19 & 0x42) == 0 )
                  v12 = v16;
              }
              v10 = 0xFFFFDE0000000000uLL;
            }
          }
        }
        LOBYTE(InitialStack) = v12;
        if ( (v12 & 0xF0F0000000000FFFuLL) != v6 )
          break;
        v13 = (v12 >> 12) & 0xFFFFFFFFFFLL;
        if ( v13 <= qword_140E2D920
          && (v14 = 48 * v13,
              InitialStack = *(_QWORD *)(48 * v13 - 0x21FFFFFFFFD8LL),
              (InitialStack & 0x40000000000000LL) != 0) )
        {
          if ( !v4 )
            break;
          v20 = v14 + v10;
          if ( stru_140E366D8.InitialStack )
          {
            if ( ((*(_QWORD *)(v20 + 40) >> 60) & 7) == 1 )
            {
              v13 = v14 / 48;
              InitialStack = (unsigned __int64)stru_140E366D8.InitialStack;
              while ( InitialStack )
              {
                v21 = *(_QWORD *)(InitialStack + 24);
                if ( v13 < v21 )
                {
                  InitialStack = *(_QWORD *)InitialStack;
                }
                else
                {
                  if ( v13 - v21 < *(_QWORD *)(InitialStack + 32) )
                    goto LABEL_13;
                  InitialStack = *(_QWORD *)(InitialStack + 8);
                }
              }
            }
          }
          if ( *(__int64 *)(v20 + 40) >= 0 )
          {
            if ( (*(_QWORD *)(v20 + 40) & 0x10000000000LL) != 0 )
            {
              v25 = 0;
              v26 = 0;
              LODWORD(InitialStack) = MiGetPfnPageSizeIndexUnsynchronized(v20, &v25, &v26, v10);
              if ( (_DWORD)InitialStack == 3 || v25 != 6 )
                break;
              v10 = 0xFFFFDE0000000000uLL;
              v11 = 0xFFFFF68000000000uLL;
              v9 = 0xFFFFF6FB7DBED7F8uLL;
            }
            else
            {
              v22 = (__int64)((*(_QWORD *)(v20 + 8) << 25) - (v11 << 25)) >> 16;
              if ( v22 >= v11
                && v22 <= 0xFFFFF6FFFFFFFFFFuLL
                && (*(_QWORD *)(v20 + 40) & 0xFFFFFFFFFFLL) != 0x3FFFFFFFFELL )
              {
                v23 = *(_DWORD *)(v20 + 32);
                if ( (v23 & 0x200000) == 0
                  || (v13 = 0x3FFFFFFFFFFFFFFFLL, (*(_QWORD *)(v20 + 24) & 0x3FFFFFFFFFFFFFFFLL) != 0)
                  || !(unsigned __int16)*(_DWORD *)(v20 + 32) )
                {
                  if ( (v23 & 0x80000) == 0 )
                  {
                    InitialStack = MiGetPageTablePfnBuddyRaw(v20, v13, 0xFFFFFFFFFFLL);
                    if ( InitialStack != 0x10000000000LL )
                      break;
                  }
                }
              }
            }
          }
          if ( !v5 )
          {
            if ( ((*(_QWORD *)(v20 + 40) >> 60) & 7) != 1 && *(__int64 *)(v20 + 8) > 0 )
            {
              InitialStack = *(_QWORD *)(v20 + 40);
              if ( (InitialStack & 0x10000000000LL) == 0 )
                break;
            }
            if ( *(__int64 *)(v20 + 40) < 0 )
            {
              InitialStack = *(_QWORD *)(a1 + 88);
              if ( InitialStack )
              {
                if ( *(_QWORD *)(InitialStack + 640) )
                  break;
              }
            }
          }
        }
        else if ( v4 )
        {
          break;
        }
        v7 += 8LL;
        ++v8;
      }
LABEL_13:
      if ( v8 )
      {
        v15 = (__int64)(*(_QWORD *)(a1 + 24) << 25) >> 16;
        *(_QWORD *)(a1 + 160) = v15;
        *(_QWORD *)(a1 + 176) = -1LL;
        InitialStack = (v8 << 12) + v15 + 4095;
        *(_DWORD *)(a1 + 104) |= 1u;
        *(_QWORD *)(a1 + 168) = InitialStack;
      }
    }
  }
  return InitialStack;
}
