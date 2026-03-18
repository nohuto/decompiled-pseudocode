/*
 * XREFs of ?HFFToPPFF@PFTOBJ@@QEAAPEAVPFF@@_K@Z @ 0x14030F01C
 * Callers:
 *     ?TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z @ 0x1403387C0 (-TryResurrectPffApcRoutine@UmfdHostLifeTimeManager@@CAXPEAX00@Z.c)
 * Callees:
 *     ?SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z @ 0x14030F07C (-SkipInvalidPff@@YAPEAVPFF@@PEAV1@@Z.c)
 */

struct PFF *__fastcall PFTOBJ::HFFToPPFF(PFTOBJ *this, __int64 a2)
{
  __int64 v2; // r8
  __int64 i; // rbx
  struct PFF *j; // rcx
  struct PFF *result; // rax

  v2 = *(_QWORD *)this;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(*(_QWORD *)this + 24LL); i = (unsigned int)(i + 1) )
  {
    for ( j = *(struct PFF **)(v2 + 8 * i + 40); ; j = (struct PFF *)*((_QWORD *)result + 1) )
    {
      result = SkipInvalidPff(j);
      if ( !result )
        break;
      if ( a2 == *((_QWORD *)result + 11) )
        return result;
    }
    v2 = *(_QWORD *)this;
  }
  return 0LL;
}
