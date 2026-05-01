/*
 * XREFs of ??0_variant_t@@QEAA@PEBG@Z @ 0x180239438
 * Callers:
 *     ?RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ @ 0x1803E79EC (-RuntimeClassInitialize@PWSLayoutPolicyManager@@QEAAJXZ.c)
 * Callees:
 *     ?_com_issue_error@@YAXJ@Z @ 0x1802DEAD4 (-_com_issue_error@@YAXJ@Z.c)
 */

_variant_t *__fastcall _variant_t::_variant_t(_variant_t *this, const unsigned __int16 *a2)
{
  BSTR v3; // rax
  _variant_t *result; // rax

  v3 = SysAllocString(
         L"xmlns:d='http://schemas.microsoft.com/Start/2014/FullDefaultLayout' xmlns:l='http://schemas.microsoft.com/Start"
          "/2014/LayoutModification' xmlns:t='http://schemas.microsoft.com/Start/2014/TaskbarLayout'");
  if ( !v3 )
    _com_issue_error((char *)0x8007000ELL);
  *((_QWORD *)this + 1) = v3;
  result = this;
  *(_WORD *)this = 8;
  return result;
}
