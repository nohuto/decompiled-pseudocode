/*
 * XREFs of ?PopulateAnimationCurves@CTransitionVisualSet@CAnimationEngine@@QEAAJXZ @ 0x180050FBC
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800512BC (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAnimationEngine::CTransitionVisualSet::PopulateAnimationCurves(
        CAnimationEngine::CTransitionVisualSet *this)
{
  CAnimationEngine::CTransitionVisualSet *v1; // r14
  unsigned int v2; // ebx
  unsigned int i; // esi
  __int64 v4; // rdi
  _QWORD **v5; // rcx
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // r12
  __int64 v9; // r15
  int v10; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  __int128 v18; // [rsp+30h] [rbp-10h] BYREF

  v1 = this;
  v2 = 0;
  for ( i = 0; i < *((_DWORD *)v1 + 5); ++i )
  {
    v4 = **(_QWORD **)(*((_QWORD *)v1 + 5) + 8LL * i);
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v4 + 208LL))(v4) )
    {
      v5 = *(_QWORD ***)(*((_QWORD *)v1 + 5) + 8LL * i);
      v6 = *v5[1];
      v7 = *v5[5];
      v8 = *v5[4];
      v9 = *v5[6];
      v18 = 0LL;
      if ( v6 )
      {
        v12 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int128 *))(*(_QWORD *)v4 + 216LL))(v4, 0LL, &v18);
        v2 = v12;
        if ( v12 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x6A8u, 0LL);
          return v2;
        }
        v13 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v4 + 216LL))(v4, 1LL, (char *)&v18 + 8);
        v2 = v13;
        if ( v13 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v13, 0x6A9u, 0LL);
          return v2;
        }
        (*(void (__fastcall **)(__int64, __int128 *, __int64))(*(_QWORD *)v6 + 56LL))(v6, &v18, 2LL);
      }
      if ( v7 )
      {
        v14 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v4 + 216LL))(v4, 2LL, &v18);
        v2 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v14, 0x6B0u, 0LL);
          return v2;
        }
        v15 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v4 + 216LL))(v4, 3LL, (char *)&v18 + 8);
        v2 = v15;
        if ( v15 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x6B1u, 0LL);
          return v2;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, v18);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v7 + 48LL))(v7, *((_QWORD *)&v18 + 1));
      }
      if ( v8 )
      {
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v4 + 216LL))(v4, 4LL, &v18);
        v2 = v16;
        if ( v16 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x6BBu, 0LL);
          return v2;
        }
        v17 = (*(__int64 (__fastcall **)(__int64, __int64, char *))(*(_QWORD *)v4 + 216LL))(v4, 5LL, (char *)&v18 + 8);
        v2 = v17;
        if ( v17 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v17, 0x6BCu, 0LL);
          return v2;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, v18);
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 48LL))(v8, *((_QWORD *)&v18 + 1));
      }
      if ( v9 )
      {
        v10 = (*(__int64 (__fastcall **)(__int64, __int64, __int128 *))(*(_QWORD *)v4 + 216LL))(v4, 6LL, &v18);
        v2 = v10;
        if ( v10 < 0 )
        {
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, 0x6C4u, 0LL);
          return v2;
        }
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v9 + 48LL))(v9, v18);
      }
      v1 = this;
    }
  }
  return v2;
}
