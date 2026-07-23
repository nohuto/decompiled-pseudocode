/*
 * XREFs of WheapGetErrorThresholdInformation @ 0x1403E2BFC
 * Callers:
 *     WheapApplyThresholdChecks @ 0x1403E2B48 (WheapApplyThresholdChecks.c)
 * Callees:
 *     <none>
 */

void __fastcall WheapGetErrorThresholdInformation(__int64 a1, _DWORD *a2, _DWORD *a3)
{
  int v3; // r10d
  int v4; // r11d
  unsigned __int8 *v5; // rcx
  __int64 v6; // rax

  v3 = 0;
  v4 = 0;
  if ( *(_DWORD *)(a1 + 104) == 1 )
  {
    v6 = 144LL;
  }
  else
  {
    if ( *(_DWORD *)(a1 + 104) == 2
      || *(_DWORD *)(a1 + 104) == 4
      || *(_DWORD *)(a1 + 104) != 5 && *(_DWORD *)(a1 + 104) != 8 && (unsigned int)(*(_DWORD *)(a1 + 104) - 12) > 1 )
    {
      goto LABEL_3;
    }
    v6 = 160LL;
  }
  v5 = (unsigned __int8 *)(v6 + a1);
  if ( v5 && (*v5 == 1 || *v5 == 2 || *v5 == 3 || *v5 == 4 || *v5 == 8 || (unsigned int)*v5 - 9 <= 1) )
  {
    v4 = *((_DWORD *)v5 + 6);
    v3 = *((_DWORD *)v5 + 5);
  }
LABEL_3:
  *a2 = v4;
  *a3 = v3;
}
