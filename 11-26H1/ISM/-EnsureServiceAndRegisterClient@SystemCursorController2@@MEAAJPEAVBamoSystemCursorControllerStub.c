/*
 * XREFs of ?EnsureServiceAndRegisterClient@SystemCursorController2@@MEAAJPEAVBamoSystemCursorControllerStub@@PEAVBamoSystemCursorControllerClientProxy@@@Z @ 0x1800F8CE0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x18002D8AC (-GetProcessId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ @ 0x180068C78 (-GetPeerId@BaseBamoPeer@Bamo@Microsoft@@QEBAIXZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x18006BB00 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800C1864 (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA?AV?$shared_ptr@VSystemCursorService2@@@0@$$QEAPEAVSystemCursorController2@@@Z @ 0x1800F7D18 (--$make_shared@VSystemCursorService2@@PEAVSystemCursorController2@@@std@@YA-AV-$shared_ptr@VSyst.c)
 *     ?Initialize@SystemCursorService2@@QEAAJK@Z @ 0x1800FBD44 (-Initialize@SystemCursorService2@@QEAAJK@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall SystemCursorController2::EnsureServiceAndRegisterClient(
        SystemCursorController2 *this,
        struct BamoSystemCursorControllerStub *a2,
        struct BamoSystemCursorControllerClientProxy *a3)
{
  __int64 v6; // rcx
  unsigned int ProcessId; // edi
  __int64 v8; // rcx
  int v9; // eax
  const char *v10; // r9
  std::_Ref_count_base *v11; // rcx
  SystemCursorService2 *v12; // rax
  std::_Ref_count_base *v13; // rax
  int v14; // eax
  SystemCursorService2 *v16; // [rsp+20h] [rbp-18h] BYREF
  std::_Ref_count_base *v17; // [rsp+28h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  struct SystemCursorController2 *v19; // [rsp+40h] [rbp+8h] BYREF

  try
  {
    if ( *((struct BamoSystemCursorControllerClientProxy **)this + 8) != a3 )
    {
      if ( a3 )
        (**(void (__fastcall ***)(struct BamoSystemCursorControllerClientProxy *))a3)(a3);
      v6 = *((_QWORD *)this + 8);
      *((_QWORD *)this + 8) = a3;
      if ( v6 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 8LL))(v6);
    }
    ProcessId = Microsoft::Bamo::BaseBamoPeer::GetProcessId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6)
                                                                                              + 16LL));
    *((_DWORD *)this + 18) = Microsoft::Bamo::BaseBamoPeer::GetPeerId(*(Microsoft::Bamo::BaseBamoPeer **)(*((_QWORD *)a2 + 6) + 16LL));
    v8 = *((_QWORD *)this + 10);
    if ( v8 )
    {
      v14 = (*(__int64 (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v8 + 8LL))(v8, ProcessId);
      if ( v14 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          43LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v14,
          (int)v16);
    }
    else
    {
      v19 = this;
      std::make_shared<SystemCursorService2,SystemCursorController2 *>(&v16, &v19);
      v9 = SystemCursorService2::Initialize(v16, ProcessId);
      if ( v9 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          35LL,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\"
                   "systemcursorcontroller2.cpp",
          (const char *)(unsigned int)v9,
          (int)v16);
      v11 = v17;
      if ( v17 )
      {
        _InterlockedIncrement((volatile signed __int32 *)v17 + 2);
        v11 = v17;
      }
      v12 = v16;
      if ( v16 )
        v12 = (SystemCursorService2 *)((char *)v16 + 8);
      *((_QWORD *)this + 10) = v12;
      v13 = (std::_Ref_count_base *)*((_QWORD *)this + 11);
      *((_QWORD *)this + 11) = v11;
      if ( v13 )
      {
        std::_Ref_count_base::_Decref(v13);
        v11 = v17;
      }
      if ( v11 )
        std::_Ref_count_base::_Decref(v11);
    }
  }
  catch ( ... )
  {
    wil::details::in1diag3::Log_CaughtException(
      retaddr,
      (void *)0x2E,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputrouters\\dwm\\components\\cursor\\service\\lib\\systemcu"
           "rsorcontroller2.cpp",
      v10);
  }
  return 0LL;
}
