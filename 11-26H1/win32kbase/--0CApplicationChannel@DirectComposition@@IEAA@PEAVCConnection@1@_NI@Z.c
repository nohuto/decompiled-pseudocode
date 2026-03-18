/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x1400B13A0
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x1400B1254 (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x140110774 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14006F430 (UserIsCurrentProcessDwm.c)
 *     ??0CChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z @ 0x1400B14A4 (--0CChannel@DirectComposition@@IEAA@PEAVCConnection@1@_N@Z.c)
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        bool a3,
        int a4)
{
  int v7; // edx
  int v8; // ecx
  int v9; // r8d

  DirectComposition::CChannel::CChannel(this, a2, a3);
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 72) = a3;
  *((_QWORD *)this + 12) = 8LL;
  *((_BYTE *)this + 128) = a3;
  *((_QWORD *)this + 19) = 8LL;
  *((_BYTE *)this + 265) = *((_BYTE *)this + 265) & 0xFB | (UserIsCurrentProcessDwm(v8, v7, v9) ? 4 : 0);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 4,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    (PRTL_GENERIC_ALLOCATE_ROUTINE)DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    (PRTL_GENERIC_FREE_ROUTINE)rimUserMemAllocNodeFree,
    0LL);
  *((_BYTE *)this + 536) = a3;
  *((_QWORD *)this + 70) = 8LL;
  *((_BYTE *)this + 2656) = a3;
  *((_QWORD *)this + 330) = (char *)this + 2632;
  *((_QWORD *)this + 329) = (char *)this + 2632;
  *((_DWORD *)this + 688) = a4;
  InitializeSListHead((PSLIST_HEADER)this + 13);
  *((_QWORD *)this + 46) = (char *)this + 360;
  *((_QWORD *)this + 45) = (char *)this + 360;
  *((_QWORD *)this + 35) = (char *)this + 272;
  *((_QWORD *)this + 34) = (char *)this + 272;
  return this;
}
