/*
 * XREFs of BuildServicePath @ 0x1401691D0
 * Callers:
 *     CreateKModule @ 0x14014810C (CreateKModule.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x140022960 (WPP_RECORDER_SF_.c)
 *     ?reset@?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE_STRING@@@Z @ 0x14008C0E0 (-reset@-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAXPEAU_UNICODE.c)
 *     ??4?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@Z @ 0x1400931CC (--4-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICODE_STRING@@@@@wistd@@QEAAAEAV01@$$QEAV01@@.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     ??$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA?AV?$unique_ptr@U_UNICODE_STRING@@U?$KFreePool@U_UNICODE_STRING@@@@@wistd@@K_K@Z @ 0x140169370 (--$MakeSizedPoolPtr@U_UNICODE_STRING@@@@YA-AV-$unique_ptr@U_UNICODE_STRING@@U-$KFreePool@U_UNICO.c)
 */

__int64 __fastcall BuildServicePath(PCUNICODE_STRING Source, void **a2)
{
  __int64 v4; // rcx
  int v5; // edx
  PUNICODE_STRING v6; // rbx
  _UNICODE_STRING *v8; // rcx
  PUNICODE_STRING Destination; // [rsp+30h] [rbp-A8h] BYREF
  UNICODE_STRING Sourcea; // [rsp+38h] [rbp-A0h] BYREF
  _OWORD v11[6]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v12; // [rsp+B0h] [rbp-28h]
  WCHAR v13; // [rsp+B8h] [rbp-20h]

  v4 = Source->Length + 16LL;
  v11[0] = *(_OWORD *)L"\\Registry\\Machine\\System\\CurrentControlSet\\Services\\";
  v11[2] = *(_OWORD *)L"e\\System\\CurrentControlSet\\Services\\";
  v11[1] = *(_OWORD *)L"y\\Machine\\System\\CurrentControlSet\\Services\\";
  v11[4] = *(_OWORD *)L"ControlSet\\Services\\";
  v11[3] = *(_OWORD *)L"\\CurrentControlSet\\Services\\";
  v13 = aRegistryMachin_0[52];
  v12 = *(_QWORD *)L"ces\\";
  v11[5] = *(_OWORD *)L"et\\Services\\";
  *(_QWORD *)&Sourcea.Length = 6946920LL;
  Sourcea.Buffer = (wchar_t *)v11;
  MakeSizedPoolPtr<_UNICODE_STRING>(&Destination, 1917609038LL, v4 + 104);
  v6 = Destination;
  if ( Destination )
  {
    v8 = Destination;
    Destination->Buffer = &Destination[1].Length;
    v6->Length = 0;
    v6->MaximumLength = Source->Length + Sourcea.Length;
    RtlAppendUnicodeStringToString(v8, &Sourcea);
    RtlAppendUnicodeStringToString(v6, Source);
    wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::operator=(a2, (void **)&Destination);
    wistd::unique_ptr<_UNICODE_STRING,KFreePool<_UNICODE_STRING>>::reset((void **)&Destination, 0LL);
    return 0LL;
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    {
      LOBYTE(v5) = 2;
      WPP_RECORDER_SF_(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v5,
        1,
        21,
        (struct _GUID *)&WPP_ef150b59fbd93ec88cf27400477d67dd_Traceguids);
    }
    return 3221225626LL;
  }
}
