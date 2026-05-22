/*
 * XREFs of ?SetConfigValue@TwoFingerGestureRecognizer@@UEAA_NPEBUGestureRecognizerConfigValue@@@Z @ 0x1801BA970
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall TwoFingerGestureRecognizer::SetConfigValue(
        TwoFingerGestureRecognizer *this,
        const struct GestureRecognizerConfigValue *a2)
{
  return (*(unsigned __int8 (__fastcall **)(char *))(*((_QWORD *)this + 2) + 56LL))((char *)this + 16)
      || (*(unsigned __int8 (__fastcall **)(char *, const struct GestureRecognizerConfigValue *))(*((_QWORD *)this + 11)
                                                                                                + 56LL))(
           (char *)this + 88,
           a2) != 0;
}
