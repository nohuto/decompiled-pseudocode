/*
 * XREFs of ?RemoveInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180195240
 * Callers:
 *     ?RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z @ 0x180191344 (-RemoveRIMDevice@HapticDeviceManager@@QEAAXPEAX@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?attach@?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z @ 0x180095E18 (-attach@-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenInterface@@@Z.c)
 *     ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800C80D4 (--$-9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ?RemoveInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C2D0 (-RemoveInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?Haptics@PenInterface@@QEAA?AV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180194CF8 (-Haptics@PenInterface@@QEAA-AV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenDevice::RemoveInterface(_QWORD *a1, __int64 *a2)
{
  __int64 *v4; // rbp
  __int64 *v5; // rax
  __int64 *v6; // rbx
  __int64 v7; // rdx
  PenHapticDevice **v8; // rcx
  PenHapticDevice *v9; // rbx
  __int64 *v10; // rax
  __int64 v12; // [rsp+40h] [rbp+8h] BYREF
  __int64 *v13; // [rsp+48h] [rbp+10h]

  v13 = a2;
  v4 = (__int64 *)a1[11];
  v5 = (__int64 *)a1[10];
  if ( v5 != v4 )
  {
    while ( 1 )
    {
      v6 = v5 + 1;
      if ( *v5 == *a2 )
        break;
      ++v5;
      if ( v6 == v4 )
        goto LABEL_8;
    }
    while ( v6 != v4 )
    {
      v7 = *v6;
      *v6 = 0LL;
      wil::com_ptr_t<PenInterface,wil::err_exception_policy>::attach(v6++ - 1, v7);
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)(a1[11] - 8LL));
    a1[11] -= 8LL;
  }
LABEL_8:
  if ( wil::operator!=<PenHapticDevice,wil::err_exception_policy>(a1 + 13) )
  {
    v9 = *v8;
    v10 = PenInterface::Haptics(*a2, &v12);
    PenHapticDevice::RemoveInterface(v9, v10);
  }
  return wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(a2);
}
