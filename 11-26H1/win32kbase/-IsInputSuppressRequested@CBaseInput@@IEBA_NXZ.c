/*
 * XREFs of ?IsInputSuppressRequested@CBaseInput@@IEBA_NXZ @ 0x1400E95B0
 * Callers:
 *     ?OnReadNotification@CBaseInput@@AEAAJXZ @ 0x1401220B0 (-OnReadNotification@CBaseInput@@AEAAJXZ.c)
 * Callees:
 *     ?LockExclusive@tagDomLock@@QEBAXXZ @ 0x1400EAFD0 (-LockExclusive@tagDomLock@@QEBAXXZ.c)
 */

bool __fastcall CBaseInput::IsInputSuppressRequested(CBaseInput *this, int a2, int a3)
{
  int v3; // edx
  int v4; // ecx
  int v5; // r8d
  char *v6; // rbx
  int v7; // edx
  int v8; // r8d
  int v9; // edi
  tagDomLock *v10; // rcx
  bool v11; // bl
  PERESOURCE *v13; // [rsp+20h] [rbp-38h]
  char v14; // [rsp+28h] [rbp-30h] BYREF
  __int64 v15; // [rsp+30h] [rbp-28h]
  char v16; // [rsp+38h] [rbp-20h]
  __int64 v17; // [rsp+40h] [rbp-18h]
  char v18; // [rsp+48h] [rbp-10h]

  v14 = 0;
  v13 = (PERESOURCE *)(W32GetUserSessionState((_DWORD)this, a2, a3) + 42376);
  v16 = 0;
  v6 = &v14;
  v15 = W32GetUserSessionState(v4, v3, v5) + 42384;
  v17 = 0LL;
  v9 = 0;
  v18 = 0;
  do
  {
    v10 = (tagDomLock *)*((_QWORD *)v6 - 1);
    if ( v10 )
    {
      if ( *v6 )
        tagDomLock::LockExclusive(v10);
      else
        ExEnterCriticalRegionAndAcquireResourceShared(*(PERESOURCE *)v10);
    }
    ++v9;
    v6 += 16;
  }
  while ( !v9 );
  v18 = 1;
  v11 = *(_DWORD *)(W32GetUserSessionState((_DWORD)v10, v7, v8) + 2804) == 1;
  if ( v18 && v13 )
    ExReleaseResourceAndLeaveCriticalRegion(*v13);
  return v11;
}
