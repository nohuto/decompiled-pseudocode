/*
 * XREFs of sub_1400CBACC @ 0x1400CBACC
 * Callers:
 *     sub_1400E4240 @ 0x1400E4240 (sub_1400E4240.c)
 *     sub_14018A49C @ 0x14018A49C (sub_14018A49C.c)
 * Callees:
 *     sub_1400C9DE8 @ 0x1400C9DE8 (sub_1400C9DE8.c)
 *     sub_1400CAFB4 @ 0x1400CAFB4 (sub_1400CAFB4.c)
 *     sub_1400CBDF0 @ 0x1400CBDF0 (sub_1400CBDF0.c)
 *     sub_1400D1328 @ 0x1400D1328 (sub_1400D1328.c)
 *     sub_1400D182C @ 0x1400D182C (sub_1400D182C.c)
 *     sub_1400D49EC @ 0x1400D49EC (sub_1400D49EC.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_1400CBACC(
        __int64 a1,
        char a2,
        _OWORD *a3,
        __int64 a4,
        _OWORD *a5,
        unsigned __int16 a6,
        char a7,
        char a8,
        char a9,
        char a10,
        _QWORD *a11)
{
  __int64 v12; // r14
  __int64 v15; // rcx
  _OWORD *v16; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  __int128 v19; // xmm1
  __int128 v20; // xmm0
  __int128 v21; // xmm1
  __int128 v22; // xmm0
  __int128 v23; // xmm1
  int v24; // ebx
  char *v25; // rdi
  _QWORD *v26; // rdx
  _QWORD *v27; // rax
  const char *v28; // r8
  __int64 v30; // [rsp+78h] [rbp-88h] BYREF
  __int64 v31; // [rsp+80h] [rbp-80h]
  _QWORD *v32; // [rsp+88h] [rbp-78h]
  _OWORD Dst[16]; // [rsp+90h] [rbp-70h] BYREF

  v12 = *(_QWORD *)(a1 + 40);
  v32 = a11;
  v31 = a4;
  memset_0(Dst, 0, sizeof(Dst));
  if ( *(_BYTE *)a3 )
  {
    v15 = 2LL;
    v16 = Dst;
    do
    {
      v17 = a3[1];
      *v16 = *a3;
      v18 = a3[2];
      v16[1] = v17;
      v19 = a3[3];
      v16[2] = v18;
      v20 = a3[4];
      v16[3] = v19;
      v21 = a3[5];
      v16[4] = v20;
      v22 = a3[6];
      v16[5] = v21;
      v23 = a3[7];
      a3 += 8;
      v16[6] = v22;
      v16 += 8;
      *(v16 - 1) = v23;
      --v15;
    }
    while ( v15 );
  }
  else
  {
    if ( a8 )
      return (unsigned int)-1073741811;
    strcpy((char *)Dst, "nqn.2014-08.org.nvmexpress.discovery");
  }
  v24 = sub_1400D1328(a1);
  if ( v24 >= 0 )
  {
    v30 = sub_1400D182C(a1, Dst, a6);
    v25 = (char *)v30;
    if ( v30 )
    {
      if ( !a2 )
      {
        v24 = -1073741771;
LABEL_23:
        ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 56));
        return (unsigned int)v24;
      }
    }
    else
    {
      if ( !*(_BYTE *)a5 )
      {
        *a5 = *(_OWORD *)(a1 + 328);
        a5[1] = *(_OWORD *)(a1 + 344);
      }
      v24 = sub_1400CBDF0(a1, (unsigned int)Dst, v31, (_DWORD)a5, a6, a7, a8, a9, a10, (__int64)&v30);
      if ( v24 < 0 )
        goto LABEL_23;
      v25 = (char *)v30;
      v24 = sub_1400D49EC(v12, v30);
      if ( v24 < 0 )
      {
        sub_1400CAFB4(v12, 0, (PVOID *)&v30);
        goto LABEL_23;
      }
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite((PERESOURCE)(a1 + 384), 1u);
      v26 = *(_QWORD **)(a1 + 368);
      v27 = v25 + 8;
      if ( *v26 != a1 + 360 )
        __fastfail(3u);
      *v27 = a1 + 360;
      *((_QWORD *)v25 + 2) = v26;
      *v26 = v27;
      *(_QWORD *)(a1 + 368) = v27;
      ++*(_DWORD *)(a1 + 376);
      ExReleaseResourceLite((PERESOURCE)(a1 + 384));
      KeLeaveCriticalRegion();
      if ( (byte_1401694FA & 2) != 0 )
      {
        v28 = "IO";
        if ( (v25[32] & 2) == 0 )
          v28 = "Discovery";
        sub_1400C9DE8(
          (__int64)(v25 + 316),
          (__int64)(v25 + 60),
          (__int64)v28,
          *(_DWORD *)(v12 + 56),
          v12 + 1032,
          *(const wchar_t **)(v12 + 1016),
          (const char *)(a1 + 72),
          *((_WORD *)v25 + 2),
          v25 + 60,
          v25 + 316,
          v25 + 572,
          v28,
          1);
      }
    }
    *v32 = v25;
    goto LABEL_23;
  }
  return (unsigned int)v24;
}
