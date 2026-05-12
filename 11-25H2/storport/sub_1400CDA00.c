/*
 * XREFs of sub_1400CDA00 @ 0x1400CDA00
 * Callers:
 *     sub_14018D030 @ 0x14018D030 (sub_14018D030.c)
 *     sub_14018F9FC @ 0x14018F9FC (sub_14018F9FC.c)
 *     sub_14018FF50 @ 0x14018FF50 (sub_14018FF50.c)
 *     sub_14019188C @ 0x14019188C (sub_14019188C.c)
 * Callees:
 *     sub_1400D1198 @ 0x1400D1198 (sub_1400D1198.c)
 *     sub_1400D1328 @ 0x1400D1328 (sub_1400D1328.c)
 *     sub_1400D8AD8 @ 0x1400D8AD8 (sub_1400D8AD8.c)
 */

__int64 __fastcall sub_1400CDA00(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 v4; // r15
  __int64 v7; // rbx
  _QWORD *v8; // rax
  _QWORD *v9; // rbx
  _QWORD *i; // r14
  _QWORD *v11; // rsi

  v4 = 0LL;
  if ( !a3 || a4 )
  {
    if ( a4 )
      *a4 = 0LL;
    v7 = *(_QWORD *)(a1 + 592);
    KeEnterCriticalRegion();
    ExAcquireResourceSharedLite((PERESOURCE)(v7 + 24), 1u);
    v8 = *(_QWORD **)(a1 + 592);
    v9 = (_QWORD *)*v8;
    if ( (_QWORD *)*v8 != v8 )
    {
      do
      {
        if ( (int)sub_1400D1328(v9 - 3) >= 0 )
        {
          ExAcquireResourceSharedLite((PERESOURCE)(v9 + 45), 1u);
          for ( i = (_QWORD *)v9[42]; i != v9 + 42; i = (_QWORD *)*i )
          {
            v11 = i - 1;
            if ( (int)sub_1400D8AD8(i - 1) >= 0 )
            {
              v4 = sub_1400D1198(i - 1, a2);
              if ( v4 )
              {
                if ( a3 )
                  *a4 = v11;
                else
                  ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[5]);
                break;
              }
              ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v11[5]);
            }
          }
          ExReleaseResourceLite((PERESOURCE)(v9 + 45));
          ExReleaseRundownProtectionCacheAware((PEX_RUNDOWN_REF_CACHE_AWARE)v9[4]);
          if ( v4 )
            break;
        }
        v9 = (_QWORD *)*v9;
      }
      while ( v9 != *(_QWORD **)(a1 + 592) );
    }
    ExReleaseResourceLite((PERESOURCE)(*(_QWORD *)(a1 + 592) + 24LL));
    KeLeaveCriticalRegion();
  }
  return v4;
}
