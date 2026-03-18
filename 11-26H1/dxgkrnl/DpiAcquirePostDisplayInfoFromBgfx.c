/*
 * XREFs of DpiAcquirePostDisplayInfoFromBgfx @ 0x140402768
 * Callers:
 *     DpiFdoStartAdapterThreadImpl @ 0x14024809C (DpiFdoStartAdapterThreadImpl.c)
 *     DpiFdoHandleDevicePower @ 0x1403B9A00 (DpiFdoHandleDevicePower.c)
 *     DpiFdoHandleSystemPower @ 0x1403BA2FC (DpiFdoHandleSystemPower.c)
 *     DpiFdoDetectPostDevice @ 0x1404023B8 (DpiFdoDetectPostDevice.c)
 *     DpiFdoSetAdapterPowerState @ 0x14042D4FC (DpiFdoSetAdapterPowerState.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     DxgDetermineBootImageMode @ 0x1401BDAC0 (DxgDetermineBootImageMode.c)
 */

__int64 __fastcall DpiAcquirePostDisplayInfoFromBgfx(__int64 a1, char a2, char a3)
{
  char v3; // r15
  char v4; // di
  __int64 v7; // rax
  char v8; // r13
  int v9; // edx
  int v10; // r8d
  int v11; // ecx
  int v12; // edx
  int v13; // ecx
  int v14; // eax
  char v15; // r14
  void *Pool2; // rsi
  void *v18; // rdi
  NTSTATUS v19; // eax
  __int64 v20; // r12
  __int64 v21; // rax
  _BYTE v22[4]; // [rsp+20h] [rbp-88h] BYREF
  NTSTATUS v23; // [rsp+24h] [rbp-84h]
  __int128 v24; // [rsp+28h] [rbp-80h] BYREF
  __int128 v25; // [rsp+38h] [rbp-70h]
  __int128 v26; // [rsp+48h] [rbp-60h]
  __int128 SystemInformation; // [rsp+58h] [rbp-50h] BYREF
  __int128 v28; // [rsp+68h] [rbp-40h]

  v22[0] = a2;
  v3 = 0;
  v4 = 0;
  SystemInformation = 0LL;
  v28 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  if ( a3 )
  {
    if ( qword_140169080 )
    {
      v7 = *(_QWORD *)(qword_140169080 + 64);
      if ( v7 )
      {
        if ( *(_DWORD *)(v7 + 16) == 1953656900 && *(_DWORD *)(v7 + 20) == 2 )
        {
          v3 = *(_BYTE *)(v7 + 2845);
          if ( v3 )
            v4 = *(_BYTE *)(v7 + 2846);
        }
      }
    }
  }
  v8 = 0;
  v23 = ZwQuerySystemInformation(MaxSystemInfoClass|SystemTimeAdjustmentInformation, &SystemInformation, 0x20u, 0LL);
  if ( v23 >= 0 )
  {
    v9 = HIDWORD(SystemInformation);
    v8 = 1;
    v10 = DWORD2(SystemInformation);
    *(_QWORD *)(a1 + 16) = SystemInformation;
    v11 = DWORD2(v28);
    *(_DWORD *)(a1 + 4) = v9;
    DWORD2(v25) = v9;
    v12 = v28;
    *(_DWORD *)a1 = v10;
    *(_DWORD *)(a1 + 24) = -1;
    *(_DWORD *)(a1 + 28) = 0;
    HIDWORD(v25) = v10;
    LODWORD(v26) = v12;
    v13 = v11 - 3;
    if ( v13 )
    {
      if ( v13 != 1 )
      {
        v8 = 0;
        goto LABEL_15;
      }
      *(_DWORD *)(a1 + 12) = 22;
      v14 = 4 * v12;
      DWORD1(v26) = 5;
    }
    else
    {
      *(_DWORD *)(a1 + 12) = 20;
      v14 = 3 * v12;
      DWORD1(v26) = 4;
    }
    *(_DWORD *)(a1 + 8) = v14;
LABEL_15:
    if ( ZwQuerySystemInformation(SystemTimeAdjustmentInformation|0x80, (PVOID)(a1 + 32), 0x80u, 0LL) < 0 )
    {
      memset((void *)(a1 + 32), 0, 0x80uLL);
      WdLogSingleEntry1(3LL);
      WdLogGlobalForLineNumber = 2721;
    }
  }
  if ( !v22[0] )
    goto LABEL_22;
  v15 = 0;
  v22[0] = 0;
  if ( v4 )
  {
    DxgDetermineBootImageMode(a1, 0LL, v4, v22);
    if ( !v22[0] || (int)InbvSetVirtualFrameBuffer(0LL, DpiEnterSystemDisplay) < 0 )
LABEL_21:
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
  }
  else
  {
    if ( !a3 || byte_140168DD4 )
      goto LABEL_21;
    Pool2 = 0LL;
    v18 = 0LL;
    if ( !v8 )
      goto LABEL_37;
    v19 = RtlCheckRegistryKey(0, (PWSTR)L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT");
    v20 = (unsigned int)(*(_DWORD *)(a1 + 4) * *(_DWORD *)(a1 + 8));
    if ( v19 >= 0 )
      goto LABEL_37;
    Pool2 = (void *)ExAllocatePool2(64LL, (unsigned int)v20, 1953656900LL);
    v21 = ExAllocatePool2(64LL, 32LL, 1953656900LL);
    v18 = (void *)v21;
    if ( !Pool2 || !v21 )
      goto LABEL_37;
    KeInitializeSpinLock((PKSPIN_LOCK)(v21 + 24));
    *(_QWORD *)&v25 = v18;
    *(_QWORD *)&v24 = Pool2;
    *((_QWORD *)&v24 + 1) = v20;
    if ( !v3 || DWORD2(SystemInformation) > 0xBB8 || (BYTE8(v26) = 0, HIDWORD(SystemInformation) > 0x7D0) )
      BYTE8(v26) = 1;
    if ( (int)InbvSetVirtualFrameBuffer(&v24, DpiEnterSystemDisplay) >= 0 )
    {
      DxgDetermineBootImageMode(a1, &v24, 0, v22);
      v15 = v22[0];
    }
    else
    {
LABEL_37:
      DxgDetermineBootImageMode(a1, 0LL, 0, 0LL);
    }
    if ( !v15 )
    {
      InbvNotifyDisplayOwnershipChange(0LL, DpiEnterSystemDisplay);
      if ( Pool2 )
        ExFreePoolWithTag(Pool2, 0x74727044u);
      if ( v18 )
        ExFreePoolWithTag(v18, 0x74727044u);
    }
  }
LABEL_22:
  if ( !v8 )
  {
    *(_OWORD *)a1 = 0LL;
    *(_OWORD *)(a1 + 16) = 0LL;
    *(_DWORD *)(a1 + 24) = -1;
    memset((void *)(a1 + 32), 0, 0x80uLL);
  }
  return (unsigned int)v23;
}
