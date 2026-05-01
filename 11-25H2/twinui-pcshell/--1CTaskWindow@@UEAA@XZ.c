/*
 * XREFs of ??1CTaskWindow@@UEAA@XZ @ 0x1802C46E4
 * Callers:
 *     ??_GCTaskWindow@@UEAAPEAXI@Z @ 0x18023C760 (--_GCTaskWindow@@UEAAPEAXI@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180014E98 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1TASK_WINDOW@CTaskWindow@@QEAA@XZ @ 0x1802C4718 (--1TASK_WINDOW@CTaskWindow@@QEAA@XZ.c)
 */

void __fastcall CTaskWindow::~CTaskWindow(CTaskWindow *this)
{
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 17);
  CTaskWindow::TASK_WINDOW::~TASK_WINDOW((CTaskWindow *)((char *)this + 40));
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>::~RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,ITaskWindow>((__int64)this);
}
