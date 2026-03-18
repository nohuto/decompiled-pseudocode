/*
 * XREFs of bFntCacheDisabled @ 0x14010C9A4
 * Callers:
 *     InitFNTCache @ 0x14010CA54 (InitFNTCache.c)
 * Callees:
 *     bQueryFntCacheReg @ 0x14010C8D0 (bQueryFntCacheReg.c)
 */

__int64 __fastcall bFntCacheDisabled(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 SessionState; // rax
  Gre::Base *v4; // rcx
  unsigned int v5; // ebx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // rax
  int v11; // [rsp+30h] [rbp+8h] BYREF

  v11 = 0;
  SessionState = W32GetSessionState(a1, a2, a3);
  if ( (unsigned int)bQueryFntCacheReg(
                       *(HANDLE *)(*(_QWORD *)(SessionState + 96) + 19616LL),
                       L"DisableFontBootCache",
                       &v11)
    && v11 )
  {
    v5 = 1;
    Gre::Base::Globals(v4);
  }
  else
  {
    v5 = 0;
    if ( !*((_DWORD *)Gre::Base::Globals(v4) + 712) )
    {
      v9 = W32GetSessionState(v7, v6, v8);
      if ( !(unsigned int)bQueryFntCacheReg(
                            *(HANDLE *)(*(_QWORD *)(v9 + 96) + 19616LL),
                            L"DisableRemoteFontBootCache",
                            &v11)
        || v11 )
      {
        return 1;
      }
    }
  }
  return v5;
}
