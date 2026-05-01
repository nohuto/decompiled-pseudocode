/*
 * XREFs of ?SourceInfoCompareID@@YAHPEBU_SourceInfo@@0_J@Z @ 0x18064F28C
 * Callers:
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x18064F31C (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SourceInfoCompareID(const struct _SourceInfo *a1, const struct _SourceInfo *a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a1 )
    a3 = *(_DWORD *)a1;
  if ( a3 != *(_DWORD *)a2 )
  {
    result = 0xFFFFFFFFLL;
    if ( a3 >= *(_DWORD *)a2 )
      return 1LL;
  }
  return result;
}
