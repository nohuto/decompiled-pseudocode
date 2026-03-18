/*
 * XREFs of ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400EEB48
 * Callers:
 *     xxxDestroyThreadInfo @ 0x140164194 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401B67CC (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1401B686C (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 */

void __fastcall DelegationAPI::ScrubDelegateThreadWindows(DelegationAPI *this, struct tagTHREADINFO *a2)
{
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int64 *v7; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // rdx
  _BYTE *v11; // rbx
  __int64 v12; // rcx
  char v13; // al

  v3 = *(_QWORD *)(W32GetUserSessionState(this, a2) + 19888);
  v6 = 0;
  v7 = *(__int64 **)(W32GetUserSessionState(v5, v4) + 19832);
  W32GetUserSessionState(v9, v8);
  v11 = (_BYTE *)(v3 + 24);
  do
  {
    v12 = *v7;
    if ( *v11 == 1 )
    {
      if ( !*(_DWORD *)(v12 + 260) || *(DelegationAPI **)(v12 + 264) != this )
        goto LABEL_4;
      v13 = anonymous_namespace_::ScrubDelegatedWindow_tagWND___();
    }
    else
    {
      if ( *v11 != 23 || !*(_DWORD *)(v12 + 72) || *(DelegationAPI **)(v12 + 64) != this )
        goto LABEL_4;
      v13 = anonymous_namespace_::ScrubDelegatedWindow_tagBWND___();
    }
    if ( v13 )
      break;
LABEL_4:
    ++v6;
    v11 += 32;
    v7 += 5;
  }
  while ( v6 <= *(_DWORD *)(W32GetUserSessionState(v12, v10) + 19816) );
}
