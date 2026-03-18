/*
 * XREFs of ??$FreeIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400D12E0
 * Callers:
 *     ?vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z @ 0x140105CD0 (-vDeleteRFONT@RFONTOBJ@@QEAAXPEAUHDEV__@@PEAVPFFOBJ@@H@Z.c)
 *     ?bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_XFORM@@QEAU_POINTL@@KKHHK@Z @ 0x14010651C (-bRealizeFont@RFONTOBJ@@QEAAHAEAVXDCOBJ@@PEAUHDEV__@@PEAUtagENUMLOGFONTEXDVW@@PEAVPFE@@PEAU_FD_X.c)
 *     ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x140328240 (-vRestartbRealizeFont@@YAXPEAVRFONT@@@Z.c)
 * Callees:
 *     ?Free@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400D131C (-Free@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 */

struct Gre::Base::SESSION_GLOBALS *__fastcall FreeIsolatedType<NSInstrumentation::CTypeIsolation<237568,928>>(
        Gre::Base *a1)
{
  struct Gre::Base::SESSION_GLOBALS *result; // rax
  __int64 v3; // rcx

  result = Gre::Base::Globals(a1);
  v3 = *(_QWORD *)(*((_QWORD *)result + 548) + 40LL);
  if ( v3 )
    return (struct Gre::Base::SESSION_GLOBALS *)NSInstrumentation::CTypeIsolation<237568,928>::Free(v3, a1);
  return result;
}
