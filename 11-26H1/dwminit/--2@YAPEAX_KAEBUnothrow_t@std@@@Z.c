/*
 * XREFs of ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180002880
 * Callers:
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x1800082A0 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 *     DwmpTerminateSessionProcess @ 0x18000E330 (DwmpTerminateSessionProcess.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180002F44 (--2@YAPEAX_K@Z.c)
 */

void *__fastcall operator new(size_t a1, const struct std::nothrow_t *a2)
{
  void *result; // rax

  try
  {
    result = operator new(a1);
  }
  catch ( ... )
  {
    return 0LL;
  }
  return result;
}
