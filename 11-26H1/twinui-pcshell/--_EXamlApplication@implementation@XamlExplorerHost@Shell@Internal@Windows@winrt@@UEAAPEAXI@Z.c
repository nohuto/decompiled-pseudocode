/*
 * XREFs of ??_EXamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x18044B0C0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1802C9C24 (--3@YAXPEAX@Z.c)
 *     ??1XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x18044AED8 (--1XamlApplication@implementation@XamlExplorerHost@Shell@Internal@Windows@winrt@@UEAA@XZ.c)
 */

void **__fastcall winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::`vector deleting destructor'(
        void **this,
        char a2)
{
  winrt::Windows::Internal::Shell::XamlExplorerHost::implementation::XamlApplication::~XamlApplication(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
