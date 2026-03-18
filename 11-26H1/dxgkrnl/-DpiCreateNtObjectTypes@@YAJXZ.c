/*
 * XREFs of ?DpiCreateNtObjectTypes@@YAJXZ @ 0x140085ABC
 * Callers:
 *     DpiInitializeGlobalState @ 0x14044C9F0 (DpiInitializeGlobalState.c)
 * Callees:
 *     DxgkCreateNtObjectType @ 0x1401EACE0 (DxgkCreateNtObjectType.c)
 */

__int64 DpiCreateNtObjectTypes(void)
{
  __int64 result; // rax

  result = 0LL;
  if ( !g_pDpDisplayMuxSwitchNtObject )
    return DxgkCreateNtObjectType(
             L"DxgkDisplayMuxSwitch",
             0LL,
             (__int64)DpiDisplayMuxObjectDelete,
             0LL,
             (__int64)&g_pDpDisplayMuxSwitchNtObject,
             0);
  return result;
}
