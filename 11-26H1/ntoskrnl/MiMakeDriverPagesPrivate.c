/*
 * XREFs of MiMakeDriverPagesPrivate @ 0x14038C790
 * Callers:
 *     MiLockCode @ 0x14029558C (MiLockCode.c)
 *     MiSetSystemCodeProtection @ 0x14038D734 (MiSetSystemCodeProtection.c)
 *     MiLockDriverPageRange @ 0x1406EA498 (MiLockDriverPageRange.c)
 *     MmProtectDriverSection @ 0x1406EADE0 (MmProtectDriverSection.c)
 *     MiBackSingleImageWithPagefile @ 0x14086A4B0 (MiBackSingleImageWithPagefile.c)
 *     MiSplitDriverPage @ 0x140B497A8 (MiSplitDriverPage.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x1402916F0 (MiReleaseFreshPage.c)
 *     MiReleaseFreshPageAtDpc @ 0x140295200 (MiReleaseFreshPageAtDpc.c)
 *     MiUnlockPageTableInternal @ 0x1402B31A0 (MiUnlockPageTableInternal.c)
 *     MiUnlockWorkingSetShared @ 0x1402CD700 (MiUnlockWorkingSetShared.c)
 *     MiLockWorkingSetShared @ 0x1402CFDE0 (MiLockWorkingSetShared.c)
 *     MiGetPfnSlabType @ 0x1402DFCC0 (MiGetPfnSlabType.c)
 *     MiLockPageTableInternal @ 0x1402FE1B0 (MiLockPageTableInternal.c)
 *     MiCopyOnWrite @ 0x14036CAD8 (MiCopyOnWrite.c)
 *     MiMakeDriverPageStayResident @ 0x14038C448 (MiMakeDriverPageStayResident.c)
 *     MiCheckSlabPage @ 0x14038C61C (MiCheckSlabPage.c)
 *     MmAccessFault @ 0x1403A40F0 (MmAccessFault.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     MiAllocateDriverPage @ 0x140AEDA3C (MiAllocateDriverPage.c)
 */

__int64 __fastcall MiMakeDriverPagesPrivate(__int64 a1, __int64 a2, __int64 a3, unsigned __int8 a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v6; // rbx
  int v7; // r10d
  int v8; // eax
  int v9; // r14d
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // rbp
  __int64 DriverPage; // r15
  __int64 v13; // rdx
  char v14; // si
  ULONG_PTR v15; // rbx
  __int64 v16; // rdx
  int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // r8
  int v20; // r14d
  unsigned int v21; // esi
  __int64 v22; // r8
  __int64 v24; // rdx
  __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rbx
  __int64 v28; // rcx
  int v29; // edx
  __int64 v30; // rdx
  __int64 v31; // r8
  int v32; // [rsp+30h] [rbp-68h]
  unsigned int v33; // [rsp+34h] [rbp-64h]
  unsigned __int64 v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  char v39; // [rsp+B8h] [rbp+20h]

  v4 = 0;
  v6 = a3;
  v7 = 0;
  v35 = *(_QWORD *)(stru_140E2ED08.ThreadLock + 8LL * (unsigned __int16)word_140E3702E);
  if ( (a4 & 3) == 0 && (MiFlags & 0x20000) != 0 && (MiFlags & 0x10000) != 0 )
    v7 = 2;
  v8 = v7 | 1;
  v9 = a4 & 4;
  v10 = a2;
  v32 = v9;
  if ( (a4 & 4) == 0 )
    v8 = v7;
  v11 = 0LL;
  DriverPage = -1LL;
  v34 = 0LL;
  v33 = v8;
  v14 = MiLockWorkingSetShared((__int64)&unk_140E36F80, a2, a3);
  v39 = v14;
  while ( v10 <= v6 )
  {
    if ( !v11 )
      goto LABEL_22;
    if ( (v10 & 0xFFF) == 0 )
    {
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v11);
LABEL_22:
      v11 = ((v10 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      MiLockPageTableInternal((signed __int64)&unk_140E36F80, v11, 0);
    }
    v15 = *(_QWORD *)v10;
    if ( !*(_QWORD *)v10 )
      goto LABEL_14;
    if ( (v15 & 1) != 0 )
    {
      v13 = 0xFFFFDE0000000000uLL;
      if ( *(__int64 *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) < 0
        && (*(__int64 *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 8) <= 0
         || (*(_QWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 40) & 0x10000000000LL) != 0)
        && ((a4 & 1) == 0 || (v15 & 0x800) == 0 && (v15 & 0x200) != 0) )
      {
        v21 = (*(_DWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 16) >> 5) & 0x1F;
        if ( _bittest64(&MiFlags, 0x11u) && (a4 & (unsigned __int8)v21 & 2) != 0 )
        {
          v4 = -1073741755;
LABEL_28:
          v14 = v39;
          break;
        }
        if ( v9
          && (*(_DWORD *)(a1 + 184) & 4) == 0
          && (*(_DWORD *)(48 * ((v15 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL + 32) & 0x8000000) != 0 )
        {
          goto LABEL_42;
        }
        if ( DriverPage == -1 )
        {
LABEL_37:
          MiUnlockPageTableInternal((__int64)&unk_140E36F80, v11);
          LOBYTE(v24) = v39;
          MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v24);
          DriverPage = MiAllocateDriverPage(v35, v21, 0LL);
          MiLockWorkingSetShared((__int64)&unk_140E36F80, v25, v26);
          MiLockPageTableInternal((signed __int64)&unk_140E36F80, v11, 0);
          if ( DriverPage == -1 )
          {
            v4 = -1073741801;
            goto LABEL_28;
          }
          goto LABEL_20;
        }
        v27 = 48 * DriverPage - 0x220000000000LL;
        if ( _bittest64(&MiFlags, 0x11u) && (*(_DWORD *)(v35 + 4) & 8) != 0 && (v21 & 2) != 0 )
        {
          if ( (unsigned int)MiGetPfnSlabType(48 * DriverPage - 0x220000000000LL) != 9 )
          {
            v29 = 0;
LABEL_51:
            if ( (unsigned int)MiCheckSlabPage(v27, v29, 4) )
              goto LABEL_41;
          }
          if ( v34 == v10 )
          {
LABEL_41:
            MiCopyOnWrite((__int64)(v10 << 25) >> 16, v10, DriverPage, v33, 0LL);
            v28 = 6 * DriverPage;
            DriverPage = -1LL;
            if ( (MiFlags & 0x20000) != 0 && ((*(_QWORD *)(8 * v28 - 0x220000000000LL + 40) >> 60) & 7) == 3 )
              MiMakeDriverPageStayResident(a1, (__int64)&unk_140E36F80, (__int64)(v10 << 25) >> 16);
LABEL_42:
            v14 = v39;
            goto LABEL_14;
          }
          MiReleaseFreshPageAtDpc(v27, v30, v31);
          v34 = v10;
          goto LABEL_37;
        }
        if ( (unsigned int)MiGetPfnSlabType(48 * DriverPage - 0x220000000000LL) == 9 )
          goto LABEL_41;
        v29 = 5;
        goto LABEL_51;
      }
LABEL_14:
      v6 = a3;
      v10 += 8LL;
    }
    else
    {
      if ( (v15 & 0x400) == 0 )
        goto LABEL_14;
      MiUnlockPageTableInternal((__int64)&unk_140E36F80, v11);
      LOBYTE(v16) = v14;
      MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v16);
      v17 = MmAccessFault(0LL, (__int64)(v10 << 25) >> 16);
      v20 = v17;
      if ( v17 < 0 && (v10 == a2 || (a4 & 8) == 0) )
        KeBugCheckEx(0x1Au, 0x101BuLL, (__int64)(v10 << 25) >> 16, v15, v17);
      MiLockWorkingSetShared((__int64)&unk_140E36F80, v18, v19);
      if ( v20 < 0 )
      {
        v11 = 0LL;
        v10 += 8LL;
      }
      else
      {
        MiLockPageTableInternal((signed __int64)&unk_140E36F80, v11, 0);
      }
      v9 = v32;
LABEL_20:
      v14 = v39;
      v6 = a3;
    }
  }
  if ( v11 )
    MiUnlockPageTableInternal((__int64)&unk_140E36F80, v11);
  LOBYTE(v13) = v14;
  MiUnlockWorkingSetShared((__int64)&unk_140E36F80, v13);
  if ( DriverPage != -1 )
    MiReleaseFreshPage(48 * DriverPage - 0x220000000000LL, 0xFFFFDE0000000000uLL, v22);
  return v4;
}
