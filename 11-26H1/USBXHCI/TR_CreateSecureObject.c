/*
 * XREFs of TR_CreateSecureObject @ 0x140038D24
 * Callers:
 *     TR_Create @ 0x140081594 (TR_Create.c)
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1400064B8 (WPP_RECORDER_SF_d.c)
 *     Debug_FreAssertMsg @ 0x1400073D8 (Debug_FreAssertMsg.c)
 *     SecureChannel_SendRequestSynchronously @ 0x140007AF4 (SecureChannel_SendRequestSynchronously.c)
 *     CommonBuffer_ReleaseBuffer @ 0x14003D258 (CommonBuffer_ReleaseBuffer.c)
 *     CommonBuffer_AcquireShadowBuffer @ 0x140040258 (CommonBuffer_AcquireShadowBuffer.c)
 *     XilEndpoint_GetRemoteHandle @ 0x140047ACC (XilEndpoint_GetRemoteHandle.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 *     memset @ 0x140059840 (memset.c)
 */

__int64 __fastcall TR_CreateSecureObject(__int64 a1)
{
  __int64 v2; // rax
  __int64 v3; // r14
  _QWORD *v4; // rdi
  int v5; // esi
  __int64 v6; // rcx
  __int64 RemoteHandle; // rax
  __int64 v8; // rcx
  int v9; // edx
  _QWORD *v11; // rcx
  __int128 v12; // [rsp+30h] [rbp-29h] BYREF
  __int64 v13; // [rsp+40h] [rbp-19h]
  GUID v14[4]; // [rsp+50h] [rbp-9h] BYREF

  LODWORD(v13) = 0;
  v2 = *(_QWORD *)(a1 + 40);
  v12 = 0LL;
  if ( *(_BYTE *)(v2 + 1001) && KeGetCurrentIrql() )
    Debug_FreAssertMsg(
      (__int64)"Code Path Requires Passive Level",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2010);
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 40) + 120LL);
  v4 = (_QWORD *)CommonBuffer_AcquireShadowBuffer(*(unsigned int *)(a1 + 20), a1, 828862034LL);
  if ( !v4 )
    return (unsigned int)-1073741670;
  memset(v14, 0, sizeof(v14));
  v6 = *(_QWORD *)(a1 + 56);
  v14[2].Data1 = 39;
  RemoteHandle = XilEndpoint_GetRemoteHandle(v6);
  v8 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)v14[2].Data4 = RemoteHandle;
  v14[3].Data1 = *(_DWORD *)(a1 + 64);
  *(_DWORD *)&v14[3].Data2 = *(_DWORD *)(a1 + 20);
  v14[3].Data4[0] = (*(_QWORD *)(v8 + 736) & 0x4000000000000LL) != 0;
  v5 = SecureChannel_SendRequestSynchronously(*(_QWORD *)(v8 + 112), v14, 64, (__int64)&v12, 24);
  if ( v5 < 0 )
  {
LABEL_11:
    CommonBuffer_ReleaseBuffer(v3);
    return (unsigned int)v5;
  }
  if ( (int)v12 < 0 )
  {
    v5 = v12;
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v9) = 2;
      WPP_RECORDER_SF_d(
        *(_QWORD *)(*(_QWORD *)(a1 + 40) + 72LL),
        v9,
        14,
        24,
        (__int64)&WPP_dd12c690235e31d2d4306bcf93bb1f34_Traceguids,
        v12);
    }
    Debug_FreAssertMsg(
      (__int64)"TransferRingCreate Failed",
      0,
      (int)"onecore\\drivers\\wdm\\usb\\usb3\\usbxhci\\sys\\tr.c",
      2067);
    goto LABEL_11;
  }
  *(_QWORD *)(a1 + 296) = *((_QWORD *)&v12 + 1);
  v4[3] = v13;
  *(_BYTE *)(a1 + 104) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  v11 = *(_QWORD **)(a1 + 216);
  if ( *v11 != a1 + 208 )
    __fastfail(3u);
  v4[1] = v11;
  *v4 = a1 + 208;
  *v11 = v4;
  *(_QWORD *)(a1 + 216) = v4;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), *(_BYTE *)(a1 + 104));
  return (unsigned int)v5;
}
