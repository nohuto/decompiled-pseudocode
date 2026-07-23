/*
 * XREFs of _PnpCtxRegDeletePath @ 0x140A46B38
 * Callers:
 *     PiDevCfgClearDeviceMigrationNode @ 0x140A4661C (PiDevCfgClearDeviceMigrationNode.c)
 * Callees:
 *     _RegRtlDeletePathInternal @ 0x140A3F340 (_RegRtlDeletePathInternal.c)
 */

__int64 __fastcall PnpCtxRegDeletePath(__int64 a1, char *a2, const wchar_t *a3, char a4)
{
  __int64 v5; // rax
  __int64 v6; // r9
  int v8; // [rsp+20h] [rbp-18h]

  if ( *(_QWORD *)&PiPnpRtlCtx && (v5 = *(_QWORD *)(*(_QWORD *)&PiPnpRtlCtx + 224LL)) != 0 )
    v6 = *(_QWORD *)(v5 + 8);
  else
    v6 = 0LL;
  return RegRtlDeletePathInternal(a2, a3, a4, v6, v8);
}
