/*
 * XREFs of ?Opacity@CThumbnailAnimatedVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x1800CF230
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CThumbnailAnimatedVisual::Opacity(
        CThumbnailAnimatedVisual *this,
        const struct TA_TRANSFORM_OPACITY *a2)
{
  __int64 v2; // rax

  v2 = *((_QWORD *)this - 30);
  *((double *)this + 7) = *((float *)a2 + 5);
  (*(void (__fastcall **)(char *))(v2 + 88))((char *)this - 240);
  return 0LL;
}
