/*
 * XREFs of ?CreateDevice@DockDeviceCollection@@MEAAJPEAX0KKPEAPEAVRIMDevice@@@Z @ 0x1800DCD40
 * Callers:
 *     <none>
 * Callees:
 *     ??$make_unique@VDockDevice@@AEAPEAXAEAPEAXAEAKAEAK$0A@@std@@YA?AV?$unique_ptr@VDockDevice@@U?$default_delete@VDockDevice@@@std@@@0@AEAPEAX0AEAK1@Z @ 0x1800DC9FC (--$make_unique@VDockDevice@@AEAPEAXAEAPEAXAEAKAEAK$0A@@std@@YA-AV-$unique_ptr@VDockDevice@@U-$de.c)
 *     ??1?$unique_ptr@VDockDevice@@U?$default_delete@VDockDevice@@@std@@@std@@QEAA@XZ @ 0x1800DCAF4 (--1-$unique_ptr@VDockDevice@@U-$default_delete@VDockDevice@@@std@@@std@@QEAA@XZ.c)
 */

__int64 __fastcall DockDeviceCollection::CreateDevice(
        DockDeviceCollection *this,
        void *a2,
        __int64 a3,
        int a4,
        unsigned int a5,
        struct RIMDevice **a6)
{
  struct RIMDevice *v6; // rcx
  __int64 (__fastcall ***v8[3])(_QWORD, __int64); // [rsp+30h] [rbp-18h] BYREF
  void *v9; // [rsp+58h] [rbp+10h] BYREF
  __int64 v10; // [rsp+60h] [rbp+18h] BYREF
  int v11; // [rsp+68h] [rbp+20h] BYREF

  v11 = a4;
  v10 = a3;
  v9 = a2;
  std::make_unique<DockDevice,void * &,void * &,unsigned long &,unsigned long &,0>(v8, &v9, &v10, &v11, (int *)&a5);
  v6 = (struct RIMDevice *)v8[0];
  v8[0] = 0LL;
  *a6 = v6;
  std::unique_ptr<DockDevice>::~unique_ptr<DockDevice>(v8);
  return 0LL;
}
