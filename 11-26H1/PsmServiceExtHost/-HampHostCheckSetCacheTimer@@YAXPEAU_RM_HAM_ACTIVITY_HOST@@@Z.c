/*
 * XREFs of ?HampHostCheckSetCacheTimer@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x1800131A4
 * Callers:
 *     ?HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z @ 0x1800126A4 (-HampActClose@@YAJPEAU_HAM_ACTIVITY@@@Z.c)
 *     ?HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x180028FB8 (-HampHostCheckNotifyZeroProcess@@YAXPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z @ 0x18001393C (-HampHostIsCached@@YAKPEAU_RM_HAM_ACTIVITY_HOST@@@Z.c)
 */

void __fastcall HampHostCheckSetCacheTimer(struct _RM_HAM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rcx
  __int64 v2; // rax
  __int64 v3; // rcx
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( HampHostIsCached(a1) )
  {
    v2 = *(unsigned int *)(v1 + 840);
    if ( (_DWORD)v2 != -1 )
    {
      v3 = *(_QWORD *)(v1 + 832);
      v4 = -10000 * v2;
      TpSetTimer(v3, &v4, 0LL, 5000LL);
    }
  }
}
