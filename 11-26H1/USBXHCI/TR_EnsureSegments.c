/*
 * XREFs of TR_EnsureSegments @ 0x140018C60
 * Callers:
 *     TR_ReAllocateTransferRingSegmentsForOffload @ 0x14004BDD4 (TR_ReAllocateTransferRingSegmentsForOffload.c)
 *     Bulk_EP_EnableForwardProgress @ 0x14004D990 (Bulk_EP_EnableForwardProgress.c)
 *     TR_Create @ 0x140081594 (TR_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_DDDDD @ 0x140015804 (WPP_RECORDER_SF_DDDDD.c)
 *     CommonBuffer_AcquireBuffers @ 0x140018EF0 (CommonBuffer_AcquireBuffers.c)
 *     TR_AcquireSecureSegments @ 0x140019420 (TR_AcquireSecureSegments.c)
 *     WPP_RECORDER_SF_DDDD @ 0x140024070 (WPP_RECORDER_SF_DDDD.c)
 */

__int64 __fastcall TR_EnsureSegments(__int64 a1, unsigned int a2, char a3)
{
  __int64 v4; // rsi
  unsigned int v7; // ebx
  void *v8; // r13
  KIRQL v9; // al
  _QWORD *v10; // rdi
  _QWORD *v11; // rcx
  unsigned int v13; // r15d
  int v14; // eax
  unsigned int v15; // ebx
  KIRQL v16; // al
  _QWORD *v17; // rcx
  __int64 v18; // rdx
  int v19; // eax
  int v20; // [rsp+28h] [rbp-60h]
  int v21; // [rsp+30h] [rbp-58h]
  int v22; // [rsp+38h] [rbp-50h]
  int v23; // [rsp+40h] [rbp-48h]
  int v24; // [rsp+48h] [rbp-40h]
  _QWORD *v25; // [rsp+50h] [rbp-38h] BYREF
  _QWORD *v26; // [rsp+58h] [rbp-30h]

  v4 = 0LL;
  v7 = 0;
  v8 = *(void **)(*(_QWORD *)(a1 + 40) + 120LL);
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v10 = (_QWORD *)(a1 + 208);
  *(_BYTE *)(a1 + 104) = v9;
  v11 = *(_QWORD **)(a1 + 208);
  if ( (_QWORD *)(a1 + 208) != v11 )
  {
    do
    {
      v11 = (_QWORD *)*v11;
      ++v7;
    }
    while ( v10 != v11 );
  }
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v9);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED && LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    v24 = a2;
    v23 = v7;
    v22 = *(_DWORD *)(a1 + 64);
    v21 = *(_DWORD *)(*(_QWORD *)(a1 + 56) + 152LL);
    v20 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL);
    WPP_RECORDER_SF_DDDDD(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      5u,
      *(unsigned __int8 *)(*(_QWORD *)(a1 + 48) + 143LL),
      0x10u,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
      v20,
      v21,
      v22,
      v23,
      v24);
  }
  if ( a2 <= v7 )
    return 0LL;
  v13 = a2 - v7;
  v26 = &v25;
  v25 = &v25;
  if ( a3 )
  {
    v4 = a1 + 128;
    *(_QWORD *)(a1 + 144) = a1;
    *(_QWORD *)(a1 + 168) = TR_CommonBufferCallback;
    *(_DWORD *)(a1 + 152) = v13;
    *(_DWORD *)(a1 + 156) = *(_DWORD *)(a1 + 20);
    *(_DWORD *)(a1 + 160) = 828862034;
  }
  if ( *(_BYTE *)(a1 + 288) )
    v14 = TR_AcquireSecureSegments(a1, v13, &v25);
  else
    v14 = CommonBuffer_AcquireBuffers(v8, a1, 828862034, v4);
  v15 = v14;
  if ( v14 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v18 = *(_QWORD *)(a1 + 56);
      v19 = *(_DWORD *)(v18 + 152);
      LOBYTE(v18) = 2;
      WPP_RECORDER_SF_DDDD(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v18,
        14,
        17,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        *(_BYTE *)(*(_QWORD *)(a1 + 48) + 143LL),
        v19,
        *(_DWORD *)(a1 + 64),
        v13);
    }
  }
  else
  {
    v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
    v17 = v25;
    *(_BYTE *)(a1 + 104) = v16;
    if ( v17 != &v25 )
    {
      **(_QWORD **)(a1 + 216) = v17;
      v25[1] = *(_QWORD *)(a1 + 216);
      *v26 = v10;
      *(_QWORD *)(a1 + 216) = v26;
      v26 = &v25;
      v25 = &v25;
    }
    KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  }
  return v15;
}
