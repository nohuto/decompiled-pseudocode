/*
 * XREFs of ?MulCompletePDEV@@YAXPEAUDHPDEV__@@PEAUHDEV__@@@Z @ 0x1401F27B0
 * Callers:
 *     <none>
 * Callees:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     ?vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C9E10 (-vReferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 */

void __fastcall MulCompletePDEV(struct DHPDEV__ *a1, HDEV a2)
{
  HDEV v2; // rbp
  struct Gre::Base::SESSION_GLOBALS *v5; // r15
  HDEV *i; // rbx

  v2 = (HDEV)*((_QWORD *)a1 + 4);
  v5 = *(struct Gre::Base::SESSION_GLOBALS **)(W32GetSessionState(a1) + 88);
  if ( v2 != a2 )
  {
    if ( *((HDEV *)a1 + 5) == a2 )
      *((_QWORD *)a1 + 5) = v2;
    for ( i = *(HDEV **)a1; i; i = (HDEV *)*i )
    {
      if ( i[7] == a2 )
      {
        PDEVOBJ::vUnreferencePdev(i + 7, v5);
        i[6] = v2;
        i[7] = v2;
        PDEVOBJ::vReferencePdev((PDEVOBJ *)(i + 7), (struct _ERESOURCE **)v5);
      }
    }
    *((_QWORD *)a1 + 4) = a2;
  }
}
