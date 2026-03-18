/*
 * XREFs of ?ScrubDelegateThreadWindows@DelegationAPI@@YAXPEAUtagTHREADINFO@@@Z @ 0x1400B8D3C
 * Callers:
 *     xxxDestroyThreadInfo @ 0x1400BA274 (xxxDestroyThreadInfo.c)
 * Callees:
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagWND___ @ 0x1400B8E08 (_anonymous_namespace_--ScrubDelegatedWindow_tagWND___.c)
 *     _anonymous_namespace_::ScrubDelegatedWindow_tagBWND___ @ 0x1401D9420 (_anonymous_namespace_--ScrubDelegatedWindow_tagBWND___.c)
 */

void __fastcall DelegationAPI::ScrubDelegateThreadWindows(DelegationAPI *this, struct tagTHREADINFO *a2, int a3)
{
  __int64 v4; // rbx
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  unsigned int v8; // esi
  __int64 *v9; // rdi
  int v10; // edx
  int v11; // ecx
  int v12; // r8d
  int v13; // edx
  int v14; // r8d
  _BYTE *i; // rbx
  __int64 v16; // rcx
  char v17; // al

  v4 = *(_QWORD *)(W32GetUserSessionState((_DWORD)this, (_DWORD)a2, a3) + 19920);
  v8 = 0;
  v9 = *(__int64 **)(W32GetUserSessionState(v6, v5, v7) + 19864);
  W32GetUserSessionState(v11, v10, v12);
  for ( i = (_BYTE *)(v4 + 24); ; i += 32 )
  {
    v16 = *v9;
    if ( *i == 1 )
    {
      if ( *(_DWORD *)(v16 + 260) && *(DelegationAPI **)(v16 + 264) == this )
      {
        v17 = anonymous_namespace_::ScrubDelegatedWindow_tagWND___(v16);
        goto LABEL_8;
      }
LABEL_7:
      v17 = 0;
      goto LABEL_8;
    }
    if ( *i == 23 )
      break;
LABEL_4:
    ++v8;
    v9 += 5;
    if ( v8 > *(_DWORD *)(W32GetUserSessionState(v16, v13, v14) + 19848) )
      return;
  }
  if ( !*(_DWORD *)(v16 + 72) || *(DelegationAPI **)(v16 + 64) != this )
    goto LABEL_7;
  v17 = anonymous_namespace_::ScrubDelegatedWindow_tagBWND___(v16);
LABEL_8:
  if ( !v17 )
    goto LABEL_4;
}
