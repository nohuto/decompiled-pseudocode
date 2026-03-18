/*
 * XREFs of ?GrantAccessHandle@Win32JobObject@@YA_NPEAU_EJOB@@PEAX_N@Z @ 0x1401AD160
 * Callers:
 *     <none>
 * Callees:
 *     UserReAllocPool @ 0x14001E320 (UserReAllocPool.c)
 *     UserSetLastError @ 0x14003F714 (UserSetLastError.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x14004909C (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     Win32JobObject::_anonymous_namespace_::Create @ 0x1401ACDAC (Win32JobObject--_anonymous_namespace_--Create.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401AD018 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 *     memmove @ 0x140243540 (memmove.c)
 */

char __fastcall Win32JobObject::GrantAccessHandle(Win32JobObject *this, struct _EJOB *a2, void *a3)
{
  char v3; // r15
  unsigned int v6; // edi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 W32Job; // rsi
  __int64 UserSessionState; // rbx
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rbx
  __int64 v15; // r10
  unsigned int v16; // ecx
  __int64 v17; // r14
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned __int64 v20; // rax
  __int64 v21; // rcx
  struct _EJOB **v23; // r9

  v3 = (char)a3;
  v6 = 0;
  W32Job = (__int64)Win32JobObject::_anonymous_namespace_::FindW32Job((__int64)this, (__int64)a2);
  if ( !W32Job )
  {
    W32Job = Win32JobObject::_anonymous_namespace_::Create((__int64)this);
    if ( !W32Job )
      goto LABEL_16;
  }
  UserSessionState = W32GetUserSessionState(v8, v7);
  v13 = W32GetUserSessionState(v12, v11);
  v14 = *(_QWORD *)(UserSessionState + 19888);
  v15 = *(_QWORD *)(W32Job + 56);
  v16 = *(_DWORD *)(W32Job + 48);
  v17 = *(_DWORD *)(v13 + 19896) * (unsigned int)(unsigned __int16)a2;
  if ( !v3 )
  {
    if ( v16 )
    {
      while ( 1 )
      {
        v23 = (struct _EJOB **)(v15 + 8LL * v6);
        if ( *v23 == a2 )
          break;
        if ( ++v6 >= v16 )
          return 1;
      }
      memmove((void *)(v15 + 8LL * v6), v23 + 1, 8LL * (v16 - v6 - 1));
      --*(_DWORD *)(W32Job + 48);
    }
    return 1;
  }
  v18 = *(unsigned int *)(W32Job + 52);
  if ( v16 == (_DWORD)v18 )
  {
    if ( v16 )
    {
      v20 = 8 * v18;
      if ( v20 > 0xFFFFFFFF || (int)v20 + 64 < (unsigned int)v20 )
        goto LABEL_16;
      v19 = UserReAllocPool(*(char **)(W32Job + 56), (unsigned int)v20, (unsigned int)(v20 + 64), 0x68677355u);
    }
    else
    {
      v19 = Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x68677355u);
    }
    v15 = v19;
    if ( v19 )
    {
      *(_DWORD *)(W32Job + 52) += 8;
      *(_QWORD *)(W32Job + 56) = v19;
      goto LABEL_12;
    }
LABEL_16:
    UserSetLastError(8);
    return 0;
  }
LABEL_12:
  v21 = *(unsigned int *)(W32Job + 48);
  if ( (_DWORD)v21 )
  {
    while ( *(struct _EJOB **)(v15 + 8LL * v6) != a2 )
    {
      if ( ++v6 >= (unsigned int)v21 )
        goto LABEL_15;
    }
  }
  else
  {
LABEL_15:
    *(_QWORD *)(v15 + 8 * v21) = a2;
    ++*(_DWORD *)(W32Job + 48);
    *(_BYTE *)(v17 + v14 + 25) |= 0x20u;
  }
  return 1;
}
