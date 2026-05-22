/*
 * XREFs of ??1HIDDeviceCollection@@UEAA@XZ @ 0x1800DF858
 * Callers:
 *     ??1AugmentedInputDeviceCollection@@UEAA@XZ @ 0x1800D25E4 (--1AugmentedInputDeviceCollection@@UEAA@XZ.c)
 *     ??1SpatialRimDeviceCollection@@UEAA@XZ @ 0x1800D49F4 (--1SpatialRimDeviceCollection@@UEAA@XZ.c)
 *     ??1MobileButtonDeviceCollection@@UEAA@XZ @ 0x1800D9658 (--1MobileButtonDeviceCollection@@UEAA@XZ.c)
 *     ??1ConsumerControlDeviceCollection@@UEAA@XZ @ 0x1800DA964 (--1ConsumerControlDeviceCollection@@UEAA@XZ.c)
 *     ??1SystemControlDeviceCollection@@UEAA@XZ @ 0x1800DB564 (--1SystemControlDeviceCollection@@UEAA@XZ.c)
 *     ??1CallControlDeviceCollection@@UEAA@XZ @ 0x1800DB750 (--1CallControlDeviceCollection@@UEAA@XZ.c)
 *     ??_EHeatDeviceCollection@@MEAAPEAXI@Z @ 0x1800DBE70 (--_EHeatDeviceCollection@@MEAAPEAXI@Z.c)
 *     ??_EGazeDeviceCollection@@UEAAPEAXI@Z @ 0x1800DC220 (--_EGazeDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??1DockDeviceCollection@@UEAA@XZ @ 0x1800DCB1C (--1DockDeviceCollection@@UEAA@XZ.c)
 *     ??1DockableDeviceCollection@@UEAA@XZ @ 0x1800DDB7C (--1DockableDeviceCollection@@UEAA@XZ.c)
 *     ??_EPenDeviceCollection@@UEAAPEAXI@Z @ 0x1800DEFA0 (--_EPenDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_GHapticDeviceCollection@@UEAAPEAXI@Z @ 0x1800DF350 (--_GHapticDeviceCollection@@UEAAPEAXI@Z.c)
 *     ??_EHIDDeviceCollection@@UEAAPEAXI@Z @ 0x1800DF8B0 (--_EHIDDeviceCollection@@UEAAPEAXI@Z.c)
 *     _SpatialRimDeviceCollection::SpatialRimDeviceCollection_::_1_::dtor$0 @ 0x1801D64C6 (_SpatialRimDeviceCollection--SpatialRimDeviceCollection_--_1_--dtor$0.c)
 *     _DockableDeviceCollection::Create_::_1_::dtor$2 @ 0x1801D65E9 (_DockableDeviceCollection--Create_--_1_--dtor$2.c)
 *     _ConsumerControlDeviceCollection::ConsumerControlDeviceCollection_::_1_::dtor$0 @ 0x1801D70CA (_ConsumerControlDeviceCollection--ConsumerControlDeviceCollection_--_1_--dtor$0.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18009ADC0 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall HIDDeviceCollection::~HIDDeviceCollection(HIDDeviceCollection *this, const struct std::nothrow_t *a2)
{
  void *v3; // rcx

  *(_QWORD *)this = &HIDDeviceCollection::`vftable';
  v3 = (void *)*((_QWORD *)this + 343);
  if ( v3 )
  {
    operator delete(v3, a2);
    *((_QWORD *)this + 343) = 0LL;
  }
  *((_DWORD *)this + 688) = 0;
  *(_QWORD *)this = &RefCountedObject::`vftable';
}
