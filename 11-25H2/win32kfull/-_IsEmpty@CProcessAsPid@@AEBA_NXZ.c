/*
 * XREFs of ?_IsEmpty@CProcessAsPid@@AEBA_NXZ @ 0x140291018
 * Callers:
 *     ?IsValid@CProcessAsPid@@QEBA_NXZ @ 0x140222764 (-IsValid@CProcessAsPid@@QEBA_NXZ.c)
 * Callees:
 *     <none>
 */

bool __fastcall CProcessAsPid::_IsEmpty(CProcessAsPid *this)
{
  return *(_QWORD *)this == 0LL;
}
