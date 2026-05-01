/*
 * XREFs of ?Search@?$CDSA_Base@U_TargetInfo@@@@QEBAHPEBU_TargetInfo@@HP6AH00_J@Z1I@Z @ 0x18067531C
 * Callers:
 *     ?_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV?$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z @ 0x180675420 (-_BuildDisplayIndex@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@0IPEAV-$CDSA@U_AdapterInfo@@@@HI_NPEAH3@Z.c)
 * Callees:
 *     DSA_GetItemPtr @ 0x1801F27A0 (DSA_GetItemPtr.c)
 *     ?TargetInfoCompareID@@YAHPEBU_TargetInfo@@0_J@Z @ 0x1806753B0 (-TargetInfoCompareID@@YAHPEBU_TargetInfo@@0_J@Z.c)
 */

__int64 __fastcall CDSA_Base<_TargetInfo>::Search(HDSA *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v6; // edi
  unsigned int v7; // ebx
  const struct _TargetInfo *ItemPtr; // rax

  if ( !*a1 )
    return 0xFFFFFFFFLL;
  v6 = *(_DWORD *)*a1;
  v7 = 0;
  if ( v6 <= 0 )
    return 0xFFFFFFFFLL;
  while ( 1 )
  {
    ItemPtr = (const struct _TargetInfo *)g_pfn_DSA_GetItemPtr(*a1, v7);
    if ( !(unsigned int)TargetInfoCompareID(0LL, ItemPtr, a5) )
      break;
    if ( (int)++v7 >= v6 )
      return 0xFFFFFFFFLL;
  }
  return v7;
}
