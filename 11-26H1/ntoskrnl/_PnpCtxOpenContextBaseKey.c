/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x140A42A2C
 * Callers:
 *     PiCMOpenClassKey @ 0x140971868 (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x140A42F04 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B42E9C (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x140957518 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, int a2, __int64 a3, unsigned int a4, __int64 a5)
{
  __int64 v5; // rdi
  int CachedContextBaseKey; // ebx
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)&PiPnpRtlCtx;
  v10 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(__int64 *)&PiPnpRtlCtx, a2, (__int64)&v10);
  if ( CachedContextBaseKey >= 0 )
  {
    v8 = PnpCtxRegOpenKey(v5, v10, (__int64)&word_140B8A320, 0, a4, a5);
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
