/*
 * XREFs of ?SetBounds@CClientArea@@QEAAJXZ @ 0x1800546E0
 * Callers:
 *     ?UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ @ 0x18008B110 (-UpdateClientAreaBounds@CTopLevelWindow@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CClientArea::SetBounds(CClientArea *this)
{
  __int64 v1; // rdx
  unsigned int v2; // ebx
  __int64 v3; // rcx
  int v4; // eax

  v1 = *((_QWORD *)this + 17);
  v2 = 0;
  if ( v1 )
  {
    v3 = *(_QWORD *)(v1 + 24);
    if ( v3 )
    {
      v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v3 + 376LL))(
             v3,
             v1 + 220,
             v1 + 236,
             v1 + 252);
      v2 = v4;
      if ( v4 < 0 )
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x8Eu, 0LL);
    }
  }
  return v2;
}
