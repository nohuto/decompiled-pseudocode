/*
 * XREFs of ?QuerySizeConstraints@CPrivilegedSizeConstraintsOperations@@EEAAJPEAUHWND__@@@Z @ 0x1800C1630
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x1800717E8 (-InternalRelease@-$ComPtr@VNotificationDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?GetLastErrorFailHr@details@wil@@YAJXZ @ 0x1800C1DF4 (-GetLastErrorFailHr@details@wil@@YAJXZ.c)
 *     ??1SyncIamAccess@IamAccess@@QEAA@XZ @ 0x1800C25D8 (--1SyncIamAccess@IamAccess@@QEAA@XZ.c)
 */

__int64 __fastcall CPrivilegedSizeConstraintsOperations::QuerySizeConstraints(
        CPrivilegedSizeConstraintsOperations *this,
        HWND a2)
{
  __int64 v2; // rbx
  signed __int32 v4; // eax
  wil::details *v5; // rcx
  unsigned int LastErrorFailHr; // edi
  volatile signed __int32 *v8; // [rsp+30h] [rbp+8h] BYREF

  v2 = *((_QWORD *)this + 6);
  v8 = (volatile signed __int32 *)v2;
  if ( v2 )
  {
    do
      v4 = *(_DWORD *)(v2 + 36);
    while ( v4 != 0x7FFFFFFF && v4 != _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 36), v4 + 1, v4) );
  }
  AcquireSRWLockExclusive((PSRWLOCK)(v2 + 48));
  EnableIAMAccess(*(_QWORD *)(v2 + 40), 1LL);
  if ( (unsigned int)GetWindowTrackInfoAsync(a2) )
  {
    IamAccess::SyncIamAccess::~SyncIamAccess((IamAccess::SyncIamAccess *)&v8);
    return 0LL;
  }
  else
  {
    LastErrorFailHr = wil::details::GetLastErrorFailHr(v5);
    EnableIAMAccess(*(_QWORD *)(v2 + 40), 0LL);
    ReleaseSRWLockExclusive((PSRWLOCK)(v2 + 48));
    Microsoft::WRL::ComPtr<NotificationDispatcher>::InternalRelease(&v8);
    return LastErrorFailHr;
  }
}
