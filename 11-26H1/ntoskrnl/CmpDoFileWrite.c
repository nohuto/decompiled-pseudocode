/*
 * XREFs of CmpDoFileWrite @ 0x140AE48C8
 * Callers:
 *     CmpWriteOffsetArrayToFile @ 0x140860DC0 (CmpWriteOffsetArrayToFile.c)
 *     CmpFileWrite @ 0x140AE4880 (CmpFileWrite.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     KeWaitForMultipleObjects @ 0x1403981C0 (KeWaitForMultipleObjects.c)
 *     CmpAllocatePool @ 0x14046DFF0 (CmpAllocatePool.c)
 *     CmSiFreeMemory @ 0x14048EB60 (CmSiFreeMemory.c)
 *     CmpSetRespectIoPriorityThread @ 0x1404BD9B4 (CmpSetRespectIoPriorityThread.c)
 *     CmpSetIoPriorityThread @ 0x1404E52E8 (CmpSetIoPriorityThread.c)
 *     CmpSetPriorityThread @ 0x1404E6E40 (CmpSetPriorityThread.c)
 *     ZwWriteFile @ 0x1407280C0 (ZwWriteFile.c)
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     CmpCreateEvent @ 0x1408BD094 (CmpCreateEvent.c)
 */

__int64 __fastcall CmpDoFileWrite(__int64 a1, void *a2, __int64 a3, __int64 a4, unsigned int a5, char a6)
{
  __int64 v6; // rbp
  ULONG v7; // esi
  __int64 Pool; // rbx
  __int64 v9; // r8
  struct _SINGLE_LIST_ENTRY *v10; // r9
  int Event; // edi
  __int64 v12; // r8
  __int64 v13; // r8
  struct _SINGLE_LIST_ENTRY *v14; // r9
  unsigned int v15; // r15d
  char *Buffer; // rdi
  unsigned int v17; // r14d
  void **v18; // r12
  void *v19; // rdx
  ULONG Length; // ebp
  unsigned int v21; // ecx
  ULONG i; // ecx
  __int64 v23; // r8
  unsigned int v24; // ebp
  HANDLE *v25; // rsi
  unsigned int v27; // [rsp+50h] [rbp-68h]
  LARGE_INTEGER ByteOffset; // [rsp+58h] [rbp-60h] BYREF
  char *v29; // [rsp+60h] [rbp-58h]
  PIO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-50h]
  int v31; // [rsp+C0h] [rbp+8h]
  char v33; // [rsp+D0h] [rbp+18h]
  char v35; // [rsp+F0h] [rbp+38h]

  ByteOffset.QuadPart = 0LL;
  v6 = a4;
  v33 = 0;
  v27 = 0;
  v7 = 0;
  v31 = 0;
  Pool = CmpAllocatePool(0x40uLL);
  if ( Pool )
  {
    if ( (a6 & 1) != 0 )
    {
      v31 = CmpSetIoPriorityThread((LegacyAutoBoost *)KeGetCurrentThread(), 0, v9, v10);
      v27 = CmpSetPriorityThread((__int64)KeGetCurrentThread(), 4LL, v12);
      v33 = 1;
    }
    v35 = CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), 1);
    v15 = 0;
LABEL_6:
    if ( v15 < a5 )
    {
      Buffer = *(char **)(v6 + 24LL * v15 + 8);
      v17 = *(_DWORD *)(v6 + 24LL * v15 + 16);
      ByteOffset.QuadPart = *(unsigned int *)(v6 + 24LL * v15);
      v29 = Buffer;
      while ( 1 )
      {
        if ( !v17 )
        {
          v6 = a4;
          ++v15;
          goto LABEL_6;
        }
        v18 = (void **)(Pool + 8LL * v7);
        if ( !*v18 )
        {
          Event = CmpCreateEvent(SynchronizationEvent, (HANDLE *)(Pool + 8LL * v7), (PVOID *)(Pool + 512 + 8LL * v7));
          if ( Event < 0 )
            goto LABEL_26;
          Buffer = v29;
        }
        v19 = *v18;
        Length = 0x100000;
        if ( v17 < 0x100000 )
          Length = v17;
        IoStatusBlock = (PIO_STATUS_BLOCK)(Pool + 16 * (v7 + 256LL));
        if ( ZwWriteFile(a2, v19, 0LL, 0LL, IoStatusBlock, Buffer, Length, &ByteOffset, 0LL) < 0 )
        {
          Length = 0x10000;
          if ( v17 < 0x10000 )
            Length = v17;
          Event = ZwWriteFile(
                    a2,
                    *(HANDLE *)(Pool + 8LL * v7),
                    0LL,
                    0LL,
                    IoStatusBlock,
                    Buffer,
                    Length,
                    &ByteOffset,
                    0LL);
          if ( Event < 0 )
          {
LABEL_26:
            if ( v7 )
              KeWaitForMultipleObjects(
                v7,
                (PVOID *)(Pool + 512),
                WaitAll,
                Executive,
                0,
                0,
                0LL,
                (PKWAIT_BLOCK)(Pool + 1024));
            goto LABEL_34;
          }
          Buffer = v29;
        }
        ++v7;
        ByteOffset.QuadPart += Length;
        Buffer += Length;
        v17 -= Length;
        v29 = Buffer;
        if ( v7 == 64 )
        {
          KeWaitForMultipleObjects(
            0x40u,
            (PVOID *)(Pool + 512),
            WaitAll,
            Executive,
            0,
            0,
            0LL,
            (PKWAIT_BLOCK)(Pool + 1024));
          v21 = 0;
          v7 = 0;
          while ( v21 < 0x40 )
          {
            Event = *(_DWORD *)(Pool + 16 * (v21 + 256LL));
            if ( Event < 0 )
              goto LABEL_34;
            ++v21;
          }
          Buffer = v29;
        }
      }
    }
    if ( v7 )
    {
      KeWaitForMultipleObjects(v7, (PVOID *)(Pool + 512), WaitAll, Executive, 0, 0, 0LL, (PKWAIT_BLOCK)(Pool + 1024));
      for ( i = 0; i < v7; ++i )
      {
        Event = *(_DWORD *)(Pool + 16 * (i + 256LL));
        if ( Event < 0 )
          goto LABEL_34;
      }
    }
    Event = 0;
LABEL_34:
    if ( v33 )
    {
      CmpSetIoPriorityThread((LegacyAutoBoost *)KeGetCurrentThread(), v31, v13, v14);
      CmpSetPriorityThread((__int64)KeGetCurrentThread(), v27, v23);
    }
    CmpSetRespectIoPriorityThread((__int64)KeGetCurrentThread(), v35);
    v24 = 0;
    v25 = (HANDLE *)Pool;
    do
    {
      if ( !*v25 )
        break;
      ObfDereferenceObject(v25[64]);
      ZwClose(*v25);
      ++v24;
      ++v25;
    }
    while ( v24 < 0x40 );
    CmSiFreeMemory((PPRIVILEGE_SET)Pool);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return (unsigned int)Event;
}
