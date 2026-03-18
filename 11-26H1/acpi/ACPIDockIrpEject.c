/*
 * XREFs of ACPIDockIrpEject @ 0x1400AB490
 * Callers:
 *     <none>
 * Callees:
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     ACPIGet @ 0x1400235A0 (ACPIGet.c)
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     AMLIGetNamedChild @ 0x140025CA0 (AMLIGetNamedChild.c)
 *     WPP_RECORDER_SF_qqss @ 0x1400338F4 (WPP_RECORDER_SF_qqss.c)
 *     ACPIInternalClearFlags @ 0x1400398B4 (ACPIInternalClearFlags.c)
 */

__int64 __fastcall ACPIDockIrpEject(ULONG_PTR a1, IRP *a2)
{
  __int64 DeviceExtension; // rdi
  __int64 *v4; // r14
  __int64 v5; // rbp
  const char *v6; // rax
  const char *v7; // rdx
  int v8; // eax
  int v9; // ebx
  __int64 *v10; // r15
  __int64 v11; // rdx
  const char *v12; // rax
  const char *v13; // r8
  __int64 v15; // [rsp+90h] [rbp+18h] BYREF
  __int64 v16; // [rsp+98h] [rbp+20h] BYREF

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v16 = 0LL;
  v15 = 0LL;
  v4 = (__int64 *)(DeviceExtension + 8);
  ACPIInternalClearFlags((void *)(DeviceExtension + 8), 0x400000000LL);
  v5 = *(_QWORD *)(DeviceExtension + 184);
  if ( !v5 )
  {
    v6 = byte_140075A82;
    v7 = byte_140075A82;
    if ( (*v4 & 0x200000000000LL) != 0 )
    {
      v6 = *(const char **)(DeviceExtension + 608);
      if ( (*v4 & 0x400000000000LL) != 0 )
        v7 = *(const char **)(DeviceExtension + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qqss(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        2u,
        0x12u,
        0xAu,
        (__int64)&WPP_6a0c72af8ad13ec042225ebd05f61004_Traceguids,
        (char)a2,
        DeviceExtension,
        v6,
        v7);
LABEL_24:
    v9 = -1073741823;
    goto LABEL_25;
  }
  if ( *(_DWORD *)(DeviceExtension + 192) != 4
    || (KdDisableDebugger(), *(_DWORD *)(DeviceExtension + 200) == 1)
    || (v8 = ACPIGet(v5, 1262699615, 277086210, 0LL, 4, 0LL, 0LL, (__int64)&v15, 0LL),
        *(_DWORD *)(DeviceExtension + 200) = 1,
        v9 = v8,
        v8 >= 0) )
  {
    v10 = AMLIGetNamedChild(*(__int64 **)(v5 + 760), 810173791);
    if ( v10 )
    {
      v9 = ACPIGet(v5, 810173791, 277872640, 1LL, 4, 0LL, 0LL, 0LL, 0LL);
      AMLIDereferenceHandleEx((__int64)v10);
    }
    else
    {
      v9 = -1073741772;
    }
    if ( *(_DWORD *)(DeviceExtension + 192) == 4 )
      KdEnableDebugger();
    ACPIInternalClearFlags(v4, 0x400000000LL);
    if ( v9 >= 0 )
    {
      v9 = ACPIGet(DeviceExtension, 1096045407, -1878783998, 0LL, 0, 0LL, 0LL, (__int64)&v16, 0LL);
      if ( v9 >= 0 )
      {
        v11 = *v4;
        if ( (*v4 & 2) == 0 )
        {
          v12 = byte_140075A82;
          v13 = byte_140075A82;
          if ( (v11 & 0x200000000000LL) != 0 )
          {
            v12 = *(const char **)(DeviceExtension + 608);
            if ( (v11 & 0x400000000000LL) != 0 )
              v13 = *(const char **)(DeviceExtension + 616);
          }
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qqss(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              2u,
              0x12u,
              0xBu,
              (__int64)&WPP_6a0c72af8ad13ec042225ebd05f61004_Traceguids,
              (char)a2,
              DeviceExtension,
              v12,
              v13);
          goto LABEL_24;
        }
      }
    }
  }
  else
  {
    KdEnableDebugger();
  }
LABEL_25:
  a2->IoStatus.Status = v9;
  IofCompleteRequest(a2, 0);
  return (unsigned int)v9;
}
