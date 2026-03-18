/*
 * XREFs of EtwpLocateDbgIdForRegEntry @ 0x140942658
 * Callers:
 *     EtwpProviderArrivalCallback @ 0x14093C304 (EtwpProviderArrivalCallback.c)
 * Callees:
 *     RtlImageNtHeaderEx @ 0x14046A510 (RtlImageNtHeaderEx.c)
 *     RtlPcToFileHeader @ 0x14047F990 (RtlPcToFileHeader.c)
 *     VslGetEtwDebugId @ 0x1405C2E78 (VslGetEtwDebugId.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     EtwpFindDebugId @ 0x1409427A8 (EtwpFindDebugId.c)
 *     MmGetImageInformation @ 0x140942C3C (MmGetImageInformation.c)
 *     EtwpGetImageSize @ 0x140B2E778 (EtwpGetImageSize.c)
 */

__int64 __fastcall EtwpLocateDbgIdForRegEntry(char a1, __int64 a2, struct _MDL **a3, unsigned int *a4)
{
  int v5; // esi
  unsigned __int64 v7; // rcx
  struct _KTHREAD *CurrentThread; // rax
  __int64 result; // rax
  int v10; // r8d
  SIZE_T v11; // rdx
  SIZE_T Length; // [rsp+38h] [rbp-20h] BYREF
  volatile void *Address; // [rsp+40h] [rbp-18h] BYREF
  __int64 v14; // [rsp+48h] [rbp-10h] BYREF
  int v15; // [rsp+68h] [rbp+10h] BYREF

  v5 = (int)a3;
  v15 = 0;
  v14 = 0LL;
  Address = 0LL;
  Length = 0LL;
  v7 = *(_QWORD *)(a2 + 88);
  if ( !v7 )
    return 3221225793LL;
  if ( !a1 )
  {
    RtlPcToFileHeader(v7, &Address);
    if ( !Address )
      return 3221226021LL;
LABEL_5:
    result = RtlImageNtHeaderEx(1, (unsigned __int64)Address & 0xFFFFFFFFFFFFFFFCuLL, Length, &v14);
    if ( (int)result >= 0 )
    {
      v11 = Length;
      if ( !Length )
      {
        result = EtwpGetImageSize(v14, &Length);
        v11 = Length;
      }
      if ( (int)result >= 0 )
      {
        if ( a1 == 1 )
        {
          ProbeForRead(Address, v11, 1u);
          LODWORD(v11) = Length;
        }
        LOBYTE(v10) = a1;
        return EtwpFindDebugId((_DWORD)Address, v11, v10, v5, (__int64)a4);
      }
    }
    return result;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (CurrentThread->ApcState.Process->SecureState.EntireField & 1) != 0 )
    return VslGetEtwDebugId((__int64)CurrentThread->ApcState.Process, *(_QWORD *)(a2 + 88), a3, a4);
  result = MmGetImageInformation(v7, &Address, &Length, &v15);
  if ( (int)result >= 0 )
    goto LABEL_5;
  return result;
}
