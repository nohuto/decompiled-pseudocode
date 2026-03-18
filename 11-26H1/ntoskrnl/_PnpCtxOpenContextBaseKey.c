/*
 * XREFs of _PnpCtxOpenContextBaseKey @ 0x140988300
 * Callers:
 *     PiCMOpenClassKey @ 0x140916DFC (PiCMOpenClassKey.c)
 *     PiDevCfgEnumDeviceKeys @ 0x1409887D8 (PiDevCfgEnumDeviceKeys.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140B40E8C (PiDevCfgResolveVariableKeyHandle.c)
 * Callees:
 *     _PnpCtxGetCachedContextBaseKey @ 0x140996AB8 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x140997890 (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxOpenContextBaseKey(__int64 a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v5; // edi
  int CachedContextBaseKey; // ebx
  int v8; // eax
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF

  v5 = PiPnpRtlCtx;
  v10 = 0LL;
  CachedContextBaseKey = PnpCtxGetCachedContextBaseKey(*(_QWORD *)&PiPnpRtlCtx, a2, &v10);
  if ( CachedContextBaseKey >= 0 )
  {
    v8 = PnpCtxRegOpenKey(v5, v10, (unsigned int)&word_140B814F0, 0, a4, a5);
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
