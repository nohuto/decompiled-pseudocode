/*
 * XREFs of ?AlphaScanLineBlend@@YAHPEAEPEAU_RECTL@@J0JPEAU_POINTL@@PEAU_XLATEOBJ@@33VXEPALOBJ@@4PEAU_ALPHA_DISPATCH_FORMAT@@@Z @ 0x1400E61A0
 * Callers:
 *     EngAlphaBlend @ 0x1400E4850 (EngAlphaBlend.c)
 * Callees:
 *     PALLOCMEM @ 0x140183124 (PALLOCMEM.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall AlphaScanLineBlend(
        __int64 a1,
        int *a2,
        int a3,
        __int64 a4,
        int a5,
        int *a6,
        __int64 a7,
        __int64 a8,
        __int64 a9,
        __int64 a10,
        __int64 a11,
        __int64 a12)
{
  int v15; // r10d
  unsigned int v16; // r12d
  int v17; // r9d
  int v18; // esi
  unsigned int v19; // r8d
  int v20; // ecx
  __int64 v21; // r9
  __int64 v22; // rcx
  char *v23; // rbx
  int v24; // eax
  int v25; // eax
  char *v26; // rdi
  void (__fastcall *v27)(char *, char *, _QWORD, _QWORD, __int64); // rdx
  int v28; // ecx
  char *v29; // r14
  char *v31; // rdi
  char *v32; // rsi
  int v34; // eax
  unsigned int v35; // [rsp+40h] [rbp-88h]
  unsigned int v36; // [rsp+40h] [rbp-88h]
  char *v37; // [rsp+58h] [rbp-70h]
  char *i; // [rsp+60h] [rbp-68h]
  char *v39; // [rsp+68h] [rbp-60h]
  _QWORD *v40; // [rsp+70h] [rbp-58h]
  _QWORD *v41; // [rsp+78h] [rbp-50h]
  __int64 v42; // [rsp+90h] [rbp-38h]
  int v44; // [rsp+120h] [rbp+58h]

  v15 = *a2;
  v16 = a2[2] - *a2;
  v17 = a2[1];
  v44 = a2[3] - v17;
  v18 = 4 * v16;
  v35 = *(_DWORD *)(a12 + 4);
  v19 = v35 >> 3;
  v20 = *(_DWORD *)a12 >> 3;
  v37 = 0LL;
  v39 = 0LL;
  if ( !a9 )
    return 0LL;
  v42 = *(_QWORD *)(a9 + 56);
  if ( v18 < (int)v16 )
    return 0LL;
  v21 = a3 * v17;
  if ( v20 )
  {
    v22 = v20 * v15;
  }
  else
  {
    if ( *(_DWORD *)a12 == 1 )
      v34 = v15 / 8;
    else
      v34 = v15 / 2;
    v22 = v34;
  }
  v23 = (char *)(v21 + v22 + a1);
  v24 = *a6;
  if ( v19 )
  {
    v25 = v19 * v24;
  }
  else if ( v35 == 1 )
  {
    v25 = v24 / 8;
  }
  else
  {
    v25 = v24 / 2;
  }
  v26 = (char *)(a6[1] * a5 + (__int64)v25 + a4);
  v41 = (_QWORD *)(a12 + 16);
  v27 = *(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64))(a12 + 16);
  v28 = 4 * v16;
  if ( !v27 )
    v28 = 0;
  v40 = (_QWORD *)(a12 + 8);
  v36 = v28;
  if ( *(_QWORD *)(a12 + 8) )
  {
    v36 = v28 + v18;
    if ( v28 + v18 < v18 )
      return 0LL;
  }
  if ( v36 )
  {
    v39 = (char *)PALLOCMEM(v36, 1886150983LL);
    if ( !v39 )
      return 0LL;
    v27 = (void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v41;
  }
  v29 = v39;
  if ( *v40 )
  {
    v37 = v39;
    v29 = &v39[v18];
  }
  if ( !v27 )
    v29 = 0LL;
  for ( i = v26; v44--; i += a5 )
  {
    v31 = i;
    v32 = v23;
    if ( v37 )
    {
      ((void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v40)(v37, i, 0LL, v16, a7);
      v31 = v37;
    }
    if ( v29 )
    {
      ((void (__fastcall *)(char *, char *, _QWORD, _QWORD, __int64))*v41)(v29, v23, 0LL, v16, a8);
      v32 = v29;
    }
    (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD))(a12 + 32))(v32, v31, v16, *(unsigned int *)(a12 + 40));
    if ( v29 )
      (*(void (__fastcall **)(char *, char *, _QWORD, _QWORD, __int64, __int64, __int64))(a12 + 24))(
        v23,
        v29,
        v16,
        0LL,
        a9,
        a10,
        v42);
    v23 += a3;
  }
  if ( v36 )
    Win32FreePool(v39);
  return 1LL;
}
