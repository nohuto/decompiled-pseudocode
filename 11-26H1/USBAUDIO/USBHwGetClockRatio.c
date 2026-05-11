/*
 * XREFs of USBHwGetClockRatio @ 0x140001870
 * Callers:
 *     USBType1RenderBytePosition @ 0x140001010 (USBType1RenderBytePosition.c)
 *     USBCaptureBytePosition @ 0x140001530 (USBCaptureBytePosition.c)
 * Callees:
 *     UsbHwFrameCountTimestamp @ 0x140001ED0 (UsbHwFrameCountTimestamp.c)
 *     WPP_RECORDER_AND_TRACE_SF_did @ 0x14000DAA8 (WPP_RECORDER_AND_TRACE_SF_did.c)
 *     _guard_dispatch_icall @ 0x14001C6E0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall USBHwGetClockRatio(union _LARGE_INTEGER a1, _OWORD *a2, _QWORD *a3)
{
  __int64 v3; // r13
  KSPIN_LOCK *v4; // r14
  DWORD v5; // esi
  union _LARGE_INTEGER v6; // rbx
  unsigned __int64 v7; // r12
  int v8; // r15d
  KIRQL v9; // al
  KIRQL v10; // di
  LARGE_INTEGER v11; // rax
  unsigned __int64 v12; // rbx
  char v13; // r13
  LARGE_INTEGER v14; // rax
  __int64 v15; // rbx
  KIRQL v16; // al
  __int64 v17; // rcx
  KIRQL v18; // si
  __int64 v19; // rcx
  int v20; // edi
  LARGE_INTEGER v21; // rax
  union _LARGE_INTEGER v22; // r8
  unsigned __int64 v23; // r12
  __int64 v24; // rcx
  LARGE_INTEGER v25; // rax
  unsigned __int64 v26; // rbx
  int v27; // edx
  int v28; // r8d
  __int64 v29; // rax
  __int128 v31; // xmm0
  LARGE_INTEGER v32; // rax
  __int128 v33; // xmm0
  unsigned __int64 v34; // rax
  __int64 v35; // rcx
  int v36; // edx
  int v37; // r8d
  DWORD LowPart; // ebx
  union _LARGE_INTEGER v39; // rsi
  union _LARGE_INTEGER v40; // [rsp+60h] [rbp-29h] BYREF
  union _LARGE_INTEGER PerformanceFrequency; // [rsp+68h] [rbp-21h] BYREF
  DWORD v42; // [rsp+70h] [rbp-19h]
  unsigned __int64 v43; // [rsp+78h] [rbp-11h]
  unsigned __int64 v44; // [rsp+80h] [rbp-9h]
  __int64 v45; // [rsp+88h] [rbp-1h]
  __int64 v46; // [rsp+90h] [rbp+7h]
  union _LARGE_INTEGER v47; // [rsp+F0h] [rbp+67h] BYREF
  _OWORD *v48; // [rsp+F8h] [rbp+6Fh]
  _QWORD *v49; // [rsp+100h] [rbp+77h]
  DWORD v50; // [rsp+108h] [rbp+7Fh]

  v49 = a3;
  v48 = a2;
  v47 = a1;
  v4 = (KSPIN_LOCK *)(a1.QuadPart + 112);
  v5 = 0;
  v46 = *(_QWORD *)(a1.QuadPart + 152);
  v3 = v46;
  v6 = a1;
  v50 = 0;
  v7 = 0LL;
  v40.LowPart = 0;
  v43 = 0LL;
  PerformanceFrequency.QuadPart = 0LL;
  v8 = 0;
  *a3 = 0LL;
  *a2 = 0LL;
  v9 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1.QuadPart + 112));
  v10 = v9;
  *(_BYTE *)(v3 + 12) = 1;
  if ( !*(_DWORD *)(v3 + 24) )
  {
    KeReleaseSpinLock(v4, v9);
    v8 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))UsbHwFrameCountTimestamp)(
           (union _LARGE_INTEGER)v6.QuadPart,
           &v40,
           &PerformanceFrequency);
    LOBYTE(v36) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v37) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    LowPart = v40.LowPart;
    v39 = PerformanceFrequency;
    if ( (_BYTE)v36 || (_BYTE)v37 )
      WPP_RECORDER_AND_TRACE_SF_did(WPP_GLOBAL_Control->AttachedDevice, v36, v37, WPP_GLOBAL_Control->DeviceExtension);
    v10 = KeAcquireSpinLockRaiseToDpc(v4);
    if ( v8 >= 0 )
    {
      *(_DWORD *)(v3 + 24) = LowPart;
      *(union _LARGE_INTEGER *)(v3 + 32) = v39;
    }
    goto LABEL_23;
  }
  if ( *(_DWORD *)(v3 + 40) )
    goto LABEL_24;
  PerformanceFrequency.QuadPart = 0LL;
  v11 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v8 = -1073741275;
  v12 = ((10000000 * HIDWORD(v11.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
      + (10000000LL * v11.LowPart
       + ((10000000 * HIDWORD(v11.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
      / PerformanceFrequency.QuadPart
      - *(_QWORD *)(v3 + 32);
  KeReleaseSpinLock(v4, v10);
  if ( v12 > 0x7A120 )
  {
    v42 = 0;
    v13 = 0;
    PerformanceFrequency.QuadPart = 0LL;
    v14 = KeQueryPerformanceCounter(&PerformanceFrequency);
    v45 = *(_QWORD *)(v47.QuadPart + 16);
    v15 = v45;
    v44 = ((10000000 * HIDWORD(v14.QuadPart) / (unsigned __int64)PerformanceFrequency.QuadPart) << 32)
        + (10000000LL * v14.LowPart
         + ((10000000 * HIDWORD(v14.QuadPart) % (unsigned __int64)PerformanceFrequency.QuadPart) << 32))
        / PerformanceFrequency.QuadPart;
    v16 = KeAcquireSpinLockRaiseToDpc(v4);
    v17 = *(_QWORD *)(v15 + 16);
    v18 = v16;
    PerformanceFrequency.LowPart = 0;
    v19 = *(_QWORD *)(*(_QWORD *)(v17 + 72) + 56LL);
    if ( v19 )
    {
      v20 = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(v19 + 40))(
              *(_QWORD *)(v19 + 8),
              &PerformanceFrequency);
      if ( v20 >= 0 )
      {
        while ( !v13 )
        {
          v40.QuadPart = 0LL;
          v21 = KeQueryPerformanceCounter(&v40);
          v22 = v40;
          v40.LowPart = 0;
          v23 = ((10000000 * HIDWORD(v21.QuadPart) / (unsigned __int64)v22.QuadPart) << 32)
              + (10000000LL * v21.LowPart + ((10000000 * HIDWORD(v21.QuadPart) % (unsigned __int64)v22.QuadPart) << 32))
              / v22.QuadPart;
          v24 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 + 16) + 72LL) + 56LL);
          if ( v24 )
          {
            v20 = (*(__int64 (__fastcall **)(_QWORD, union _LARGE_INTEGER *))(v24 + 40))(*(_QWORD *)(v24 + 8), &v40);
            if ( v20 >= 0 )
              v42 = v40.LowPart;
          }
          else
          {
            v20 = -1073741637;
          }
          v40.QuadPart = 0LL;
          v25 = KeQueryPerformanceCounter(&v40);
          v26 = ((10000000 * HIDWORD(v25.QuadPart) / (unsigned __int64)v40.QuadPart) << 32)
              + (10000000LL * v25.LowPart + ((10000000 * HIDWORD(v25.QuadPart) % (unsigned __int64)v40.QuadPart) << 32))
              / v40.QuadPart;
          KeReleaseSpinLock(v4, v18);
          if ( v42 == PerformanceFrequency.LowPart )
          {
            if ( v26 - v44 > 0x5208 )
            {
              v20 = -1073741275;
              v18 = KeAcquireSpinLockRaiseToDpc(v4);
              break;
            }
          }
          else
          {
            v20 = -1073741275;
            if ( v42 == PerformanceFrequency.LowPart + 1 && v26 - v44 < 0x2904 && v26 - v23 < 0x7D0 )
            {
              v20 = 0;
              v50 = v42;
              v13 = 1;
              v43 = (v26 + v23) >> 1;
            }
          }
          v18 = KeAcquireSpinLockRaiseToDpc(v4);
          if ( v20 < 0 )
            break;
          v15 = v45;
        }
        v7 = v43;
      }
    }
    else
    {
      v20 = -1073741637;
    }
    KeReleaseSpinLock(v4, v18);
    v8 = v20;
    LOBYTE(v27) = WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
               && (HIDWORD(WPP_GLOBAL_Control->Timer) & 4) != 0
               && BYTE1(WPP_GLOBAL_Control->Timer) >= 5u;
    LOBYTE(v28) = *(ULONG **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED
               && LOWORD(WPP_GLOBAL_Control->DeviceType);
    if ( (_BYTE)v27 || (_BYTE)v28 )
    {
      v5 = v50;
      WPP_RECORDER_AND_TRACE_SF_did(WPP_GLOBAL_Control->AttachedDevice, v27, v28, WPP_GLOBAL_Control->DeviceExtension);
    }
    else
    {
      v5 = v50;
    }
    v3 = v46;
  }
  v10 = KeAcquireSpinLockRaiseToDpc(v4);
  if ( v8 < 0
    || v5 == *(_DWORD *)(v3 + 24)
    || (v34 = (v7 - *(_QWORD *)(v3 + 32)) / (v5 - *(_DWORD *)(v3 + 24)), v34 > 0x2904)
    || v34 < 0x251C )
  {
LABEL_23:
    v6 = v47;
    goto LABEL_24;
  }
  v35 = *(_QWORD *)(v3 + 16);
  v6 = v47;
  *(_DWORD *)(v3 + 40) = v5;
  *(_QWORD *)(v3 + 48) = v7;
  if ( v35 )
    v34 = (v35 + v34) >> 1;
  *(_QWORD *)(v3 + 16) = v34;
LABEL_24:
  v29 = *(_QWORD *)(v3 + 16);
  if ( v29 )
  {
    if ( *(_DWORD *)(v3 + 24) )
    {
      v31 = *(_OWORD *)(v3 + 24);
      *v49 = v29;
      *v48 = v31;
      if ( *(_QWORD *)(v3 + 48) )
      {
        v47.QuadPart = 0LL;
        v32 = KeQueryPerformanceCounter(&v47);
        if ( ((10000000 * HIDWORD(v32.QuadPart) / (unsigned __int64)v47.QuadPart) << 32)
           + (10000000LL * v32.LowPart + ((10000000 * HIDWORD(v32.QuadPart) % (unsigned __int64)v47.QuadPart) << 32))
           / v47.QuadPart
           - *(_QWORD *)(v3 + 48) > 0xF4240 )
        {
          v33 = *(_OWORD *)(v3 + 40);
          *(_DWORD *)(v3 + 40) = 0;
          *(_QWORD *)(v3 + 48) = 0LL;
          *(_OWORD *)(v3 + 24) = v33;
        }
      }
    }
  }
  *(_BYTE *)(v3 + 12) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)(v6.QuadPart + 112), v10);
  return (unsigned int)v8;
}
