/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x1400CC698
 * Callers:
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x1400CC0B0 (--0IOCPDispatcher@@IEAA@XZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x1400CC4F0 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ??0CRIMBase@@IEAA@K@Z @ 0x1400CC5FC (--0CRIMBase@@IEAA@K@Z.c)
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x1401580C8 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ?xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ @ 0x140222878 (-xxxProcessMouseEvent@CMouseProcessor@@QEAAXXZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

void __fastcall `vector constructor iterator'(char *a1, __int64 a2, __int64 a3, void (__fastcall *a4)(char *))
{
  do
  {
    a4(a1);
    a1 += a2;
    --a3;
  }
  while ( a3 );
}
