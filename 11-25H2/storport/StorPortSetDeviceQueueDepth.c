/*
 * XREFs of StorPortSetDeviceQueueDepth @ 0x140029490
 * Callers:
 *     <none>
 * Callees:
 *     sub_14001B210 @ 0x14001B210 (sub_14001B210.c)
 *     sub_14001E1F0 @ 0x14001E1F0 (sub_14001E1F0.c)
 *     sub_140029830 @ 0x140029830 (sub_140029830.c)
 *     sub_140037124 @ 0x140037124 (sub_140037124.c)
 *     sub_1400727B0 @ 0x1400727B0 (sub_1400727B0.c)
 */

char __fastcall StorPortSetDeviceQueueDepth(
        __int64 a1,
        unsigned __int8 a2,
        unsigned __int8 a3,
        unsigned __int8 a4,
        unsigned int a5)
{
  __int64 v5; // rbp
  char v6; // di
  int v7; // r15d
  int v8; // r12d
  int v9; // r13d
  __int64 v10; // rbp
  KIRQL CurrentIrql; // al
  _QWORD *v12; // r14
  _QWORD **v13; // rbp
  _QWORD *i; // rbx
  _QWORD *v15; // rsi
  KIRQL v17; // bl
  _QWORD *v18; // rax
  __int64 v19; // rdx
  int v20; // eax
  int v21; // edx
  int v22; // r8d
  char v23; // r10
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+60h] [rbp-48h] BYREF
  int v25; // [rsp+B0h] [rbp+8h]

  v5 = *(_QWORD *)(a1 - 16);
  v6 = 0;
  v7 = a4;
  v8 = a3;
  v9 = a2;
  HIBYTE(v25) = 0;
  if ( (*(_BYTE *)(v5 + 248) & 1) != 0 )
    return 0;
  v10 = *(_QWORD *)v5;
  if ( !v10 )
    return 0;
  LOBYTE(v25) = a2;
  BYTE1(v25) = a3;
  BYTE2(v25) = a4;
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    if ( (unsigned int)CurrentIrql >= *(_DWORD *)(v10 + 856) )
    {
      v15 = sub_14001B210(v10, v25);
    }
    else
    {
      v17 = sub_14001E1F0(v10);
      v18 = sub_14001B210(v10, v25);
      LOBYTE(v19) = v17;
      v15 = v18;
      sub_140029830(v10, v19);
    }
  }
  else
  {
    memset(&LockHandle, 0, sizeof(LockHandle));
    v12 = 0LL;
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 136), &LockHandle);
    v13 = (_QWORD **)(v10 + 144);
    for ( i = *v13; i != v13; i = (_QWORD *)*i )
    {
      v12 = i - 8;
      if ( ((unsigned __int8)BYTE2(*((_DWORD *)i + 10)) | ((((unsigned __int8)*((_DWORD *)i + 10) << 8) | (unsigned __int8)BYTE1(*((_DWORD *)i + 10))) << 8)) == (v7 | ((v8 | (v9 << 8)) << 8)) )
        break;
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v15 = 0LL;
    if ( i != v13 )
      v15 = v12;
  }
  if ( !v15 || a5 > *((_DWORD *)v15 + 232) )
    return 0;
  if ( *((_DWORD *)v15 + 181) == a5 )
    return 1;
  v20 = sub_140037124(v15 + 88);
  if ( v20 == v21 )
  {
    v6 = 1;
    if ( (byte_1401694F0 & 0x10) != 0 )
      sub_1400727B0(
        *(_DWORD *)(v15[3] + 56LL),
        v21,
        v22,
        *(_QWORD *)(v15[3] + 48LL),
        *(_DWORD *)(v15[3] + 56LL),
        v9,
        v8,
        v7,
        v23,
        v21,
        *((_DWORD *)v15 + 232),
        1);
  }
  return v6;
}
