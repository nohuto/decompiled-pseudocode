/*
 * XREFs of ?HampHostIsQuiesceSerialized@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180061E60
 * Callers:
 *     ?HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18000B680 (-HampHostCheckUpdateSuspendWaitState@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@K@Z.c)
 *     ?HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z @ 0x180061D64 (-HampHostCheckWaitForQuiesceTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@PEAK1@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIsQuiesceSerialized(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned int v1; // ecx
  __int64 v3; // r8
  int v4; // edx
  int v5; // edx

  if ( (*((_QWORD *)a1 + 83) & 0x2000000000000LL) != 0 )
  {
    v3 = *((_QWORD *)a1 + 99);
    v1 = 0;
    v4 = *(_DWORD *)((*(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(v3 + 88) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL) + 120)
                                + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                   + 592) & 3;
    if ( v4 )
    {
      v5 = v4 - 1;
      if ( v5 )
        return v5 == 1;
      else
        return *(_WORD *)(v3 + 618) & 1;
    }
  }
  else
  {
    return 0;
  }
  return v1;
}
