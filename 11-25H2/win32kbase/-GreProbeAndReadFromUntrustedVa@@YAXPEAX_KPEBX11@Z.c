/*
 * XREFs of ?GreProbeAndReadFromUntrustedVa@@YAXPEAX_KPEBX11@Z @ 0x1400BA8A0
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140243540 (memmove.c)
 */

void __fastcall GreProbeAndReadFromUntrustedVa(
        void *a1,
        size_t Size,
        unsigned __int64 Src,
        size_t a4,
        unsigned __int64 a5)
{
  if ( a4 && ((a5 - 1) & Src) != 0 )
    ExRaiseDatatypeMisalignment();
  if ( a4 >= Size )
    a4 = Size;
  memmove(a1, (const void *)Src, a4);
}
