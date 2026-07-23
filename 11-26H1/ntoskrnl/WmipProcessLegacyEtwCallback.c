/*
 * XREFs of WmipProcessLegacyEtwCallback @ 0x140B24F78
 * Callers:
 *     WmipLegacyEtwWorker @ 0x140B24E20 (WmipLegacyEtwWorker.c)
 * Callees:
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     WmipSendWmiIrp @ 0x140A0D8E4 (WmipSendWmiIrp.c)
 *     WmipUnreferenceEntry @ 0x140A0E124 (WmipUnreferenceEntry.c)
 */

char __fastcall WmipProcessLegacyEtwCallback(__int64 a1, __int64 a2)
{
  char result; // al
  __int64 v5; // rbp
  char i; // si
  __int128 v7; // xmm0
  __int64 v8; // rbx
  __int64 v9; // rcx
  __int128 v10; // [rsp+30h] [rbp-78h] BYREF
  int v11; // [rsp+40h] [rbp-68h] BYREF
  __int64 v12; // [rsp+48h] [rbp-60h]
  __int128 v13; // [rsp+58h] [rbp-50h] BYREF
  int v14; // [rsp+6Ch] [rbp-3Ch]
  __int64 v15; // [rsp+70h] [rbp-38h]

  result = -*(_BYTE *)(a1 + 36);
  v5 = 0LL;
  for ( i = 5 - (*(_BYTE *)(a1 + 36) != 0); (unsigned int)v5 < *(_DWORD *)(a1 + 32); v5 = (unsigned int)(v5 + 1) )
  {
    memset_0(&v11, 0, 0x40uLL);
    v7 = *(_OWORD *)(a2 + 72);
    v8 = *(_QWORD *)(a1 + 8 * v5 + 40);
    v12 = *(_QWORD *)(a1 + 24);
    LOBYTE(v9) = i;
    v15 = v12;
    v13 = v7;
    v11 = 64;
    v14 = 0x20000;
    WmipSendWmiIrp(v9, *(unsigned int *)(v8 + 56), (__int64)&v13, 64, (__int64)&v11, &v10);
    result = WmipUnreferenceEntry((__int64)&WmipDSChunkInfo, (volatile signed __int64 *)v8);
  }
  return result;
}
