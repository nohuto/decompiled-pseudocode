/*
 * XREFs of ?CheckImeHotKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAUtagQ@@I_J@Z @ 0x1401A1A60
 * Callers:
 *     ?xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z @ 0x1401A182C (-xxxImmProcessKey@@YAKPEAUtagQ@@PEAUtagWND@@I_K_J@Z.c)
 * Callees:
 *     ?FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z @ 0x1401A1CAC (-FindImeHotKeyByKey@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@III@Z.c)
 */

struct _tagIMEHOTKEYOBJ *__fastcall CheckImeHotKey(struct tagQ *a1, __int64 a2, int a3)
{
  unsigned int v4; // esi
  int v6; // ebp
  char v7; // dl
  int v8; // ebx
  __int64 v9; // rcx
  int v10; // ebx
  __int64 v11; // rcx
  __int64 UserSessionState; // rax
  struct _tagIMEHOTKEYOBJ *result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct _tagIMEHOTKEYOBJ *v16; // rbx
  __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // edi
  unsigned int v20; // eax
  int v21; // r9d
  __int64 v22; // rcx

  v4 = a2;
  if ( a3 < 0 )
  {
    if ( *(_DWORD *)(W32GetUserSessionState(a1, a2) + 14312) != (_DWORD)a2 )
    {
      *(_DWORD *)(W32GetUserSessionState(v18, v17) + 14312) = 0;
      return 0LL;
    }
    v6 = 1;
    *(_DWORD *)(W32GetUserSessionState(v18, v17) + 14312) = 0;
  }
  else
  {
    v6 = 0;
  }
  v7 = *((_BYTE *)a1 + 296);
  v8 = ((v7 & 0x10) != 0 ? 0x8002 : 0) | ((v7 & 0x40) != 0 ? 0x4002 : 0) | ((*((_BYTE *)a1 + 297) & 1) != 0 ? 0x8001 : 0) | ((*((_BYTE *)a1 + 297) & 4) != 0 ? 0x4001 : 0);
  v9 = (v7 & 4) != 0 ? 0x4004 : 0;
  LOBYTE(a2) = -(v7 & 1);
  v10 = ((_BYTE)a2 != 0 ? 0x8004 : 0) | v9 | v8;
  if ( v4 - 16 <= 2 )
  {
    v19 = v10 & 7;
    v20 = (v10 & 5) + ((v19 >> 1) & 5);
    v11 = v20 & 3;
    if ( (_DWORD)v11 + (v20 >> 2) == 1 && (a3 & 0x40000000) == 0 )
      *(_DWORD *)(W32GetUserSessionState(v11, a2) + 14316) = v19;
  }
  else
  {
    *(_DWORD *)(W32GetUserSessionState(v9, a2) + 14316) = 0;
  }
  UserSessionState = W32GetUserSessionState(v11, a2);
  result = FindImeHotKeyByKey(
             *(struct _tagIMEHOTKEYOBJ **)(UserSessionState + 12944),
             v10 & 0xF,
             (unsigned __int16)v10 & 0xC000,
             v4);
  v16 = result;
  if ( !result )
    return 0LL;
  v21 = *((_DWORD *)result + 4);
  if ( v6 )
  {
    v22 = 0LL;
    LOBYTE(v14) = (v21 & 0x20802) != 133122 && (v21 & 0x10804) != 67588;
    if ( (v21 & 0x40801) != 0x40801 )
      v22 = (unsigned __int8)v14;
    if ( (_BYTE)v22 )
    {
      if ( (v21 & 0x800) != 0 )
        goto LABEL_21;
    }
    else
    {
      v22 = *(unsigned int *)(W32GetUserSessionState(v22, v14) + 14316);
      if ( (_DWORD)v22 == (*((_DWORD *)v16 + 4) & 7) )
      {
LABEL_21:
        *(_DWORD *)(W32GetUserSessionState(v22, v14) + 14316) = 0;
        return v16;
      }
    }
    return 0LL;
  }
  if ( (v21 & 0x800) != 0 )
  {
    *(_DWORD *)(W32GetUserSessionState(v15, v14) + 14312) = v4;
    return 0LL;
  }
  return result;
}
