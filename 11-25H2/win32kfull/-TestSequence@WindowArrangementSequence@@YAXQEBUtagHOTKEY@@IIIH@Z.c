/*
 * XREFs of ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401C71B4
 * Callers:
 *     ?xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x1401B2F08 (-xxxDoHotKeyStuff@@YA_NE_NKPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 * Callees:
 *     ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1401C7278 (-TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z.c)
 *     ?WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x14028AC84 (-WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUA.c)
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
    if ( (int)v12 != *(_QWORD *)(UserSessionState + 14000) )
      WindowArrangementSequence::TestHotKey(this, v12);
  }
  else if ( a5 )
  {
    v9 = W32GetUserSessionState(0LL, a2);
    if ( !a3 )
    {
      if ( !*(_DWORD *)(v9 + 63432) )
        return;
      goto LABEL_12;
    }
    if ( *(_DWORD *)(v9 + 63432) && (a3 & 0xE) == 0 )
    {
LABEL_12:
      v10 = 1LL;
      goto LABEL_9;
    }
  }
  else if ( a3 == 8 && *(_DWORD *)(W32GetUserSessionState(0LL, a2) + 63432) )
  {
    v10 = 2LL;
LABEL_9:
    WindowArrangementSequence::WindowArrangementSequenceFinished(v10);
  }
}
