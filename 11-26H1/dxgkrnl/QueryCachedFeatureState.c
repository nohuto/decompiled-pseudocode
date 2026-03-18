/*
 * XREFs of QueryCachedFeatureState @ 0x1403ECA5C
 * Callers:
 *     ?DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_FLAGS@@PEAU_DXGK_ISFEATUREENABLED_RESULT@@@Z @ 0x1403EC9D0 (-DxgkIsFeatureEnabled@@YAJPEAUDXGK_FEATURE_DATABASE@@W4_DXGK_FEATURE_ID@@UDXGK_ISFEATUREENABLED_.c)
 * Callees:
 *     <none>
 */

char __fastcall QueryCachedFeatureState(__int64 a1, unsigned int a2, _DWORD *a3)
{
  char v3; // bl
  unsigned __int64 v5; // rdi
  __int64 v8; // rdx
  __int64 v9; // r14

  v3 = 0;
  v5 = 2 * ((unsigned __int64)a2 >> 28);
  if ( (a2 & 0xFFFFFFF) < *(_DWORD *)(a1 + 16 * ((unsigned __int64)a2 >> 28) + 16) )
  {
    ExAcquirePushLockSharedEx(a1, 0LL);
    v8 = *(_QWORD *)(a1 + 8 * v5 + 8);
    v9 = a2 & 0xFFFFFFF;
    if ( (*(_BYTE *)(v8 + 6 * v9) & 1) != 0 )
    {
      v3 = 1;
      *a3 = *(_DWORD *)(v8 + 6 * v9 + 2);
    }
    ExReleasePushLockSharedEx(a1, 0LL);
  }
  return v3;
}
