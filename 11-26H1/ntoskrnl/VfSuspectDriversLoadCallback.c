/*
 * XREFs of VfSuspectDriversLoadCallback @ 0x140C3EA60
 * Callers:
 *     VfDriverLoadImage @ 0x140C4CAE0 (VfDriverLoadImage.c)
 * Callees:
 *     VfTargetDriversAdd @ 0x1403C1A18 (VfTargetDriversAdd.c)
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     DifNotifyPluginSystemEvent @ 0x1404CFE80 (DifNotifyPluginSystemEvent.c)
 *     CarLoadImageHandler @ 0x14064CDCC (CarLoadImageHandler.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     VfSuspectDriversAllocateEntry @ 0x140C264A0 (VfSuspectDriversAllocateEntry.c)
 *     VfUtilPrintCheckinString @ 0x140C27A20 (VfUtilPrintCheckinString.c)
 *     VfTargetDriversAllocateFullName @ 0x140C2EE74 (VfTargetDriversAllocateFullName.c)
 *     VfThunkApplyThunksCurrentSession @ 0x140C3B408 (VfThunkApplyThunksCurrentSession.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

LONG __fastcall VfSuspectDriversLoadCallback(__int64 a1, char a2, int a3)
{
  int v6; // r15d
  UNICODE_STRING *v7; // rsi
  __int64 i; // rdi
  __int64 j; // rdi
  __int64 Entry; // rdi
  int v11; // ebp
  BOOLEAN v12; // al
  int v13; // eax
  unsigned __int64 v14; // rdx
  __int64 *v15; // rax
  LONG result; // eax

  v6 = 0;
  VfDriverLock(a1);
  v7 = (UNICODE_STRING *)(a1 + 88);
  if ( (VfOptionFlags & 1) != 0 )
  {
    for ( i = VfExcludedDriversList; (__int64 *)i != &VfExcludedDriversList; i = *(_QWORD *)i )
    {
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(i + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_49;
    }
  }
  if ( (MmVerifyDriverLevel & 0xEF8000) != 0 )
  {
    for ( j = VfXdvExcludedDriversList; (__int64 *)j != &VfXdvExcludedDriversList; j = *(_QWORD *)j )
    {
      v7 = (UNICODE_STRING *)(a1 + 88);
      if ( RtlEqualUnicodeString((PCUNICODE_STRING)(j + 16), (PCUNICODE_STRING)(a1 + 88), 1u) )
        goto LABEL_49;
    }
  }
  if ( RtlEqualUnicodeString(&VfTcpIpName, v7, 1u) == 1 )
  {
    VfTcpIpDllBase = *(_QWORD *)(a1 + 48);
    VfTcpIpSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, v7, 1u) == 1 )
  {
    VfTdxDllBase = *(_QWORD *)(a1 + 48);
    VfTdxSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, v7, 1u) == 1 )
  {
    VfMrxsmbDllBase = *(_QWORD *)(a1 + 48);
    VfMrxsmbSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfTmName, v7, 1u) == 1 )
  {
    VfTmDllBase = *(_QWORD *)(a1 + 48);
    VfTmSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, v7, 1u) == 1 )
  {
    VfWin32kDllBase = *(_QWORD *)(a1 + 48);
    VfWin32kSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  else if ( RtlEqualUnicodeString(&VfKsName, v7, 1u) == 1 )
  {
    VfKsDllBase = *(_QWORD *)(a1 + 48);
    VfKsSizeOfImage = *(_DWORD *)(a1 + 64);
  }
  Entry = VfSuspectDriversList;
  v11 = 0;
  while ( (__int64 *)Entry != &VfSuspectDriversList )
  {
    v12 = RtlEqualUnicodeString((PCUNICODE_STRING)(Entry + 40), v7, 1u);
    v11 = v12;
    if ( v12 )
      goto LABEL_43;
    Entry = *(_QWORD *)Entry;
  }
  if ( KernelVerifier )
  {
    if ( !a3 && ((VfOptionFlags & 0x2000) == 0 || ViVerifyAllDrivers != 1) )
    {
      v13 = ViForceAllDriversSuspect;
      goto LABEL_37;
    }
  }
  else if ( ViVerifyAllDrivers != 1 )
  {
    if ( VfRandomVerifiedDrivers
      && (v14 = (unsigned __int64)(unsigned int)(ViLoadedDriversCount + 1) >> 3,
          ++ViLoadedDriversCount,
          ((*(char *)(v14 + qword_140FF1078) >> (ViLoadedDriversCount & 7)) & 1) != 0) )
    {
      v13 = 1;
      --VfRandomVerifiedDrivers;
    }
    else
    {
      v13 = 0;
    }
LABEL_37:
    if ( !v13 )
    {
      Entry = 0LL;
      goto LABEL_45;
    }
  }
  Entry = VfSuspectDriversAllocateEntry((const void **)v7);
  if ( Entry )
  {
    v15 = (__int64 *)qword_140F090A8;
    if ( *(__int64 **)qword_140F090A8 != &VfSuspectDriversList )
      __fastfail(3u);
    *(_QWORD *)Entry = &VfSuspectDriversList;
    v11 = 1;
    *(_QWORD *)(Entry + 8) = v15;
    *v15 = Entry;
    qword_140F090A8 = Entry;
    goto LABEL_44;
  }
LABEL_43:
  if ( !Entry )
    goto LABEL_45;
LABEL_44:
  VfTargetDriversAllocateFullName(Entry, a1);
LABEL_45:
  VfTargetDriversAdd(a1, a2, Entry);
  if ( Entry && (v11 || KernelVerifier) )
  {
    v6 = VfThunkApplyThunksCurrentSession(a1);
    VfUtilPrintCheckinString(&v7->Length, 0);
    ++dword_140F08A54;
    ++*(_DWORD *)(Entry + 16);
    CarLoadImageHandler(a1);
    DifNotifyPluginSystemEvent(2, (__int128 *)a1);
  }
LABEL_49:
  ViDriversLoadLockOwner = 0LL;
  result = KeReleaseMutex(&ViDriversLoadLock, 0);
  if ( v6 )
    *(_DWORD *)(a1 + 104) |= 0x2000000u;
  return result;
}
