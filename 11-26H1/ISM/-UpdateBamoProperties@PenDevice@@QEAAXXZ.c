/*
 * XREFs of ?UpdateBamoProperties@PenDevice@@QEAAXXZ @ 0x180195658
 * Callers:
 *     ?AttachInterface@PenDevice@@QEAAXV?$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x180194C8C (-AttachInterface@PenDevice@@QEAAXV-$com_ptr_t@VPenInterface@@Uerr_exception_policy@wil@@@wil@@@Z.c)
 * Callees:
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800244C4 (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0?$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z @ 0x180024524 (--0-$com_ptr_t@VInputSite@@Uerr_exception_policy@wil@@@wil@@QEAA@PEAVInputSite@@@Z.c)
 *     ?GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ @ 0x1800292CC (-GetBamoServerConnection@ISMStatics@@SAPEAVInputSystemServerConnection@@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18009ADFC (--2@YAPEAX_K@Z.c)
 *     ??$?8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800AAC30 (--$-8VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??$?9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@0@$$T@Z @ 0x1800C80D4 (--$-9VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@YA_NAEBV-$com_ptr_t@VPenHapticDevice@@Ue.c)
 *     ??0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z @ 0x18018BFD8 (--0PenHapticDevice@@QEAA@PEAVBamoConnection@ISMBamos_AutoBamos@@@Z.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18018C060 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?AttachInterface@PenHapticDevice@@QEAAXV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@@Z @ 0x18018C25C (-AttachInterface@PenHapticDevice@@QEAAXV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@w.c)
 *     ?Haptics@PenInterface@@QEAA?AV?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180194CF8 (-Haptics@PenInterface@@QEAA-AV-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@.c)
 *     ?attach@?$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenHapticDevice@@@Z @ 0x180195944 (-attach@-$com_ptr_t@VPenHapticDevice@@Uerr_exception_policy@wil@@@wil@@QEAAXPEAVPenHapticDevice@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall PenDevice::UpdateBamoProperties(PenDevice *this)
{
  __int64 *v2; // rdi
  __int64 *v3; // rbp
  __int64 *v4; // rax
  bool v5; // bl
  PenHapticDevice **v6; // r14
  struct ISMBamos_AutoBamos::BamoConnection *BamoServerConnection; // rbx
  PenHapticDevice *v8; // rax
  PenHapticDevice *v9; // rbx
  __int64 *v10; // rax
  __int64 v11; // [rsp+60h] [rbp+8h] BYREF
  __int64 v12; // [rsp+68h] [rbp+10h] BYREF
  __int64 v13; // [rsp+70h] [rbp+18h] BYREF
  PenHapticDevice *v14; // [rsp+78h] [rbp+20h]

  v2 = (__int64 *)*((_QWORD *)this + 10);
  v3 = (__int64 *)*((_QWORD *)this + 11);
  while ( v2 != v3 )
  {
    wil::com_ptr_t<InputSite,wil::err_exception_policy>::com_ptr_t<InputSite,wil::err_exception_policy>(&v11, *v2);
    v4 = PenInterface::Haptics(v11, &v12);
    v5 = wil::operator!=<PenHapticDevice,wil::err_exception_policy>(v4);
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>(&v12);
    if ( v5 )
    {
      v6 = (PenHapticDevice **)((char *)this + 104);
      if ( wil::operator==<PenHapticDevice,wil::err_exception_policy>((_QWORD *)this + 13) )
      {
        BamoServerConnection = ISMStatics::GetBamoServerConnection();
        v14 = (PenHapticDevice *)operator new(0x70uLL);
        v8 = PenHapticDevice::PenHapticDevice(v14, BamoServerConnection);
        wil::com_ptr_t<PenHapticDevice,wil::err_exception_policy>::attach((char *)this + 104, v8);
      }
      v9 = *v6;
      v10 = PenInterface::Haptics(v11, &v13);
      PenHapticDevice::AttachInterface(v9, v10);
      (*(void (__fastcall **)(char *, PenHapticDevice *))(*((_QWORD *)this + 1) + 48LL))((char *)this + 8, *v6);
    }
    wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v11);
    ++v2;
  }
}
