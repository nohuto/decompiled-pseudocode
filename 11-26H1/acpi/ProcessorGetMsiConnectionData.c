/*
 * XREFs of ProcessorGetMsiConnectionData @ 0x1400D3C78
 * Callers:
 *     IrqArbAddAllocation @ 0x1400BD7C0 (IrqArbAddAllocation.c)
 * Callees:
 *     __security_check_cookie @ 0x1400722F0 (__security_check_cookie.c)
 */

__int64 __fastcall ProcessorGetMsiConnectionData(__int64 *a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rcx
  unsigned int v6; // ebx
  int v7; // eax
  __int128 v8; // xmm0
  int MessageRoutingInfo; // eax
  __int128 v11; // [rsp+20h] [rbp-48h] BYREF
  __int128 v12; // [rsp+30h] [rbp-38h]
  __int128 v13; // [rsp+40h] [rbp-28h]
  int v14; // [rsp+50h] [rbp-18h]

  v14 = 0;
  v5 = *a1;
  v6 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 0LL;
  if ( v5 && (v5 & (v5 ^ (v5 - 1))) == v5 )
    v7 = 1;
  else
    v7 = *(_DWORD *)(*(_QWORD *)(ProcessorGroupByNumber + 8LL * *((unsigned __int16 *)a1 + 4)) + 36LL);
  v8 = *(_OWORD *)a1;
  DWORD2(v11) = a2;
  LODWORD(v13) = v7;
  v12 = v8;
  MessageRoutingInfo = HalGetMessageRoutingInfo(&v11, a4);
  if ( MessageRoutingInfo < 0 )
    return (unsigned int)MessageRoutingInfo;
  return v6;
}
