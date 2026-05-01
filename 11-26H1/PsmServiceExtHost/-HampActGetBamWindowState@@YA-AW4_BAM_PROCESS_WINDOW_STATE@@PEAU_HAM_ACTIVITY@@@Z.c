/*
 * XREFs of ?HampActGetBamWindowState@@YA?AW4_BAM_PROCESS_WINDOW_STATE@@PEAU_HAM_ACTIVITY@@@Z @ 0x180065EB8
 * Callers:
 *     ?HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@PEAU_RM_COMMIT_THRESHOLDS@@2PEAPEAU_HAM_ACTIVITY@@@Z @ 0x180009FAC (-HampHostComputeStaticEnforcementSettings@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SET.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampActGetBamWindowState(__int64 a1)
{
  unsigned int v1; // ecx
  unsigned int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax

  if ( (*(_DWORD *)(a1 + 112) & 0x10000) != 0 )
  {
    v3 = *(_DWORD *)(a1 + 424);
    if ( (v3 & 0x40) != 0 )
    {
      return 4;
    }
    else
    {
      v1 = 0;
      v4 = (v3 >> 1) & 7;
      if ( v4 )
      {
        v5 = v4 - 1;
        if ( v5 && (v6 = v5 - 1) != 0 )
        {
          v7 = v6 - 1;
          if ( v7 )
          {
            if ( v7 == 1 )
              return 3;
            else
              return 6;
          }
          else
          {
            return 2;
          }
        }
        else
        {
          return 1;
        }
      }
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
