/*
 * XREFs of KsepMatchInitBiosInfo @ 0x140CD3750
 * Callers:
 *     KsepMatchInitMachineInfo @ 0x140CD3A58 (KsepMatchInitMachineInfo.c)
 * Callees:
 *     KsepLogInfo @ 0x1404C6324 (KsepLogInfo.c)
 *     KsepDebugPrint @ 0x140508694 (KsepDebugPrint.c)
 *     __report_rangecheckfailure @ 0x1405246B0 (__report_rangecheckfailure.c)
 *     wcstoul @ 0x14053AE50 (wcstoul.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     KsepRegistryQueryMULTISZ @ 0x1407C22BC (KsepRegistryQueryMULTISZ.c)
 *     KsepRegistryQuerySZ @ 0x1407C22EC (KsepRegistryQuerySZ.c)
 *     KsepRegistryOpenKey @ 0x1409D7988 (KsepRegistryOpenKey.c)
 *     KsepRegistryCloseKey @ 0x1409D8784 (KsepRegistryCloseKey.c)
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
  xmmword_140E62348 = 0LL;
  qword_140E62378 = 0LL;
  v0 = -1;
  xmmword_140E62358 = 0LL;
  xmmword_140E62368 = 0LL;
  MULTISZ = KsepRegistryOpenKey(L"\\Registry\\Machine\\Hardware\\Description\\System", 0LL, &KeyHandle);
  if ( MULTISZ >= 0 )
  {
    MULTISZ = KsepRegistryQuerySZ(KeyHandle, L"SystemBiosDate", 1, v9, 0x16uLL, &v8);
    if ( MULTISZ >= 0 )
    {
      Str[4] = 0;
      *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                        * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                               &KsepHistoryMessagesIndex,
                                                                               1u)
                                                          + 1) & 0x3F)] = 655814LL;
      if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: BiosDate name [%ws] .\n", v9);
      KsepLogInfo(0LL, (__int64)"KSE: BiosDate name [%ws] .\n", v9);
      MULTISZ = KsepRegistryQueryMULTISZ(KeyHandle, L"SystemBiosVersion", (__int64)&unk_140E61EF0, 520LL, (__int64)&v8);
      word_140E620F6 = 0;
      for ( i = 0; i < 0x104; ++i )
      {
        v3 = 2LL * i;
        if ( *(_WORD *)((char *)&unk_140E61EF0 + v3) == 32 )
        {
          if ( v3 >= 0x208 )
            _report_rangecheckfailure();
          *(_WORD *)((char *)&unk_140E61EF0 + v3) = 0;
          break;
        }
      }
      *(_QWORD *)&AlpcpMessageLogLock.PriorityFloorCounts[8
                                                        * (((unsigned __int8)_InterlockedExchangeAdd(
                                                                               &KsepHistoryMessagesIndex,
                                                                               1u)
                                                          + 1) & 0x3F)] = 655838LL;
      if ( ((__int64)stru_140E66D40.StackBase & 1) != 0 )
        KsepDebugPrint(0LL, (int)"KSE: BiosVendor name [%ws] .\n", &unk_140E61EF0);
      KsepLogInfo(0LL, (__int64)"KSE: BiosVendor name [%ws] .\n", &unk_140E61EF0);
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
    *(_QWORD *)&xmmword_140E62348 = 0LL;
    DWORD2(xmmword_140E62368) = -1;
  }
  else
  {
    *(_QWORD *)&xmmword_140E62348 = &unk_140E61EF0;
    DWORD2(xmmword_140E62368) = v0;
  }
  return (unsigned int)MULTISZ;
}
