/*
 * XREFs of SmProcessQueryStoreStats @ 0x14096EFCC
 * Callers:
 *     PfpPrivSourceEnum @ 0x14096984C (PfpPrivSourceEnum.c)
 *     EtwpLogMemInfoWs @ 0x14096E598 (EtwpLogMemInfoWs.c)
 * Callees:
 *     ?SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z @ 0x140354BA0 (-SmpProcessQueryStoreStats@@YAJPEAU_EPROCESS@@PEAU_ST_STATS@@@Z.c)
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 */

__int64 __fastcall SmProcessQueryStoreStats(struct _EPROCESS *a1, _QWORD *a2, _QWORD *a3)
{
  int StoreStats; // r9d
  char *v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // rax
  _BYTE v12[12]; // [rsp+20h] [rbp-628h] BYREF
  unsigned int v13; // [rsp+2Ch] [rbp-61Ch]
  unsigned int v14; // [rsp+40h] [rbp-608h]
  char v15; // [rsp+4Ch] [rbp-5FCh] BYREF

  memset_0(v12, 0, 0x600uLL);
  StoreStats = SmpProcessQueryStoreStats(a1, (struct _ST_STATS *)v12);
  if ( StoreStats >= 0 )
  {
    if ( a2 )
    {
      v8 = &v15;
      v9 = 0LL;
      v10 = 8LL;
      do
      {
        v11 = *(unsigned int *)v8;
        v8 += 8;
        v9 += v13 * v11;
        --v10;
      }
      while ( v10 );
      *a2 = v9;
    }
    if ( a3 )
      *a3 = (unsigned __int64)v14 << 12;
  }
  return (unsigned int)StoreStats;
}
