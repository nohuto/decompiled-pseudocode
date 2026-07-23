/*
 * XREFs of MiLogRelocationRva @ 0x14099D6F8
 * Callers:
 *     MiCaptureImageCfgContext @ 0x14099CDC0 (MiCaptureImageCfgContext.c)
 *     MiParseComAndCetHeaders @ 0x14099D24C (MiParseComAndCetHeaders.c)
 *     MiLogRelocationFaults @ 0x14099D670 (MiLogRelocationFaults.c)
 *     MiParseImageLoadConfig @ 0x14099D9D0 (MiParseImageLoadConfig.c)
 * Callees:
 *     MiOffsetToProtos @ 0x1403422D4 (MiOffsetToProtos.c)
 *     PfSnLogPageFault @ 0x140376CA0 (PfSnLogPageFault.c)
 *     PsGetIoPriorityThread @ 0x140376E50 (PsGetIoPriorityThread.c)
 *     PfLogFileDataAccess @ 0x140383550 (PfLogFileDataAccess.c)
 */

void __fastcall MiLogRelocationRva(unsigned int a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  __int16 v6; // di
  __int64 v7; // rax
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  unsigned __int64 v10; // rcx
  unsigned int v11; // edi
  unsigned __int64 v12; // rbx
  unsigned __int64 v13[3]; // [rsp+30h] [rbp-18h] BYREF

  v4 = a2;
  v6 = a1;
  v13[0] = 0LL;
  v7 = MiOffsetToProtos(a4, a1, v13);
  if ( v7 )
  {
    v8 = (v13[0] << 12) + ((unsigned __int64)*(unsigned int *)(v7 + 36) << 9);
    if ( (LODWORD(stru_140E67200.ThreadLock) || DWORD2(xmmword_140F13528))
      && (int)PsGetIoPriorityThread((__int64)KeGetCurrentThread()) >= 2 )
    {
      v10 = ((unsigned __int64)(v6 & 0xFFF) + v4 + 4095) >> 12;
      v11 = v10 + 1;
      if ( (v8 & 0xFFF) == 0 )
        v11 = v10;
      v12 = v8 & 0xFFFFFFFFFFFFF000uLL;
      if ( DWORD2(xmmword_140F13528) )
        PfLogFileDataAccess(*(_QWORD *)(a3 + 24), (__int64)KeGetCurrentThread(), v12, v11, 0);
      if ( LODWORD(stru_140E67200.ThreadLock) && v11 )
      {
        do
        {
          PfSnLogPageFault(a3, v12, 2LL, v9);
          v12 += 4096LL;
          --v11;
        }
        while ( v11 );
      }
    }
  }
}
