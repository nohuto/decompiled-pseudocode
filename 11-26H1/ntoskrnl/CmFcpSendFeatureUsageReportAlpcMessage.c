/*
 * XREFs of CmFcpSendFeatureUsageReportAlpcMessage @ 0x1404E2BF8
 * Callers:
 *     CmFcpManagerPublishFeatureUsageDataBuffers @ 0x140B05B68 (CmFcpManagerPublishFeatureUsageDataBuffers.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ZwAlpcDeletePortSection @ 0x140729000 (ZwAlpcDeletePortSection.c)
 *     ZwAlpcSendWaitReceivePort @ 0x140729180 (ZwAlpcSendWaitReceivePort.c)
 *     CmFcpCreateAlpcSectionView @ 0x140B3B244 (CmFcpCreateAlpcSectionView.c)
 */

__int64 __fastcall CmFcpSendFeatureUsageReportAlpcMessage(HANDLE PortHandle, void *a2, int a3)
{
  NTSTATUS v5; // ebx
  ULONG_PTR BufferLength; // [rsp+40h] [rbp-49h] BYREF
  ALPC_HANDLE SectionHandle; // [rsp+48h] [rbp-41h] BYREF
  _BYTE SendMessageA[48]; // [rsp+50h] [rbp-39h] BYREF
  __int64 v10; // [rsp+80h] [rbp-9h]
  _ALPC_MESSAGE_ATTRIBUTES SendMessageAttributes; // [rsp+88h] [rbp-1h] BYREF
  __int128 v12; // [rsp+90h] [rbp+7h]
  __int128 v13; // [rsp+A0h] [rbp+17h]

  SendMessageAttributes = (_ALPC_MESSAGE_ATTRIBUTES)0x40000000LL;
  v10 = 0LL;
  SectionHandle = 0LL;
  BufferLength = 56LL;
  v12 = 0LL;
  v13 = 0LL;
  memset(SendMessageA, 0, sizeof(SendMessageA));
  v5 = CmFcpCreateAlpcSectionView(
         PortHandle,
         a2,
         (unsigned int)(8 * a3),
         &SendMessageAttributes,
         (__int64)&SectionHandle);
  if ( v5 >= 0 )
  {
    *(_WORD *)&SendMessageA[4] = -32767;
    *(_DWORD *)SendMessageA = 3670032;
    *(_DWORD *)&SendMessageA[24] = 0;
    *(_DWORD *)&SendMessageA[40] = 2;
    LODWORD(v10) = a3;
    v5 = ZwAlpcSendWaitReceivePort(
           PortHandle,
           0x20000u,
           (PPORT_MESSAGE)SendMessageA,
           &SendMessageAttributes,
           (PPORT_MESSAGE)SendMessageA,
           &BufferLength,
           0LL,
           0LL);
    if ( v5 >= 0 )
    {
      if ( BufferLength >= 0x30 && SendMessageA[4] == 2 )
      {
        v5 = 0;
        if ( *(int *)&SendMessageA[44] < 0 )
          v5 = *(_DWORD *)&SendMessageA[44];
      }
      else
      {
        v5 = -1073741823;
      }
    }
  }
  if ( SectionHandle )
    ZwAlpcDeletePortSection(PortHandle, 0, SectionHandle);
  return (unsigned int)v5;
}
