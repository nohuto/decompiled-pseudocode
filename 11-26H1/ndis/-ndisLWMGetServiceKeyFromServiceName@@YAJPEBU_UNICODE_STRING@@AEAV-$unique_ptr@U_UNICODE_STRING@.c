/*
 * XREFs of ?ndisLWMGetServiceKeyFromServiceName@@YAJPEBU_UNICODE_STRING@@AEAV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@@Z @ 0x140139A28
 * Callers:
 *     NdisLWMRegisterMiniportDriver @ 0x140094F30 (NdisLWMRegisterMiniportDriver.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140016160 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140016250 (WPP_RECORDER_SF_qD.c)
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_d @ 0x140023030 (WPP_RECORDER_SF_d.c)
 *     ??0?$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U?$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV01@@Z @ 0x140066320 (--0-$unique_ptr@U_NDIS_PM_WOL_PATTERN@@U-$KFreePool@U_NDIS_PM_WOL_PATTERN@@@@@wistd@@QEAA@$$QEAV.c)
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     ??$?0$00X@?$unique_ptr@_WU?$KFreePool@_W@@@wistd@@QEAA@$$T@Z @ 0x14008E040 (--$-0$00X@-$unique_ptr@_WU-$KFreePool@_W@@@wistd@@QEAA@$$T@Z.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400931CC (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x140169370 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall ndisLWMGetServiceKeyFromServiceName(const UNICODE_STRING *a1, void **a2)
{
  void **v2; // r14
  WCHAR *Buffer; // rdx
  NTSTATUS v5; // eax
  unsigned int v6; // edi
  int Length; // ecx
  unsigned __int16 v8; // di
  int v9; // edx
  PUNICODE_STRING v10; // rbx
  _UNICODE_STRING *v11; // rcx
  NTSTATUS appended; // eax
  unsigned __int16 v13; // r9
  char v15[8]; // [rsp+28h] [rbp-91h]
  PUNICODE_STRING Destination; // [rsp+40h] [rbp-79h] BYREF
  void *v17; // [rsp+48h] [rbp-71h] BYREF
  UNICODE_STRING Source; // [rsp+50h] [rbp-69h] BYREF
  _OWORD v19[6]; // [rsp+60h] [rbp-59h] BYREF
  __int64 v20; // [rsp+C0h] [rbp+7h]
  WCHAR v21; // [rsp+C8h] [rbp+Fh]

  v2 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      1,
      126,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1);
  }
  LODWORD(Buffer) = 65534;
  if ( (unsigned __int16)(a1->Length & 0xFFFE) >= (unsigned __int16)(a1->MaximumLength & 0xFFFE)
    || (Buffer = (WCHAR *)a1->Buffer, Buffer[(unsigned __int64)a1->Length >> 1]) )
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(Buffer) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        (int)Buffer,
        1,
        127,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids);
    }
    v6 = -1073741811;
    goto LABEL_30;
  }
  v5 = RtlCheckRegistryKey(1u, Buffer);
  v6 = v5;
  if ( v5 >= 0 )
  {
    Length = a1->Length;
    v19[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
    v8 = Length + 106;
    v21 = aRegistryMachin_0[52];
    v19[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
    v19[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
    Source.Buffer = (wchar_t *)v19;
    v19[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
    v19[4] = *(_OWORD *)L"ControlSet\\Services\\";
    v19[5] = *(_OWORD *)L"et\\Services\\";
    v20 = *(_QWORD *)L"ces\\";
    *(_QWORD *)&Source.Length = 6946920LL;
    if ( (unsigned int)(Length + 122) < 0x10 )
    {
      wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&Destination);
    }
    else
    {
      MakeSizedPoolPtr<_UNICODE_STRING>(&v17, 1851868238LL, (unsigned int)(Length + 122));
      if ( v17 )
        wistd::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>::unique_ptr<_NDIS_PM_WOL_PATTERN,KFreePool<_NDIS_PM_WOL_PATTERN>>(
          &Destination,
          (__int64 *)&v17);
      else
        wistd::unique_ptr<wchar_t,KFreePool<wchar_t>>::unique_ptr<wchar_t,KFreePool<wchar_t>>(&Destination);
      wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset(&v17, 0LL);
    }
    v10 = Destination;
    if ( !Destination )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        LOBYTE(v9) = 2;
        WPP_RECORDER_SF_(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          v9,
          1,
          129,
          (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids);
      }
      v6 = -1073741670;
      goto LABEL_18;
    }
    v11 = Destination;
    Destination->Buffer = &Destination[1].Length;
    v10->Length = 0;
    v10->MaximumLength = v8;
    appended = RtlAppendUnicodeStringToString(v11, &Source);
    v6 = appended;
    if ( appended >= 0 )
    {
      appended = RtlAppendUnicodeStringToString(v10, a1);
      v6 = appended;
      if ( appended >= 0 )
      {
        wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(v2, (void **)&Destination);
        wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset((void **)&Destination, 0LL);
        goto LABEL_30;
      }
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        v13 = 131;
        goto LABEL_22;
      }
    }
    else if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      v13 = 130;
LABEL_22:
      *(_DWORD *)v15 = appended;
      WPP_RECORDER_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        1u,
        v13,
        (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
        *(_QWORD *)v15);
    }
LABEL_18:
    wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset((void **)&Destination, 0LL);
    goto LABEL_30;
  }
  if ( WPP_RECORDER_INITIALIZED == (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    return v6;
  *(_DWORD *)v15 = v5;
  WPP_RECORDER_SF_d(
    *((_QWORD *)WPP_GLOBAL_Control + 8),
    2u,
    1u,
    0x80u,
    (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
    *(_QWORD *)v15);
LABEL_30:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      1u,
      0x84u,
      (struct _GUID *)&WPP_7bde6af50eab317a73c01e14d588f0c1_Traceguids,
      (char)a1,
      v6);
  return v6;
}
