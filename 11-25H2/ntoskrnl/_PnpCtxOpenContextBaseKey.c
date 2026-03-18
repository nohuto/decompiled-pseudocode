/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x14095DB7C
 * Callers:
 *     PiCMOpenClassKey @ 0x14095CAF8 (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x14095F65C (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140A968D4 (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _PnpCtxRegOpenKey @ 0x1408C9B94 (_PnpCtxRegOpenKey.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1408C9F0C (_PnpCtxGetCachedContextBaseKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  int CachedContextBaseKey; // ebx
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  v10 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, a2, &v10);
  if ( CachedContextBaseKey >= 0 )
  {
    v8 = PnpCtxRegOpenKey(v5, v10, (__int64)&word_140AD8570, 0, a4, a5);
    if ( v8 == -1073741444 )
    {
      return (unsigned int)-1073741595;
    }
    else if ( v8 < 0 )
    {
      return (unsigned int)v8;
    }
  }
  return (unsigned int)CachedContextBaseKey;
}
