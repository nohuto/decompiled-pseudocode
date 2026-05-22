/*
 * XREFs of ?UnregisterSupportedInputUpdateObserver@DWMInputRouter@@UEAAJPEAUISupportedInputUpdateObserver@@@Z @ 0x1801A41C0
 * Callers:
 *     <none>
 * Callees:
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ??$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z @ 0x1800A9658 (--$_Find_vectorized@QEAVInputSite@@PEAV1@@std@@YAPEBQEAVInputSite@@QEBQEAV1@0QEAV1@@Z.c)
 */

__int64 __fastcall DWMInputRouter::UnregisterSupportedInputUpdateObserver(
        const __m128i **this,
        struct ISupportedInputUpdateObserver *a2)
{
  __m128i *v3; // rax

  v3 = (__m128i *)std::_Find_vectorized<InputSite * const,InputSite *>(this[54], this[55], (unsigned __int64)a2);
  std::_Copy_memmove<enum _Button *,enum _Button *>(&v3->m128i_u64[1], (__int64)this[55], v3);
  this[55] = (const __m128i *)((char *)this[55] - 8);
  return 0LL;
}
