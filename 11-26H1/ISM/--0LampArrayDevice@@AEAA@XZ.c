/*
 * XREFs of ??0LampArrayDevice@@AEAA@XZ @ 0x1800E65E0
 * Callers:
 *     ?CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z @ 0x1800E6AD8 (-CreateAndInitialize@LampArrayDevice@@SAJPEAVPnpDevice@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??$?0_N$0A@@?$atomic@_N@std@@QEAA@XZ @ 0x1800E6364 (--$-0_N$0A@@-$atomic@_N@std@@QEAA@XZ.c)
 */

LampArrayDevice *__fastcall LampArrayDevice::LampArrayDevice(LampArrayDevice *this)
{
  *(_QWORD *)this = &RefCountedObject::`vftable';
  *((_DWORD *)this + 2) = 1;
  *(_QWORD *)this = &LampArrayDevice::`vftable';
  *((_QWORD *)this + 2) = 0LL;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 12) = 0;
  *((_QWORD *)this + 5) = (char *)this + 32;
  *((_QWORD *)this + 4) = (char *)this + 32;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 56), 0, 0);
  *((_QWORD *)this + 12) = 0LL;
  *((_QWORD *)this + 13) = 0LL;
  InitializeCriticalSectionEx((LPCRITICAL_SECTION)((char *)this + 112), 0, 0);
  *((_BYTE *)this + 152) = 0;
  *((_QWORD *)this + 20) = 0x3FF0000000000000LL;
  *((_QWORD *)this + 21) = 0LL;
  *((_QWORD *)this + 22) = 0LL;
  *((_QWORD *)this + 23) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  std::atomic<bool>::atomic<bool>((_BYTE *)this + 224);
  return this;
}
