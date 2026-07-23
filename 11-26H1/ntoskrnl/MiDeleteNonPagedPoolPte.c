/*
 * XREFs of MiDeleteNonPagedPoolPte @ 0x1403653A0
 * Callers:
 *     MiClearNonPagedPtes @ 0x140365158 (MiClearNonPagedPtes.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiEvictPageTableLock @ 0x14029DEE8 (MiEvictPageTableLock.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiGetLeafVa @ 0x140328090 (MiGetLeafVa.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiInitializeTbFlushList @ 0x1403626C0 (MiInitializeTbFlushList.c)
 *     MiInsertRecursiveTbFlushEntries @ 0x1403658EC (MiInsertRecursiveTbFlushEntries.c)
 *     MiDecommitLargePoolVa @ 0x1403CD620 (MiDecommitLargePoolVa.c)
 *     MiBadRefCount @ 0x140500054 (MiBadRefCount.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 */

__int64 __fastcall MiDeleteNonPagedPoolPte(__int64 a1, unsigned __int64 a2, int a3)
{
  unsigned __int64 v3; // rax
  int v7; // ecx
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 *v9; // rdi
  __int64 v10; // rbx
  _DWORD *v11; // rsi
  int v12; // edx
  unsigned __int64 v13; // rax
  __int64 v14; // rax
  unsigned __int64 v15; // rcx
  __int64 *v17; // rax
  __int64 *v18; // rax
  BOOL v19; // ecx
  __int64 v20; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v23; // rdx
  ULONG_PTR LeafVa; // rax
  ULONG_PTR v25; // r10
  ULONG_PTR v26; // rsi
  __int64 *ProcessorFlushList; // rax
  __int64 *v28; // rax
  __int64 v29; // r11
  char v30; // cl
  __int64 v31; // rdx
  signed __int32 v32[8]; // [rsp+0h] [rbp-68h] BYREF
  _QWORD v33[2]; // [rsp+30h] [rbp-38h] BYREF
  int v34; // [rsp+78h] [rbp+10h] BYREF

  v3 = *(_QWORD *)a2;
  if ( (*(_QWORD *)a2 & 1) != 0 && a3 <= 1 )
  {
    v7 = a3;
    for ( BugCheckParameter4 = 1LL; v7; --v7 )
      BugCheckParameter4 <<= 9;
    v9 = *(__int64 **)(a1 + 184);
    if ( (v3 & 0x80u) != 0LL )
    {
      if ( (*((_DWORD *)v9 + 9) & 1) != 0 )
      {
        LeafVa = MiGetLeafVa(a2);
        v26 = LeafVa;
        if ( LeafVa < *(_QWORD *)(v25 + 40) || LeafVa + (BugCheckParameter4 << 12) - 1 > *(_QWORD *)(v25 + 48) )
          KeBugCheckEx(0x1Au, 0x5306uLL, v25, LeafVa, BugCheckParameter4);
        if ( !*v9 )
        {
          ProcessorFlushList = MiGetProcessorFlushList();
          *v9 = (__int64)ProcessorFlushList;
          MiInitializeTbFlushList(
            (__int64)ProcessorFlushList,
            (__int64)&unk_140E375C0,
            *((_DWORD *)ProcessorFlushList + 3),
            0,
            1);
        }
        MiDecommitLargePoolVa(v26, a2, BugCheckParameter4, *v9);
        *((_DWORD *)v9 + 11) += 512;
      }
    }
    else
    {
      v10 = 48 * ((v3 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
      if ( a3 == 1 )
      {
        if ( !(unsigned int)MiEvictPageTableLock((__int64)&unk_140E375C0, a2, 1LL, *(__int64 *)&CLFS_LSN_NULL_EXT) )
          return 0LL;
        v11 = (_DWORD *)v9 + 9;
      }
      else
      {
        v11 = (_DWORD *)v9 + 9;
        if ( (*((_DWORD *)v9 + 9) & 1) == 0 )
          return 0LL;
        if ( (v3 & 0x200) != 0 )
          _InterlockedDecrement64(&qword_140E2C8C0);
        *(_QWORD *)a2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (*(_BYTE *)(v10 + 35) & 0x10) == 0 )
          ++*((_DWORD *)v9 + 11);
      }
      v12 = *((_DWORD *)v9 + 10);
      if ( !v12 )
        v9[6] = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *((_DWORD *)v9 + 10) = v12 + 1;
      v34 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v10 + 24), 0x3FuLL) )
      {
        do
          KeYieldProcessorEx(&v34);
        while ( *(__int64 *)(v10 + 24) < 0 );
      }
      if ( (*v11 & 2) == 0 )
      {
        if ( (unsigned __int16)*(_DWORD *)(v10 + 32) != 1 )
          MiBadRefCount(v10);
        *(_DWORD *)(v10 + 32) = *(_DWORD *)(v10 + 32) & 0xFFF8FFFF | 0x50000;
      }
      if ( a3 )
      {
        *(_QWORD *)v10 = 0LL;
        v17 = (__int64 *)v9[2];
        if ( v17 )
          *v17 = v10;
        else
          v9[1] = v10;
        ++v9[3];
        v9[2] = v10;
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( !*v9 )
        {
          v18 = MiGetProcessorFlushList();
          *v9 = (__int64)v18;
          *((_DWORD *)v18 + 4) = 0;
          *((_DWORD *)v18 + 5) = 1;
          *v18 = (__int64)&unk_140E375C0;
          *((_BYTE *)v18 + 24) = (dword_140E37678 & 0x40) != 0;
          if ( (dword_140E37678 & 0xF) != 0
            || &unk_140E375C0 == (_UNKNOWN *)&KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
          {
            v19 = (dword_140E37678 & 0xF) == 0;
          }
          else
          {
            *((_DWORD *)v18 + 4) |= 9u;
            v19 = 0;
          }
          *((_DWORD *)v18 + 4) &= 0xFFFFFFDB;
          *((_DWORD *)v18 + 2) = v19;
          *(_WORD *)((char *)v18 + 25) = 0;
          *((_DWORD *)v18 + 7) = 0;
          v18[4] = 0LL;
          v18[5] = 0LL;
        }
        MiInsertRecursiveTbFlushEntries(*v9, (unsigned int)a3, a2);
      }
      else
      {
        if ( (*v11 & 2) == 0 )
        {
          *(_QWORD *)v10 = v9[1];
          v9[1] = v10;
          if ( !v9[2] )
            v9[2] = v10;
          ++v9[3];
        }
        _InterlockedAnd64((volatile signed __int64 *)(v10 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v13 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        v33[0] = *(_QWORD *)&CLFS_LSN_NULL_EXT;
        if ( (v9[4] & 0x40000000) == 0 )
        {
          v14 = v33[0];
          if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v20 = v33[0];
            if ( (v33[0] & 1) != 0 && ((v33[0] & 0x20) == 0 || (v33[0] & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v23 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)v33 >> 3) & 0x1FF));
                  if ( (v23 & 0x20) != 0 )
                    v20 = v33[0] | 0x20LL;
                  v14 = v20 | 0x42;
                  if ( (v23 & 0x42) == 0 )
                    v14 = v20;
                }
              }
            }
          }
          _InterlockedOr(v32, 0);
          if ( v14 )
          {
            if ( qword_140E2D8C0 )
            {
              v30 = v14;
              v31 = qword_140E2D8C8 & v14;
              v14 &= ~0x10uLL;
              if ( (v30 & 0x10) == 0 )
                v14 = v31;
            }
          }
          else
          {
            v14 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
          }
          v15 = v14 & 0x800000007FFFFFFFuLL | ((unsigned __int64)(unsigned int)KiTbFlushTimeStamp << 31);
          if ( qword_140E2D8C0 )
          {
            if ( (qword_140E2D8C0 & v15) != 0 )
              v15 |= 0x10uLL;
            else
              v15 |= qword_140E2D8C0;
          }
          v33[0] = v15;
          v13 = v15;
          *(_QWORD *)a2 = v15;
        }
        if ( qword_140E2D8C0 && (v13 & 0x10) == 0 )
          v13 &= qword_140E2D8C8;
        if ( !(unsigned int)(v13 >> 31) )
        {
          if ( *v9 )
          {
            v29 = 1LL;
          }
          else
          {
            v28 = MiGetProcessorFlushList();
            *v9 = (__int64)v28;
            MiInitializeTbFlushList((__int64)v28, (__int64)&unk_140E375C0, *((_DWORD *)v28 + 3), 0, 1);
          }
          MiInsertTbFlushEntry(*v9, (__int64)(a2 << 25) >> 16, v29, 0);
        }
      }
    }
  }
  return 0LL;
}
