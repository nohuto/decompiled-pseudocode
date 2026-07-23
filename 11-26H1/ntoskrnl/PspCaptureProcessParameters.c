/*
 * XREFs of PspCaptureProcessParameters @ 0x140A723C0
 * Callers:
 *     NtCreateUserProcess @ 0x140B7D6F0 (NtCreateUserProcess.c)
 * Callees:
 *     PspCaptureUserProcessParameters @ 0x140A72430 (PspCaptureUserProcessParameters.c)
 */

__int64 __fastcall PspCaptureProcessParameters(char a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // eax
  __int64 result; // rax
  char v6; // al

  v3 = *(unsigned __int8 *)(a3 + 16);
  if ( a1 )
  {
    result = PspCaptureUserProcessParameters(a3 + 216, a2, *(_QWORD *)(a3 + 472), (v3 >> 3) & 1, *(_QWORD *)(a3 + 424));
    if ( (int)result < 0 )
      return result;
    v6 = *(_BYTE *)(a3 + 16);
    if ( (v6 & 8) != 0 )
      *(_BYTE *)(a3 + 17) &= 0xF3u;
    *(_BYTE *)(a3 + 16) = v6 | 4;
  }
  else
  {
    *(_QWORD *)(a3 + 216) = a2;
    *(_BYTE *)(a3 + 16) = v3 & 0xFB;
  }
  return 0LL;
}
