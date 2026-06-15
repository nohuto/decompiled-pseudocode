/*
 * XREFs of sub_14008EF00 @ 0x14008EF00
 * Callers:
 *     <none>
 * Callees:
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 */

__int64 __fastcall sub_14008EF00(__int64 a1)
{
  void *v1; // rcx
  __int64 v2; // r9
  __int128 InBuffer; // [rsp+40h] [rbp-28h] BYREF
  int v5; // [rsp+50h] [rbp-18h]
  int v6; // [rsp+54h] [rbp-14h]
  _UNKNOWN *retaddr; // [rsp+68h] [rbp+0h]
  DWORD lpBytesReturned; // [rsp+70h] [rbp+8h] BYREF
  int OutBuffer; // [rsp+78h] [rbp+10h] BYREF

  v1 = *(void **)(a1 + 16);
  v5 = 0;
  v6 = 2;
  OutBuffer = 0;
  lpBytesReturned = 0;
  InBuffer = xmmword_1400CC280;
  if ( DeviceIoControl(v1, 0x2F0003u, &InBuffer, 0x18u, &OutBuffer, 4u, &lpBytesReturned, 0LL) )
    return 0LL;
  else
    return sub_1400470EC(
             (int)retaddr,
             444,
             (int)"avcore\\audiocore\\server\\audiodg\\dspoffload\\client\\dspaudioendpoint.cpp",
             v2);
}
