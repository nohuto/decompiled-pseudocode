/*
 * XREFs of ?GetPropertyAsUInt@UwpWindowWrapperBase@@UEAAJPEAUHSTRING__@@PEAI@Z @ 0x1801F7940
 * Callers:
 *     <none>
 * Callees:
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18006B898 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18070A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall UwpWindowWrapperBase::GetPropertyAsUInt(UwpWindowWrapperBase *this, HSTRING a2, unsigned int *a3)
{
  const WCHAR *StringRawBuffer; // rax
  BOOL bIgnoreCase; // [rsp+20h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PSRWLOCK SRWLock; // [rsp+40h] [rbp+8h] BYREF

  *a3 = 0;
  (*(void (__fastcall **)(_QWORD, PSRWLOCK *))(**((_QWORD **)this + 34) + 216LL))(*((_QWORD *)this + 34), &SRWLock);
  StringRawBuffer = WindowsGetStringRawBuffer(a2, 0LL);
  if ( CompareStringOrdinal(StringRawBuffer, -1, L"FrameworkViewType", -1, 1) != 2 )
    wil::details::in1diag3::Throw_Hr(
      retaddr,
      (void *)0x310,
      (int)"pcshell\\twinui\\viewmanagerinterop\\lib\\uwpwindowwrapperbase.cpp",
      (const char *)0x80004001LL,
      bIgnoreCase);
  *a3 = *((_DWORD *)this + 111);
  if ( SRWLock )
    ReleaseSRWLockShared(SRWLock);
  return 0LL;
}
