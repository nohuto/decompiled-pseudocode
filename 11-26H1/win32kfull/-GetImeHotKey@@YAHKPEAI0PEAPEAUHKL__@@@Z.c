/*
 * XREFs of ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1402374DC
 * Callers:
 *     NtUserGetImeHotKey @ 0x1402373D0 (NtUserGetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x140022F00 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1402093A4 (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 *     Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline @ 0x1402A1AA8 (Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline.c)
 *     ?FindImeHotKeyByHkl@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@PEAUHKL__@@@Z @ 0x1402CE19C (-FindImeHotKeyByHkl@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@PEAUHKL__@@@Z.c)
 */

__int64 __fastcall GetImeHotKey(int a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  HKL v5; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 UserSessionState; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByHkl; // rax
  __int64 v12; // rax
  int v13; // ecx

  v5 = (HKL)a1;
  if ( (unsigned int)Feature_KeyboardSettings_InputProfileHotKeys__private_IsEnabledDeviceUsageNoInline()
    && (unsigned int)((_DWORD)v5 - 67175425) <= 0xFBFDFBFF )
  {
    UserSessionState = W32GetUserSessionState(v9, v8);
    ImeHotKeyByHkl = FindImeHotKeyByHkl(*(const struct _tagIMEHOTKEYOBJ **)(UserSessionState + 12936), v5);
  }
  else
  {
    v12 = W32GetUserSessionState(v9, v8);
    ImeHotKeyByHkl = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(v12 + 12936), (int)v5);
  }
  if ( !ImeHotKeyByHkl )
  {
    v13 = 1419;
LABEL_7:
    UserSetLastError(v13);
    return 0LL;
  }
  if ( a4 )
  {
    *a4 = (HKL)*((_QWORD *)ImeHotKeyByHkl + 3);
  }
  else if ( *((_QWORD *)ImeHotKeyByHkl + 3) )
  {
    v13 = 87;
    goto LABEL_7;
  }
  *a2 = *((_DWORD *)ImeHotKeyByHkl + 4);
  *a3 = *((_DWORD *)ImeHotKeyByHkl + 3);
  return 1LL;
}
