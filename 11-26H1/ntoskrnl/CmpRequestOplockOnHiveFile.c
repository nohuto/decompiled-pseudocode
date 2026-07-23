/*
 * XREFs of CmpRequestOplockOnHiveFile @ 0x140868A28
 * Callers:
 *     CmpHiveCachePopulateHiveEntryThread @ 0x140868610 (CmpHiveCachePopulateHiveEntryThread.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     ZwFsControlFile @ 0x1407286E0 (ZwFsControlFile.c)
 */

__int64 __fastcall CmpRequestOplockOnHiveFile(HANDLE *a1, __int64 a2, __int64 a3)
{
  NTSTATUS v6; // eax
  unsigned int v7; // ebx
  NTSTATUS v8; // eax
  int IoStatusBlock; // [rsp+20h] [rbp-48h]

  *(_OWORD *)(a2 + 28) = 0LL;
  *(_QWORD *)(a2 + 44) = 0LL;
  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 786433;
  *(_DWORD *)(a2 + 24) = 1;
  *(_DWORD *)(a2 + 20) = 7;
  *(_DWORD *)(a2 + 28) = 1572865;
  v6 = ZwFsControlFile(
         *a1,
         *(HANDLE *)(a2 + 208),
         0LL,
         0LL,
         (PIO_STATUS_BLOCK)a2,
         0x90240u,
         (PVOID)(a2 + 16),
         0xCu,
         (PVOID)(a2 + 28),
         0x18u);
  v7 = v6;
  if ( v6 != 259 )
  {
    SetFailureLocation(a3, 0, 46, v6, 16);
    return v7;
  }
  if ( a1[1] )
  {
    *(_OWORD *)(a2 + 84) = 0LL;
    *(_QWORD *)(a2 + 100) = 0LL;
    *(_OWORD *)(a2 + 56) = 0LL;
    *(_DWORD *)(a2 + 72) = 786433;
    *(_DWORD *)(a2 + 80) = 1;
    *(_DWORD *)(a2 + 76) = 7;
    *(_DWORD *)(a2 + 84) = 1572865;
    v8 = ZwFsControlFile(
           a1[1],
           *(HANDLE *)(a2 + 224),
           0LL,
           0LL,
           (PIO_STATUS_BLOCK)(a2 + 56),
           0x90240u,
           (PVOID)(a2 + 72),
           0xCu,
           (PVOID)(a2 + 84),
           0x18u);
    v7 = v8;
    if ( v8 != 259 )
    {
      IoStatusBlock = 32;
LABEL_9:
      SetFailureLocation(0LL, 0, 46, v8, IoStatusBlock);
      return v7;
    }
  }
  if ( a1[2] )
  {
    *(_OWORD *)(a2 + 140) = 0LL;
    *(_QWORD *)(a2 + 156) = 0LL;
    *(_OWORD *)(a2 + 112) = 0LL;
    *(_DWORD *)(a2 + 128) = 786433;
    *(_DWORD *)(a2 + 136) = 1;
    *(_DWORD *)(a2 + 132) = 7;
    *(_DWORD *)(a2 + 140) = 1572865;
    v8 = ZwFsControlFile(
           a1[2],
           *(HANDLE *)(a2 + 240),
           0LL,
           0LL,
           (PIO_STATUS_BLOCK)(a2 + 112),
           0x90240u,
           (PVOID)(a2 + 128),
           0xCu,
           (PVOID)(a2 + 140),
           0x18u);
    v7 = v8;
    if ( v8 != 259 )
    {
      IoStatusBlock = 48;
      goto LABEL_9;
    }
  }
  return v7;
}
