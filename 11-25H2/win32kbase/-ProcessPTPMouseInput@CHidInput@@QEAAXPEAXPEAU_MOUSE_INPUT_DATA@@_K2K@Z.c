/*
 * XREFs of ?ProcessPTPMouseInput@CHidInput@@QEAAXPEAXPEAU_MOUSE_INPUT_DATA@@_K2K@Z @ 0x140212BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z @ 0x140210C00 (-SensorDoWorkAndWait@CRIMBase@@IEAAXW4DispatcherHandleName@1@@Z.c)
 */

void __fastcall CHidInput::ProcessPTPMouseInput(
        CHidInput *this,
        void *a2,
        struct _MOUSE_INPUT_DATA *a3,
        __int64 a4,
        unsigned __int64 a5,
        unsigned int a6)
{
  __int64 v6; // xmm1_8

  *((_QWORD *)this + 170) = a2;
  *(_OWORD *)((char *)this + 1368) = *(_OWORD *)&a3->UnitId;
  v6 = *(_QWORD *)&a3->LastY;
  *((_QWORD *)this + 175) = a5;
  *((_DWORD *)this + 352) = a6;
  *((_QWORD *)this + 173) = v6;
  *((_QWORD *)this + 174) = a4;
  CRIMBase::SensorDoWorkAndWait((__int64)this, 0xCu);
}
