/*
 * XREFs of gsl::final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___::_final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___ @ 0x18027F6AC
 * Callers:
 *     ?OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z @ 0x18027F850 (-OnSceneFrameTick@CSceneMesh@@EEAAJPEAUISpectreRenderer@@_K@Z.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall gsl::final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___::_final_action__CSceneMesh::OnSceneFrameTick_::_5_::_lambda_1___(
        _QWORD *a1)
{
  __int64 *v2; // rcx
  __int64 v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rcx

  if ( *((_BYTE *)a1 + 16) )
  {
    v2 = (__int64 *)a1[1];
    v3 = *a1;
    v4 = *v2;
    if ( *(_QWORD *)(*a1 + 168LL) != *v2 )
    {
      *v2 = 0LL;
      v5 = *(_QWORD *)(v3 + 168);
      *(_QWORD *)(v3 + 168) = v4;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
      (*(void (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*a1 + 80LL))(*a1, 0LL, 0LL);
    }
    *(_BYTE *)(*a1 + 176LL) = 0;
  }
}
