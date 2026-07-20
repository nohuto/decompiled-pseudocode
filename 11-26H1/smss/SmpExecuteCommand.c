/*
 * XREFs of SmpExecuteCommand @ 0x1400030A0
 * Callers:
 *     SmscpLoadSubSystemsForMuSession @ 0x140002770 (SmscpLoadSubSystemsForMuSession.c)
 *     SmpLoadDataFromRegistry @ 0x1400159FC (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x1400168F0 (SmpLoadDeferredSubsystem.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017AB0 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     SmpLogFailureString @ 0x140001D34 (SmpLogFailureString.c)
 *     SmpParseCommandLine @ 0x140004280 (SmpParseCommandLine.c)
 *     SmscpLoadSubSystem @ 0x140004C90 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140005010 (SmpExecuteImage.c)
 *     SmpInvokeAutoChk @ 0x1400158B8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x1400169E8 (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(__int64 a1, int a2, __int64 a3, int a4, __int64 a5)
{
  struct _UNICODE_STRING *v7; // rdi
  __int64 v8; // rbp
  signed int v9; // ebx
  int v10; // r9d
  signed int SubSystem; // eax
  unsigned int v13; // edx
  struct _UNICODE_STRING UnicodeString; // [rsp+40h] [rbp-48h] BYREF
  struct _UNICODE_STRING v15; // [rsp+50h] [rbp-38h] BYREF
  struct _UNICODE_STRING v16; // [rsp+60h] [rbp-28h] BYREF
  int v17; // [rsp+A8h] [rbp+20h] BYREF

  v17 = a4;
  UnicodeString = 0LL;
  v16 = 0LL;
  v15 = 0LL;
  if ( (a4 & 1) == 0 )
  {
    v7 = &v16;
    v8 = 0LL;
    if ( (a4 & 0x400) != 0 )
      v7 = 0LL;
    v9 = SmpParseCommandLine(a1, &v17, &UnicodeString, v7);
    if ( v9 < 0 )
    {
      if ( a1 )
        v8 = *(_QWORD *)(a1 + 8);
      v13 = 10119;
      goto LABEL_20;
    }
    if ( (v17 & 4) != 0 )
    {
      if ( SmpSoftBoot && !SmpBugcheckRecovery )
        goto LABEL_8;
      SubSystem = SmpInvokeAutoChk(&UnicodeString);
    }
    else if ( (v17 & 8) != 0 )
    {
      if ( SmpPrimarySmss )
        SubSystem = SmpLoadSubSystem((unsigned int)&UnicodeString, (_DWORD)v7, a1, a2, (unsigned int)&v15, v17);
      else
        SubSystem = SmscpLoadSubSystem((unsigned int)&UnicodeString, (_DWORD)v7, a1, a2, v17);
    }
    else
    {
      if ( (v17 & 0x10) != 0 )
      {
        v9 = -1073741772;
        SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27ADu, (__int64)UnicodeString.Buffer, 0xC0000034);
        goto LABEL_8;
      }
      SubSystem = SmpExecuteImage((unsigned int)&UnicodeString, (_DWORD)v7, a1, v10, 0LL, v17, a5);
    }
    v9 = SubSystem;
LABEL_8:
    RtlFreeUnicodeString(&UnicodeString);
    RtlFreeUnicodeString(&v15);
    if ( v7 )
      RtlFreeUnicodeString(&v16);
    if ( v9 >= 0 )
      return (unsigned int)v9;
    if ( a1 )
      v8 = *(_QWORD *)(a1 + 8);
    v13 = 10185;
LABEL_20:
    SmpLogFailureString((__int64)"SmpExecuteCommand", v13, v8, v9);
    return (unsigned int)v9;
  }
  return 0LL;
}
