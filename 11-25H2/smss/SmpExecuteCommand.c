/*
 * XREFs of SmpExecuteCommand @ 0x140003F30
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 *     SmpLoadDeferredSubsystem @ 0x140016C40 (SmpLoadDeferredSubsystem.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmscpLoadSubSystem @ 0x140002D40 (SmscpLoadSubSystem.c)
 *     SmpExecuteImage @ 0x140003090 (SmpExecuteImage.c)
 *     SmpParseCommandLine @ 0x140004FD0 (SmpParseCommandLine.c)
 *     SmpInvokeAutoChk @ 0x140015CB8 (SmpInvokeAutoChk.c)
 *     SmpLoadSubSystem @ 0x140016D30 (SmpLoadSubSystem.c)
 */

__int64 __fastcall SmpExecuteCommand(__int64 a1, int a2, __int64 a3, int a4, _OWORD *a5)
{
  struct _UNICODE_STRING *v7; // rbx
  __int64 v8; // rbp
  signed int v9; // edi
  __int64 v10; // r9
  unsigned int v12; // edx
  signed int SubSystem; // eax
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
      v12 = 10121;
      goto LABEL_16;
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
        SubSystem = SmscpLoadSubSystem(&UnicodeString.Length, (int)v7, a1, a2, v17);
    }
    else
    {
      if ( (v17 & 0x10) != 0 )
      {
        v9 = -1073741772;
        SmpLogFailureString((__int64)"SmpExecuteCommand", 0x27AFu, (__int64)UnicodeString.Buffer, 0xC0000034);
LABEL_8:
        RtlFreeUnicodeString(&UnicodeString);
        RtlFreeUnicodeString(&v15);
        if ( v7 )
          RtlFreeUnicodeString(&v16);
        if ( v9 >= 0 )
          return (unsigned int)v9;
        if ( a1 )
          v8 = *(_QWORD *)(a1 + 8);
        v12 = 10186;
LABEL_16:
        SmpLogFailureString((__int64)"SmpExecuteCommand", v12, v8, v9);
        return (unsigned int)v9;
      }
      SubSystem = SmpExecuteImage(&UnicodeString.Length, (__int64)v7, a1, v10, 0LL, v17, a5);
    }
    v9 = SubSystem;
    goto LABEL_8;
  }
  return 0LL;
}
