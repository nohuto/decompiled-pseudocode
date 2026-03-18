/*
 * XREFs of OSNotifyCreateDevice @ 0x14001E2EC
 * Callers:
 *     ACPIBuildMissingChildren @ 0x14001CAE4 (ACPIBuildMissingChildren.c)
 *     OSNotifyCreate @ 0x14001E5B0 (OSNotifyCreate.c)
 * Callees:
 *     AMLIGetParent @ 0x14001E8A8 (AMLIGetParent.c)
 *     AMLIDereferenceHandleEx @ 0x14002217C (AMLIDereferenceHandleEx.c)
 *     WPP_RECORDER_SF_qL @ 0x14003B520 (WPP_RECORDER_SF_qL.c)
 *     ACPIBuildDeviceRequest @ 0x14004712C (ACPIBuildDeviceRequest.c)
 *     ACPIBuildDeviceExtension @ 0x14004F860 (ACPIBuildDeviceExtension.c)
 */

__int64 __fastcall OSNotifyCreateDevice(ULONG_PTR BugCheckParameter3, unsigned __int64 a2)
{
  ULONG_PTR v4; // rax
  ULONG_PTR v5; // r14
  ULONG_PTR v6; // rdx
  int v7; // eax
  int v8; // edx
  __int64 v9; // rdi
  int v10; // ebx
  int v12; // r9d
  char v13; // [rsp+28h] [rbp-30h]
  char v14; // [rsp+30h] [rbp-28h]
  __int64 v15; // [rsp+70h] [rbp+18h] BYREF

  v15 = 0LL;
  v4 = AMLIGetParent(BugCheckParameter3);
  v5 = v4;
  v6 = *(_QWORD *)(*(_QWORD *)v4 + 104LL);
  if ( !v6 )
    v6 = RootDeviceExtension;
  if ( *(_DWORD *)(v6 + 16) != 1599293264 )
    KeBugCheckEx(0xA5u, 0x16uLL, v4, BugCheckParameter3, 0LL);
  v7 = ACPIBuildDeviceExtension(BugCheckParameter3, v6, &v15);
  v9 = v15;
  v10 = v7;
  if ( v15 )
  {
    if ( v7 >= 0 )
    {
      _InterlockedOr64((volatile signed __int64 *)(v15 + 8), a2);
      v10 = ACPIBuildDeviceRequest(v9);
      if ( v10 < 0 && WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v14 = v10;
        v12 = 13;
        v13 = v9;
        goto LABEL_14;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v10 = -1073741823;
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v14 = v10;
    v12 = 12;
    v13 = BugCheckParameter3;
LABEL_14:
    LOBYTE(v8) = 2;
    WPP_RECORDER_SF_qL(
      WPP_GLOBAL_Control->DeviceExtension,
      v8,
      22,
      v12,
      (__int64)&WPP_8260a3bc179634b52004a65d64c9ed63_Traceguids,
      v13,
      v14);
  }
LABEL_7:
  AMLIDereferenceHandleEx(v5);
  return (unsigned int)v10;
}
