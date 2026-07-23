/*
 * XREFs of CmpDoTransWriteLogRecord @ 0x1408B3B80
 * Callers:
 *     CmpTransWriteLog @ 0x1408B3A74 (CmpTransWriteLog.c)
 * Callees:
 *     memmove @ 0x140742080 (memmove.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall CmpDoTransWriteLogRecord(__int64 a1, char *a2, ULONG a3, ULONG fFlags, PCLFS_LSN plsn)
{
  char *v5; // r14
  void *v6; // rcx
  NTSTATUS result; // eax
  NTSTATUS appended; // edi
  _DWORD *Pool2; // rbx
  unsigned int v10; // ebp
  unsigned int v11; // esi
  unsigned int v12; // eax
  int v13; // ecx
  __int128 v14; // xmm0
  int v15; // r12d
  unsigned int v16; // eax
  CLFS_WRITE_ENTRY rgWriteEntries; // [rsp+50h] [rbp-48h] BYREF
  CLFS_LSN plsnUndoNext; // [rsp+A8h] [rbp+10h] BYREF
  ULONG v20; // [rsp+B8h] [rbp+20h]

  v20 = fFlags;
  v5 = a2;
  v6 = *(void **)(a1 + 96);
  plsnUndoNext = *(CLFS_LSN *)&CLFS_LSN_NULL_EXT;
  rgWriteEntries.Buffer = a2;
  rgWriteEntries.ByteLength = a3;
  result = ClfsReserveAndAppendLog(v6, &rgWriteEntries, 1u, &plsnUndoNext, &plsnUndoNext, 0, 0LL, fFlags, plsn);
  appended = result;
  if ( result == -1073741789 )
  {
    Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL);
    if ( Pool2 )
    {
      v10 = *((_DWORD *)v5 + 1);
      v11 = 3008;
      v12 = v10;
      if ( v10 >= 0xBC0 )
      {
        appended = 0;
        v13 = 0;
        while ( v12 )
        {
          ++v13;
          if ( v12 < 0xBC0 )
            break;
          v12 -= 3008;
        }
        *(_OWORD *)Pool2 = *(_OWORD *)v5;
        *((_OWORD *)Pool2 + 1) = *((_OWORD *)v5 + 1);
        v14 = *((_OWORD *)v5 + 2);
        Pool2[12] = v13;
        *((_OWORD *)Pool2 + 2) = v14;
        Pool2[3] |= 0x80000000;
        v15 = 0;
        rgWriteEntries.Buffer = Pool2;
        while ( appended >= 0 )
        {
          memmove(Pool2 + 16, v5, v11);
          Pool2[13] = v15;
          Pool2[14] = v11;
          rgWriteEntries.ByteLength = v11 + 64;
          ++v15;
          appended = ClfsReserveAndAppendLog(
                       *(PVOID *)(a1 + 96),
                       &rgWriteEntries,
                       1u,
                       &plsnUndoNext,
                       &plsnUndoNext,
                       0,
                       0LL,
                       v20,
                       plsn);
          if ( appended >= 0 )
          {
            v10 -= v11;
            v5 += v11;
            v16 = v10;
            if ( v10 >= v11 )
              v16 = v11;
            v11 = v16;
            if ( !v10 )
              break;
          }
        }
      }
      ExFreePoolWithTag(Pool2, 0);
      return appended;
    }
    else
    {
      return -1073741670;
    }
  }
  return result;
}
