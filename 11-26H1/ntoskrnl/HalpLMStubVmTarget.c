/*
 * XREFs of HalpLMStubVmTarget @ 0x140727770
 * Callers:
 *     HalpLMStubForVM @ 0x1407276B0 (HalpLMStubForVM.c)
 * Callees:
 *     <none>
 */

// positive sp value has been detected, the output may be wrong!
__int64 __fastcall HalpLMStubVmTarget()
{
  __int64 v0; // rdi
  unsigned __int64 v1; // rax
  __int64 result; // rax

  if ( (*(_DWORD *)(v0 + 128) & 4) == 0 )
  {
    if ( HalpInterruptProcessorRestarting )
    {
      __writecr8(*(_QWORD *)(v0 + 320));
      __writecr4(*(_QWORD *)(v0 + 184));
      __writemsr(0xC0000101, *(_QWORD *)(v0 + 328));
      __writemsr(0xC0000102, *(_QWORD *)(v0 + 336));
      __writemsr(0xC0000081, *(_QWORD *)(v0 + 344));
      __writemsr(0xC0000082, *(_QWORD *)(v0 + 352));
      __writemsr(0xC0000083, *(_QWORD *)(v0 + 360));
      __writemsr(0xC0000084, *(_QWORD *)(v0 + 368));
      __writemsr(0xC0000100, *(_QWORD *)(v0 + 384));
    }
    if ( (*(_QWORD *)(v0 + 184) & 0x100000000LL) != 0 )
    {
      __writemsr(0x1D4u, *(_QWORD *)(v0 + 392));
      __writemsr(0x1D0u, *(_QWORD *)(v0 + 400));
      __writemsr(0x1CCu, *(_QWORD *)(v0 + 408));
      __writemsr(0x1CDu, *(_QWORD *)(v0 + 416));
      __writemsr(0x1CEu, *(_QWORD *)(v0 + 424));
      v1 = __readcr4();
      __writecr4(v1 | 0x100000000LL);
    }
  }
  __writedr(7u, 0LL);
  __writedr(0, *(_QWORD *)(v0 + 192));
  __writedr(1u, *(_QWORD *)(v0 + 200));
  __writedr(2u, *(_QWORD *)(v0 + 208));
  __writedr(3u, *(_QWORD *)(v0 + 216));
  __writedr(6u, *(_QWORD *)(v0 + 224));
  __writedr(7u, *(_QWORD *)(v0 + 232));
  __writeeflags(*(_QWORD *)(v0 + 500));
  result = *(_QWORD *)(v0 + 552);
  _fxrstor((void *)(v0 + 688));
  ++*(_DWORD *)(v0 + 4);
  return result;
}
