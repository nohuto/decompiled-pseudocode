/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x140074530
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x140073820 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x14019E28C (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400745D4 (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x140074990 (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x140093214 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 */

struct PDEV *__fastcall PDEV::Allocate(__int64 a1)
{
  int v1; // esi
  __int64 v2; // rax
  __int64 v3; // rdi
  struct PDEV *v4; // rbx
  struct PDEV *result; // rax

  v1 = a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4272LL) + 48LL) )
    return 0LL;
  v2 = NSInstrumentation::CTypeIsolation<909312,3552>::Allocate();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  v4 = (struct PDEV *)v2;
  if ( !v1 && !(unsigned __int8)AcquireReferenceCountedObjectHandle(1LL, v2, v2 + 3536) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>(v3);
    v4 = 0LL;
  }
  result = v4;
  *((_QWORD *)v4 + 191) = (char *)v4 + 1520;
  *((_QWORD *)v4 + 190) = (char *)v4 + 1520;
  *((_QWORD *)v4 + 193) = (char *)v4 + 1536;
  *((_QWORD *)v4 + 192) = (char *)v4 + 1536;
  return result;
}
