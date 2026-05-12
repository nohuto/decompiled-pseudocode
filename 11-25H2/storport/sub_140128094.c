/*
 * XREFs of sub_140128094 @ 0x140128094
 * Callers:
 *     sub_140127AAC @ 0x140127AAC (sub_140127AAC.c)
 *     sub_14012BAB0 @ 0x14012BAB0 (sub_14012BAB0.c)
 *     sub_14012D7EC @ 0x14012D7EC (sub_14012D7EC.c)
 * Callees:
 *     sub_1400F7308 @ 0x1400F7308 (sub_1400F7308.c)
 *     sub_1400F7368 @ 0x1400F7368 (sub_1400F7368.c)
 */

void __fastcall sub_140128094(_QWORD *a1, unsigned int a2, __int64 a3, char a4)
{
  __int64 v6; // rcx
  unsigned int v7; // ebp
  __int64 v8; // r14
  int v9; // edx
  __int64 v10; // r8
  __int64 v11; // rax
  _QWORD *v12; // rax
  _QWORD *v13; // rdi
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v6 = a1[20];
  if ( *(_BYTE *)v6 == 1 )
  {
    v7 = -1;
    if ( a2 == -1 )
      v8 = -1LL;
    else
      v8 = 10000LL * a2;
    v9 = *(_DWORD *)(v6 + 176);
    if ( (v9 & 0x20) == 0 || a4 )
    {
      PoFxSetDeviceIdleTimeout(**(_QWORD **)(v6 + 8), v8);
      *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 128LL) = a2;
    }
    else
    {
      v10 = a1[142];
      memset(&LockHandle, 0, sizeof(LockHandle));
      if ( *(_DWORD *)(v6 + 116) == *(_DWORD *)(v10 + 656) && (v9 & 0x8000) != 0 )
        v7 = 0;
      if ( (*(_DWORD *)(a1[50] + 184LL) & 0x40000000) != 0 )
      {
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 632), &LockHandle);
        v11 = a1[142];
        if ( *(_DWORD *)(v11 + 656) )
        {
          v12 = (_QWORD *)(v11 + 640);
          v13 = (_QWORD *)*v12;
          while ( v13 != v12 )
          {
            if ( sub_1400F7308((__int64)(v13 - 3)) )
            {
              *(_DWORD *)(*(_QWORD *)(v13[13] + 8LL) + 28LL) = a2;
              PoFxSetDeviceIdleTimeout(**(_QWORD **)(v13[13] + 8LL), v8);
              sub_1400F7368((__int64)(v13 - 3));
            }
            v13 = (_QWORD *)*v13;
            v12 = (_QWORD *)(a1[142] + 640LL);
          }
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      PoFxSetDeviceIdleTimeout(**(_QWORD **)(a1[20] + 8LL), 10000LL * v7);
      *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 128LL) = v7;
      *(_DWORD *)(*(_QWORD *)(a1[20] + 8LL) + 132LL) = a2;
    }
  }
}
