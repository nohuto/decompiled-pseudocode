/*
 * XREFs of PfSnSetPrefetcherInformation @ 0x140ACC2CC
 * Callers:
 *     NtSetSystemInformation @ 0x140839A80 (NtSetSystemInformation.c)
 * Callees:
 *     RtlCopyFromUser @ 0x1405362B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     RtlCopyVolatileMemory @ 0x140737C50 (RtlCopyVolatileMemory.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     PfSnAppLaunchScenarioControl @ 0x1407CA320 (PfSnAppLaunchScenarioControl.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     SeSinglePrivilegeCheck @ 0x14090DE50 (SeSinglePrivilegeCheck.c)
 *     PfSnOperationProcess @ 0x140ACAAC0 (PfSnOperationProcess.c)
 *     PfSnPrefetchCacheEntryUpdate @ 0x140ACC4B4 (PfSnPrefetchCacheEntryUpdate.c)
 *     PfpProcessScenarioPhase @ 0x140B1F0C8 (PfpProcessScenarioPhase.c)
 *     PfSnBeginBootPhase @ 0x140BFEFAC (PfSnBeginBootPhase.c)
 */

__int64 __fastcall PfSnSetPrefetcherInformation(__int64 a1, void *a2, int a3, KPROCESSOR_MODE a4)
{
  int v7; // eax
  int v8; // ebx
  int v10; // eax
  bool v11; // sf
  unsigned int ULongFromUser; // esi
  __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-108h] BYREF
  volatile void *Address[2]; // [rsp+30h] [rbp-F8h]
  unsigned int v16; // [rsp+40h] [rbp-E8h]
  __int64 v17; // [rsp+48h] [rbp-E0h]
  __int64 v18; // [rsp+50h] [rbp-D8h]
  __int64 v19; // [rsp+58h] [rbp-D0h]
  __int64 v20; // [rsp+60h] [rbp-C8h]
  __int128 v21; // [rsp+68h] [rbp-C0h] BYREF
  _DWORD v22[3]; // [rsp+78h] [rbp-B0h] BYREF
  __int128 v23; // [rsp+84h] [rbp-A4h]
  int v24; // [rsp+94h] [rbp-94h]
  __int64 v25; // [rsp+98h] [rbp-90h] BYREF
  int v26; // [rsp+A0h] [rbp-88h]
  _DWORD v27[20]; // [rsp+B0h] [rbp-78h] BYREF

  v14 = 0LL;
  *(_OWORD *)Address = 0LL;
  v25 = 0LL;
  v26 = 0;
  memset_0(v27, 0, 0x48uLL);
  v21 = 0LL;
  if ( a3 != 32 )
    return (unsigned int)-1073741820;
  if ( a4 )
    RtlCopyFromUser(&v14, a2, 0x20uLL);
  else
    RtlCopyVolatileMemory(&v14, a2, 0x20uLL);
  if ( (_QWORD)v14 != 0x6B75684300000001LL )
    return (unsigned int)-1073741811;
  if ( DWORD2(v14) > 8 || (v7 = 296, !_bittest(&v7, DWORD2(v14))) )
  {
    if ( !SeSinglePrivilegeCheck(SeProfileSingleProcessPrivilege, a4) )
      return (unsigned int)-1073741790;
  }
  if ( DWORD2(v14) != 3 )
  {
    switch ( DWORD2(v14) )
    {
      case 5:
        if ( LODWORD(Address[1]) != 12 )
          return (unsigned int)-1073741811;
        if ( a4 )
        {
          v19 = 1LL;
          ProbeForRead(Address[0], 1uLL, 4u);
          RtlCopyFromUser(&v25, (void *)Address[0], 0xCuLL);
        }
        else
        {
          RtlCopyVolatileMemory(&v25, (const void *)Address[0], 0xCuLL);
        }
        v10 = PfSnOperationProcess((__int64)&v25);
        break;
      case 6:
        if ( LODWORD(Address[1]) == 72 )
        {
          if ( a4 )
          {
            v18 = 1LL;
            ProbeForRead(Address[0], 1uLL, 4u);
            RtlCopyFromUser(v27, (void *)Address[0], 0x48uLL);
          }
          else
          {
            RtlCopyVolatileMemory(v27, (const void *)Address[0], 0x48uLL);
          }
          if ( v27[0] == 2 )
          {
            PfSnPrefetchCacheEntryUpdate(v27);
            return 0;
          }
          return (unsigned int)-1073741811;
        }
        return (unsigned int)-1073741306;
      case 8:
        if ( LODWORD(Address[1]) != 16 )
          return (unsigned int)-1073741306;
        if ( a4 )
        {
          v17 = 1LL;
          ProbeForRead(Address[0], 1uLL, 8u);
          RtlCopyFromUser(&v21, (void *)Address[0], 0x10uLL);
        }
        else
        {
          RtlCopyVolatileMemory(&v21, (const void *)Address[0], 0x10uLL);
        }
        v10 = PfSnAppLaunchScenarioControl((__int64)&v21);
        break;
      default:
        return (unsigned int)-1073741821;
    }
    v8 = v10;
    v11 = v10 < 0;
LABEL_46:
    if ( v11 )
      return (unsigned int)v8;
    return 0;
  }
  if ( LODWORD(Address[1]) != 4 )
    return (unsigned int)-1073741811;
  if ( a4 )
  {
    v20 = 1LL;
    ProbeForRead(Address[0], 1uLL, 4u);
    ULongFromUser = RtlReadULongFromUser((unsigned int *)Address[0]);
  }
  else
  {
    ULongFromUser = *(_DWORD *)Address[0];
  }
  v16 = ULongFromUser;
  if ( ULongFromUser == 2 || !a4 )
  {
    v8 = PfSnBeginBootPhase(ULongFromUser);
    if ( ULongFromUser == 2 )
    {
      v23 = 0LL;
      v24 = 0;
      v22[0] = 4;
      v22[1] = 4;
      v22[2] = 1;
      LOBYTE(v13) = a4;
      PfpProcessScenarioPhase(v22, v13);
    }
    v11 = v8 < 0;
    goto LABEL_46;
  }
  return (unsigned int)-1073741790;
}
