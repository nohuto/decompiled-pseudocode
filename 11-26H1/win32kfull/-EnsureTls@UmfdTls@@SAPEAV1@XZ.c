/*
 * XREFs of ?EnsureTls@UmfdTls@@SAPEAV1@XZ @ 0x1400CF0F4
 * Callers:
 *     ?ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z @ 0x1400CEA00 (-ScrutinizeFontLoad@@YAJW4FontSource@@PEBG@Z.c)
 *     ?UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400CEFD8 (-UmfdEscXFORMOBJ_iGetXform@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z @ 0x1400CFC88 (-UmfdEscPATHOBJ_bCommonTo@@YAHP6AHPEAU_PATHOBJ@@PEAU_POINTFIX@@K@Z01K@Z.c)
 *     ?UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z @ 0x1400D02BC (-UmfdDispatchEscape@@YAXPEAUtagUMFD_ESCAPE_ARGUMENT@@@Z.c)
 *     ?UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z @ 0x1401C4878 (-UninitializeThread@UmfdHostLifeTimeManager@@SAXW4ThreadTerminationType@1@@Z.c)
 * Callees:
 *     ?Create@UmfdTls@@CAPEAV1@XZ @ 0x1401A6804 (-Create@UmfdTls@@CAPEAV1@XZ.c)
 */

struct UmfdTls *__fastcall UmfdTls::EnsureTls(__int64 a1)
{
  unsigned __int64 *CurrentThreadWin32Thread; // rax
  unsigned __int64 v2; // rcx
  __int64 v3; // rbx
  struct UmfdTls *result; // rax

  CurrentThreadWin32Thread = (unsigned __int64 *)PsGetCurrentThreadWin32Thread(a1);
  if ( CurrentThreadWin32Thread )
    v2 = *CurrentThreadWin32Thread;
  else
    v2 = 0LL;
  v3 = (v2 + 8) & ((unsigned __int128)-(__int128)v2 >> 64);
  if ( !v3 )
    return 0LL;
  result = *(struct UmfdTls **)(((v2 + 8) & ((unsigned __int128)-(__int128)v2 >> 64)) + 0x138);
  if ( !result )
  {
    result = UmfdTls::Create();
    *(_QWORD *)(v3 + 312) = result;
  }
  return result;
}
