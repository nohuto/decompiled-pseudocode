/*
 * XREFs of ??0GameInputProcessor@@AEAA@PEAUIInputDeviceInfoStore@@@Z @ 0x180094860
 * Callers:
 *     ?Create@GameInputProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z @ 0x1800960E8 (-Create@GameInputProcessor@@SAJPEAUIInputDeviceInfoStore@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$?0P8MPCInputRouter@@EAAX_N@ZPEAV0@AEBU?$_Ph@$00@std@@@?$_Compressed_pair@P8MPCInputRouter@@EAAX_N@ZV?$tuple@PEAVMPCInputRouter@@U?$_Ph@$00@std@@@std@@$0A@@std@@QEAA@U_One_then_variadic_args_t@1@$$QEAP8MPCInputRouter@@EAAX_N@Z$$QEAPEAV3@AEBU?$_Ph@$00@1@@Z @ 0x180094364 (--$-0P8MPCInputRouter@@EAAX_N@ZPEAV0@AEBU-$_Ph@$00@std@@@-$_Compressed_pair@P8MPCInputRouter@@EA.c)
 *     ??$?4V?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@std@@$0A@@?$function@$$A6AXPEAUDeviceInfo@@@Z@std@@QEAAAEAV01@$$QEAV?$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU?$_Ph@$00@2@@1@@Z @ 0x1801B1450 (--$-4V-$_Binder@U_Unforced@std@@P8GameInputProcessor@@EAAXPEAUDeviceInfo@@@_EPEAV3@AEBU-$_Ph@$00.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
GameInputProcessor *__fastcall GameInputProcessor::GameInputProcessor(
        GameInputProcessor *this,
        struct IInputDeviceInfoStore *a2)
{
  __int64 v4; // rdx
  const char *v5; // r9
  __int128 v7; // [rsp+30h] [rbp-48h] BYREF
  _OWORD v8[3]; // [rsp+40h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]
  GameInputProcessor *v10; // [rsp+88h] [rbp+10h] BYREF

  *((_QWORD *)this + 1) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 4) = 1;
  *(_QWORD *)this = &GameInputProcessor::`vftable'{for `IContextualProcessor'};
  *((_QWORD *)this + 1) = &GameInputProcessor::`vftable'{for `RefCountedObject'};
  *((_QWORD *)this + 3) = a2;
  if ( a2 )
    (*(void (__fastcall **)(struct IInputDeviceInfoStore *))(*(_QWORD *)a2 + 8LL))(a2);
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 20) = 0LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_BYTE *)this + 192) = 0;
  if ( !gbIsDWMNoRawGameController )
  {
    v10 = this;
    *(_QWORD *)&v7 = GameInputProcessor::OnDeviceAttach;
    DWORD2(v7) = 0;
    std::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>(
      v8,
      (__int64)a2,
      &v7,
      (__int64)&v10);
    ____4V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std___0A____function___A6AXPEAUDeviceInfo___Z_std__QEAAAEAV01___QEAV___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__1__Z(
      (char *)this + 40,
      v8);
    v10 = this;
    *(_QWORD *)&v7 = GameInputProcessor::OnDeviceRemoval;
    DWORD2(v7) = 0;
    std::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>::_Compressed_pair<void (MPCInputRouter::*)(bool),std::tuple<MPCInputRouter *,std::_Ph<1>>,0>(
      v8,
      v4,
      &v7,
      (__int64)&v10);
    ____4V___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__std___0A____function___A6AXPEAUDeviceInfo___Z_std__QEAAAEAV01___QEAV___Binder_U_Unforced_std__P8GameInputProcessor__EAAXPEAUDeviceInfo____EPEAV3_AEBU___Ph__00_2__1__Z(
      (char *)this + 104,
      v8);
    try
    {
      (*(void (**)(void))(*(_QWORD *)a2 + 32LL))();
      (*(void (__fastcall **)(struct IInputDeviceInfoStore *, char *))(*(_QWORD *)a2 + 40LL))(a2, (char *)this + 104);
    }
    catch ( ... )
    {
      wil::details::in1diag3::FailFast_CaughtException(
        retaddr,
        (void *)0x4A,
        (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\gameinput\\system\\lib"
                      "\\gameinputprocessor.cpp",
        v5);
    }
  }
  return this;
}
