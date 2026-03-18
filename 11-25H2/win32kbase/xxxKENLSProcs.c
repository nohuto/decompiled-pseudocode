/*
 * XREFs of xxxKENLSProcs @ 0x1400FB8AC
 * Callers:
 *     xxxProcessKeyEvent @ 0x1400FBC60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x1400F81B0 (-StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x1400FBA0C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1401A2760 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x140217E00 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxKENLSProcs(struct _PATHOBJ *a1, struct _CLIPOBJ *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rdi
  __int64 v11; // rdx
  int v12; // edx
  __int64 v13; // rcx
  _BYTE *v14; // rcx
  __int64 v15; // rax
  unsigned int v16; // ebx

  if ( *(_QWORD *)(W32GetUserSessionState(a1, a2) + 14072)
    && *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v5, v4) + 14072) + 8LL) )
  {
    v9 = *(_QWORD *)(W32GetUserSessionState(v8, v7) + 14072);
    v10 = *(_QWORD *)(v9 + 8);
    v12 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v9, v11) + 14072) + 4LL);
    do
    {
      if ( !v12 )
        return 1LL;
      v13 = 132LL * (unsigned int)--v12;
      v14 = (_BYTE *)(v10 + v13);
    }
    while ( *v14 != BYTE2(a1->fl) );
    v15 = (unsigned __int8)v14[1];
    if ( (unsigned __int8)v15 >= 3u )
    {
      v16 = 0;
    }
    else
    {
      v16 = ((__int64 (__fastcall *)(_BYTE *, struct _PATHOBJ *, struct _CLIPOBJ *))funcs_1400FB967[v15])(v14, a1, a2);
      if ( v16 )
        return v16;
    }
    InputTraceLogging::Keyboard::DropInput(12LL);
    return v16;
  }
  return 1LL;
}
