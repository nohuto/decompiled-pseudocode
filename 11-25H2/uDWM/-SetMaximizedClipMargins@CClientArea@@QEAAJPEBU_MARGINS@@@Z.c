/*
 * XREFs of ?SetMaximizedClipMargins@CClientArea@@QEAAJPEBU_MARGINS@@@Z @ 0x18006C0F8
 * Callers:
 *     ?UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ @ 0x18006BF90 (-UpdateClientAreaMaximizedClip@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     __security_check_cookie @ 0x18009A7F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClientArea::SetMaximizedClipMargins(CClientArea *this, const struct _MARGINS *a2)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rcx
  int v5; // eax
  __int128 v7; // [rsp+30h] [rbp-28h] BYREF

  v2 = *((_QWORD *)this + 18);
  v3 = 0;
  if ( v2 )
  {
    v4 = *(_QWORD *)(v2 + 24);
    if ( v4 )
    {
      v7 = 0LL;
      if ( a2 )
        v7 = (__int128)*a2;
      v5 = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v4 + 368LL))(v4, &v7);
      v3 = v5;
      if ( v5 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v5, 0xBAu, 0LL);
    }
  }
  return v3;
}
