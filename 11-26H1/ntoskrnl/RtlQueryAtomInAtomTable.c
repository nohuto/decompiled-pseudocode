/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x1409FD020
 * Callers:
 *     NtQueryInformationAtom @ 0x1409FC020 (NtQueryInformationAtom.c)
 * Callees:
 *     KeAbPostRelease @ 0x140278FE0 (KeAbPostRelease.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140304E70 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x1403190D0 (ExfTryToWakePushLock.c)
 *     RtlpLookupLowBox @ 0x14045ADDC (RtlpLookupLowBox.c)
 *     _snwprintf_s @ 0x14053DF30 (_snwprintf_s.c)
 *     Feature_1811147066__private_IsEnabledDeviceUsageNoInline @ 0x14061C670 (Feature_1811147066__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     RtlpLockAtomTable @ 0x1409FCDE0 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x1409FCED0 (RtlpAtomMapAtomToHandleEntry.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // ebx
  NTSTATUS v9; // esi
  ULONG v10; // r15d
  unsigned int v12; // r14d
  ULONG v13; // eax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r14
  unsigned int v16; // edi
  ULONG v17; // eax
  __int64 v18; // rdx
  wchar_t DstBuf[16]; // [rsp+50h] [rbp-68h] BYREF

  v8 = Atom;
  v9 = 0;
  v10 = 0;
  if ( !RtlpLockAtomTable(AtomTableHandle, Atom, (__int64)AtomUsage, (struct _KLOCK_ENTRIES *)AtomFlags) )
    return -1073741811;
  if ( (unsigned int)Feature_1811147066__private_IsEnabledDeviceUsageNoInline() )
    v10 = *AtomNameLength & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v9 = -1073741816;
    v14 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTableHandle, v8 & 0x3FFF);
    v15 = v14;
    if ( !v14 || *(_WORD *)(v14 + 10) != (_WORD)v8 || !RtlpLookupLowBox((__int64)AtomTableHandle, v14, 0) )
      goto LABEL_42;
    v9 = 0;
    if ( AtomUsage )
      *AtomUsage = *(unsigned __int16 *)(v15 + 36);
    if ( AtomFlags )
      *AtomFlags = *(unsigned __int16 *)(v15 + 38);
    if ( !AtomName )
      goto LABEL_42;
    v16 = 2 * *(unsigned __int8 *)(v15 + 40);
    if ( (unsigned int)Feature_1811147066__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v16 < v10 )
        goto LABEL_39;
      if ( v10 >= 2 )
      {
        v16 = v10 - 2;
        goto LABEL_39;
      }
LABEL_35:
      *AtomNameLength = v16;
      goto LABEL_41;
    }
    v17 = *AtomNameLength;
    if ( v16 >= *AtomNameLength )
    {
      if ( v17 < 2 )
        goto LABEL_35;
      v16 = v17 - 2;
    }
LABEL_39:
    if ( v16 )
    {
      memmove(AtomName, (const void *)(v15 + 42), v16);
      AtomName[(unsigned __int64)v16 >> 1] = 0;
      *AtomNameLength = v16;
      goto LABEL_42;
    }
LABEL_41:
    v9 = -1073741789;
    goto LABEL_42;
  }
  if ( (_WORD)v8 )
  {
    if ( AtomUsage )
      *AtomUsage = 1;
    if ( AtomFlags )
      *AtomFlags = 1;
    if ( !AtomName )
      goto LABEL_42;
    v12 = 2 * snwprintf_s(DstBuf, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( (unsigned int)Feature_1811147066__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 < v10 )
        goto LABEL_21;
      if ( v10 >= 2 )
      {
        v12 = v10 - 2;
        goto LABEL_21;
      }
LABEL_17:
      v9 = -1073741789;
      goto LABEL_42;
    }
    v13 = *AtomNameLength;
    if ( v12 >= *AtomNameLength )
    {
      if ( v13 < 2 )
        goto LABEL_17;
      v12 = v13 - 2;
    }
LABEL_21:
    if ( v12 )
    {
      memmove(AtomName, DstBuf, v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
      *AtomNameLength = v12;
      goto LABEL_42;
    }
    goto LABEL_17;
  }
  v9 = -1073741811;
LABEL_42:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)AtomTableHandle + 1, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)AtomTableHandle + 1);
  KeAbPostRelease((unsigned __int64)AtomTableHandle + 8);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v18);
  return v9;
}
