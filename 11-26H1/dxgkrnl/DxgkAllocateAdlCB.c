/*
 * XREFs of DxgkAllocateAdlCB @ 0x140040CA0
 * Callers:
 *     <none>
 * Callees:
 *     ?SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z @ 0x140040D64 (-SysMmLockObject@@YAJPEAUSYSMM_ADAPTER_OBJECT@@I@Z.c)
 *     ?SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z @ 0x140040E10 (-SysMmCreateAdl@@YAJPEAUSYSMM_ADAPTER_OBJECT@@_K1IPEAPEAU_DXGK_ADL@@@Z.c)
 *     ?SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z @ 0x140053380 (-SysMmUnlockObject@@YAXPEAUSYSMM_ADAPTER_OBJECT@@@Z.c)
 */

__int64 __fastcall DxgkAllocateAdlCB(__int64 a1, unsigned int a2)
{
  struct SYSMM_ADAPTER_OBJECT *v3; // rsi
  int v4; // edi
  unsigned __int64 v5; // r8
  int v6; // edx
  unsigned int v7; // r9d
  __int64 result; // rax
  struct _DXGK_ADL *v9; // [rsp+40h] [rbp+8h] BYREF

  if ( *(_DWORD *)(a1 + 24) >= 4u )
  {
    WdLogSingleEntry1(3LL);
    result = 3221225485LL;
    WdLogGlobalForLineNumber = 547;
  }
  else
  {
    v3 = *(struct SYSMM_ADAPTER_OBJECT **)a1;
    v4 = SysMmLockObject(*(struct SYSMM_ADAPTER_OBJECT **)a1, a2);
    if ( v4 >= 0 )
    {
      v5 = *(_QWORD *)(a1 + 16);
      v6 = *(_DWORD *)(a1 + 24) & 1;
      v9 = 0LL;
      v7 = v6 | 2;
      if ( (*(_BYTE *)(a1 + 24) & 2) == 0 )
        v7 = v6;
      v4 = SysMmCreateAdl(v3, *(_QWORD *)(a1 + 8), v5, v7, &v9);
      if ( v4 >= 0 )
      {
        *(_QWORD *)(a1 + 32) = v9;
        return 0LL;
      }
      SysMmUnlockObject(v3);
    }
    return (unsigned int)v4;
  }
  return result;
}
