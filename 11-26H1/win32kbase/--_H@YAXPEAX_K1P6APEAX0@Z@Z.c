/*
 * XREFs of ??_H@YAXPEAX_K1P6APEAX0@Z@Z @ 0x140110C80
 * Callers:
 *     ??0CMouseProcessor@@IEAA@XZ @ 0x14010FE18 (--0CMouseProcessor@@IEAA@XZ.c)
 *     ??0CConnection@DirectComposition@@AEAA@XZ @ 0x140110818 (--0CConnection@DirectComposition@@AEAA@XZ.c)
 *     ??0CRIMBase@@IEAA@K@Z @ 0x140110AC8 (--0CRIMBase@@IEAA@K@Z.c)
 *     ??0IOCPDispatcher@@IEAA@XZ @ 0x140110BE8 (--0IOCPDispatcher@@IEAA@XZ.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
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
