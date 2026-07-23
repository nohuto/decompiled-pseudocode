/*
 * XREFs of _PnpCtxOpenContextNodeBaseKey @ 0x14089C288
 * Callers:
 *     PiDevCfgEnumDeviceKeys @ 0x140A42F04 (PiDevCfgEnumDeviceKeys.c)
 * Callees:
 *     _PnpCtxGetCachedNodeBaseKey @ 0x140958180 (_PnpCtxGetCachedNodeBaseKey.c)
 *     _PnpCtxRegOpenKey @ 0x1409582F0 (_PnpCtxRegOpenKey.c)
 */

__int64 __fastcall PnpCtxOpenContextNodeBaseKey(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        int a5,
        int a6,
        __int64 a7)
{
  int v7; // edi
  __int64 v8; // rdx
  int CachedNodeBaseKey; // ebx
  int v10; // eax
  __int64 v12; // [rsp+50h] [rbp+18h] BYREF

  v7 = PiPnpRtlCtx;
  v12 = 0LL;
  v8 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 56LL);
  if ( v8 == *(_QWORD *)&PiPnpRtlCtx + 56LL )
  {
    return (unsigned int)-1073741772;
  }
  else
  {
    CachedNodeBaseKey = PnpCtxGetCachedNodeBaseKey(*(_QWORD *)&PiPnpRtlCtx, v8 - 16, a4, &v12);
    if ( CachedNodeBaseKey >= 0 )
    {
      v10 = PnpCtxRegOpenKey(v7, v12, (unsigned int)&word_140B8A320, 0, 983103, a7);
      if ( v10 == -1073741444 )
      {
        return (unsigned int)-1073741595;
      }
      else if ( v10 < 0 )
      {
        return (unsigned int)v10;
      }
    }
  }
  return (unsigned int)CachedNodeBaseKey;
}
