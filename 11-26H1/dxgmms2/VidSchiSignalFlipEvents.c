/*
 * XREFs of VidSchiSignalFlipEvents @ 0x14001F574
 * Callers:
 *     VidSchiCompleteFlipEntry @ 0x14001E790 (VidSchiCompleteFlipEntry.c)
 *     ?VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VIDSCH_PRESENT_INFO@@G@Z @ 0x14001F7AC (-VidSchiUnreferenceDisplayingAllocations@@YAXPEAVHwQueueStagingList@@PEAU_VIDSCH_GLOBAL@@PEAU_VI.c)
 * Callees:
 *     VidSchiSignalRegisteredEvent @ 0x1400270D0 (VidSchiSignalRegisteredEvent.c)
 */

void __fastcall VidSchiSignalFlipEvents(__int64 a1, int a2, __int16 a3)
{
  __int64 v3; // rbp
  int v4; // esi
  __int64 v7; // rdi
  unsigned int v8; // edx
  char v9; // cl
  bool v10; // zf
  int v11; // eax
  unsigned int v12; // r15d
  char v13; // al
  __int64 v14; // r12
  __int64 v15; // rbp
  __int64 v16; // r14
  _QWORD *v17; // r13
  _QWORD *v18; // r14
  struct _KEVENT *v19; // rax
  struct _KEVENT *v20; // rcx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-48h] BYREF
  char v22; // [rsp+70h] [rbp+8h]

  v3 = *(_QWORD *)(a1 + 16);
  LOWORD(v4) = a3;
  if ( v3 )
  {
    v7 = *(_QWORD *)(v3 + 40);
    VidSchiSignalRegisteredEvent(v7, v3 + 128);
    VidSchiSignalRegisteredEvent(v7, v3 + 144);
    VidSchiSignalRegisteredEvent(v7, v7 + 1944);
    VidSchiSignalRegisteredEvent(v7, v7 + 1928);
    *(_QWORD *)(v7 + 1776) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1744), 0, 0);
    *(_QWORD *)(v7 + 1888) = MEMORY[0xFFFFF78000000320];
    KeSetEvent((PRKEVENT)(v7 + 1856), 0, 0);
    if ( a2 )
    {
      *(_QWORD *)(v7 + 1496) = MEMORY[0xFFFFF78000000320];
      KeSetEvent((PRKEVENT)(v7 + 1464), 0, 0);
    }
    VidSchiSignalRegisteredEvent(v7, v7 + 1960);
    if ( *(_WORD *)(a1 + 44300) && (_WORD)v4 )
    {
      LOWORD(v8) = *(_WORD *)(a1 + 44298);
      do
      {
        v9 = -1;
        v10 = !_BitScanForward((unsigned int *)&v11, (unsigned __int16)v4);
        v12 = 0;
        if ( !v10 )
          v9 = v11;
        v13 = v9;
        v22 = v9;
        if ( (_WORD)v8 )
        {
          v14 = (__int64)v9 << 6;
          do
          {
            v15 = (v14 + v12) << 6;
            v16 = *(_QWORD *)(a1 + v15 + 3352);
            if ( v16 )
            {
              memset(&LockHandle, 0, sizeof(LockHandle));
              KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v16 + 32), &LockHandle);
              v17 = (_QWORD *)(v16 + 16);
              v18 = *(_QWORD **)(v16 + 16);
              if ( v18 != v17 )
              {
                v19 = (struct _KEVENT *)(v7 + 1464);
                do
                {
                  v20 = (struct _KEVENT *)v18[2];
                  if ( v20 != v19 )
                  {
                    KeSetEvent(v20, 0, 0);
                    v19 = (struct _KEVENT *)(v7 + 1464);
                  }
                  v18 = (_QWORD *)*v18;
                }
                while ( v18 != v17 );
              }
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              *(_QWORD *)(a1 + v15 + 3352) = 0LL;
            }
            v8 = *(unsigned __int16 *)(a1 + 44298);
            ++v12;
          }
          while ( v12 < v8 );
          v13 = v22;
        }
        v4 = (unsigned __int16)v4 & ~(1 << v13);
      }
      while ( (_WORD)v4 );
    }
  }
}
