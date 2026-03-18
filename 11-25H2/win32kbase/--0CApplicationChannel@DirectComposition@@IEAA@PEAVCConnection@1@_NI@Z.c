/*
 * XREFs of ??0CApplicationChannel@DirectComposition@@IEAA@PEAVCConnection@1@_NI@Z @ 0x14005538C
 * Callers:
 *     ?Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z @ 0x14005523C (-Create@CApplicationChannel@DirectComposition@@SAJPEAI0PEAPEAX@Z.c)
 *     ?Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z @ 0x1400CC3D0 (-Create@CSystemChannel@DirectComposition@@SAJPEAVCConnection@2@PEAPEAV12@@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x14004E260 (UserIsCurrentProcessDwm.c)
 */

DirectComposition::CApplicationChannel *__fastcall DirectComposition::CApplicationChannel::CApplicationChannel(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CConnection *a2,
        char a3,
        int a4)
{
  char v6; // al
  __int64 v8; // rdx
  __int64 v9; // rcx

  *((_QWORD *)this + 4) = 0LL;
  *(_QWORD *)this = &DirectComposition::CChannel::`vftable';
  v6 = *((_BYTE *)this + 48) & 0xFE;
  *((_DWORD *)this + 2) = 1;
  *((_QWORD *)this + 5) = a2;
  *((_BYTE *)this + 48) = a3 | v6;
  if ( a3 )
    _InterlockedIncrement((volatile signed __int32 *)a2 + 2);
  *((_QWORD *)this + 2) = PsGetCurrentProcess();
  *(_QWORD *)this = &DirectComposition::CApplicationChannel::`vftable';
  *((_BYTE *)this + 72) = a3;
  *((_QWORD *)this + 12) = 8LL;
  *((_BYTE *)this + 128) = a3;
  *((_QWORD *)this + 19) = 8LL;
  *((_BYTE *)this + 265) = *((_BYTE *)this + 265) & 0xFB | (UserIsCurrentProcessDwm(v9, v8) ? 4 : 0);
  RtlInitializeGenericTable(
    (PRTL_GENERIC_TABLE)this + 4,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::CompareTableEntries,
    DirectComposition::CGenericTable<DirectComposition::CResourceMarshaler *,DirectComposition::CWeakReferenceBase,1953973060,1>::AllocateTableEntry,
    rimUserMemAllocNodeFree,
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
