/*
 * XREFs of ACPIRootIrpCompleteRoutine @ 0x140031480
 * Callers:
 *     <none>
 * Callees:
 *     ACPIInternalGetDeviceExtension @ 0x140024510 (ACPIInternalGetDeviceExtension.c)
 *     WPP_RECORDER_SF_qsLqss @ 0x140031590 (WPP_RECORDER_SF_qsLqss.c)
 */

__int64 __fastcall ACPIRootIrpCompleteRoutine(ULONG_PTR a1, __int64 a2, struct _KEVENT *a3)
{
  __int64 DeviceExtension; // rax
  __int64 v6; // r10
  __int64 v7; // rax
  const char *v8; // r11
  const char *v9; // rbx
  unsigned int v11; // eax
  char **v12; // rdx

  DeviceExtension = ACPIInternalGetDeviceExtension(a1);
  v6 = DeviceExtension;
  if ( DeviceExtension )
  {
    v7 = *(_QWORD *)(DeviceExtension + 8);
    v8 = byte_140075A82;
    v9 = byte_140075A82;
    if ( (v7 & 0x200000000000LL) != 0 )
    {
      v8 = *(const char **)(v6 + 608);
      if ( (v7 & 0x400000000000LL) != 0 )
        v9 = *(const char **)(v6 + 616);
    }
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v11 = *(unsigned __int8 *)(*(_QWORD *)(a2 + 184) + 1LL);
      v12 = ACPIDispatchPnpTableNames;
      if ( v11 >= 0x1A )
        v11 = 26;
      LOBYTE(v12) = 4;
      WPP_RECORDER_SF_qsLqss(
        WPP_GLOBAL_Control->DeviceExtension,
        (_DWORD)v12,
        5,
        11,
        (__int64)&WPP_6ec2c04a42a73872bc28b180499bcec1_Traceguids,
        a2,
        (__int64)ACPIDispatchPnpTableNames[v11],
        *(_DWORD *)(a2 + 48),
        v6,
        (__int64)v8,
        (__int64)v9);
    }
  }
  KeSetEvent(a3, 0, 0);
  return 3221225494LL;
}
