/*
 * XREFs of ??_GDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAAPEAXI@Z @ 0x1805790EC
 * Callers:
 *     ??_EDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@WCA@EAAPEAXI@Z @ 0x1805790A0 (--_EDragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@WC.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1802C92A8 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEAA@XZ @ 0x180578DCC (--1DragDropSimulatorComponent@implementation@DragDropSimulator@Shell@Internal@Windows@winrt@@UEA.c)
 */

winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *__fastcall winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::`scalar deleting destructor'(
        winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent *this,
        char a2)
{
  winrt::Windows::Internal::Shell::DragDropSimulator::implementation::DragDropSimulatorComponent::~DragDropSimulatorComponent(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x70);
  return this;
}
