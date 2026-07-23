/*
 * XREFs of IopIoRingDispatchRegisterBuffers @ 0x14079ACD4
 * Callers:
 *     IopProcessIoRingEntry @ 0x140B02A30 (IopProcessIoRingEntry.c)
 * Callees:
 *     IopCompleteIoRingEntry @ 0x140410C94 (IopCompleteIoRingEntry.c)
 *     IopExceptionFilter @ 0x1405CD104 (IopExceptionFilter.c)
 *     IopMcCreateBufferEntry @ 0x1405D9E44 (IopMcCreateBufferEntry.c)
 *     IopMcWaitAndCleanupBufferEntry @ 0x1405D9FD4 (IopMcWaitAndCleanupBufferEntry.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     IopIoRingCleanupRegBufferArray @ 0x14079A9B0 (IopIoRingCleanupRegBufferArray.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     ProbeForWrite @ 0x140925C90 (ProbeForWrite.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 */

void __fastcall IopIoRingDispatchRegisterBuffers(__int64 a1, __int64 a2)
{
  char PreviousMode; // r8
  __int64 i; // r14
  __int64 v5; // r15
  ULONG_PTR *v6; // rsi
  ULONG_PTR *v7; // r12
  volatile void *v8; // r9
  signed int BufferEntry; // ebx
  _KPROCESS *Process; // rcx
  __int16 v11; // ax
  bool v13; // cl
  bool v14; // zf
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax
  unsigned int v17; // edx
  ULONG_PTR *Pool2; // rax
  __int64 v19; // rbx
  size_t v20; // rbx
  volatile void *v21; // r9
  unsigned int v22; // ebx
  ULONG_PTR v23; // rcx
  ULONG_PTR *v24; // rax
  unsigned int v25; // [rsp+20h] [rbp-88h]
  ULONG_PTR *v26; // [rsp+28h] [rbp-80h]
  __int64 v27; // [rsp+50h] [rbp-58h]
  __int128 v28; // [rsp+58h] [rbp-50h] BYREF
  bool v30; // [rsp+C0h] [rbp+18h]
  char v31; // [rsp+C8h] [rbp+20h]

  PreviousMode = KeGetCurrentThread()->PreviousMode;
  v31 = PreviousMode;
  LODWORD(i) = 0;
  LODWORD(v5) = 0;
  v6 = 0LL;
  v25 = *(_DWORD *)(a1 + 176);
  v7 = *(ULONG_PTR **)(a1 + 184);
  *(_DWORD *)(a1 + 176) = 0;
  *(_QWORD *)(a1 + 184) = 0LL;
  if ( (*(_DWORD *)(a2 + 4) & 0xFFFFFFFE) != 0 || *(_DWORD *)(a2 + 16) || *(_DWORD *)(a2 + 20) )
  {
    BufferEntry = -1069154303;
    goto LABEL_48;
  }
  v5 = *(unsigned int *)(a2 + 28);
  v8 = *(volatile void **)(a2 + 32);
  *(_QWORD *)&v28 = v8;
  if ( !(_DWORD)v5 )
  {
    BufferEntry = v8 != 0LL ? 0xC000000D : 0;
    goto LABEL_48;
  }
  Process = KeGetCurrentThread()->ApcState.Process;
  v13 = 0;
  if ( Process[1].ReadyTime )
  {
    v11 = WORD2(Process[3].PerProcessorCycleTimes);
    if ( v11 == 332 || v11 == 452 )
      v13 = 1;
  }
  v30 = v13;
  if ( PreviousMode )
  {
    v14 = !v13;
    v15 = -1;
    if ( v14 )
      v16 = 16 * v5;
    else
      v16 = 8 * v5;
    if ( v16 <= 0xFFFFFFFF )
      v15 = v16;
    BufferEntry = v16 > 0xFFFFFFFF ? 0xC0000095 : 0;
    if ( v16 > 0xFFFFFFFF )
      goto LABEL_48;
    ProbeForRead(v8, v15, 1u);
  }
  v17 = v25;
  if ( (_DWORD)v5 == v25 )
  {
    v6 = v7;
    v7 = 0LL;
  }
  else
  {
    Pool2 = (ULONG_PTR *)ExAllocatePool2(0x101uLL);
    v6 = Pool2;
    if ( !Pool2 )
    {
      BufferEntry = -1073741670;
      goto LABEL_48;
    }
    v19 = v25;
    if ( (unsigned int)v5 < v25 )
      v19 = (unsigned int)v5;
    v20 = 8 * v19;
    memmove(Pool2, v7, v20);
    memset_0(v7, 0, v20);
    v17 = v25;
  }
  for ( i = 0LL; (unsigned int)i < (unsigned int)v5; i = (unsigned int)(i + 1) )
  {
    if ( v30 )
    {
      v21 = (volatile void *)*(unsigned int *)(v28 + 8 * i);
      v27 = (__int64)v21;
      v22 = *(_DWORD *)(v28 + 8 * i + 4);
    }
    else
    {
      v21 = *(volatile void **)(v28 + 16LL * (unsigned int)i);
      v27 = (__int64)v21;
      v22 = *(_DWORD *)(v28 + 16LL * (unsigned int)i + 8);
    }
    if ( (unsigned int)i < v17 )
    {
      v23 = v6[i];
      if ( v23 )
      {
        if ( *(volatile void **)(v23 + 32) == v21 && *(_DWORD *)(v23 + 40) == v22 )
          continue;
      }
    }
    if ( v31 )
      ProbeForWrite(v21, v22, 1u);
    v24 = &v6[i];
    v26 = v24;
    if ( *v24 )
    {
      IopMcWaitAndCleanupBufferEntry(*v24);
      v24 = v26;
      *v26 = 0LL;
    }
    if ( v22 )
    {
      BufferEntry = IopMcCreateBufferEntry(v27, v22, v31, (__int64 *)v24);
      if ( BufferEntry < 0 )
        goto LABEL_48;
    }
    v17 = v25;
  }
  *(_DWORD *)(a1 + 176) = i;
  *(_QWORD *)(a1 + 184) = v6;
  v6 = 0LL;
  BufferEntry = 0;
LABEL_48:
  if ( v6 )
    IopIoRingCleanupRegBufferArray(v5, v6);
  if ( v7 )
    IopIoRingCleanupRegBufferArray(v25, v7);
  *((_QWORD *)&v28 + 1) = (unsigned int)i;
  *(_QWORD *)&v28 = (unsigned int)BufferEntry;
  IopCompleteIoRingEntry(a1, *(_QWORD *)(a2 + 8), &v28, 0);
}
