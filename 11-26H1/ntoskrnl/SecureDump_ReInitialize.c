/*
 * XREFs of SecureDump_ReInitialize @ 0x1405D97C4
 * Callers:
 *     IoProvisionCrashDumpKey @ 0x1405C9C74 (IoProvisionCrashDumpKey.c)
 * Callees:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D8AA8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_ProvisionCrashDumpKey @ 0x1405D9700 (SecureDump_ProvisionCrashDumpKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405D9AB4 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptCloseAlgorithmProvider @ 0x14063DE48 (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x14063DEA0 (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_ReInitialize(__int64 a1, ULONG a2)
{
  ULONG v3; // edx
  int v4; // ebx

  if ( ForceDumpDisabled || !AllowCrashDump )
    return 3221225473LL;
  if ( (unsigned int)(SecureDmpEncryptionContext - 2) > 1 )
    return 3221225860LL;
  if ( !DWORD1(xmmword_140E662A8) || !SecureDmpLoadCertificate )
    return 3221225488LL;
  if ( hAlgorithm )
  {
    BCryptCloseAlgorithmProvider(hAlgorithm, a2);
    hAlgorithm = 0LL;
  }
  if ( hObject )
  {
    BCryptDestroyKey(hObject);
    hObject = 0LL;
  }
  if ( qword_140E662C8 )
  {
    ExFreePoolWithTag(qword_140E662C8, 0);
    qword_140E662C8 = 0LL;
  }
  if ( *((_QWORD *)&dwFlags + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
    *((_QWORD *)&dwFlags + 1) = 0LL;
  }
  if ( *((_QWORD *)&xmmword_140E662A8 + 1) )
  {
    ExFreePoolWithTag(*((PVOID *)&xmmword_140E662A8 + 1), 0);
    *((_QWORD *)&xmmword_140E662A8 + 1) = 0LL;
  }
  v4 = SecureDump_ProvisionCrashDumpKey();
  if ( v4 < 0
    || (v4 = SecureDump_SymmetricEncryptionSetup(), v4 < 0)
    || (v4 = SecureDump_EncryptSymmetricKeyWithPublicKey(), v4 < 0) )
  {
    byte_140E662A4 = 0;
    if ( hAlgorithm )
    {
      BCryptCloseAlgorithmProvider(hAlgorithm, v3);
      hAlgorithm = 0LL;
    }
    if ( hObject )
    {
      BCryptDestroyKey(hObject);
      hObject = 0LL;
    }
    if ( qword_140E662C8 )
    {
      ExFreePoolWithTag(qword_140E662C8, 0);
      qword_140E662C8 = 0LL;
    }
    if ( *((_QWORD *)&dwFlags + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&dwFlags + 1), 0);
      *((_QWORD *)&dwFlags + 1) = 0LL;
    }
    if ( *((_QWORD *)&xmmword_140E662A8 + 1) )
    {
      ExFreePoolWithTag(*((PVOID *)&xmmword_140E662A8 + 1), 0);
      *((_QWORD *)&xmmword_140E662A8 + 1) = 0LL;
    }
    SecureDmpEncryptionContext = 3;
  }
  else
  {
    byte_140E662A4 = 1;
    SecureDmpEncryptionContext = 2;
    dword_140E662F0 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
  }
  return (unsigned int)v4;
}
