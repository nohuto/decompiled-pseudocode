/*
 * XREFs of KsepMatchInitBiosInfo @ 0x140CCD5F0
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140CCD8F8 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepLogInfo @ 0x1404CCB84 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x14050EC24 (KsepDebugPrint.c)
 *     __report_rangecheckfailure @ 0x140522044 (__report_rangecheckfailure.c)
 *     wcstoul @ 0x1405389D0 (wcstoul.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     KsepRegistryQueryMULTISZ @ 0x1407BF25C (KsepRegistryQueryMULTISZ.c)
 *     KsepRegistryQuerySZ @ 0x1407BF28C (KsepRegistryQuerySZ.c)
 *     KsepRegistryCloseKey @ 0x1409E42F0 (KsepRegistryCloseKey.c)
 *     KsepRegistryOpenKey @ 0x1409E5254 (KsepRegistryOpenKey.c)
 */

__int64 KsepMatchInitBiosInfo()
{
  unsigned int v0; // r15d
  int MULTISZ; // esi
  unsigned int i; // ecx
  unsigned __int64 v3; // rax
  unsigned int v4; // edi
  unsigned int v5; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h] BYREF
  wchar_t v9[3]; // [rsp+40h] [rbp-20h] BYREF
  wchar_t v10[3]; // [rsp+46h] [rbp-1Ah] BYREF
  wchar_t Str[6]; // [rsp+4Ch] [rbp-14h] BYREF

  v8 = 0LL;
  KeyHandle = 0LL;
  xmmword_140E621B8 = 0LL;
  qword_140E621E8 = 0LL;
  v0 = -1;
  xmmword_140E621C8 = 0LL;
  xmmword_140E621D8 = 0LL;
  MULTISZ = KsepRegistryOpenKey((__int64)L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  if ( MULTISZ >= 0 )
  {
    MULTISZ = KsepRegistryQuerySZ(KeyHandle, L"SystemBiosDate", 1, v9, 0x16uLL, &v8);
    if ( MULTISZ >= 0 )
    {
      Str[4] = 0;
      *((_QWORD *)&AlpcpMessageLogLock.AbCompletedIoQoSBoostCount
      + (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[12],
                             1u)
        + 1) & 0x3F)) = 655814LL;
      if ( ((__int64)stru_140E66B30.StackBase & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: BiosDate name [%ws] .\n", v9);
      KsepLogInfo(0LL, (__int64)"KSE: BiosDate name [%ws] .\n", v9);
      MULTISZ = KsepRegistryQueryMULTISZ(KeyHandle, L"SystemBiosVersion", (__int64)&unk_140E61D60, 520LL, (__int64)&v8);
      word_140E61F66 = 0;
      for ( i = 0; i < 0x104; ++i )
      {
        v3 = 2LL * i;
        if ( *(_WORD *)((char *)&unk_140E61D60 + v3) == 32 )
        {
          if ( v3 >= 0x208 )
            _report_rangecheckfailure();
          *(_WORD *)((char *)&unk_140E61D60 + v3) = 0;
          break;
        }
      }
      *((_QWORD *)&AlpcpMessageLogLock.AbCompletedIoQoSBoostCount
      + (((unsigned __int8)_InterlockedExchangeAdd(
                             (volatile signed __int32 *)&AlpcpMessageLogLock.PriorityFloorCounts[12],
                             1u)
        + 1) & 0x3F)) = 655838LL;
      if ( ((__int64)stru_140E66B30.StackBase & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: BiosVendor name [%ws] .\n", &unk_140E61D60);
      KsepLogInfo(0LL, (__int64)"KSE: BiosVendor name [%ws] .\n", &unk_140E61D60);
      v9[2] = 0;
      v10[2] = 0;
      v4 = wcstoul(Str, 0LL, 16);
      v5 = wcstoul(v9, 0LL, 16) << 8;
      v0 = v5 + wcstoul(v10, 0LL, 16) + ((v4 + (v4 < 0x80 ? 0x2000 : 6400)) << 16);
    }
  }
  if ( KeyHandle )
    KsepRegistryCloseKey(KeyHandle);
  if ( MULTISZ < 0 )
  {
    *(_QWORD *)&xmmword_140E621B8 = 0LL;
    DWORD2(xmmword_140E621D8) = -1;
  }
  else
  {
    *(_QWORD *)&xmmword_140E621B8 = &unk_140E61D60;
    DWORD2(xmmword_140E621D8) = v0;
  }
  return (unsigned int)MULTISZ;
}
