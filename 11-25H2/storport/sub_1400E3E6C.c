/*
 * XREFs of sub_1400E3E6C @ 0x1400E3E6C
 * Callers:
 *     sub_1400E0F0C @ 0x1400E0F0C (sub_1400E0F0C.c)
 *     sub_1400E4E9C @ 0x1400E4E9C (sub_1400E4E9C.c)
 *     sub_1400E50B4 @ 0x1400E50B4 (sub_1400E50B4.c)
 *     sub_1400E65F4 @ 0x1400E65F4 (sub_1400E65F4.c)
 * Callees:
 *     sub_1400CD684 @ 0x1400CD684 (sub_1400CD684.c)
 *     sub_1400D1DC4 @ 0x1400D1DC4 (sub_1400D1DC4.c)
 *     sub_1400D3FBC @ 0x1400D3FBC (sub_1400D3FBC.c)
 *     sub_1400DC734 @ 0x1400DC734 (sub_1400DC734.c)
 *     sub_1400DCAF8 @ 0x1400DCAF8 (sub_1400DCAF8.c)
 *     sub_1400E3C30 @ 0x1400E3C30 (sub_1400E3C30.c)
 *     sub_1400F0EA0 @ 0x1400F0EA0 (sub_1400F0EA0.c)
 */

__int64 __fastcall sub_1400E3E6C(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4,
        char a5,
        __int64 a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10)
{
  __int64 v12; // rsi
  char v15; // r15
  _DWORD *v16; // r14
  int v17; // ebx
  char v18; // bl
  __int64 v20; // r8
  int v21; // eax
  unsigned __int16 v22; // [rsp+78h] [rbp-29h] BYREF
  __int64 v23; // [rsp+80h] [rbp-21h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+88h] [rbp-19h] BYREF
  unsigned __int16 v25; // [rsp+D8h] [rbp+37h] BYREF

  v25 = -1;
  v22 = -1;
  v12 = *(_QWORD *)(a1 + 88);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v23 = 0LL;
  v15 = 0;
  v16 = *(_DWORD **)(v12 + 128);
  if ( *(_DWORD *)(v12 + 948) )
  {
    v17 = -2147483631;
    goto LABEL_7;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 1u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
  v18 = sub_1400DC734(a1, a3, &v22, &v25);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v18 )
  {
    v17 = -2147483631;
    goto LABEL_5;
  }
  v15 = 1;
  sub_1400E3C30((__int64)v16, v12, (_QWORD *)a1, a2, a4, a5, a6, a7, a8, v22, v25, a9, a10, &v23);
  v17 = sub_1400D1DC4((__int64)v16, v23);
  if ( v17 < 0 )
  {
LABEL_5:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
    if ( !v15 )
      goto LABEL_7;
    goto LABEL_6;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 1u);
  if ( (v16[36] & 0x1000LL) != 0 )
    v21 = sub_1400D3FBC(v16, v23);
  else
    v21 = sub_1400CD684(v16, v23, v20);
  v17 = v21;
  if ( v21 >= 0 )
    return 259;
  _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 0xFFFFu);
LABEL_6:
  sub_1400DCAF8(a1, v23);
LABEL_7:
  if ( *(_WORD *)(a1 + 136) )
    sub_1400F0EA0(a1);
  return (unsigned int)v17;
}
