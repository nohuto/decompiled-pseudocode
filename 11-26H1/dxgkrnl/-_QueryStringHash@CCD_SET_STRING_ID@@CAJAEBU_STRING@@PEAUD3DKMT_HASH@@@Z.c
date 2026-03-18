/*
 * XREFs of ?_QueryStringHash@CCD_SET_STRING_ID@@CAJAEBU_STRING@@PEAUD3DKMT_HASH@@@Z @ 0x14033C268
 * Callers:
 *     ?QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z @ 0x14005905C (-QueryConnectedSetHash@CCD_SET_STRING_ID@@QEBAJPEAUD3DKMT_HASH@@@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x14033C20C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x14033D2A0 (-RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ?CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z @ 0x14033C33C (-CcdCreateMd5Checksum@@YAJPEBEIPEAE@Z.c)
 */

__int64 __fastcall CCD_SET_STRING_ID::_QueryStringHash(PCANSI_STRING SourceString, struct D3DKMT_HASH *a2)
{
  NTSTATUS v4; // eax
  __int64 Md5Checksum; // rbx
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  *(_OWORD *)a2 = 0LL;
  *((_DWORD *)a2 + 4) = 0;
  DestinationString = 0LL;
  v4 = RtlAnsiStringToUnicodeString(&DestinationString, SourceString, 1u);
  LODWORD(Md5Checksum) = v4;
  if ( v4 < 0 )
  {
    WdLogSingleEntry2(2LL, v4, SourceString);
    WdLogGlobalForLineNumber = 2035;
  }
  else
  {
    Md5Checksum = (int)CcdCreateMd5Checksum(
                         (const unsigned __int8 *)DestinationString.Buffer,
                         DestinationString.Length,
                         (unsigned __int8 *)a2 + 4);
    RtlFreeUnicodeString(&DestinationString);
    if ( (int)Md5Checksum < 0 )
    {
      WdLogSingleEntry2(2LL, Md5Checksum, SourceString);
      WdLogGlobalForLineNumber = 2049;
    }
    else
    {
      *(_DWORD *)a2 = 1;
    }
  }
  return (unsigned int)Md5Checksum;
}
