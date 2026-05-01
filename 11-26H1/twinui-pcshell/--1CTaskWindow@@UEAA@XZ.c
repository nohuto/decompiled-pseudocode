/*
 * XREFs of ??1CTaskWindow@@UEAA@XZ @ 0x1802BB634
 * Callers:
 *     ??_GCTaskWindow@@UEAAPEAXI@Z @ 0x18022E8A0 (--_GCTaskWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18001AE8C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1TASK_WINDOW@CTaskWindow@@QEAA@XZ @ 0x1802BB668 (--1TASK_WINDOW@CTaskWindow@@QEAA@XZ.c)
 */

void __fastcall CTaskWindow::~CTaskWindow(CTaskWindow *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  CTaskWindow::TASK_WINDOW::~TASK_WINDOW((CTaskWindow *)((char *)this + 40));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>((__int64)this);
}
