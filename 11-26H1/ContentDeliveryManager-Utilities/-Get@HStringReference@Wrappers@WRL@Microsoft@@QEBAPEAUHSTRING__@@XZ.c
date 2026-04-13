/*
 * XREFs of ?Get@HStringReference@Wrappers@WRL@Microsoft@@QEBAPEAUHSTRING__@@XZ @ 0x180030144
 * Callers:
 *     _CreativeFramework::TargetedContentLayoutHelpers::LayoutResolver::ProcessLayoutBindings_::_1_::catch$11 @ 0x1800BEC3F (_CreativeFramework--TargetedContentLayoutHelpers--LayoutResolver--ProcessLayoutBindings_--_1_--c.c)
 * Callees:
 *     <none>
 */

HSTRING __fastcall Microsoft::WRL::Wrappers::HStringReference::Get(Microsoft::WRL::Wrappers::HStringReference *this)
{
  return (HSTRING)*((_QWORD *)this + 3);
}
