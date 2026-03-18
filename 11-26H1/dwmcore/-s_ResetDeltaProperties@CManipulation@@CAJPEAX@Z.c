/*
 * XREFs of ?s_ResetDeltaProperties@CManipulation@@CAJPEAX@Z @ 0x1801C67C0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CManipulation::s_ResetDeltaProperties(char *a1)
{
  unsigned int v1; // ebx
  char v3; // al

  if ( a1 )
  {
    v3 = a1[456];
    v1 = 0;
    if ( (v3 & 1) != 0 )
    {
      *(_QWORD *)(a1 + 284) = 0LL;
      v3 &= ~1u;
      *((_DWORD *)a1 + 73) = 0;
      a1[456] = v3;
    }
    if ( (v3 & 2) != 0 )
    {
      *((_DWORD *)a1 + 77) = 1065353216;
      *((_DWORD *)a1 + 78) = 1065353216;
      *((_DWORD *)a1 + 79) = 1065353216;
      a1[456] &= ~2u;
    }
    (*(void (__fastcall **)(char *, _QWORD))(*(_QWORD *)a1 + 16LL))(a1, 0LL);
  }
  else
  {
    v1 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x3D1u, 0LL);
  }
  return v1;
}
