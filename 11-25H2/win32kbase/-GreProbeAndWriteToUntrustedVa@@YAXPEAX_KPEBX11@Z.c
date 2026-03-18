/*
 * XREFs of ?GreProbeAndWriteToUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x1400B61D0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall GreProbeAndWriteToUntrustedVa(
        void *a1,
        size_t Size,
        const void *Src,
        size_t a4,
        unsigned __int64 Alignment)
{
  ProbeForWrite(a1, Size, Alignment);
  if ( a4 >= Size )
    a4 = Size;
  memmove(a1, Src, a4);
}
