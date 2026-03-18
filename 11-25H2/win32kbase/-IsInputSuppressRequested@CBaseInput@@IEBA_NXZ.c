/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x140040B68
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x14018A660 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z @ 0x140040C50 (-GetDomainLockRef@@YAAEAUtagDomLock@@W4DomainLockType@@@Z.c)
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400BAED0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this)
{
  __int64 v1; // rdx
  __int64 v2; // rcx
  char *v3; // rbx
  __int64 v4; // rdx
  int v5; // edi
  tagDomLock *v6; // rcx
  bool v7; // bl
  PERESOURCE *DomainLockRef; // [rsp+20h] [rbp-48h]
  char v10; // [rsp+28h] [rbp-40h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  char v12; // [rsp+38h] [rbp-30h]
  __int64 v13; // [rsp+40h] [rbp-28h]
  char v14; // [rsp+48h] [rbp-20h]

  DomainLockRef = (PERESOURCE *)GetDomainLockRef(13LL);
  v10 = 0;
  v12 = 0;
  v3 = &v10;
  v11 = W32GetUserSessionState(v2, v1) + 42360;
  v13 = 0LL;
  v5 = 0;
  v14 = 0;
  do
  {
    v6 = (tagDomLock *)*((_QWORD *)v3 - 1);
    if ( v6 )
    {
      if ( *v3 )
        tagDomLock::LockExclusive(v6);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v6);
    }
    ++v5;
    v3 += 16;
  }
  while ( !v5 );
  v14 = 1;
  v7 = *(_DWORD *)(W32GetUserSessionState(v6, v4) + 2808) == 1;
  if ( v14 && DomainLockRef )
    ExReleaseResourceAndLeaveCriticalRegion(*DomainLockRef);
  return v7;
}
