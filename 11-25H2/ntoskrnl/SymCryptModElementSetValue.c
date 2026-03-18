/*
 * XREFs of SymCryptModElementSetValue @ 0x1405214E8
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14051FCD0 (SymCryptEcurveInitialize.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptRsaCoreEnc @ 0x140522A20 (SymCryptRsaCoreEnc.c)
 *     SymCryptEcpointSetValue @ 0x140528410 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefModElementSetValueGeneric @ 0x1405335D8 (SymCryptFdefModElementSetValueGeneric.c)
 */

__int64 __fastcall SymCryptModElementSetValue(int a1, int a2, int a3, _DWORD *a4, void *a5, __int64 a6, __int64 a7)
{
  unsigned int v8; // ebx

  v8 = SymCryptFdefModElementSetValueGeneric(a1, a2, a3, (int)a4, a5, a6, a7);
  if ( !v8 )
    (*(void (__fastcall **)(_DWORD *, void *, __int64, __int64))((char *)off_1400067F0 + (*a4 & 0x380)))(a4, a5, a6, a7);
  return v8;
}
