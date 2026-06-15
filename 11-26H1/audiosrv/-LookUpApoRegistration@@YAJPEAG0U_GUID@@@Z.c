/*
 * XREFs of ?LookUpApoRegistration@@YAJPEAG0U_GUID@@@Z @ 0x180161F08
 * Callers:
 *     ?GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@0U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@@Z @ 0x180161A84 (-GetFxClsidsFromPropertyStore@@YAJPEAUIPropertyStore@@0U_tagpropertykey@@1PEBGPEAIPEAPEAU_GUID@@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800160AC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ @ 0x180047B14 (-Return_HrMsg@in1diag3@details@wil@@YAXPEAXIPEBDJ1ZZ.c)
 *     ?IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z @ 0x1800480C0 (-IsAPOClsidRegistered@@YA_NPEAUHKEY__@@U_GUID@@@Z.c)
 *     ?FindApoRegistrationUnderDevice@@YAJPEAGU_GUID@@AEA_N@Z @ 0x1801618AC (-FindApoRegistrationUnderDevice@@YAJPEAGU_GUID@@AEA_N@Z.c)
 */

__int64 __fastcall LookUpApoRegistration(unsigned __int16 *a1, unsigned __int16 *a2, struct _GUID *a3)
{
  int ApoRegistrationUnderDevice; // eax
  unsigned int v6; // ebx
  char *v8; // [rsp+28h] [rbp-90h]
  GUID rguid; // [rsp+90h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+0h]
  bool v11; // [rsp+C0h] [rbp+8h] BYREF

  v11 = 0;
  if ( a1 )
  {
    rguid = *a3;
    ApoRegistrationUnderDevice = FindApoRegistrationUnderDevice(a1, &rguid, &v11);
    v6 = ApoRegistrationUnderDevice;
    if ( ApoRegistrationUnderDevice < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x13F,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)(unsigned int)ApoRegistrationUnderDevice);
      return v6;
    }
    if ( !v11 )
    {
      v6 = -2005139398;
      LODWORD(v8) = a3->Data1;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x144,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x887C003ALL,
        (__int64)"Missing device relative APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X} deviceId: %ws",
        v8,
        a3->Data2,
        a3->Data3,
        a3->Data4[0],
        a3->Data4[1],
        a3->Data4[2],
        a3->Data4[3],
        a3->Data4[4],
        a3->Data4[5],
        a3->Data4[6],
        a3->Data4[7],
        a1);
      return v6;
    }
  }
  else if ( !a2 || (rguid = *a3, FindApoRegistrationUnderDevice(a2, &rguid, &v11), !v11) )
  {
    rguid = *a3;
    if ( !IsAPOClsidRegistered(HKEY_CLASSES_ROOT, &rguid) )
    {
      v6 = -2005139398;
      LODWORD(v8) = a3->Data1;
      wil::details::in1diag3::Return_HrMsg(
        retaddr,
        (void *)0x158,
        (int)"avcore\\audiocore\\server\\lib\\audioengineutil\\epcutil.cpp",
        (const char *)0x887C003ALL,
        (__int64)"Missing APO registration for {%08X-%04X-%04X-%02X%02X-%02X%02X%02X%02X%02X%02X}",
        v8,
        a3->Data2,
        a3->Data3,
        a3->Data4[0],
        a3->Data4[1],
        a3->Data4[2],
        a3->Data4[3],
        a3->Data4[4],
        a3->Data4[5],
        a3->Data4[6],
        a3->Data4[7]);
      return v6;
    }
  }
  return 0LL;
}
