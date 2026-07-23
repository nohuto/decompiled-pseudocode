/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x140A35768
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x140917EA4 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x140463C90 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x140479300 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x1405C56E8 (VslGetEtwDebugId.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     EtwpFindDebugId @ 0x140A358B8 (EtwpFindDebugId.c)
 *     MmGetImageInformation @ 0x140A35D4C (MmGetImageInformation.c)
 *     EtwpGetImageSize @ 0x140B306C8 (EtwpGetImageSize.c)
 */

NTSTATUS __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, struct _MDL **a3, unsigned int *a4)
{
  void *v6; // rcx
  struct _KTHREAD *CurrentThread; // rax
  NTSTATUS result; // eax
  ULONG64 v9; // rdx
  ULONG64 Size; // [rsp+38h] [rbp-20h] BYREF
  volatile void *Address; // [rsp+40h] [rbp-18h] BYREF
  PIMAGE_NT_HEADERS OutHeaders; // [rsp+48h] [rbp-10h] BYREF
  int v13; // [rsp+68h] [rbp+10h] BYREF

  v13 = 0;
  OutHeaders = 0LL;
  Address = 0LL;
  Size = 0LL;
  v6 = *(void **)(a2 + 88);
  if ( !v6 )
    return -1073741503;
  if ( !a1 )
  {
    RtlPcToFileHeader(v6, (PVOID *)&Address);
    if ( !Address )
      return -1073741275;
LABEL_5:
    result = RtlImageNtHeaderEx(1u, (PVOID)((unsigned __int64)Address & 0xFFFFFFFFFFFFFFFCuLL), Size, &OutHeaders);
    if ( result >= 0 )
    {
      v9 = Size;
      if ( !Size )
      {
        result = EtwpGetImageSize(OutHeaders, &Size);
        v9 = Size;
      }
      if ( result >= 0 )
      {
        if ( a1 == 1 )
          ProbeForRead(Address, v9, 1u);
        return EtwpFindDebugId((PVOID)Address, (__int64)a4);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.EntireField & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), a3, a4);
  result = MmGetImageInformation(v6, &Address, &Size, &v13);
  if ( result >= 0 )
    goto LABEL_5;
  return result;
}
