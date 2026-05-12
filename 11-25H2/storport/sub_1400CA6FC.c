/*
 * XREFs of sub_1400CA6FC @ 0x1400CA6FC
 * Callers:
 *     StorPortNvmeofExtendedFunction @ 0x1400743C0 (StorPortNvmeofExtendedFunction.c)
 * Callees:
 *     sub_1400C9DE8 @ 0x1400C9DE8 (sub_1400C9DE8.c)
 *     sub_1400CBDF0 @ 0x1400CBDF0 (sub_1400CBDF0.c)
 *     sub_1400D10FC @ 0x1400D10FC (sub_1400D10FC.c)
 *     sub_1400D1328 @ 0x1400D1328 (sub_1400D1328.c)
 *     sub_1400D182C @ 0x1400D182C (sub_1400D182C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400CA6FC(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v6; // r8
  int v7; // ebx
  _OWORD *v8; // rax
  __int64 v9; // rdx
  _OWORD *v10; // rcx
  __int128 v11; // xmm1
  __int128 v12; // xmm0
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  __int64 v21; // rsi
  _QWORD *v22; // rdx
  _QWORD *v23; // rax
  const char *v24; // r8
  __int64 v26; // [rsp+70h] [rbp-158h] BYREF
  _OWORD Dst[16]; // [rsp+80h] [rbp-148h] BYREF

  memset_0(Dst, 0, sizeof(Dst));
  if ( KeGetCurrentIrql() )
    return (unsigned int)-1056964600;
  if ( (*(_BYTE *)(a1 + 144) & 1) == 0 )
    return (unsigned int)-1073741637;
  if ( *(_WORD *)a2 != 1 || *(_WORD *)(a2 + 2) < 0x240u || (*(_BYTE *)(a2 + 4) & 6) == 6 )
    return (unsigned int)-1073741811;
  v8 = (_OWORD *)(a2 + 28);
  if ( !*(_BYTE *)(a2 + 28) )
  {
    if ( (*(_DWORD *)(a2 + 4) & 1) == 0 )
    {
      strcpy((char *)Dst, "nqn.2014-08.org.nvmexpress.discovery");
      goto LABEL_14;
    }
    return (unsigned int)-1073741811;
  }
  v9 = 2LL;
  v10 = Dst;
  v6 = 128LL;
  do
  {
    v11 = v8[1];
    *v10 = *v8;
    v12 = v8[2];
    v10[1] = v11;
    v13 = v8[3];
    v10[2] = v12;
    v14 = v8[4];
    v10[3] = v13;
    v15 = v8[5];
    v10[4] = v14;
    v16 = v8[6];
    v10[5] = v15;
    v17 = v8[7];
    v8 += 8;
    v10[6] = v16;
    v10 += 8;
    *(v10 - 1) = v17;
    --v9;
  }
  while ( v9 );
LABEL_14:
  v18 = sub_1400D10FC(a1, *(_QWORD *)(a2 + 8), v6);
  v19 = v18;
  if ( v18 )
  {
    v7 = sub_1400D1328(v18);
    if ( v7 >= 0 )
    {
      v26 = sub_1400D182C(v19, Dst, *(unsigned __int16 *)(a2 + 24));
      if ( v26 )
      {
        v7 = -1073741771;
      }
      else
      {
        v7 = sub_1400CBDF0(
               v19,
               (unsigned int)Dst,
               (int)a2 + 284,
               (int)a2 + 540,
               *(_WORD *)(a2 + 24),
               0,
               *(_DWORD *)(a2 + 4) & 1,
               (*(_DWORD *)(a2 + 4) & 2) != 0,
               (*(_DWORD *)(a2 + 4) & 4) != 0,
               (__int64)&v26);
        if ( v7 >= 0 )
        {
          v20 = *(_QWORD *)(a2 + 16);
          v21 = v26;
          *(_QWORD *)(v26 + 48) = v20;
          KeEnterCriticalRegion();
          ExAcquireResourceExclusiveLite((PERESOURCE)(v19 + 384), 1u);
          v22 = *(_QWORD **)(v19 + 368);
          v23 = (_QWORD *)(v21 + 8);
          if ( *v22 != v19 + 360 )
            __fastfail(3u);
          *v23 = v19 + 360;
          *(_QWORD *)(v21 + 16) = v22;
          *v22 = v23;
          *(_QWORD *)(v19 + 368) = v23;
          ++*(_DWORD *)(v19 + 376);
          ExReleaseResourceLite((PERESOURCE)(v19 + 384));
          KeLeaveCriticalRegion();
          if ( (byte_1401694FA & 2) != 0 )
          {
            v24 = "IO";
            if ( (*(_BYTE *)(v21 + 32) & 2) == 0 )
              v24 = "Discovery";
            sub_1400C9DE8(
              v21 + 316,
              v21 + 60,
              (__int64)v24,
              *(_DWORD *)(a1 + 56),
              a1 + 1032,
              *(const wchar_t **)(a1 + 1016),
              (const char *)(v19 + 72),
              *(_WORD *)(v21 + 4),
              (const char *)(v21 + 60),
              (const char *)(v21 + 316),
              (const char *)(v21 + 572),
              v24,
              0);
          }
          *a3 = v21;
        }
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v19 + 56));
    }
  }
  else
  {
    return (unsigned int)-1073741275;
  }
  return (unsigned int)v7;
}
