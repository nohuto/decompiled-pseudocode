/*
 * XREFs of ?vRestartbRealizeFont@@YAXPEAVRFONT@@@Z @ 0x14030FB90
 * Callers:
 *     <none>
 * Callees:
 *     ??1RFONTOBJ@@QEAA@XZ @ 0x140017244 (--1RFONTOBJ@@QEAA@XZ.c)
 *     ?vDeleteRFONTRef@PFFOBJ@@QEAAXXZ @ 0x14001774C (-vDeleteRFONTRef@PFFOBJ@@QEAAXXZ.c)
 *     ??$FreeIsolatedType@V?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z @ 0x1400B5328 (--$FreeIsolatedType@V-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@@@YAXPEAX@Z.c)
 *     ?vDestroyFont@RFONTOBJ@@QEAAXH@Z @ 0x14021CB58 (-vDestroyFont@RFONTOBJ@@QEAAXH@Z.c)
 */

void __fastcall vRestartbRealizeFont(struct RFONT *a1)
{
  __int64 v1; // rax
  _QWORD v3[3]; // [rsp+20h] [rbp-18h] BYREF
  struct _FONTOBJ *v4; // [rsp+40h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 16);
  v4 = (struct _FONTOBJ *)a1;
  v3[0] = v1;
  RFONTOBJ::vDestroyFont(&v4, 0LL);
  PFFOBJ::vDeleteRFONTRef((PFFOBJ *)v3);
  FreeIsolatedType<NSInstrumentation::CTypeIsolation<237568,928>>(a1);
  v4 = 0LL;
  RFONTOBJ::~RFONTOBJ((RFONTOBJ *)&v4);
}
