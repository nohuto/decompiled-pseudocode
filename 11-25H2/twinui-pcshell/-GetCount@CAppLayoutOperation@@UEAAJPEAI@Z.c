/*
 * XREFs of ?GetCount@CAppLayoutOperation@@UEAAJPEAI@Z @ 0x18069B590
 * Callers:
 *     ?GetCount@CAppLayoutOperation@@W7EAAJPEAI@Z @ 0x1804F21E0 (-GetCount@CAppLayoutOperation@@W7EAAJPEAI@Z.c)
 * Callees:
 *     ?_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ @ 0x18069CFD0 (-_GenerateOperationItemList@CAppLayoutOperation@@IEAAJXZ.c)
 */

__int64 __fastcall CAppLayoutOperation::GetCount(CAppLayoutOperation *this, unsigned int *a2)
{
  __int64 result; // rax

  *a2 = 0;
  result = CAppLayoutOperation::_GenerateOperationItemList(this);
  if ( (int)result >= 0 )
    *a2 = *((_DWORD *)this + 32);
  return result;
}
