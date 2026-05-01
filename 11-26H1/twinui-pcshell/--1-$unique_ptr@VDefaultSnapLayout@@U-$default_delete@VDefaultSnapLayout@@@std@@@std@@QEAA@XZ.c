/*
 * XREFs of ??1?$unique_ptr@VDefaultSnapLayout@@U?$default_delete@VDefaultSnapLayout@@@std@@@std@@QEAA@XZ @ 0x1805B5AC8
 * Callers:
 *     _anonymous_namespace_::CreateDefaultLayout @ 0x1805B61E0 (_anonymous_namespace_--CreateDefaultLayout.c)
 *     _anonymous_namespace_::CreateRowLayout @ 0x1805B624C (_anonymous_namespace_--CreateRowLayout.c)
 * Callees:
 *     ??_ESnapLayoutBase@@UEAAPEAXI@Z @ 0x18021C160 (--_ESnapLayoutBase@@UEAAPEAXI@Z.c)
 */

SnapLayoutBase *__fastcall std::unique_ptr<DefaultSnapLayout>::~unique_ptr<DefaultSnapLayout>(SnapLayoutBase **a1)
{
  SnapLayoutBase *v1; // rcx
  SnapLayoutBase *result; // rax

  v1 = *a1;
  if ( v1 )
    return SnapLayoutBase::`vector deleting destructor'(v1, 1);
  return result;
}
