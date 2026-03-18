/*
 * XREFs of ?GrepEnableFontDriver@@YA_NP6A_JXZK@Z @ 0x14029569C
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x1401C1238 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?FntCacheHDEVInProc@@YAXPEAUHDEV__@@K@Z @ 0x14031B1A4 (-FntCacheHDEVInProc@@YAXPEAUHDEV__@@K@Z.c)
 */

bool __fastcall GrepEnableFontDriver(__int64 (*a1)(void), unsigned int a2)
{
  struct _LDEV *Internal; // rax
  __int64 v4; // rdx
  int v5; // ecx
  HDEV v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  bool result; // al
  HDEV v11; // [rsp+80h] [rbp+18h] BYREF

  Internal = (struct _LDEV *)ldevLoadInternal(a1, 6LL);
  if ( !Internal )
    return 0;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v11, Internal, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0);
  v6 = v11;
  if ( !v11 )
    return 0;
  if ( a2 == 5 )
  {
    v7 = *(_QWORD *)(W32GetSessionState(v5, v4) + 96);
    *(_QWORD *)(v7 + 24136) = v6;
    v9 = *(_QWORD *)(W32GetSessionState(v7, v8) + 96);
    *(_DWORD *)(v9 + 24288) = 2;
    *(_DWORD *)(v9 + 24292) = 1;
    v6 = v11;
  }
  FntCacheHDEVInProc(v6, a2);
  result = 1;
  *((_DWORD *)v11 + 10) |= 0x2000u;
  return result;
}
