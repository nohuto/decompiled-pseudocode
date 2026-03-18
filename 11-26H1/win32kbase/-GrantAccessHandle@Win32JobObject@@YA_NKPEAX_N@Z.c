/*
 * XREFs of ?GrantAccessHandle@Win32JobObject@@YA_NKPEAX_N@Z @ 0x1401CF2F0
 * Callers:
 *     <none>
 * Callees:
 *     UserReAllocPool @ 0x140043400 (UserReAllocPool.c)
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x140047370 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     UserSetLastError @ 0x140087A14 (UserSetLastError.c)
 *     Win32JobObject::_anonymous_namespace_::FindW32Job @ 0x1401CF0D4 (Win32JobObject--_anonymous_namespace_--FindW32Job.c)
 *     Win32JobObject::_anonymous_namespace_::GetW32Job @ 0x1401CF1BC (Win32JobObject--_anonymous_namespace_--GetW32Job.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

char __fastcall Win32JobObject::GrantAccessHandle(Win32JobObject *this, __int64 a2, void *a3)
{
  int v3; // edi
  char v4; // bp
  __int64 *W32Job; // rax
  int v7; // edx
  int v8; // ecx
  int v9; // r8d
  __int64 *v10; // rsi
  __int64 UserSessionState; // rbx
  int v13; // edx
  int v14; // ecx
  int v15; // r8d
  __int64 v16; // rax
  __int64 v17; // rbx
  char *v18; // rcx
  unsigned int v19; // edx
  __int64 v20; // r15
  __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rax
  __int64 v24; // rdx
  char *v25; // r9

  v3 = 0;
  v4 = (char)a3;
  if ( (_BYTE)a3 )
    W32Job = Win32JobObject::_anonymous_namespace_::GetW32Job((int)this, a2, (unsigned __int8)a3);
  else
    W32Job = Win32JobObject::_anonymous_namespace_::FindW32Job((int)this, a2, 0);
  v10 = W32Job;
  if ( W32Job )
  {
    UserSessionState = W32GetUserSessionState(v8, v7, v9);
    v16 = W32GetUserSessionState(v14, v13, v15);
    v17 = *(_QWORD *)(UserSessionState + 19920);
    v18 = (char *)v10[8];
    v19 = *((_DWORD *)v10 + 14);
    v20 = *(_DWORD *)(v16 + 19928) * (unsigned int)(unsigned __int16)a2;
    if ( v4 )
    {
      v21 = *((unsigned int *)v10 + 15);
      if ( v19 == (_DWORD)v21 )
      {
        if ( v19 )
        {
          v23 = 8 * v21;
          if ( v23 > 0xFFFFFFFF || (int)v23 + 64 < (unsigned int)v23 )
            goto LABEL_6;
          v22 = UserReAllocPool(v18, (unsigned int)v23, (unsigned int)(v23 + 64), 1751610197LL);
        }
        else
        {
          v22 = Win32AllocPoolZInitImpl(256LL, 0x40uLL, 0x68677355u);
        }
        v18 = (char *)v22;
        if ( !v22 )
        {
LABEL_6:
          UserSetLastError(8);
          return 0;
        }
        *((_DWORD *)v10 + 15) += 8;
        v10[8] = v22;
      }
      v24 = *((unsigned int *)v10 + 14);
      if ( (_DWORD)v24 )
      {
        while ( *(_QWORD *)&v18[8 * v3] != a2 )
        {
          if ( ++v3 >= (unsigned int)v24 )
            goto LABEL_19;
        }
      }
      else
      {
LABEL_19:
        *(_QWORD *)&v18[8 * v24] = a2;
        ++*((_DWORD *)v10 + 14);
        *(_BYTE *)(v20 + v17 + 25) |= 0x20u;
      }
    }
    else if ( v19 )
    {
      while ( 1 )
      {
        v25 = &v18[8 * v3];
        if ( *(_QWORD *)v25 == a2 )
          break;
        if ( ++v3 >= v19 )
          return 1;
      }
      memmove(v25, v25 + 8, 8LL * (v19 + ~v3));
      --*((_DWORD *)v10 + 14);
    }
  }
  else if ( v4 )
  {
    goto LABEL_6;
  }
  return 1;
}
