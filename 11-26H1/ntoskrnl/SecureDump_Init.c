/*
 * XREFs of SecureDump_Init @ 0x1405D8FD8
 * Callers:
 *     IopInitCrashDumpDuringSysInit @ 0x140CC3490 (IopInitCrashDumpDuringSysInit.c)
 * Callees:
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1405D8AA8 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1405D9AB4 (SecureDump_SymmetricEncryptionSetup.c)
 *     BCryptCloseAlgorithmProvider @ 0x14063DE48 (BCryptCloseAlgorithmProvider.c)
 *     BCryptDestroyKey @ 0x14063DEA0 (BCryptDestroyKey.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SecureDump_Init(__int64 a1, int a2)
{
  int v2; // ebx

  v2 = 0;
  if ( SecureDmpEncryptionContext == 1 )
  {
    if ( !DWORD1(xmmword_140E662A8) )
    {
      byte_140E662A4 = 0;
      goto LABEL_7;
    }
    byte_140E662A4 = 1;
    v2 = SecureDump_SymmetricEncryptionSetup();
    if ( v2 >= 0 )
    {
      v2 = SecureDump_EncryptSymmetricKeyWithPublicKey();
      if ( v2 >= 0 )
      {
        a2 = (*(&dwFlags + 1) + pcbResult + 8279) & 0xFFFFF000;
        dword_140E662F0 = a2;
LABEL_7:
        SecureDmpEncryptionContext = 2;
      }
    }
  }
  switch ( SecureDmpEncryptionContext )
  {
    case 3:
      v2 = -1073741823;
      break;
    case 2:
      return 0LL;
    case 0:
      return 3221225488LL;
    default:
      if ( v2 < 0 )
      {
        byte_140E662A4 = 0;
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
        SecureDmpEncryptionContext = 3;
      }
      break;
  }
  return (unsigned int)v2;
}
