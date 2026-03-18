/*
 * XREFs of ACPIBuildDeviceResetPowerNode @ 0x1400576DC
 * Callers:
 *     ACPIBuildProcessDevicePhasePrr @ 0x140035AB0 (ACPIBuildProcessDevicePhasePrr.c)
 * Callees:
 *     AMLIGetNameSpaceObject @ 0x14001B500 (AMLIGetNameSpaceObject.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_sqss @ 0x140040DCC (WPP_RECORDER_SF_sqss.c)
 *     WPP_RECORDER_SF_sLqss @ 0x14005A398 (WPP_RECORDER_SF_sLqss.c)
 */

__int64 __fastcall ACPIBuildDeviceResetPowerNode(_QWORD *BugCheckParameter2, __int64 *BugCheckParameter3, __int64 a3)
{
  unsigned int v6; // edi
  __int64 Pool2; // rsi
  __int64 v8; // rbp
  int v9; // edx
  __int64 v10; // r9
  const char *v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rax
  _QWORD *v15; // rsi
  _QWORD *v16; // rdx
  __int64 v18; // r9
  const char *v19; // rcx
  const char *v20; // r8
  ULONG_PTR BugCheckParameter4; // [rsp+20h] [rbp-48h]
  __int64 v22; // [rsp+80h] [rbp+18h] BYREF

  v6 = 0;
  Pool2 = ExAllocatePool2(64LL, 56LL, 1349542721LL);
  if ( Pool2 )
  {
    KeAcquireSpinLockAtDpcLevel(&AcpiPowerLock);
    BugCheckParameter2[56] = Pool2;
    v8 = *(_QWORD *)(a3 + 32);
    v22 = 0LL;
    if ( (int)AMLIGetNameSpaceObject(*(_BYTE **)(v8 + 40), BugCheckParameter3, &v22, 0) < 0 )
    {
      v10 = BugCheckParameter2[1];
      v11 = byte_140075A82;
      if ( (v10 & 0x200000000000LL) != 0 && (v10 & 0x400000000000LL) != 0 )
        v11 = (const char *)BugCheckParameter2[77];
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sLqss(WPP_GLOBAL_Control->DeviceExtension, v9, (_DWORD)v11, 15);
      KeBugCheckEx(0xA5u, 6uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v8 + 40));
    }
    v12 = v22;
    if ( !v22 || *(_WORD *)(*(_QWORD *)v22 + 66LL) != 11 )
    {
      v18 = BugCheckParameter2[1];
      v19 = byte_140075A82;
      v20 = byte_140075A82;
      if ( (v18 & 0x200000000000LL) != 0 )
      {
        v19 = (const char *)BugCheckParameter2[76];
        if ( (v18 & 0x400000000000LL) != 0 )
          v20 = (const char *)BugCheckParameter2[77];
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        WPP_RECORDER_SF_sqss(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          2u,
          10LL,
          0x10u,
          BugCheckParameter4,
          *(const char **)(v8 + 40),
          (char)BugCheckParameter2,
          v19,
          v20);
      KeBugCheckEx(0xA5u, 0x12uLL, (ULONG_PTR)BugCheckParameter2, (ULONG_PTR)BugCheckParameter3, *(_QWORD *)(v8 + 40));
    }
    v13 = *(_QWORD *)(*(_QWORD *)v22 + 104LL);
    *(_QWORD *)(Pool2 + 8) = v13;
    v14 = v13 + 48;
    *(_DWORD *)(Pool2 + 16) = 7;
    *(_QWORD *)(Pool2 + 32) = BugCheckParameter2;
    *(_DWORD *)(Pool2 + 20) = 5;
    v15 = (_QWORD *)(Pool2 + 40);
    v16 = *(_QWORD **)(v14 + 8);
    if ( *v16 != v14 )
      __fastfail(3u);
    *v15 = v14;
    v15[1] = v16;
    *v16 = v15;
    *(_QWORD *)(v14 + 8) = v15;
    AMLIDereferenceHandleEx(v12);
    KeReleaseSpinLockFromDpcLevel(&AcpiPowerLock);
  }
  else
  {
    return (unsigned int)-1073741670;
  }
  return v6;
}
