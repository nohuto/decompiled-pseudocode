/*
 * XREFs of ?vSetLOCALFONT@@YAXPEAVLFONT@@PEAX@Z @ 0x140103FA8
 * Callers:
 *     hfontCreate @ 0x140102814 (hfontCreate.c)
 * Callees:
 *     <none>
 */

void __fastcall vSetLOCALFONT(struct LFONT *a1, void *a2)
{
  struct Gre::Base::SESSION_GLOBALS *v4; // rax
  __int64 v5; // rbx

  v4 = Gre::Base::Globals(a1);
  v5 = HmgPentryFromPobj(v4, a1);
  *(_QWORD *)(v5 + 16) = GreEncodeUserModePointer(a2);
}
