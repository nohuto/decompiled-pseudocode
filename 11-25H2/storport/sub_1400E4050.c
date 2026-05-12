/*
 * XREFs of sub_1400E4050 @ 0x1400E4050
 * Callers:
 *     sub_1400E05A4 @ 0x1400E05A4 (sub_1400E05A4.c)
 *     sub_1400E0B68 @ 0x1400E0B68 (sub_1400E0B68.c)
 *     sub_1400E1168 @ 0x1400E1168 (sub_1400E1168.c)
 *     sub_1400E1630 @ 0x1400E1630 (sub_1400E1630.c)
 *     sub_1400E18FC @ 0x1400E18FC (sub_1400E18FC.c)
 *     sub_1400E1C2C @ 0x1400E1C2C (sub_1400E1C2C.c)
 *     sub_1400E3180 @ 0x1400E3180 (sub_1400E3180.c)
 *     sub_1400E5218 @ 0x1400E5218 (sub_1400E5218.c)
 *     sub_1400E56F0 @ 0x1400E56F0 (sub_1400E56F0.c)
 *     sub_1400E65F4 @ 0x1400E65F4 (sub_1400E65F4.c)
 *     sub_1400F4DB8 @ 0x1400F4DB8 (sub_1400F4DB8.c)
 *     sub_1400F5264 @ 0x1400F5264 (sub_1400F5264.c)
 *     sub_1400F56B4 @ 0x1400F56B4 (sub_1400F56B4.c)
 *     sub_1400F58E8 @ 0x1400F58E8 (sub_1400F58E8.c)
 *     sub_1400F5B44 @ 0x1400F5B44 (sub_1400F5B44.c)
 *     sub_1400F5DCC @ 0x1400F5DCC (sub_1400F5DCC.c)
 * Callees:
 *     sub_1400CD684 @ 0x1400CD684 (sub_1400CD684.c)
 *     sub_1400D1DC4 @ 0x1400D1DC4 (sub_1400D1DC4.c)
 *     sub_1400D3FBC @ 0x1400D3FBC (sub_1400D3FBC.c)
 *     sub_1400DC734 @ 0x1400DC734 (sub_1400DC734.c)
 *     sub_1400DCAF8 @ 0x1400DCAF8 (sub_1400DCAF8.c)
 *     sub_1400E3C30 @ 0x1400E3C30 (sub_1400E3C30.c)
 *     sub_1400F0EA0 @ 0x1400F0EA0 (sub_1400F0EA0.c)
 */

__int64 __fastcall sub_1400E4050(__int64 a1, __int64 a2, char a3, __int64 a4, char a5, __int64 a6, __int64 a7, int a8)
{
  __int64 v9; // rsi
  char v11; // r14
  _DWORD *v12; // r15
  int v13; // ebx
  char v14; // bl
  __int64 v16; // r8
  __int64 v17; // r14
  int v18; // eax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+78h] [rbp-19h] BYREF
  __int64 v20; // [rsp+D8h] [rbp+47h] BYREF
  unsigned __int16 v21; // [rsp+E8h] [rbp+57h] BYREF
  unsigned __int16 v22; // [rsp+F0h] [rbp+5Fh] BYREF

  LOBYTE(v21) = a3;
  v20 = 0LL;
  v22 = -1;
  v9 = *(_QWORD *)(a1 + 88);
  memset(&LockHandle, 0, sizeof(LockHandle));
  v11 = 0;
  v21 = -1;
  v12 = *(_DWORD **)(v9 + 128);
  if ( *(_DWORD *)(v9 + 948) )
  {
    v13 = -2147483631;
    goto LABEL_7;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 1u);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(a1 + 104), &LockHandle);
  v14 = sub_1400DC734(a1, 0, &v21, &v22);
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( !v14 )
  {
    v13 = -2147483631;
    goto LABEL_5;
  }
  v11 = 1;
  sub_1400E3C30((__int64)v12, v9, (_QWORD *)a1, a2, 0, a5, a6, a7, a8, v21, v22, 0LL, 0LL, &v20);
  v13 = sub_1400D1DC4((__int64)v12, v20);
  if ( v13 < 0 )
  {
LABEL_5:
    _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
    if ( !v11 )
      goto LABEL_7;
    goto LABEL_6;
  }
  _InterlockedAdd((volatile signed __int32 *)(a1 + 128), 0xFFFFFFFF);
  _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 1u);
  v17 = v20;
  if ( (v12[36] & 0x1000LL) != 0 )
    v18 = sub_1400D3FBC(v12, v20);
  else
    v18 = sub_1400CD684(v12, v20, v16);
  v13 = v18;
  if ( v18 >= 0 )
  {
    KeWaitForSingleObject((PVOID)(v17 + 664), Executive, 0, 0, 0LL);
    return 0;
  }
  _InterlockedAdd16((volatile signed __int16 *)(a1 + 148), 0xFFFFu);
LABEL_6:
  sub_1400DCAF8(a1, v20);
LABEL_7:
  if ( *(_WORD *)(a1 + 136) )
    sub_1400F0EA0(a1);
  return (unsigned int)v13;
}
