/*
 * XREFs of ?GetImeHotKey@@YAHKPEAI0PEAPEAUHKL__@@@Z @ 0x1401A20D0
 * Callers:
 *     NtUserGetImeHotKey @ 0x1401A1FC0 (NtUserGetImeHotKey.c)
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     ?FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z @ 0x1401A24BC (-FindImeHotKeyByID@@YAPEAU_tagIMEHOTKEYOBJ@@PEBU1@K@Z.c)
 */

__int64 __fastcall GetImeHotKey(__int64 a1, unsigned int *a2, unsigned int *a3, HKL *a4)
{
  unsigned int v7; // ebx
  __int64 UserSessionState; // rax
  struct _tagIMEHOTKEYOBJ *ImeHotKeyByID; // rax
  int v11; // ecx

  v7 = a1;
  UserSessionState = W32GetUserSessionState(a1, a2);
  ImeHotKeyByID = FindImeHotKeyByID(*(const struct _tagIMEHOTKEYOBJ **)(UserSessionState + 12944), v7);
  if ( ImeHotKeyByID )
  {
    if ( a4 )
    {
      *a4 = (HKL)*((_QWORD *)ImeHotKeyByID + 3);
LABEL_4:
      *a2 = *((_DWORD *)ImeHotKeyByID + 4);
      *a3 = *((_DWORD *)ImeHotKeyByID + 3);
      return 1LL;
    }
    if ( !*((_QWORD *)ImeHotKeyByID + 3) )
      goto LABEL_4;
    v11 = 87;
  }
  else
  {
    v11 = 1419;
  }
  UserSetLastError(v11);
  return 0LL;
}
