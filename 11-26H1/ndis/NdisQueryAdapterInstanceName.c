/*
 * XREFs of NdisQueryAdapterInstanceName @ 0x14005BA70
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qZL @ 0x14005BBC0 (WPP_RECORDER_SF_qZL.c)
 */

NDIS_STATUS __stdcall NdisQueryAdapterInstanceName(PNDIS_STRING pAdapterInstanceName, NDIS_HANDLE NdisBindingHandle)
{
  __int64 v2; // rbx
  char v3; // si
  NDIS_STATUS v4; // edi
  const UNICODE_STRING *v6; // rbx
  unsigned __int16 MaximumLength; // r15
  wchar_t *Pool2; // rax
  wchar_t *v10; // rbp
  char v11; // [rsp+28h] [rbp-40h]

  v2 = *((_QWORD *)NdisBindingHandle + 2);
  v3 = (char)NdisBindingHandle;
  v4 = -1073741823;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    v11 = (char)NdisBindingHandle;
    LOBYTE(NdisBindingHandle) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisBindingHandle,
      6,
      54,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      v11);
  }
  v6 = *(const UNICODE_STRING **)(v2 + 3856);
  if ( v6 )
  {
    MaximumLength = v6->MaximumLength;
    Pool2 = (wchar_t *)ExAllocatePool2(64LL, MaximumLength, 1851868238LL);
    v10 = Pool2;
    if ( Pool2 )
    {
      pAdapterInstanceName->Buffer = Pool2;
      pAdapterInstanceName->MaximumLength = MaximumLength;
      pAdapterInstanceName->Length = 0;
      if ( RtlAppendUnicodeStringToString(pAdapterInstanceName, v6) < 0 )
      {
        ExFreePoolWithTag(v10, 0);
        pAdapterInstanceName->Buffer = 0LL;
      }
      else
      {
        v4 = 0;
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qZL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)NdisBindingHandle,
      6,
      55,
      (struct _GUID *)&WPP_1e356a0c3ca735481fb26761a46e734e_Traceguids,
      v3,
      (__int64)v6,
      v4);
  return v4;
}
