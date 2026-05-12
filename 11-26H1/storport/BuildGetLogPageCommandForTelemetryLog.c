/*
 * XREFs of BuildGetLogPageCommandForTelemetryLog @ 0x1400E30C4
 * Callers:
 *     NvmeControllerGetTelemetryLog @ 0x1400F4BE8 (NvmeControllerGetTelemetryLog.c)
 * Callees:
 *     BuildGetLogPageCommand @ 0x1400C59A4 (BuildGetLogPageCommand.c)
 */

__int64 __fastcall BuildGetLogPageCommandForTelemetryLog(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        int a6,
        __int64 a7,
        int a8,
        __int64 a9,
        __int64 a10,
        unsigned __int8 a11)
{
  char v11; // si
  unsigned int v13; // ecx
  __int64 result; // rax

  v11 = a3;
  LOBYTE(a3) = 8 - ((_BYTE)a3 != 0);
  BuildGetLogPageCommand(a1, a2, a3, a4, a5, -1, a7, 0, a9, a10);
  if ( a7 || !v11 )
  {
    *(_DWORD *)(a2 + 40) &= 0xFFFFF0FF;
    v13 = *(_DWORD *)(a2 + 40);
  }
  else
  {
    v13 = *(_DWORD *)(a2 + 40) & 0xFFFFF0FF | 0x100;
    *(_DWORD *)(a2 + 40) = v13;
  }
  result = v13 ^ ((unsigned __int16)v13 ^ (unsigned __int16)(a11 << 15)) & 0x8000;
  *(_DWORD *)(a2 + 40) = result;
  return result;
}
