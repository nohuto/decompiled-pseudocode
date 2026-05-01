/*
 * XREFs of ?HampHostCanRegisterProcess@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@K@Z @ 0x18006EAE4
 * Callers:
 *     ?HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z @ 0x18006B3E4 (-HampHostRegisterProcess@@YAJPEAU_RM_HAM_ACTIVITY_HOST@@PEAX1PEAU_PSM_APP_IDENTITY@@_KK1PEA_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostCanRegisterProcess(struct _RM_HAM_ACTIVITY_HOST *a1, char a2)
{
  unsigned int v2; // r8d

  v2 = 1;
  if ( *((_BYTE *)a1 + 592) != 1 )
  {
    if ( a2 < 0 )
      return *((_QWORD *)a1 + 76) == (_QWORD)a1 + 608;
    if ( (*((_QWORD *)a1 + 83) & 0x2000000000LL) == 0 )
      return 0;
  }
  if ( (a2 & 1) != 0 && (*((_QWORD *)a1 + 83) & 0x10000000000LL) == 0 )
    return 0;
  return v2;
}
