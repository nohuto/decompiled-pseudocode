/*
 * XREFs of SecureDump_SymmetricEncryptionSetup @ 0x1405D9AB4
 * Callers:
 *     SecureDump_Init @ 0x1405D8FD8 (SecureDump_Init.c)
 *     SecureDump_ReInitialize @ 0x1405D97C4 (SecureDump_ReInitialize.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x1402657B0 (ExReleaseRundownProtection_0.c)
 *     ExGetExtensionTable @ 0x140495300 (ExGetExtensionTable.c)
 *     SecureDump_LogErrorEvent @ 0x1405D947C (SecureDump_LogErrorEvent.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     BCryptGenerateSymmetricKey @ 0x140815FBC (BCryptGenerateSymmetricKey.c)
 *     BCryptSetProperty @ 0x1408160D0 (BCryptSetProperty.c)
 *     BCryptGetProperty @ 0x140AD2C28 (BCryptGetProperty.c)
 *     BCryptOpenAlgorithmProvider @ 0x140B39EA0 (BCryptOpenAlgorithmProvider.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 SecureDump_SymmetricEncryptionSetup()
{
  const WCHAR *v0; // rdx
  int SymmetricKey; // ebx
  __int64 v2; // r8
  void *Pool2; // rdi
  UCHAR *v4; // r8
  ULONG v5; // r9d
  ULONG v6; // r9d
  ULONG v7; // r9d
  ULONG pbSecret; // [rsp+20h] [rbp-28h]
  ULONG v10; // [rsp+28h] [rbp-20h]
  ULONG v11; // [rsp+28h] [rbp-20h]
  ULONG v12; // [rsp+30h] [rbp-18h]
  int pbOutput; // [rsp+50h] [rbp+8h] BYREF
  ULONG pcbResult; // [rsp+58h] [rbp+10h] BYREF

  pcbResult = 0;
  pbOutput = 0;
  dword_140E662E8 = 1;
  SymmetricKey = BCryptOpenAlgorithmProvider(&hAlgorithm, L"XTS-AES", L"Microsoft Primitive Provider", 1u);
  if ( SymmetricKey < 0 )
    goto LABEL_12;
  Pool2 = (void *)ExAllocatePool2(0x40uLL);
  if ( !Pool2 )
  {
    SymmetricKey = -1073741670;
LABEL_12:
    SecureDump_LogErrorEvent(1, (__int64)v0, v2);
    return (unsigned int)SymmetricKey;
  }
  SymmetricKey = -1073741822;
  if ( ExGetExtensionTable(*(struct _EX_RUNDOWN_REF **)&SepRmCapTableLock.ForegroundLossTime) )
  {
    SymmetricKey = guard_dispatch_icall_no_overrides(0LL, Pool2);
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)(*(_QWORD *)&SepRmCapTableLock.ForegroundLossTime + 88LL));
  }
  if ( SymmetricKey < 0 )
  {
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_12;
  }
  SymmetricKey = BCryptGenerateSymmetricKey(hAlgorithm, &hObject, v4, v5, (PUCHAR)Pool2, v10, v12);
  ExFreePoolWithTag(Pool2, 0);
  if ( SymmetricKey < 0 )
    goto LABEL_12;
  SymmetricKey = BCryptGetProperty(hObject, L"KeyLength", (PUCHAR)&pbOutput, v6, &pcbResult, v11);
  if ( SymmetricKey < 0 )
    goto LABEL_12;
  if ( pbOutput == 512 )
  {
    pbInput = 4096;
    SymmetricKey = BCryptSetProperty(hObject, v0, (PUCHAR)&pbInput, v7, pbSecret);
    if ( SymmetricKey < 0 )
      goto LABEL_12;
  }
  return (unsigned int)SymmetricKey;
}
