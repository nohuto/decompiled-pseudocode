/*
 * XREFs of xxxTranslateMessage @ 0x14002187C
 * Callers:
 *     NtUserTranslateMessage @ 0x1400217D0 (NtUserTranslateMessage.c)
 *     xxxHandleMenuMessages @ 0x1400439DC (xxxHandleMenuMessages.c)
 *     xxxMNLoop @ 0x14015A654 (xxxMNLoop.c)
 *     ?xxxMoveSize@@YAXPEAUtagWND@@IK@Z @ 0x1402524BC (-xxxMoveSize@@YAXPEAUtagWND@@IK@Z.c)
 *     ?xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z @ 0x1402E3E2C (-xxxSBTrackLoop@@YAXPEAUtagWND@@_JPEAUtagSBCALC@@@Z.c)
 *     xxxHelpLoop @ 0x1402EB044 (xxxHelpLoop.c)
 * Callees:
 *     _PostMessageExtended @ 0x1400208EC (_PostMessageExtended.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxTranslateMessage(__int64 a1, int a2)
{
  int v3; // ecx
  int v5; // r15d
  int v6; // ecx
  int v7; // ecx
  struct tagTHREADINFO *v8; // rax
  unsigned int v9; // ebx
  struct tagTHREADINFO *v10; // rdi
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned int v13; // esi
  unsigned __int64 v14; // rbp
  int v15; // eax
  int v16; // edi
  unsigned __int64 v17; // rbp
  int v18; // r15d
  unsigned int v19; // esi
  struct tagWND *v20; // r15
  _WORD *v21; // r14
  __int64 v22; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rax
  int v29; // [rsp+40h] [rbp-68h] BYREF
  _BYTE v30[32]; // [rsp+48h] [rbp-60h] BYREF

  v3 = *(_DWORD *)(a1 + 8);
  v29 = 0;
  v5 = 0;
  v6 = v3 - 256;
  if ( v6 )
  {
    v7 = v6 - 1;
    if ( v7 )
    {
      v25 = v7 - 3;
      if ( v25 )
      {
        if ( v25 != 1 )
          return 0LL;
      }
      else
      {
        v5 = 1;
      }
    }
  }
  v8 = PtiCurrent();
  v9 = *(_DWORD *)(a1 + 8);
  v10 = v8;
  LOBYTE(v11) = *((_BYTE *)PtiCurrent() + 1456);
  EtwTraceBeginTranslateMessage(v11, v9);
  v12 = *((_QWORD *)v10 + 81);
  if ( v12 && ((v27 = *(__int64 **)(*(_QWORD *)v12 + 16LL)) != 0LL ? (v28 = *v27) : (v28 = 0LL), v28 == *(_QWORD *)a1) )
    v13 = a2 | 1;
  else
    v13 = a2 & 0xFFFFFFFE;
  v14 = *(_QWORD *)(a1 + 24);
  v15 = xxxInternalToUnicode(
          *(unsigned __int16 *)(a1 + 16),
          WORD1(v14),
          *((_QWORD *)v10 + 59) + 256LL,
          v30,
          16,
          v13,
          &v29,
          0LL);
  v16 = v15;
  v17 = v29 & 0x4000000 | v14;
  if ( v15 )
  {
    v18 = 4 * v5;
    if ( v15 <= 0 )
      v16 = -v15;
    v19 = v18 + (v15 <= 0) + 258;
    if ( (v29 & 0x8000) != 0 )
      v17 |= 0x80000000uLL;
    else
      LODWORD(v17) = v17 & 0x7FFFFFFF;
    v20 = (struct tagWND *)ValidateHwnd(*(_QWORD *)a1);
    if ( v20 )
    {
      v21 = v30;
      while ( v16 > 0 )
      {
        PostMessageExtended(v20, v19, (unsigned __int16)*v21, v17 | ((unsigned int)v16 > 1 ? 0x2000000 : 0), 0LL);
        *v21 = 0;
        --v16;
        ++v21;
      }
      LOBYTE(v22) = *((_BYTE *)PtiCurrent() + 1456);
      EtwTraceEndTranslateMessage(v22, v9);
      return 1LL;
    }
    LOBYTE(v26) = *((_BYTE *)PtiCurrent() + 1456);
    EtwTraceEndTranslateMessage(v26, v9);
  }
  else
  {
    LOBYTE(v24) = *((_BYTE *)PtiCurrent() + 1456);
    EtwTraceEndTranslateMessage(v24, v9);
    if ( (v13 & 2) == 0 )
      return 1LL;
  }
  return 0LL;
}
