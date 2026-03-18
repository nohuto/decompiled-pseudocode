/*
 * XREFs of ??$AllocateIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAPEAXXZ @ 0x1400D3580
 * Callers:
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 * Callees:
 *     ?Allocate@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ @ 0x1400D35B8 (-Allocate@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAPEAXXZ.c)
 */

__int64 __fastcall AllocateIsolatedType<NSInstrumentation::CTypeIsolation<237568,928>>(Gre::Base *a1)
{
  if ( *(_QWORD *)(*((_QWORD *)Gre::Base::Globals(a1) + 548) + 40LL) )
    return NSInstrumentation::CTypeIsolation<237568,928>::Allocate();
  else
    return 0LL;
}
