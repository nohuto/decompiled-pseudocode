/*
 * XREFs of xxxKENLSProcs @ 0x140125100
 * Callers:
 *     xxxProcessKeyEvent @ 0x140124D60 (xxxProcessKeyEvent.c)
 * Callees:
 *     ?DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z @ 0x14012526C (-DropInput@Keyboard@InputTraceLogging@@SAXW4DropReason@12@@Z.c)
 *     ?StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z @ 0x14013CBB0 (-StubDispFillPath@@YAHPEAU_SURFOBJ@@PEAU_PATHOBJ@@PEAU_CLIPOBJ@@PEAU_BRUSHOBJ@@PEAU_POINTL@@KK@Z.c)
 *     ?KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x1401C6C20 (-KbdNlsFuncTypeNormal@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     ?KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z @ 0x14021CC70 (-KbdNlsFuncTypeAlt@@YAHPEAU_VK_TO_FUNCTION_TABLE@@PEAUtagKE@@_K@Z.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall xxxKENLSProcs(struct _PATHOBJ *a1, struct _CLIPOBJ *a2, int a3)
{
  int v5; // edx
  int v6; // ecx
  int v7; // r8d
  int v9; // edx
  int v10; // ecx
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdi
  int v14; // edx
  int v15; // r8d
  int v16; // edx
  __int64 v17; // rcx
  _BYTE *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // ebx

  if ( *(_QWORD *)(W32GetUserSessionState((_DWORD)a1, (_DWORD)a2, a3) + 14064) )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v6, v5, v7) + 14064);
    if ( *(_QWORD *)(v11 + 8) )
    {
      v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9, v11) + 14064);
      v13 = *(_QWORD *)(v12 + 8);
      v16 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v12, v14, v15) + 14064) + 4LL);
      do
      {
        if ( !v16 )
          return 1LL;
        v17 = 132LL * (unsigned int)--v16;
        v18 = (_BYTE *)(v13 + v17);
      }
      while ( *v18 != BYTE2(a1->fl) );
      v19 = (unsigned __int8)v18[1];
      if ( (unsigned __int8)v19 >= 3u )
      {
        v20 = 0;
      }
      else
      {
        v20 = ((__int64 (__fastcall *)(_BYTE *, struct _PATHOBJ *, struct _CLIPOBJ *))funcs_1401251BB[v19])(v18, a1, a2);
        if ( v20 )
          return v20;
      }
      InputTraceLogging::Keyboard::DropInput(12LL);
      return v20;
    }
  }
  return 1LL;
}
