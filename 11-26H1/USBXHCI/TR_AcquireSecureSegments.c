/*
 * XREFs of TR_AcquireSecureSegments @ 0x140019420
 * Callers:
 *     Isoch_PrepareStage @ 0x140011770 (Isoch_PrepareStage.c)
 *     Bulk_PrepareStage @ 0x140017060 (Bulk_PrepareStage.c)
 *     TR_EnsureSegments @ 0x140018C60 (TR_EnsureSegments.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400063D8 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x140040258 (CommonBuffer_AcquireShadowBuffer.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

__int64 __fastcall TR_AcquireSecureSegments(__int64 a1, unsigned int a2, __int64 a3)
{
  int *Pool2; // rdi
  __int64 v6; // rax
  unsigned int v8; // ebx
  __int64 v9; // r12
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  int v12; // ebx
  __int64 v13; // rax
  int v14; // ecx
  unsigned int v15; // edx
  unsigned int v16; // eax
  int v17; // ebx
  __int64 v18; // rcx
  int v19; // edx
  const char *v20; // rcx
  char v21; // dl
  int v22; // r9d
  _QWORD *v23; // rdx
  __int64 v24; // r8
  __int64 v25; // rcx
  _QWORD *v27; // [rsp+30h] [rbp-50h] BYREF
  _QWORD **v28; // [rsp+38h] [rbp-48h]
  GUID v29; // [rsp+48h] [rbp-38h] BYREF
  __int128 v30; // [rsp+58h] [rbp-28h]
  __int128 v31; // [rsp+68h] [rbp-18h]

  v28 = &v27;
  Pool2 = 0LL;
  v27 = &v27;
  v6 = *(_QWORD *)(a1 + 40);
  v29 = 0LL;
  v8 = 0;
  v30 = 0LL;
  v31 = 0LL;
  v9 = *(_QWORD *)(v6 + 120);
  while ( v8 < a2 )
  {
    v10 = (_QWORD *)CommonBuffer_AcquireShadowBuffer(*(unsigned int *)(a1 + 20), a1, 828862034LL);
    if ( !v10 )
      goto LABEL_6;
    v11 = v28;
    if ( *v28 != &v27 )
LABEL_32:
      __fastfail(3u);
    v10[1] = v28;
    *v10 = &v27;
    ++v8;
    *v11 = v10;
    v28 = (_QWORD **)v10;
  }
  v14 = -1;
  v15 = 8 * a2 + 8;
  if ( v15 >= 8 * a2 )
    v14 = 8 * a2 + 8;
  v16 = 0;
  if ( v15 >= 8 * a2 )
    v16 = v14;
  v17 = v16;
  Pool2 = (int *)ExAllocatePool2(64LL, v16, 1229146200LL);
  if ( !Pool2 )
  {
LABEL_6:
    v12 = -1073741670;
    goto LABEL_7;
  }
  v18 = *(_QWORD *)(a1 + 40);
  *((_QWORD *)&v30 + 1) = *(_QWORD *)(a1 + 296);
  LODWORD(v31) = 40;
  DWORD2(v31) = a2;
  v12 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v18 + 112), &v29, 48, (__int64)Pool2, v17);
  if ( v12 < 0 )
    goto LABEL_7;
  v12 = *Pool2;
  if ( *Pool2 < 0 )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v19) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v19,
        14,
        22,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        *Pool2);
    }
    v20 = "TransferRingAllocateSegments Failed";
    v21 = 0;
    v22 = 1933;
    goto LABEL_29;
  }
  if ( Pool2[1] == a2 )
  {
    v23 = v27;
    v24 = 0LL;
    while ( &v27 != v23 )
    {
      v25 = *(_QWORD *)&Pool2[2 * v24 + 2];
      v24 = (unsigned int)(v24 + 1);
      v23[3] = v25;
      v23 = (_QWORD *)*v23;
    }
    v12 = 0;
    v20 = "Segment mismatch";
    v22 = 1961;
    v21 = (_DWORD)v24 == a2;
LABEL_29:
    Debug_FreAssertMsg((__int64)v20, v21, (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c", v22);
    if ( v12 < 0 )
      goto LABEL_7;
    if ( v27 != &v27 )
    {
      **(_QWORD **)(a3 + 8) = v27;
      v27[1] = *(_QWORD *)(a3 + 8);
      *v28 = (_QWORD *)a3;
      *(_QWORD *)(a3 + 8) = v28;
      v28 = &v27;
      v27 = &v27;
    }
LABEL_34:
    ExFreePoolWithTag(Pool2, 0x49434858u);
    return (unsigned int)v12;
  }
  v12 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v19) = 2;
    WPP_RECORDER_SF_(
      *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
      v19,
      14,
      23,
      (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids);
  }
  Debug_FreAssertMsg(
    (__int64)"allocateSegmentsOut->NumberOfSegments != SegmentsRequired",
    0,
    (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
    1942);
LABEL_7:
  while ( v27 != &v27 )
  {
    if ( (_QWORD **)v27[1] != &v27 )
      goto LABEL_32;
    v13 = *v27;
    if ( *(_QWORD **)(*v27 + 8LL) != v27 )
      goto LABEL_32;
    v27 = (_QWORD *)*v27;
    *(_QWORD *)(v13 + 8) = &v27;
    CommonBuffer_ReleaseBuffer(v9);
  }
  if ( Pool2 )
    goto LABEL_34;
  return (unsigned int)v12;
}
