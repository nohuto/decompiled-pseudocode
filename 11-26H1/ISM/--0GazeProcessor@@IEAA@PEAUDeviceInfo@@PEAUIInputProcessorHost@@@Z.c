/*
 * XREFs of ??0GazeProcessor@@IEAA@PEAUDeviceInfo@@PEAUIInputProcessorHost@@@Z @ 0x1801BCBA8
 * Callers:
 *     ?Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z @ 0x1801BCEC0 (-Create@GazeProcessor@@SAJPEAUInputProcessorCreateParams@@PEAPEAUIInputProcessor@@@Z.c)
 * Callees:
 *     ??$_Get_size_of_n@$0BI@@std@@YA_K_K@Z @ 0x18004FA00 (--$_Get_size_of_n@$0BI@@std@@YA_K_K@Z.c)
 *     ??$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z @ 0x1800880DC (--$_Allocate@$0BA@U_Default_allocate_traits@std@@@std@@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=4
GazeProcessor *__fastcall GazeProcessor::GazeProcessor(
        GazeProcessor *this,
        struct DeviceInfo *a2,
        struct IInputProcessorHost *a3)
{
  unsigned __int64 size_of; // rax
  _QWORD *v5; // rax

  *((_QWORD *)this + 5) = &RefCountedObject::`vftable';
  *((_DWORD *)this + 12) = 1;
  *((_QWORD *)this + 9) = 0LL;
  *((_QWORD *)this + 10) = 0LL;
  *((_BYTE *)this + 88) = 0;
  *((_QWORD *)this + 8) = a2;
  *((_QWORD *)this + 7) = a3;
  *(_QWORD *)this = &GazeProcessor::`vftable'{for `IInputProcessorDeviceUpdate'};
  *((_QWORD *)this + 1) = &GazeProcessor::`vftable'{for `ISystemContextObserver'};
  *((_QWORD *)this + 2) = &GazeProcessor::`vftable'{for `ISupportedInputUpdateObserver'};
  *((_QWORD *)this + 3) = &GazeProcessor::`vftable'{for `IInputProcessor'};
  *((_QWORD *)this + 4) = &GazeProcessor::`vftable'{for `IInputFocusListener'};
  *((_QWORD *)this + 5) = &GazeProcessor::`vftable'{for `RefCountedObject'};
  *((_BYTE *)this + 96) = 0;
  *((_QWORD *)this + 41) = 0LL;
  *((_QWORD *)this + 42) = 0LL;
  *((_QWORD *)this + 43) = 0LL;
  *((_QWORD *)this + 44) = 0LL;
  *((_QWORD *)this + 45) = 0LL;
  size_of = std::_Get_size_of_n<24>(1uLL);
  v5 = std::_Allocate<16,std::_Default_allocate_traits>(size_of);
  *v5 = v5;
  v5[1] = v5;
  *((_QWORD *)this + 44) = v5;
  return this;
}
