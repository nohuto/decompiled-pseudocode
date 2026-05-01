/*
 * XREFs of ?SetWindowBand@CPrivilegedPresentationOperations@@EEAAJPEAUHWND__@@0K@Z @ 0x1800B62D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180054134 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800B71B0 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800B7AB0 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedPresentationOperations::SetWindowBand(
        CPrivilegedPresentationOperations *this,
        HWND a2,
        HWND a3,
        unsigned int a4)
{
  volatile signed __int32 *v4; // rbx
  signed __int32 v8; // eax
  wil::details *v9; // rcx
  unsigned int LastErrorFailHr; // ebx
  volatile signed __int32 *v12; // [rsp+40h] [rbp+8h] BYREF

  v4 = (volatile signed __int32 *)*((_QWORD *)this + 6);
  v12 = v4;
  if ( v4 )
  {
    do
      v8 = *((_DWORD *)v4 + 9);
    while ( v8 != 0x7FFFFFFF && v8 != _InterlockedCompareExchange(v4 + 9, v8 + 1, v8) );
    v4 = v12;
  }
  AcquireSRWLockExclusive((PSRWLOCK)v4 + 6);
  EnableIAMAccess(*((_QWORD *)v4 + 5), 1LL);
  if ( (unsigned int)SetWindowBand(a2, a3, a4) )
  {
    EnableIAMAccess(*((_QWORD *)v4 + 5), 0LL);
    ReleaseSRWLockExclusive((PSRWLOCK)v4 + 6);
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v12);
    return 0LL;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v9);
    IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v12);
    return LastErrorFailHr;
  }
}
