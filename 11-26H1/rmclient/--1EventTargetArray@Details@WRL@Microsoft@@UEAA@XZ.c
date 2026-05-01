/*
 * XREFs of ??1EventTargetArray@Details@WRL@Microsoft@@UEAA@XZ @ 0x18000F2F8
 * Callers:
 *     ??_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z @ 0x18000F2C0 (--_GEventTargetArray@Details@WRL@Microsoft@@UEAAPEAXI@Z.c)
 * Callees:
 *     ??_E?$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z @ 0x18000F338 (--_E-$ComPtr@UIUnknown@@@WRL@Microsoft@@QEAAPEAXI@Z.c)
 *     ??3@YAXPEAX@Z @ 0x18001283C (--3@YAXPEAX@Z.c)
 */

void __fastcall Microsoft::WRL::Details::EventTargetArray::~EventTargetArray(
        Microsoft::WRL::Details::EventTargetArray *this)
{
  *(_QWORD *)this = &Microsoft::WRL::Details::EventTargetArray::`vftable';
  if ( *((_QWORD *)this + 2) )
    Microsoft::WRL::ComPtr<IUnknown>::`vector deleting destructor'();
  operator delete(*((void **)this + 4));
  *((_DWORD *)this + 3) = -1073741823;
}
