/*
 * XREFs of ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x1401A21E4
 * Callers:
 *     NtUserSetImeHotKey @ 0x1401A2170 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1401A2410 (-GetHotKeyLangID@@YAGK@Z.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1401A2438 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1401A24BC (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 */

__int64 __fastcall SetImeHotKey(__int64 a1, __int64 a2, unsigned int a3, HKL a4, unsigned int a5)
{
  int v7; // ebp
  unsigned int v8; // edi
  unsigned __int16 HotKeyLangID; // bx
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  _QWORD *v20; // rbx
  __int64 v21; // rax
  _QWORD **v22; // rdx
  _QWORD *i; // rcx
  int v25; // ecx
  __int64 v26; // rdx
  _QWORD *v27; // rcx
  _QWORD *v28; // rbx
  __int64 UserSessionState; // rax
  __int64 v30; // rdx
  __int64 v31; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rbx
  __int64 v33; // rax
  struct _tagIMEHOTKEYOBJ *v34; // rcx

  v7 = a2;
  v8 = a1;
  switch ( a5 )
  {
    case 1u:
      UserSessionState = W32GetUserSessionState(a1, a2);
      ImeHotKeyByID = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(UserSessionState + 12944), v8);
      if ( !ImeHotKeyByID )
      {
        v25 = 87;
        goto LABEL_14;
      }
      v33 = W32GetUserSessionState(v31, v30);
      v34 = *(struct _tagIMEHOTKEYOBJ **)(v33 + 12944);
      if ( ImeHotKeyByID == v34 )
      {
        *(_QWORD *)(v33 + 12944) = *(_QWORD *)ImeHotKeyByID;
LABEL_30:
        Win32FreePool(ImeHotKeyByID);
        return 1LL;
      }
      while ( v34 )
      {
        if ( *(struct _tagIMEHOTKEYOBJ **)v34 == ImeHotKeyByID )
        {
          *(_QWORD *)v34 = *(_QWORD *)ImeHotKeyByID;
          goto LABEL_30;
        }
        v34 = *(struct _tagIMEHOTKEYOBJ **)v34;
      }
      break;
    case 2u:
      if ( (_WORD)a3 != 231 )
      {
        HotKeyLangID = GetHotKeyLangID(a1);
        v12 = W32GetUserSessionState(v11, v10);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(
                                   *(struct _tagIMEHOTKEYOBJ **)(v12 + 12944),
                                   v7 & 0xF,
                                   (unsigned __int16)v7 & 0xC000,
                                   a3,
                                   HotKeyLangID);
        if ( !ImeHotKeyByKeyWithLang )
        {
          v16 = W32GetUserSessionState(v15, v14);
          ImeHotKeyByKeyWithLang = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v16 + 12944), v8);
          if ( !ImeHotKeyByKeyWithLang )
          {
            v17 = Win32AllocPoolZInit(32LL, 1751741269LL);
            v20 = (_QWORD *)v17;
            if ( v17 )
            {
              *(_QWORD *)v17 = 0LL;
              *(_DWORD *)(v17 + 8) = v8;
              *(_DWORD *)(v17 + 16) = v7;
              *(_DWORD *)(v17 + 12) = a3;
              *(_QWORD *)(v17 + 24) = a4;
              v21 = W32GetUserSessionState(v19, v18);
              v22 = *(_QWORD ***)(v21 + 12944);
              if ( v22 )
              {
                for ( i = *v22; i; i = (_QWORD *)*i )
                  v22 = (_QWORD **)i;
                *v22 = v20;
              }
              else
              {
                *(_QWORD *)(v21 + 12944) = v20;
              }
              return 1LL;
            }
            v25 = 14;
            goto LABEL_14;
          }
LABEL_17:
          *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = v7;
          *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = a3;
          *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
          return 1LL;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == v8 )
          goto LABEL_17;
        v25 = 1409;
LABEL_14:
        UserSetLastError(v25);
      }
      break;
    case 3u:
      v27 = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 12944);
      if ( v27 )
      {
        do
        {
          v28 = (_QWORD *)*v27;
          Win32FreePool(v27);
          v27 = v28;
        }
        while ( v28 );
      }
      *(_QWORD *)(W32GetUserSessionState(v27, v26) + 12944) = 0LL;
      return 1LL;
  }
  return 0LL;
}
