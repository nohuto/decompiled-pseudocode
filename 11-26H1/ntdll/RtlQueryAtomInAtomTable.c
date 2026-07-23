/*
 * XREFs of RtlQueryAtomInAtomTable @ 0x180117380
 * Callers:
 *     <none>
 * Callees:
 *     RtlpLockAtomTable @ 0x180001750 (RtlpLockAtomTable.c)
 *     RtlpAtomMapAtomToHandleEntry @ 0x180001780 (RtlpAtomMapAtomToHandleEntry.c)
 *     RtlReleaseSRWLockExclusive @ 0x18002A010 (RtlReleaseSRWLockExclusive.c)
 *     _snwprintf_s @ 0x180132FC0 (_snwprintf_s.c)
 *     Feature_1811147066__private_IsEnabledDeviceUsageNoInline @ 0x18013F1A0 (Feature_1811147066__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     memmove @ 0x180164600 (memmove.c)
 */

NTSTATUS __cdecl RtlQueryAtomInAtomTable(
        PVOID AtomTableHandle,
        RTL_ATOM Atom,
        PULONG AtomUsage,
        PULONG AtomFlags,
        PWSTR AtomName,
        PULONG AtomNameLength)
{
  int v8; // esi
  ULONG v9; // ebx
  NTSTATUS v11; // edi
  unsigned int v12; // esi
  ULONG v13; // eax
  __int64 v14; // rax
  _RTL_SRWLOCK *v15; // rcx
  NTSTATUS v16; // r10d
  __int64 v17; // r14
  unsigned __int16 *v18; // rax
  ULONG v19; // eax
  wchar_t Buffer[16]; // [rsp+50h] [rbp-68h] BYREF

  v8 = Atom;
  v9 = 0;
  if ( !RtlpLockAtomTable((__int64)AtomTableHandle) )
    return -1073741811;
  if ( (unsigned int)Feature_1811147066__private_IsEnabledDeviceUsageNoInline() )
    v9 = *AtomNameLength & 0xFFFFFFFE;
  if ( (unsigned __int16)v8 >= 0xC000u )
  {
    v11 = -1073741816;
    v14 = RtlpAtomMapAtomToHandleEntry((__int64)AtomTableHandle, v8 & 0x3FFF);
    v17 = v14;
    if ( !v14 )
      goto LABEL_44;
    if ( *(_WORD *)(v14 + 10) != (_WORD)v8 )
      goto LABEL_44;
    v18 = (unsigned __int16 *)(v14 + 12);
    if ( !v18 )
      goto LABEL_44;
    v11 = v16;
    if ( AtomUsage )
      *AtomUsage = *v18;
    if ( AtomFlags )
      *AtomFlags = *(unsigned __int16 *)(v17 + 14);
    if ( !AtomName )
      goto LABEL_44;
    v12 = 2 * *(unsigned __int8 *)(v17 + 16);
    if ( (unsigned int)Feature_1811147066__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 < v9 )
        goto LABEL_40;
      if ( v9 >= 2 )
      {
        v12 = v9 - 2;
        goto LABEL_40;
      }
    }
    else
    {
      v19 = *AtomNameLength;
      if ( v12 < *AtomNameLength )
        goto LABEL_40;
      if ( v19 >= 2 )
      {
        v12 = v19 - 2;
        goto LABEL_40;
      }
    }
    *AtomNameLength = v12;
    v12 = 0;
LABEL_40:
    if ( v12 )
    {
      memmove(AtomName, (const void *)(v17 + 18), v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
      goto LABEL_23;
    }
LABEL_42:
    v11 = -1073741789;
    goto LABEL_43;
  }
  if ( (_WORD)v8 )
  {
    v11 = 0;
    if ( AtomUsage )
      *AtomUsage = 1;
    if ( AtomFlags )
      *AtomFlags = 1;
    if ( !AtomName )
      goto LABEL_43;
    v12 = 2 * snwprintf_s(Buffer, 0x10uLL, 0xFFFFFFFFFFFFFFFFuLL, L"#%u", v8);
    if ( (unsigned int)Feature_1811147066__private_IsEnabledDeviceUsageNoInline() )
    {
      if ( v12 < v9 )
        goto LABEL_21;
      if ( v9 >= 2 )
      {
        v12 = v9 - 2;
        goto LABEL_21;
      }
    }
    else
    {
      v13 = *AtomNameLength;
      if ( v12 < *AtomNameLength )
        goto LABEL_21;
      if ( v13 >= 2 )
      {
        v12 = v13 - 2;
        goto LABEL_21;
      }
    }
    v12 = 0;
LABEL_21:
    if ( v12 )
    {
      memmove(AtomName, Buffer, v12);
      AtomName[(unsigned __int64)v12 >> 1] = 0;
LABEL_23:
      *AtomNameLength = v12;
      goto LABEL_43;
    }
    goto LABEL_42;
  }
  v11 = -1073741811;
LABEL_43:
  v15 = (_RTL_SRWLOCK *)AtomTableHandle;
LABEL_44:
  RtlReleaseSRWLockExclusive(v15 + 1);
  return v11;
}
