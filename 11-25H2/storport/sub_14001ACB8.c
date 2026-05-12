/*
 * XREFs of sub_14001ACB8 @ 0x14001ACB8
 * Callers:
 *     sub_14001A620 @ 0x14001A620 (sub_14001A620.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140053BEC @ 0x140053BEC (sub_140053BEC.c)
 *     sub_140055930 @ 0x140055930 (sub_140055930.c)
 *     sub_140055C18 @ 0x140055C18 (sub_140055C18.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_14008D9B8 @ 0x14008D9B8 (sub_14008D9B8.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

__int64 __fastcall sub_14001ACB8(__int64 a1, unsigned int **a2)
{
  __int64 v3; // r13
  __int64 v4; // rdi
  unsigned int v5; // esi
  __int64 v6; // rdx
  unsigned int *Pool2; // r12
  unsigned int v8; // ebp
  _QWORD *i; // r14
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  PDEVICE_OBJECT v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  _QWORD *v15; // r14
  void *v16; // rcx
  void *v17; // rax
  _QWORD *v19; // rdi
  _QWORD *v20; // rcx
  PDEVICE_OBJECT v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rcx
  struct _KLOCK_QUEUE_HANDLE v24; // [rsp+30h] [rbp-68h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-50h] BYREF
  __int64 Size; // [rsp+A0h] [rbp+8h]

  memset(&LockHandle, 0, sizeof(LockHandle));
  memset(&v24, 0, sizeof(v24));
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
    && BYTE1(off_140168120->Timer) >= 5u )
  {
    sub_140055C18(off_140168120->AttachedDevice, 37LL, &unk_14014A2D8, a1);
  }
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 136), &LockHandle);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 216), &v24);
  v3 = (unsigned int)(*(_DWORD *)(a1 + 160) + *(_DWORD *)(a1 + 240));
  v4 = *(_QWORD *)(a1 + 8);
  Size = 8 * v3 + 16;
  v5 = 0;
  Pool2 = (unsigned int *)ExAllocatePool2(64LL, Size, 1380213074LL);
  if ( Pool2 )
  {
    v8 = 0;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
      && BYTE1(off_140168120->Timer) >= 5u )
    {
      sub_140055930(off_140168120->AttachedDevice, 38LL, &unk_14014A2D8);
    }
    for ( i = *(_QWORD **)(a1 + 144); ; i = (_QWORD *)*i )
    {
      if ( i == (_QWORD *)(a1 + 144) )
        goto LABEL_38;
      v10 = i - 8;
      v11 = i - 8;
      if ( (i[55] & 4) != 0 )
      {
        LOBYTE(v6) = 1;
        sub_140053BEC(v11, v6);
        ObfReferenceObject((PVOID)v10[1]);
        if ( v8 > (unsigned int)v3 )
        {
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120 )
          {
            if ( (HIDWORD(off_140168120->Timer) & 0x4000) != 0 && BYTE1(off_140168120->Timer) >= 5u )
              sub_140067F28(off_140168120->AttachedDevice, 40LL, &unk_14014A2D8, v8, v3);
LABEL_38:
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
              && BYTE1(off_140168120->Timer) >= 5u )
            {
              sub_140055930(off_140168120->AttachedDevice, 42LL, &unk_14014A2D8);
            }
          }
          v15 = *(_QWORD **)(a1 + 224);
          while ( 2 )
          {
            if ( v15 == (_QWORD *)(a1 + 224) )
            {
LABEL_20:
              KeReleaseInStackQueuedSpinLock(&v24);
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              *Pool2 = v8;
              v16 = *(void **)(a1 + 4376);
              *a2 = Pool2;
              if ( v16 )
              {
                ExFreePoolWithTag(v16, 0x52446152u);
                *(_QWORD *)(a1 + 4376) = 0LL;
              }
              v17 = (void *)sub_1400143E0(64LL, Size, 1380213074LL, *(_QWORD *)(a1 + 8));
              *(_QWORD *)(a1 + 4376) = v17;
              if ( v17 )
              {
                memmove(v17, Pool2, Size);
              }
              else if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                     && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
                     && BYTE1(off_140168120->Timer) >= 3u )
              {
                sub_140055C18(off_140168120->AttachedDevice, 46LL, &unk_14014A2D8, a1);
              }
              goto LABEL_24;
            }
            v19 = v15 - 8;
            v20 = v15 - 8;
            if ( (v15[55] & 4) != 0 )
            {
              LOBYTE(v6) = 1;
              sub_140053BEC(v20, v6);
              ObfReferenceObject((PVOID)v19[1]);
              if ( v8 > (unsigned int)v3 )
              {
                if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                  && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
                  && BYTE1(off_140168120->Timer) >= 5u )
                {
                  sub_140067F28(off_140168120->AttachedDevice, 44LL, &unk_14014A2D8, v8, v3);
                }
                goto LABEL_20;
              }
              v23 = v8++;
              *(_QWORD *)&Pool2[2 * v23 + 2] = v19[1];
              v21 = off_140168120;
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
                && BYTE1(off_140168120->Timer) >= 5u )
              {
                v22 = 45LL;
LABEL_60:
                sub_140055C18(v21->AttachedDevice, v22, &unk_14014A2D8, v15 - 8);
              }
            }
            else
            {
              sub_140053BEC(v20, 0LL);
              v21 = off_140168120;
              if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
                && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
                && BYTE1(off_140168120->Timer) >= 5u )
              {
                v22 = 43LL;
                goto LABEL_60;
              }
            }
            v15 = (_QWORD *)*v15;
            continue;
          }
        }
        v13 = v8++;
        *(_QWORD *)&Pool2[2 * v13 + 2] = v10[1];
        v12 = off_140168120;
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
          && BYTE1(off_140168120->Timer) >= 5u )
        {
          v14 = 41LL;
LABEL_49:
          sub_140055C18(v12->AttachedDevice, v14, &unk_14014A2D8, i - 8);
          continue;
        }
      }
      else
      {
        sub_140053BEC(v11, 0LL);
        v12 = off_140168120;
        if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
          && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
          && BYTE1(off_140168120->Timer) >= 5u )
        {
          v14 = 39LL;
          goto LABEL_49;
        }
      }
    }
  }
  if ( v4 )
    sub_14008D9B8(v4, 64, 8 * v3 + 16, 1380213074, 0x80000000);
  KeReleaseInStackQueuedSpinLock(&v24);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  v5 = -1073741801;
LABEL_24:
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 0x4000) != 0
    && BYTE1(off_140168120->Timer) >= 5u )
  {
    sub_140067FD4(off_140168120->AttachedDevice, 47LL, &unk_14014A2D8, a1, v5);
  }
  return v5;
}
