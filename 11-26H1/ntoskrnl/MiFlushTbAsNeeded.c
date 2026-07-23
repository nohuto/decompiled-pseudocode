/*
 * XREFs of MiFlushTbAsNeeded @ 0x140361AE0
 * Callers:
 *     MiLinkPoolCommitChain @ 0x140367300 (MiLinkPoolCommitChain.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x140278210 (KeYieldProcessorEx.c)
 *     MiGetProcessorFlushList @ 0x140324A10 (MiGetProcessorFlushList.c)
 *     MiFlushTbList @ 0x14032B070 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x140360580 (MiInsertTbFlushEntry.c)
 *     MiReleaseProcessorFlushList @ 0x140363160 (MiReleaseProcessorFlushList.c)
 *     KeBugCheckEx @ 0x140535E30 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 */

__int64 *__fastcall MiFlushTbAsNeeded(__int64 a1, ULONG_PTR a2, unsigned __int64 a3, int a4)
{
  int v8; // r12d
  int v9; // r14d
  __int64 *ProcessorFlushList; // r15
  BOOL v11; // ecx
  unsigned __int64 v12; // rsi
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v14; // rcx
  ULONG_PTR v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 *result; // rax
  bool v20; // al
  int v21; // eax
  int v22; // eax
  BOOL v23; // ecx
  signed __int32 v24[8]; // [rsp+0h] [rbp-158h] BYREF
  int v25; // [rsp+30h] [rbp-128h]
  int v26; // [rsp+38h] [rbp-120h] BYREF
  __int64 v27; // [rsp+40h] [rbp-118h] BYREF
  BOOL v28; // [rsp+48h] [rbp-110h]
  int v29; // [rsp+4Ch] [rbp-10Ch]
  unsigned int v30; // [rsp+50h] [rbp-108h]
  int v31; // [rsp+54h] [rbp-104h]
  bool v32; // [rsp+58h] [rbp-100h]
  __int16 v33; // [rsp+59h] [rbp-FFh]
  int v34; // [rsp+5Ch] [rbp-FCh]
  __int64 v35; // [rsp+60h] [rbp-F8h]
  __int64 v36; // [rsp+68h] [rbp-F0h]

  v25 = a4;
  memset_0(&v27, 0, 0xC8uLL);
  v8 = 0;
  v9 = 0;
  if ( a4 )
  {
    ProcessorFlushList = MiGetProcessorFlushList();
    *((_DWORD *)ProcessorFlushList + 4) = 0;
    *((_DWORD *)ProcessorFlushList + 5) = 1;
    *ProcessorFlushList = a1;
    *((_BYTE *)ProcessorFlushList + 24) = (*(_DWORD *)(a1 + 184) & 0x40) != 0;
    if ( (*(_DWORD *)(a1 + 184) & 0xF) != 0
      || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v11 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
    }
    else
    {
      v11 = 0;
      *((_DWORD *)ProcessorFlushList + 4) |= 9u;
    }
    *((_DWORD *)ProcessorFlushList + 4) &= 0xFFFFFFDB;
    *((_DWORD *)ProcessorFlushList + 2) = v11;
    *(_WORD *)((char *)ProcessorFlushList + 25) = 0;
    *((_DWORD *)ProcessorFlushList + 7) = 0;
    ProcessorFlushList[4] = 0LL;
    ProcessorFlushList[5] = 0LL;
  }
  else
  {
    ProcessorFlushList = &v27;
    v20 = (*(_DWORD *)(a1 + 184) & 0x40) != 0;
    v29 = 20;
    v32 = v20;
    v21 = *(_DWORD *)(a1 + 184);
    v30 = 8;
    v31 = 1;
    v27 = a1;
    if ( (v21 & 0xF) != 0 || (struct _LIST_ENTRY **)a1 == &KeGetCurrentThread()->ApcState.Process[2].ReadyListHead.Blink )
    {
      v22 = v30;
      v23 = (*(_DWORD *)(a1 + 184) & 0xF) == 0;
    }
    else
    {
      v23 = 0;
      v22 = 9;
    }
    v28 = v23;
    v30 = v22 & 0xFFFFFFDB;
    v33 = 0;
    v34 = 0;
    v35 = 0LL;
    v36 = 0LL;
  }
  v12 = 0LL;
  while ( v12 < a3 )
  {
    BugCheckParameter4 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0xFE1LL) != 0 )
    {
      if ( !v25 )
        KeBugCheckEx(0x1Au, 0x5100uLL, a2, a3 - v12, BugCheckParameter4);
LABEL_14:
      ++v12;
      a2 += 8LL;
    }
    else
    {
      if ( qword_140E2D8C0 )
      {
        v14 = BugCheckParameter4 & qword_140E2D8C8;
        BugCheckParameter4 &= ~0x10uLL;
        if ( (*(_QWORD *)a2 & 0x10) == 0 )
          BugCheckParameter4 = v14;
      }
      v15 = BugCheckParameter4 >> 31;
      *(_QWORD *)a2 = *(_QWORD *)&CLFS_LSN_NULL_EXT;
      if ( !(_DWORD)v15 )
      {
        v9 = 0;
        v8 = 0;
        goto LABEL_14;
      }
      if ( (_DWORD)v15 == v8 )
      {
        if ( !v9 )
          goto LABEL_14;
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(a2 << 25) >> 16, 1LL, 0);
        ++v12;
        a2 += 8LL;
      }
      else
      {
        while ( 1 )
        {
          _InterlockedOr(v24, 0);
          if ( (unsigned int)(KiTbFlushTimeStamp - v15) > 2
            || (v15 & 1) == 0 && (unsigned int)(KiTbFlushTimeStamp - v15) >= 2 )
          {
LABEL_30:
            v9 = 0;
            goto LABEL_31;
          }
          if ( (KiTbFlushTimeStamp & 1) == 0 )
            break;
          v26 = 0;
          _InterlockedOr(v24, 0);
          while ( _bittest(&KiTbFlushTimeStamp, 0) )
            KeYieldProcessorEx(&v26);
          if ( (v15 & 1) == 0 )
            goto LABEL_30;
        }
        MiInsertTbFlushEntry((__int64)ProcessorFlushList, (__int64)(a2 << 25) >> 16, 1LL, 0);
        v9 = 1;
LABEL_31:
        ++v12;
        a2 += 8LL;
        v8 = v15;
      }
    }
  }
  MiFlushTbList((__int64)ProcessorFlushList);
  result = &v27;
  if ( ProcessorFlushList != &v27 )
    return (__int64 *)MiReleaseProcessorFlushList(v17, v16, v18);
  return result;
}
