/*
 * XREFs of VfSuspectDriversUnloadCallback @ 0x140C3EE74
 * Callers:
 *     VfDriverUnloadImage @ 0x140C4CD98 (VfDriverUnloadImage.c)
 * Callees:
 *     KeReleaseMutex @ 0x1403E02E0 (KeReleaseMutex.c)
 *     RtlEqualUnicodeString @ 0x140979B40 (RtlEqualUnicodeString.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 *     ViSuspectDriversLookupEntry @ 0x140C2644C (ViSuspectDriversLookupEntry.c)
 *     VfUtilPrintCheckinString @ 0x140C27A20 (VfUtilPrintCheckinString.c)
 *     VfDriverLock @ 0x140C4C814 (VfDriverLock.c)
 */

LONG __fastcall VfSuspectDriversUnloadCallback(__int64 a1)
{
  UNICODE_STRING *v2; // rdi
  _QWORD *v3; // rax
  _QWORD *v4; // rbx
  __int64 v5; // rcx
  _QWORD *v6; // rax
  void *v7; // rcx
  void *v8; // rcx

  VfDriverLock(a1);
  v2 = (UNICODE_STRING *)(a1 + 88);
  if ( RtlEqualUnicodeString(&VfTcpIpName, v2, 1u) == 1 )
  {
    VfTcpIpDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTdxName, v2, 1u) == 1 )
  {
    VfTdxDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfMrxsmbName, v2, 1u) == 1 )
  {
    VfMrxsmbDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfTmName, v2, 1u) == 1 )
  {
    VfTmDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfWin32kName, v2, 1u) == 1 )
  {
    VfWin32kDllBase = 0LL;
  }
  else if ( RtlEqualUnicodeString(&VfKsName, v2, 1u) == 1 )
  {
    VfKsDllBase = 0LL;
  }
  v3 = (_QWORD *)ViSuspectDriversLookupEntry(v2);
  v4 = v3;
  if ( v3 )
  {
    ++dword_140F08A58;
    if ( VfDifRunningWithoutReboot )
    {
      v5 = *v3;
      if ( *(_QWORD **)(*v3 + 8LL) != v3 || (v6 = (_QWORD *)v3[1], (_QWORD *)*v6 != v4) )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      v7 = (void *)v4[4];
      if ( v7 )
        ExFreePoolWithTag(v7, 0x44536656u);
      ExFreePoolWithTag(v4, 0x44536656u);
    }
    else
    {
      v8 = (void *)v3[4];
      if ( v8 )
      {
        ExFreePoolWithTag(v8, 0);
        v4[4] = 0LL;
        *((_DWORD *)v4 + 6) = 0;
      }
      ++*((_DWORD *)v4 + 5);
      VfUtilPrintCheckinString(&v2->Length, 1);
    }
  }
  ViDriversLoadLockOwner = 0LL;
  return KeReleaseMutex(&ViDriversLoadLock, 0);
}
