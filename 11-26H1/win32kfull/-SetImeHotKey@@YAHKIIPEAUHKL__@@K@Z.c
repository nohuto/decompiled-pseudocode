/*
 * XREFs of ?SetImeHotKey@@YAHKIIPEAUHKL__@@K@Z @ 0x140209E34
 * Callers:
 *     NtUserSetImeHotKey @ 0x140209DC0 (NtUserSetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ?FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z @ 0x1401D8960 (-FindImeHotKeyByKeyWithLang@@YAPEAU_tagIMEHOTKEYOBJ@@PEAU1@IIIG@Z.c)
 *     ?GetHotKeyLangID@@YAGK@Z @ 0x1401D89E4 (-GetHotKeyLangID@@YAGK@Z.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1402093A4 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x1402A1AA8 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindImeHotKeyByHkl@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@PEAUHKL__@@@Z @ 0x1402CE19C (-FindImeHotKeyByHkl@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@PEAUHKL__@@@Z.c)
 */

__int64 __fastcall SetImeHotKey(__int64 a1, __int64 a2, int a3, HKL a4, unsigned int a5)
{
  HKL v6; // rbp
  int v8; // r12d
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx
  unsigned __int16 HotKeyLangID; // bx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByKeyWithLang; // rbx
  bool v19; // zf
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rax
  struct _tagIMEHOTKEYOBJ *v24; // rax
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rcx
  int v29; // ecx
  struct tagTHREADINFO *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  _QWORD *v34; // rbx
  __int64 v35; // rax
  _QWORD **v36; // rdx
  _QWORD *i; // rcx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 UserSessionState; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByHkl; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rax
  struct _tagIMEHOTKEYOBJ *v45; // rbx
  __int64 v46; // rax
  struct _tagIMEHOTKEYOBJ *v47; // rcx
  struct _tagIMEHOTKEYOBJ *v48; // rax

  v6 = (HKL)(int)a1;
  v8 = a2;
  switch ( a5 )
  {
    case 1u:
      if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline()
        && (unsigned int)((_DWORD)v6 - 67175425) <= 0xFBFDFBFF )
      {
        UserSessionState = W32GetUserSessionState(v39, v38);
        ImeHotKeyByHkl = FindImeHotKeyByHkl(*(const struct _tagIMEHOTKEYOBJ **)(UserSessionState + 12936), v6);
      }
      else
      {
        v44 = W32GetUserSessionState(v39, v38);
        ImeHotKeyByHkl = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v44 + 12936), (int)v6);
      }
      v45 = ImeHotKeyByHkl;
      if ( ImeHotKeyByHkl )
      {
        v46 = W32GetUserSessionState(v43, v42);
        v47 = *(struct _tagIMEHOTKEYOBJ **)(v46 + 12936);
        if ( v45 == v47 )
        {
          *(_QWORD *)(v46 + 12936) = *(_QWORD *)v45;
        }
        else
        {
          if ( !v47 )
            return 0LL;
          while ( 1 )
          {
            v48 = *(struct _tagIMEHOTKEYOBJ **)v47;
            if ( *(struct _tagIMEHOTKEYOBJ **)v47 == v45 )
              break;
            v47 = *(struct _tagIMEHOTKEYOBJ **)v47;
            if ( !v48 )
              return 0LL;
          }
          *(_QWORD *)v47 = *(_QWORD *)v45;
        }
        Win32FreePool(v45);
        return 1LL;
      }
      goto LABEL_54;
    case 2u:
      if ( (_WORD)a3 == 231 )
        return 0LL;
      HotKeyLangID = GetHotKeyLangID(a1);
      v15 = W32GetUserSessionState(v14, v13);
      ImeHotKeyByKeyWithLang = FindImeHotKeyByKeyWithLang(
                                 *(struct _tagIMEHOTKEYOBJ **)(v15 + 12936),
                                 v8 & 0xF,
                                 (unsigned __int16)v8 & 0xC000,
                                 a3,
                                 HotKeyLangID);
      if ( ImeHotKeyByKeyWithLang )
      {
        if ( !(unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() )
        {
          v19 = *((_DWORD *)ImeHotKeyByKeyWithLang + 2) == (_DWORD)v6;
          goto LABEL_11;
        }
        if ( (unsigned int)((_DWORD)v6 - 67175425) <= 0xFBFDFBFF )
        {
          v19 = *((_QWORD *)ImeHotKeyByKeyWithLang + 3) == (_QWORD)a4;
LABEL_11:
          if ( !v19 )
          {
LABEL_31:
            v29 = 1409;
LABEL_55:
            UserSetLastError(v29);
            return 0LL;
          }
          goto LABEL_18;
        }
        if ( *((_DWORD *)ImeHotKeyByKeyWithLang + 2) != (_DWORD)v6 )
          goto LABEL_31;
      }
      else
      {
        v20 = W32GetUserSessionState(v17, v16);
        ImeHotKeyByKeyWithLang = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v20 + 12936), (int)v6);
      }
LABEL_18:
      if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() )
      {
        if ( a4 )
        {
          v23 = W32GetUserSessionState(v22, v21);
          v24 = FindImeHotKeyByHkl(*(const struct _tagIMEHOTKEYOBJ **)(v23 + 12936), a4);
          if ( v24 )
          {
            if ( v24 != ImeHotKeyByKeyWithLang )
            {
              if ( (unsigned int)((_DWORD)v6 - 256) > 0x1F )
              {
                ImeHotKeyByKeyWithLang = v24;
LABEL_24:
                *((_DWORD *)ImeHotKeyByKeyWithLang + 4) = v8;
                *((_DWORD *)ImeHotKeyByKeyWithLang + 3) = a3;
                *((_QWORD *)ImeHotKeyByKeyWithLang + 3) = a4;
                if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline()
                  && (unsigned int)((_DWORD)v6 - 67175425) <= 0xFBFDFBFF )
                {
                  *((_DWORD *)ImeHotKeyByKeyWithLang + 2) = (_DWORD)v6;
                }
                return 1LL;
              }
              goto LABEL_31;
            }
          }
        }
      }
      if ( ImeHotKeyByKeyWithLang )
        goto LABEL_24;
      if ( !(unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline() || !a4 )
        goto LABEL_33;
      v27 = W32GetUserSessionState(v26, v25);
      if ( FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v27 + 12936), (int)a4) )
        goto LABEL_31;
      v30 = PtiCurrent(v28);
      if ( HKLtoPKL(v30, a4) )
      {
LABEL_33:
        v31 = Win32AllocPoolZInit(32LL, 1751741269LL);
        v34 = (_QWORD *)v31;
        if ( v31 )
        {
          *(_DWORD *)(v31 + 8) = (_DWORD)v6;
          *(_DWORD *)(v31 + 16) = v8;
          *(_DWORD *)(v31 + 12) = a3;
          *(_QWORD *)(v31 + 24) = a4;
          *(_QWORD *)v31 = 0LL;
          v35 = W32GetUserSessionState(v33, v32);
          v36 = *(_QWORD ***)(v35 + 12936);
          if ( v36 )
          {
            for ( i = *v36; i; i = (_QWORD *)*i )
              v36 = (_QWORD **)i;
            *v36 = v34;
          }
          else
          {
            *(_QWORD *)(v35 + 12936) = v34;
          }
          return 1LL;
        }
        v29 = 14;
        goto LABEL_55;
      }
LABEL_54:
      v29 = 87;
      goto LABEL_55;
    case 3u:
      v10 = *(_QWORD **)(W32GetUserSessionState(a1, a2) + 12936);
      if ( v10 )
      {
        do
        {
          v11 = (_QWORD *)*v10;
          Win32FreePool(v10);
          v10 = v11;
        }
        while ( v11 );
      }
      *(_QWORD *)(W32GetUserSessionState(v10, v9) + 12936) = 0LL;
      return 1LL;
  }
  return 0LL;
}
