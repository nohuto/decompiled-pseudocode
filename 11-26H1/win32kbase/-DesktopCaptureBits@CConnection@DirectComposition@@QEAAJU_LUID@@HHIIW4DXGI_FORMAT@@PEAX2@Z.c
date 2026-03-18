/*
 * XREFs of ?DesktopCaptureBits@CConnection@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x140229FC0
 * Callers:
 *     NtDesktopCaptureBits @ 0x140229920 (NtDesktopCaptureBits.c)
 * Callees:
 *     ?Unlock@CChannel@DirectComposition@@QEAAXXZ @ 0x1400A6398 (-Unlock@CChannel@DirectComposition@@QEAAXXZ.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1400A6750 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 *     OpenDwmHandle @ 0x1400B2D14 (OpenDwmHandle.c)
 *     ?DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z @ 0x14017B3C4 (-DesktopCaptureBits@CSystemChannel@DirectComposition@@QEAAJU_LUID@@HHIIW4DXGI_FORMAT@@PEAX2@Z.c)
 */

__int64 __fastcall DirectComposition::CConnection::DesktopCaptureBits(
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        int a7,
        PVOID Object,
        PVOID a9)
{
  int v13; // edi
  __int64 v14; // r9
  __int64 v15; // r9
  int ReturnLength; // [rsp+28h] [rbp-51h]
  int ReturnLengtha; // [rsp+28h] [rbp-51h]
  char v19[4]; // [rsp+58h] [rbp-21h] BYREF
  int TokenInformation; // [rsp+5Ch] [rbp-1Dh] BYREF
  ULONG v21; // [rsp+60h] [rbp-19h] BYREF
  void *TokenHandle; // [rsp+68h] [rbp-11h] BYREF
  void *v23; // [rsp+70h] [rbp-9h] BYREF
  void *v24; // [rsp+78h] [rbp-1h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp+7h] BYREF

  TokenHandle = 0LL;
  v19[0] = 0;
  v24 = 0LL;
  v23 = 0LL;
  v13 = ZwOpenProcessTokenEx((HANDLE)0xFFFFFFFFFFFFFFFFLL, 8u, 0x200u, &TokenHandle);
  if ( v13 >= 0 )
  {
    TokenInformation = 0;
    v21 = 0;
    ZwQueryInformationToken(TokenHandle, TokenIsAppContainer, &TokenInformation, 4u, &v21);
    if ( TokenInformation )
    {
      DestinationString = 0LL;
      RtlInitUnicodeString(&DestinationString, L"ID_CAP_SCREENCAPTURE");
      v13 = RtlCapabilityCheck(TokenHandle, &DestinationString, v19);
    }
    else
    {
      v19[0] = 1;
    }
    ZwClose(TokenHandle);
    if ( v13 >= 0 )
    {
      if ( v19[0] )
      {
        v13 = OpenDwmHandle(Object, (POBJECT_TYPE)ExEventObjectType, 2u, v14, ReturnLength, &v24);
        if ( v13 >= 0 )
        {
          v13 = OpenDwmHandle(a9, MmSectionObjectType, 3u, v15, ReturnLengtha, &v23);
          if ( v13 >= 0 )
          {
            DirectComposition::CCriticalSection::AcquireExclusive(*(PERESOURCE *)(*(_QWORD *)(a1 + 152) + 32LL));
            v13 = DirectComposition::CSystemChannel::DesktopCaptureBits(
                    *(DirectComposition::CApplicationChannel **)(a1 + 152),
                    a2,
                    a3,
                    a4,
                    a5,
                    a6,
                    a7,
                    (__int64)v24,
                    (__int64)v23);
            DirectComposition::CChannel::Unlock(*(DirectComposition::CChannel **)(a1 + 152));
          }
        }
      }
      else
      {
        return (unsigned int)-1073741790;
      }
    }
  }
  return (unsigned int)v13;
}
