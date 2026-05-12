/*
 * XREFs of sub_14006A2B0 @ 0x14006A2B0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140026E80 @ 0x140026E80 (sub_140026E80.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_140068028 @ 0x140068028 (sub_140068028.c)
 *     sub_14006A4DC @ 0x14006A4DC (sub_14006A4DC.c)
 */

void __fastcall sub_14006A2B0(PVOID IoObject, _QWORD *Context, PIO_WORKITEM IoWorkItem)
{
  int v3; // ebp
  PSLIST_ENTRY EntrySList; // r14
  int v5; // r15d
  unsigned __int64 v8; // rbx
  int v9; // eax
  KIRQL v10; // al
  KIRQL v11; // di
  struct _SLIST_ENTRY *v12; // rbx
  struct _SLIST_ENTRY *Next; // rax
  struct _SLIST_ENTRY *v14; // rbp
  __int64 v15; // rdi
  struct _SLIST_ENTRY *v16; // rdx
  __int64 v17; // rcx
  int v18; // eax
  __int64 v19; // [rsp+20h] [rbp-38h]
  int v20; // [rsp+20h] [rbp-38h]
  __int64 v21; // [rsp+28h] [rbp-30h]
  int v22; // [rsp+28h] [rbp-30h]

  v3 = 0;
  EntrySList = 0LL;
  v5 = 0;
  if ( Context )
  {
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      v20 = *((_DWORD *)Context + 2);
      sub_140067FD4((__int64)off_140168120->AttachedDevice, 0x13u, (__int64)&unk_14014B8F0, *Context, v20);
    }
    v8 = *(_QWORD *)(*Context + 5640LL) + ((unsigned __int64)*((unsigned int *)Context + 2) << 6);
    v9 = sub_14006A4DC(*Context, Context, Context + 2);
    v3 = v9;
    if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
      && (HIDWORD(off_140168120->Timer) & 1) != 0
      && BYTE1(off_140168120->Timer) >= 4u )
    {
      v22 = v9;
      LODWORD(v19) = *((_DWORD *)Context + 2);
      sub_140068028((__int64)off_140168120->AttachedDevice, 0x14u, (__int64)&unk_14014B8F0, *Context, v19, v22);
    }
    if ( v3 >= 0 )
    {
      v10 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5648LL));
      *(_DWORD *)(v8 + 44) = 2;
      v11 = v10;
      EntrySList = FirstEntrySList((PSLIST_HEADER)(v8 + 48));
      InitializeSListHead((PSLIST_HEADER)(v8 + 48));
      ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(*Context + 5648LL), v11);
    }
  }
  v12 = 0LL;
  if ( EntrySList )
  {
    do
    {
      Next = EntrySList->Next;
      EntrySList->Next = v12;
      v12 = EntrySList;
      EntrySList = Next;
    }
    while ( Next );
  }
  if ( v3 >= 0 && v12 )
  {
    do
    {
      v14 = v12->Next;
      v15 = (__int64)&v12[-2];
      v12->Next = 0LL;
      v16 = v12 - 2;
      v17 = *Context;
      v12 = v14;
      if ( *(_BYTE *)(*Context + 4370LL) )
        v18 = sub_140017D90(v17, v16);
      else
        v18 = sub_1400184D0(v17, (__int64)v16);
      if ( v18 < 0 )
      {
        *(_BYTE *)(*(_QWORD *)(v15 + 168) + 3LL) = 4;
        sub_140026E80(*Context, v15, 1);
      }
      ++v5;
    }
    while ( v14 );
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 1) != 0
    && BYTE1(off_140168120->Timer) >= 4u )
  {
    LODWORD(v21) = v5;
    LODWORD(v19) = *((_DWORD *)Context + 2);
    sub_140068028((__int64)off_140168120->AttachedDevice, 0x15u, (__int64)&unk_14014B8F0, *Context, v19, v21);
  }
  if ( IoWorkItem )
    IoFreeWorkItem(IoWorkItem);
  if ( Context )
    ExFreePoolWithTag(Context, 0x72436152u);
}
