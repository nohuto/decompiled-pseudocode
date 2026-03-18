/*
 * XREFs of ?TestHotKey@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@@Z @ 0x1401F35F8
 * Callers:
 *     ?TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z @ 0x1401F3534 (-TestSequence@WindowArrangementSequence@@YAXQEBUtagHOTKEY@@IIIH@Z.c)
 * Callees:
 *     ?WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUATION@@@Z @ 0x1402A7B14 (-WindowArrangementSequenceFinished@WindowArrangementSequence@@YAXW4ARRANGEMENT_HOTKEY_DISAMBIGUA.c)
 */

void __fastcall WindowArrangementSequence::TestHotKey(WindowArrangementSequence *this, const struct tagHOTKEY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx

  v3 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 18696);
  v5 = 0;
  if ( *(_QWORD *)this == v3 )
  {
    v8 = *((_DWORD *)this + 10);
    if ( v8 >= 16 && v8 <= 24 )
      v5 = 1;
  }
  if ( *(_DWORD *)(W32GetUserSessionState(v4, v3) + 63416) != v5 )
  {
    *(_DWORD *)(W32GetUserSessionState(v7, v6) + 63416) = v5;
    if ( !*(_DWORD *)(W32GetUserSessionState(v10, v9) + 63416) )
      WindowArrangementSequence::WindowArrangementSequenceFinished(1LL);
  }
}
