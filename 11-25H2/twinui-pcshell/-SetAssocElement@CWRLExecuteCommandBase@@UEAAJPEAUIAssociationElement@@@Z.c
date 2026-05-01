/*
 * XREFs of ?SetAssocElement@CWRLExecuteCommandBase@@UEAAJPEAUIAssociationElement@@@Z @ 0x180449140
 * Callers:
 *     <none>
 * Callees:
 *     ??$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z @ 0x1802C068C (--$SafeRelease@UIShellItemArray@@@@YAXPEAPEAUIShellItemArray@@@Z.c)
 */

__int64 __fastcall CWRLExecuteCommandBase::SetAssocElement(CWRLExecuteCommandBase *this, IUnknown *a2)
{
  SafeRelease<IShellItemArray>((__int64 *)this + 13);
  IUnknown_Set((IUnknown **)this + 12, a2);
  return 0LL;
}
