/*
 * XREFs of ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x1401D8500
 * Callers:
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x140277BB4 (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1401D875C (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall CheckImeHotKey(struct tagQ *a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  int v6; // ebp
  __int64 v7; // rcx
  int v8; // edi
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  struct _tagIMEHOTKEYOBJ *result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  struct _tagIMEHOTKEYOBJ *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v18; // eax
  int v19; // r9d
  __int64 v20; // rcx

  v4 = a2;
  if ( a3 < 0 )
  {
    v6 = 1;
    if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14304) != (_DWORD)a2 )
    {
      *(_DWORD *)(W32GetUserSessionState(v16, v15) + 14304) = 0;
      return 0LL;
    }
    *(_DWORD *)(W32GetUserSessionState(v16, v15) + 14304) = 0;
  }
  else
  {
    v6 = 0;
  }
  v7 = (*((_BYTE *)a1 + 320) & 4) != 0 ? 0x4004 : 0;
  LOBYTE(a2) = -(*((_BYTE *)a1 + 320) & 1);
  v8 = ((*((_BYTE *)a1 + 320) & 1) != 0 ? 0x8004 : 0) | v7 | ((*((_BYTE *)a1 + 320) & 0x10) != 0 ? 0x8002 : 0) | ((*((_BYTE *)a1 + 320) & 0x40) != 0 ? 0x4002 : 0) | ((*((_BYTE *)a1 + 321) & 1) != 0 ? 0x8001 : 0) | ((*((_BYTE *)a1 + 321) & 4) != 0 ? 0x4001 : 0);
  if ( v4 - 16 <= 2 )
  {
    v17 = ((*((_BYTE *)a1 + 320) & 1) != 0 ? 4 : 0) | ((*((_BYTE *)a1 + 320) & 4) != 0 ? 4 : 0) | ((*((_BYTE *)a1 + 320) & 0x10) != 0
                                                                                                 ? 2
                                                                                                 : 0) | ((*((_BYTE *)a1 + 320) & 0x40) != 0 ? 2 : 0) | ((*((_BYTE *)a1 + 321) & 1) != 0 || (*((_BYTE *)a1 + 321) & 4) != 0);
    v18 = (v8 & 5) + ((v17 >> 1) & 5);
    v9 = v18 & 3;
    if ( (_DWORD)v9 + (v18 >> 2) == 1 && (a3 & 0x40000000) == 0 )
      *(_DWORD *)(W32GetUserSessionState(v9, a2) + 14308) = v17;
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(v7, a2) + 14308) = 0;
  }
  UserSessionState = W32GetUserSessionState(v9, a2);
  result = FindImeHotKeyByKey(
             *(struct _tagIMEHOTKEYOBJ **)(UserSessionState + 12936),
             v8 & 0xF,
             (unsigned __int16)v8 & 0xC000,
             v4);
  v14 = result;
  if ( !result )
    return 0LL;
  v19 = *((_DWORD *)result + 4);
  if ( v6 )
  {
    v20 = 0LL;
    LOBYTE(v12) = (v19 & 0x20802) != 133122 && (v19 & 0x10804) != 67588;
    if ( (v19 & 0x40801) != 0x40801 )
      v20 = (unsigned __int8)v12;
    if ( (_BYTE)v20 )
    {
      if ( (v19 & 0x800) != 0 )
        goto LABEL_21;
    }
    else
    {
      v20 = *(unsigned int *)(W32GetUserSessionState(v20, v12) + 14308);
      if ( (_DWORD)v20 == (*((_DWORD *)v14 + 4) & 7) )
      {
LABEL_21:
        *(_DWORD *)(W32GetUserSessionState(v20, v12) + 14308) = 0;
        return v14;
      }
    }
    return 0LL;
  }
  if ( (v19 & 0x800) != 0 )
  {
    *(_DWORD *)(W32GetUserSessionState(v13, v12) + 14304) = v4;
    return 0LL;
  }
  return result;
}
