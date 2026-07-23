/*
 * XREFs of EtwpTraceCachedStack @ 0x14046AFE0
 * Callers:
 *     EtwpStackRundown @ 0x14046AEBC (EtwpStackRundown.c)
 * Callees:
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 __fastcall EtwpTraceCachedStack(__int64 a1, unsigned int a2, unsigned __int16 a3, __int64 a4)
{
  unsigned __int16 v6; // r10
  int v7; // edx
  __int64 v8; // rcx
  unsigned int v9; // eax
  __int64 *v11; // [rsp+30h] [rbp-B8h] BYREF
  _QWORD v12[17]; // [rsp+38h] [rbp-B0h]
  __int64 v13; // [rsp+108h] [rbp+20h] BYREF

  v13 = a4;
  v12[0] = 8LL;
  v11 = &v13;
  v6 = 1;
  do
  {
    v7 = 32;
    if ( *(_DWORD *)(a4 + 32) < 0x20u )
      v7 = *(_DWORD *)(a4 + 32);
    v8 = 2LL * v6++;
    v12[v8 - 1] = a4 + 40;
    LODWORD(v12[v8]) = 8 * v7;
    HIDWORD(v12[v8]) = 0;
    a4 = *(_QWORD *)(a4 + 16);
  }
  while ( a4 );
  v9 = 5244418;
  if ( a3 == 6180 )
    v9 = 5242882;
  return EtwpLogKernelEvent((__int64)&v11, a1, a2, v6, a3, v9);
}
