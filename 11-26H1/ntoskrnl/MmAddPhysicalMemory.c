/*
 * XREFs of MmAddPhysicalMemory @ 0x14086D730
 * Callers:
 *     WheapClearPoison @ 0x14084EF00 (WheapClearPoison.c)
 * Callees:
 *     MiAddPhysicalMemoryChunks @ 0x14086B848 (MiAddPhysicalMemoryChunks.c)
 */

NTSTATUS __stdcall MmAddPhysicalMemory(PPHYSICAL_ADDRESS StartAddress, PLARGE_INTEGER NumberOfBytes)
{
  int v2; // r9d
  ULONG_PTR v3; // r10
  LONGLONG v4; // rax
  int v6; // r8d
  int v7; // r9d
  __int64 v8; // rcx
  NTSTATUS result; // eax
  LONGLONG QuadPart; // [rsp+40h] [rbp+8h] BYREF
  LONGLONG v11; // [rsp+48h] [rbp+10h] BYREF

  v2 = 0;
  QuadPart = StartAddress->QuadPart;
  v3 = 0LL;
  v4 = NumberOfBytes->QuadPart;
  v6 = QuadPart;
  v11 = NumberOfBytes->QuadPart;
  if ( (QuadPart & 0xFFF) != 0 )
  {
    v7 = QuadPart & 1;
    if ( (QuadPart & 1) != 0 )
    {
      v6 = QuadPart & 0xFFFFFFFE;
      LODWORD(QuadPart) = QuadPart & 0xFFFFFFFE;
    }
    v2 = v7 << 8;
    if ( (v6 & 6) != 0 )
    {
      if ( (v6 & 2) != 0 )
      {
        if ( (v6 & 4) != 0 )
          return -1073741811;
        v3 = 512LL;
      }
      else
      {
        v3 = 0x40000LL;
      }
      v8 = (v3 << 12) - 1;
      if ( (v8 & v4) != 0 )
        return -1073741811;
      LODWORD(QuadPart) = v6 & 0xFFFFFFF9;
      if ( (v8 & QuadPart) != 0 )
        return -1073741811;
    }
  }
  result = MiAddPhysicalMemoryChunks(
             (unsigned __int16 *)&MiSystemPartition,
             (unsigned __int64 *)&QuadPart,
             (unsigned __int64 *)&v11,
             v3,
             v2,
             0);
  if ( result >= 0 )
    NumberOfBytes->QuadPart = v11;
  return result;
}
