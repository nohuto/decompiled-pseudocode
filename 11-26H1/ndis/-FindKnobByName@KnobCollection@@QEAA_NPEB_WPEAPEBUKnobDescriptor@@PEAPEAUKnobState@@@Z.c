/*
 * XREFs of ?FindKnobByName@KnobCollection@@QEAA_NPEB_WPEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x14014FF04
 * Callers:
 *     ?FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUKnobState@@@Z @ 0x14014F408 (-FindKnobByName@KnobNamespace@@AEAA_NPEB_WPEAPEAVKnobCollection@@PEAPEBUKnobDescriptor@@PEAPEAUK.c)
 * Callees:
 *     <none>
 */

bool __fastcall KnobCollection::FindKnobByName(
        KnobCollection *this,
        const wchar_t *a2,
        const struct KnobDescriptor **a3,
        struct KnobState **a4)
{
  unsigned __int64 v4; // rbx
  __int64 v5; // rsi
  bool result; // al

  v4 = 0LL;
  *a3 = 0LL;
  v5 = 0LL;
  *a4 = 0LL;
  while ( v4 < *((_QWORD *)this + 7) )
  {
    if ( !_wcsicmp(a2, *(const wchar_t **)(*((_QWORD *)this + 8) + v5)) )
    {
      result = 1;
      *a3 = (const struct KnobDescriptor *)(*((_QWORD *)this + 8) + 48 * v4);
      *a4 = (KnobCollection *)((char *)this + 24 * v4 + 72);
      return result;
    }
    ++v4;
    v5 += 48LL;
  }
  return 0;
}
