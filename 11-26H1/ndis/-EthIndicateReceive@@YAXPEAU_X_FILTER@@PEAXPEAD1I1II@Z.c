/*
 * XREFs of ?EthIndicateReceive@@YAXPEAU_X_FILTER@@PEAXPEAD1I1II@Z @ 0x140068080
 * Callers:
 *     <none>
 * Callees:
 *     ndisLWM5IndicateReceive @ 0x1400680C0 (ndisLWM5IndicateReceive.c)
 */

void __fastcall EthIndicateReceive(
        struct _X_FILTER *a1,
        void *a2,
        char *a3,
        void *a4,
        unsigned int a5,
        void *a6,
        unsigned int a7,
        unsigned int a8)
{
  ndisLWM5IndicateReceive(a1, a2, a4, a5, a6, a7, a8);
}
