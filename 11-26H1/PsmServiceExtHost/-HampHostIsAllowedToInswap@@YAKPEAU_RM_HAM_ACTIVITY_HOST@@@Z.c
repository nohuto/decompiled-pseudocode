/*
 * XREFs of ?HampHostIsAllowedToInswap@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001437C
 * Callers:
 *     ?HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180014080 (-HampHostWaitForInSwapTurn@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampHostIsAllowedToInswap(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  unsigned __int64 v1; // rax
  unsigned int v2; // edx
  _QWORD *v3; // rax

  v1 = *(_QWORD *)(*(_QWORD *)((*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 99) + 88LL) + 32LL) & 0xFFFFFFFFFFFFFFFCuLL)
                             + 120)
                 + 32LL) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( (*((_BYTE *)a1 + 680) & 0x40) != 0 || (*((_QWORD *)a1 + 83) & 0x200000000000LL) != 0 )
    return 1;
  v2 = 0;
  if ( !*(_DWORD *)(v1 + 568) )
  {
    v3 = (_QWORD *)(v1 + 552);
    if ( (_QWORD *)*v3 != v3 )
    {
      LOBYTE(v2) = *v3 == (_QWORD)a1 + 984;
      return v2;
    }
    return 1;
  }
  return v2;
}
