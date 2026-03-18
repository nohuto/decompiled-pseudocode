/*
 * XREFs of ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401F3534
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401E3D68 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1401F35F8 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     ?WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1402A7B14 (-WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUA.c)
 */

void __fastcall WindowArrangementSequence::TestSequence(
        WindowArrangementSequence *this,
        const struct tagHOTKEY *a2,
        int a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned __int16 v7; // bp
  __int64 v9; // rax
  __int64 v10; // rcx
  __int64 UserSessionState; // rax
  const struct tagHOTKEY *v12; // rdx

  v7 = (unsigned __int16)a2;
  if ( this )
  {
    UserSessionState = W32GetUserSessionState(this, a2);
    v12 = (const struct tagHOTKEY *)(a4 | (v7 << 16));
    if ( (int)v12 != *(_QWORD *)(UserSessionState + 13992) )
      WindowArrangementSequence::TestHotKey(this, v12);
  }
  else if ( a5 )
  {
    v9 = W32GetUserSessionState(0LL, a2);
    if ( !a3 )
    {
      if ( !*(_DWORD *)(v9 + 63416) )
        return;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(v9 + 63416) && (a3 & 0xE) == 0 )
    {
LABEL_12:
      v10 = 1LL;
      goto LABEL_9;
    }
  }
  else if ( a3 == 8 && *(_DWORD *)(W32GetUserSessionState(0LL, a2) + 63416) )
  {
    v10 = 2LL;
LABEL_9:
    WindowArrangementSequence::WindowArrangementSequenceFinished(v10);
  }
}
