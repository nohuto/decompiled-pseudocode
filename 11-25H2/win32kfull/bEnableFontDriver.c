/*
 * XREFs of bEnableFontDriver @ 0x14026DE20
 * Callers:
 *     ?UmfdSessionInitialize@@YAJXZ @ 0x14010B620 (-UmfdSessionInitialize@@YAJXZ.c)
 * Callees:
 *     ?FntCacheHDEV@@YAXPEAUHDEV__@@K@Z @ 0x1402202E8 (-FntCacheHDEV@@YAXPEAUHDEV__@@K@Z.c)
 */

__int64 __fastcall bEnableFontDriver(__int64 a1, unsigned int a2)
{
  struct _LDEV *Internal; // rax
  __int64 v4; // rdx
  int v5; // ecx
  HDEV v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 result; // rax
  HDEV v11; // [rsp+80h] [rbp+18h] BYREF

  Internal = (struct _LDEV *)ldevLoadInternal(a1, 6LL);
  if ( !Internal )
    return 0LL;
  PDEVOBJ::PDEVOBJ((PDEVOBJ *)&v11, Internal, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0, 0, 0);
  v6 = v11;
  if ( !v11 )
    return 0LL;
  if ( a2 == 5 )
  {
    v7 = *(_QWORD *)(W32GetSessionState(v5, v4) + 96);
    *(_QWORD *)(v7 + 24152) = v6;
    v9 = *(_QWORD *)(W32GetSessionState(v7, v8) + 96);
    *(_DWORD *)(v9 + 24304) = 2;
    *(_DWORD *)(v9 + 24308) = 1;
    v6 = v11;
  }
  FntCacheHDEV(v6, a2);
  result = 1LL;
  *((_DWORD *)v11 + 10) |= 0x2000u;
  return result;
}
