/*
 * XREFs of ?GetCurrentState@CScalarForce@@UEBA?BUIntegrationState@@XZ @ 0x1801CDCB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CScalarForce::GetCurrentState(__int64 a1, __int64 a2)
{
  int v4; // eax
  __int64 v6; // rcx
  float v7; // xmm0_4

  *(_OWORD *)a2 = 0LL;
  *(_DWORD *)(a2 + 16) = 0;
  if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1) )
  {
    v4 = *(_DWORD *)(a1 + 44);
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 28);
    *(_DWORD *)(a2 + 16) = v4;
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 104);
    *(_DWORD *)a2 = 0;
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v6 + 40LL))(v6) )
      v7 = (*(float (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 104) + 24LL))(*(_QWORD *)(a1 + 104));
    else
      v7 = *(float *)(a1 + 32);
    *(float *)(a2 + 4) = v7;
    *(_DWORD *)(a2 + 8) = 0;
  }
  return a2;
}
