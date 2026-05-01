/*
 * XREFs of ?GetNewAppLayout@CAppLayoutOperation@@UEAAJPEAPEAUIAppLayout@@@Z @ 0x1806C3660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAppLayoutOperation::GetNewAppLayout(CAppLayoutOperation *this, struct IAppLayout **a2)
{
  return Microsoft::WRL::ComPtr<IAppLayoutBuilder>::CopyTo<IAppLayout>((_QWORD *)this + 4, (__int64)a2);
}
