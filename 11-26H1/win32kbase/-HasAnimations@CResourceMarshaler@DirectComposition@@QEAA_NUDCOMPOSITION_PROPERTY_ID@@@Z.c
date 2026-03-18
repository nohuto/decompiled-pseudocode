/*
 * XREFs of ?HasAnimations@CResourceMarshaler@DirectComposition@@QEAA_NUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x140193858
 * Callers:
 *     ?SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z @ 0x14019A010 (-SetFloatProperty@CVisualMarshaler@DirectComposition@@UEAAJUDCOMPOSITION_PROPERTY_ID@@MPEA_N@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DirectComposition::CResourceMarshaler::HasAnimations(__int64 a1, int a2)
{
  __int64 v2; // r8
  char result; // al
  __int64 v4; // r9
  __int64 v5; // r10
  int v6; // ecx
  bool v7; // zf

  v2 = *(_QWORD *)(a1 + 40);
  result = 0;
  v4 = 0LL;
  v5 = 0LL;
  while ( v2 )
  {
    if ( *(_DWORD *)(v2 + 12) != a2 )
      goto LABEL_10;
    v6 = *(_DWORD *)(v2 + 8);
    if ( (v6 & 1) != 0 )
      return 1;
    if ( (v6 & 2) != 0 )
    {
      v4 = v2;
      v7 = v5 == 0;
    }
    else
    {
      if ( (v6 & 4) == 0 )
        goto LABEL_10;
      v5 = v2;
      v7 = v4 == 0;
    }
    if ( !v7 )
      return 1;
LABEL_10:
    v2 = *(_QWORD *)(v2 + 32);
  }
  if ( !v4 )
    return result;
  return 1;
}
