/*
 * XREFs of sub_14002B140 @ 0x14002B140
 * Callers:
 *     sub_14000C6B0 @ 0x14000C6B0 (sub_14000C6B0.c)
 *     sub_1400267A0 @ 0x1400267A0 (sub_1400267A0.c)
 *     sub_14002B0D0 @ 0x14002B0D0 (sub_14002B0D0.c)
 * Callees:
 *     sub_1400013F0 @ 0x1400013F0 (sub_1400013F0.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140027930 @ 0x140027930 (sub_140027930.c)
 *     sub_140029C00 @ 0x140029C00 (sub_140029C00.c)
 *     sub_140055FD0 @ 0x140055FD0 (sub_140055FD0.c)
 */

__int64 *__fastcall sub_14002B140(char *Context, _QWORD *a2)
{
  __int64 *v2; // rdi
  __int64 v3; // rax
  char v4; // bp
  PSLIST_ENTRY v7; // rsi
  _QWORD *v8; // rax
  __int64 v9; // rcx
  unsigned int v10; // ecx
  _QWORD *v11; // rax
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // rdx
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = *((_QWORD *)Context + 6);
  v4 = 0;
  memset(&LockHandle, 0, sizeof(LockHandle));
  if ( *(_DWORD *)(v3 + 996) )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
    v4 = 1;
  }
  if ( *((_DWORD *)Context + 6) )
  {
    if ( !*((_DWORD *)Context + 10) && !*(_DWORD *)(*((_QWORD *)Context + 6) + 988LL) )
    {
      v7 = sub_140029C00((__int64)(Context + 64));
      if ( v7
        || *((_DWORD *)Context + 34) < *((_DWORD *)Context + 36)
        && (sub_1400013F0((unsigned int *)Context), (v7 = sub_140029C00((__int64)(Context + 64))) != 0LL) )
      {
        if ( !v4 )
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)Context, &LockHandle);
        if ( !*((_DWORD *)Context + 6) || *((_DWORD *)Context + 10) || sub_140027930((__int64)Context) )
          goto LABEL_22;
        v2 = (__int64 *)*((_QWORD *)Context + 1);
        v8 = Context + 8;
        if ( (char *)v2[1] == Context + 8 )
        {
          v9 = *v2;
          if ( *(__int64 **)(*v2 + 8) == v2 )
          {
            *v8 = v9;
            *(_QWORD *)(v9 + 8) = v8;
            _InterlockedIncrement((volatile signed __int32 *)Context + 48);
            v10 = *((_DWORD *)Context + 48);
            if ( v10 <= *((_DWORD *)Context + 9) )
              v10 = *((_DWORD *)Context + 9);
            --*((_DWORD *)Context + 6);
            *((_DWORD *)Context + 9) = v10;
            if ( (*((_BYTE *)v2 + 22) & 0x20) == 0 )
              goto LABEL_22;
            v11 = (_QWORD *)sub_140055FD0(v2);
            v12 = *v11;
            if ( *(_QWORD **)(*v11 + 8LL) == v11 )
            {
              v13 = (_QWORD *)v11[1];
              if ( (_QWORD *)*v13 == v11 )
              {
                *v13 = v12;
                *(_QWORD *)(v12 + 8) = v13;
LABEL_22:
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( v2 )
                {
                  a2[3] = v7 + 58;
                  a2[2] = v7 + 3;
                  a2[1] = v7 + 74;
                  sub_140017C40((__int64)&v7[3], v14, *((_DWORD *)&v7[49].Next + 2), *((void **)&v7[50].Next + 1));
                }
                else if ( *((_DWORD *)Context + 32) )
                {
                  ExpInterlockedPushEntrySList(
                    *(PSLIST_HEADER *)(*((_QWORD *)Context + 8) + 8LL * LODWORD(v7->Next)),
                    v7);
                }
                else
                {
                  ExpInterlockedPushEntrySList((PSLIST_HEADER)Context + 4, v7);
                }
                return v2;
              }
            }
          }
        }
        __fastfail(3u);
      }
    }
  }
  if ( v4 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  return v2;
}
