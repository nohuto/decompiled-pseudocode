/*
 * XREFs of ?SetProperty@CDropShadow@@UEAAJUDCOMPOSITION_PROPERTY_ID@@W4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x1801A9FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CDropShadow::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  void **i; // r10
  __int64 (__fastcall **v5)(__int64, void *, __int64); // rax
  int v6; // eax
  unsigned int v7; // ebx

  for ( i = (void **)&CDropShadow::k_rgAnimDef; ; ++i )
  {
    if ( i == &CComponentTransform3D::`vftable' )
      goto LABEL_12;
    v5 = (__int64 (__fastcall **)(__int64, void *, __int64))*i;
    if ( a2 == *(_DWORD *)*i && (a3 == *((_DWORD *)v5 + 1) || !a3) )
      break;
  }
  if ( !v5 )
  {
LABEL_12:
    v7 = -2147024809;
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x78u, 0LL);
    return v7;
  }
  v6 = v5[3](a1, *i, a4);
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x74u, 0LL);
  return v7;
}
