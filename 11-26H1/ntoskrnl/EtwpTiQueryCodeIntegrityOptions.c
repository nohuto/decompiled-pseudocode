/*
 * XREFs of EtwpTiQueryCodeIntegrityOptions @ 0x140A38068
 * Callers:
 *     EtwTiLogDriverObjectLoad @ 0x140A3853C (EtwTiLogDriverObjectLoad.c)
 * Callees:
 *     ZwQuerySystemInformation @ 0x140728680 (ZwQuerySystemInformation.c)
 */

NTSTATUS __fastcall EtwpTiQueryCodeIntegrityOptions(_DWORD *a1)
{
  NTSTATUS result; // eax
  ULONG v3; // [rsp+38h] [rbp+10h] BYREF
  __int64 v4; // [rsp+40h] [rbp+18h] BYREF

  v4 = 8LL;
  v3 = 0;
  result = ZwQuerySystemInformation(SystemCodeIntegrityInformation, &v4, 8u, &v3);
  if ( result >= 0 )
    *a1 = HIDWORD(v4);
  return result;
}
