/*
 * XREFs of HUBDESC_InternalValidateLastEndpoint @ 0x140039D20
 * Callers:
 *     HUBDESC_InternalValidateEndpointDescriptor @ 0x140037990 (HUBDESC_InternalValidateEndpointDescriptor.c)
 *     HUBDESC_InternalValidateLastInterface @ 0x140039EA8 (HUBDESC_InternalValidateLastInterface.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1400068F8 (WPP_RECORDER_SF_.c)
 *     Feature_EUSB2__private_IsEnabledDeviceUsageNoInline @ 0x14000C874 (Feature_EUSB2__private_IsEnabledDeviceUsageNoInline.c)
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

bool __fastcall HUBDESC_InternalValidateLastEndpoint(__int64 a1, int *a2, int a3)
{
  int *v4; // rdi
  int v6; // eax
  int v7; // edx
  int v9; // [rsp+50h] [rbp+8h] BYREF

  v9 = 0;
  v4 = a2;
  if ( a2 )
  {
    if ( *(_BYTE *)(a1 + 48) )
      *a2 = 0;
  }
  else
  {
    v4 = &v9;
  }
  v6 = *(_DWORD *)(a1 + 256);
  if ( (v6 & 2) != 0 )
  {
    if ( *(_DWORD *)(a1 + 4) == 3 )
    {
      if ( (v6 & 0x20) == 0 )
      {
        *v4 = 2;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(a3, (_DWORD)a2, 5, 27, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 59LL);
      }
      if ( (*(_DWORD *)(a1 + 256) & 0x48) == 8 )
      {
        *v4 = 0;
        if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
        {
          LOBYTE(a2) = 2;
          WPP_RECORDER_SF_(a3, (_DWORD)a2, 5, 28, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
        }
        (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 212LL);
      }
    }
    if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline()
      && (unsigned __int16)(*(_WORD *)a1 - 544) <= 0xDFu
      && (*(_DWORD *)(a1 + 256) & 0x90) == 0x10 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v7) = 3;
        WPP_RECORDER_SF_(a3, v7, 5, 29, (__int64)&WPP_217391fd10f630c6cddebdfb4f852f5f_Traceguids);
      }
      (*(void (__fastcall **)(_QWORD, __int64))(a1 + 24))(*(_QWORD *)(a1 + 40), 273LL);
    }
  }
  else
  {
    *(_DWORD *)(a1 + 256) = v6 | 2;
  }
  *(_DWORD *)(a1 + 256) &= 0xFFFFFF93;
  if ( (unsigned int)Feature_EUSB2__private_IsEnabledDeviceUsageNoInline() )
    *(_DWORD *)(a1 + 256) &= 0xFFFFFF6F;
  return *v4 == 0;
}
