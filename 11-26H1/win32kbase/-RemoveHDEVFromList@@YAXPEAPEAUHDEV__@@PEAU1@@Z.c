/*
 * XREFs of ?RemoveHDEVFromList@@YAXPEAPEAUHDEV__@@PEAU1@@Z @ 0x14018FD00
 * Callers:
 *     ?vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z @ 0x1400C97A0 (-vUnreferencePdev@PDEVOBJ@@QEAAXAEAUSESSION_GLOBALS@Base@Gre@@@Z.c)
 *     _PDEVOBJ::PDEVOBJ_::_2_::_lambda_1_::operator() @ 0x1401ED754 (_PDEVOBJ--PDEVOBJ_--_2_--_lambda_1_--operator().c)
 * Callees:
 *     <none>
 */

void __fastcall RemoveHDEVFromList(HDEV *a1, HDEV a2)
{
  _QWORD *v2; // r8

  v2 = *a1;
  if ( *a1 == a2 )
  {
    *a1 = *(HDEV *)a2;
  }
  else
  {
    while ( v2 )
    {
      if ( (HDEV)*v2 == a2 )
      {
        *v2 = *(_QWORD *)a2;
        return;
      }
      v2 = (_QWORD *)*v2;
    }
  }
}
