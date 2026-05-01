/*
 * XREFs of ?HampUtilCheckStartAndRevokeFlags@@YAKPEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006C254
 * Callers:
 *     ?HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z @ 0x18006C0B4 (-HampUtilAreActivityPropertiesValid@@YAKPEAU_RM_PSM_HOST_INFO@@PEAU_HAM_ACTIVITY_PROPERTIES@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HampUtilCheckStartAndRevokeFlags(struct _HAM_ACTIVITY_PROPERTIES *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  __int64 result; // rax

  v1 = *((_DWORD *)a1 + 2);
  if ( v1 >= 0x400 )
    return 0LL;
  v2 = *((_DWORD *)a1 + 1);
  if ( v2 >= 0x800 || (v1 & 2) != 0 && (v2 & 2) == 0 )
    return 0LL;
  if ( (v1 & 0xC) != 0 && (v2 & 4) == 0 )
    return 0LL;
  if ( (v1 & 0x40) != 0 || (v2 & 0x20) != 0 || (v1 & 0x10) != 0 && (v2 & 8) == 0 )
    return 0LL;
  result = 1LL;
  if ( (v1 & 1) != 0 && (v2 & 1) == 0 )
    return 0LL;
  if ( (((unsigned __int8)v2 ^ (unsigned __int8)(v1 >> 1)) & 0x40) != 0
    || (*(_DWORD *)a1 & 0x400) != 0 && (v1 & 0x100) != 0 )
  {
    return 0LL;
  }
  return result;
}
