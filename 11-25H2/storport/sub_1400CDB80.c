/*
 * XREFs of sub_1400CDB80 @ 0x1400CDB80
 * Callers:
 *     sub_140189ED8 @ 0x140189ED8 (sub_140189ED8.c)
 *     sub_14018AB38 @ 0x14018AB38 (sub_14018AB38.c)
 *     sub_14018E1A8 @ 0x14018E1A8 (sub_14018E1A8.c)
 *     sub_140192178 @ 0x140192178 (sub_140192178.c)
 * Callees:
 *     sub_1400D1234 @ 0x1400D1234 (sub_1400D1234.c)
 *     sub_1400D1328 @ 0x1400D1328 (sub_1400D1328.c)
 *     sub_1400D8AD8 @ 0x1400D8AD8 (sub_1400D8AD8.c)
 */

__int64 __fastcall sub_1400CDB80(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // rsi
  __int64 v9; // rbx
  _QWORD **v10; // rax
  _QWORD *v11; // r14
  _QWORD *v12; // rbx
  __int64 v13; // rax

  v4 = 0LL;
  if ( a3 && !a4 )
    return v4;
  if ( a4 )
    *a4 = 0LL;
  v9 = *(_QWORD *)(a1 + 592);
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v9 + 24), 1u);
  v10 = *(_QWORD ***)(a1 + 592);
  v11 = *v10;
  if ( *v10 == v10 )
    goto LABEL_16;
  while ( 1 )
  {
    v12 = v11 - 3;
    if ( (int)sub_1400D1328(v11 - 3) >= 0 )
      break;
LABEL_9:
    v11 = (_QWORD *)*v11;
    if ( v11 == *(_QWORD **)(a1 + 592) )
      goto LABEL_16;
  }
  v13 = sub_1400D1234(v11 - 3, a2);
  v4 = v13;
  if ( !v13 )
  {
    ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[7]);
    goto LABEL_9;
  }
  if ( (int)sub_1400D8AD8(v13) < 0 )
  {
    v4 = 0LL;
  }
  else if ( a3 )
  {
    *a4 = v12;
    goto LABEL_16;
  }
  ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v12[7]);
LABEL_16:
  ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
  KeLeaveCriticalRegion();
  return v4;
}
