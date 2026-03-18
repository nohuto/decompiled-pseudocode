/*
 * XREFs of ?Allocate@PDEV@@SAPEAV1@H@Z @ 0x1400C9450
 * Callers:
 *     ??0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z @ 0x1400C85F0 (--0PDEVOBJ@@QEAA@PEAU_LDEV@@PEAU_devicemodeW@@PEBG22PEAXPEAU_GDIINFO@@PEAUtagDEVINFO@@HKK@Z.c)
 *     ??0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z @ 0x1401ED038 (--0PDEVOBJ@@QEAA@PEAUHDEV__@@K@Z.c)
 * Callees:
 *     ?AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z @ 0x14001161C (-AcquireReferenceCountedObjectHandle@@YA_NW4ReferenceTrackerCountedType@@PEAXPEAPEAX@Z.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400C6CB8 (--$FreeIsolatedType@V-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?Allocate@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1401BD87C (-Allocate@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

struct PDEV *__fastcall PDEV::Allocate(__int64 a1)
{
  int v1; // edi
  struct PDEV *v2; // rax
  struct PDEV *v3; // rbx
  struct PDEV *result; // rax

  v1 = a1;
  if ( !*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetSessionState(a1) + 88) + 4384LL) + 48LL) )
    return 0LL;
  v2 = (struct PDEV *)NSInstrumentation::CTypeIsolation<909312,3552>::Allocate();
  v3 = v2;
  if ( !v2 )
    return 0LL;
  if ( !v1 && !AcquireReferenceCountedObjectHandle(1LL, v2, (_QWORD *)v2 + 442) )
  {
    FreeIsolatedType<NSInstrumentation::CTypeIsolation<909312,3552>>((__int64)v3);
    v3 = 0LL;
  }
  result = v3;
  *((_QWORD *)v3 + 191) = (char *)v3 + 1520;
  *((_QWORD *)v3 + 190) = (char *)v3 + 1520;
  *((_QWORD *)v3 + 193) = (char *)v3 + 1536;
  *((_QWORD *)v3 + 192) = (char *)v3 + 1536;
  return result;
}
