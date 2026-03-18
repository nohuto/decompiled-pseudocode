/*
 * XREFs of WmipQuerySingleMultiple @ 0x140823554
 * Callers:
 *     IoWMIQuerySingleInstanceMultiple @ 0x140822010 (IoWMIQuerySingleInstanceMultiple.c)
 *     WmipIoControl @ 0x140A0D940 (WmipIoControl.c)
 * Callees:
 *     __security_check_cookie @ 0x140722910 (__security_check_cookie.c)
 *     memmove @ 0x14073D480 (memmove.c)
 *     memset_0 @ 0x14073D880 (memset_0.c)
 *     ProbeForRead @ 0x1408EF880 (ProbeForRead.c)
 *     WmipQuerySetExecuteSI @ 0x140A0E7F8 (WmipQuerySetExecuteSI.c)
 *     ExAllocatePool2 @ 0x140C10430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C10E50 (ExFreePoolWithTag.c)
 */

__int64 __fastcall WmipQuerySingleMultiple(
        __int64 a1,
        char a2,
        _DWORD *a3,
        unsigned int a4,
        __int64 a5,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int *v9; // rsi
  __int64 v10; // r12
  int v11; // ebx
  _QWORD *Pool2; // rax
  _QWORD *v13; // rdi
  int v14; // r14d
  char v15; // r13
  __int64 v16; // rax
  unsigned int *v17; // r8
  _BYTE *v18; // r15
  unsigned int v19; // edx
  __int64 v20; // rax
  int v21; // ecx
  __m128i v22; // xmm1
  unsigned int v23; // esi
  unsigned int *v24; // r12
  unsigned __int16 v25; // si
  void *v26; // rax
  unsigned int v27; // eax
  unsigned int *v28; // rdx
  unsigned int *v29; // r12
  __int64 v30; // rax
  unsigned int v31; // eax
  _DWORD *v32; // rsi
  _DWORD *v33; // r12
  int v34; // eax
  _DWORD *v35; // rcx
  int v38; // [rsp+44h] [rbp-334h] BYREF
  int v39; // [rsp+48h] [rbp-330h]
  unsigned int v40; // [rsp+4Ch] [rbp-32Ch]
  int v41; // [rsp+50h] [rbp-328h]
  int v42; // [rsp+54h] [rbp-324h]
  unsigned int *v43; // [rsp+58h] [rbp-320h]
  int v44; // [rsp+60h] [rbp-318h]
  int v45; // [rsp+64h] [rbp-314h]
  unsigned int *v46; // [rsp+68h] [rbp-310h]
  unsigned int v47; // [rsp+70h] [rbp-308h]
  volatile void *Address; // [rsp+78h] [rbp-300h]
  void *v49; // [rsp+80h] [rbp-2F8h]
  __int64 v50; // [rsp+88h] [rbp-2F0h]
  PVOID Object; // [rsp+90h] [rbp-2E8h]
  __int64 v52; // [rsp+98h] [rbp-2E0h]
  PVOID v53; // [rsp+A0h] [rbp-2D8h]
  PVOID v54; // [rsp+A8h] [rbp-2D0h]
  _DWORD *v55; // [rsp+B0h] [rbp-2C8h]
  __int64 v56; // [rsp+B8h] [rbp-2C0h]
  __int64 v57; // [rsp+C0h] [rbp-2B8h]
  __int64 v58; // [rsp+C8h] [rbp-2B0h]
  __int64 v59; // [rsp+D0h] [rbp-2A8h]
  void *v60; // [rsp+D8h] [rbp-2A0h]
  __int64 v61; // [rsp+E0h] [rbp-298h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v40 = a4;
  v55 = a3;
  v58 = a1;
  v60 = a3;
  v9 = a3;
  v49 = a3;
  v47 = a6;
  v10 = a7;
  v59 = a7;
  v57 = a8;
  v56 = a9;
  v61 = a9;
  LODWORD(v52) = 0;
  memset_0(P, 0, 0x248uLL);
  v11 = 0;
  v42 = 0;
  if ( a7 )
  {
    v13 = 0LL;
    v53 = 0LL;
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    v13 = Pool2;
    v53 = Pool2;
    if ( Pool2 )
      memmove(Pool2, (const void *)(a5 + 8), 24LL * a6);
    else
      v11 = -1073741670;
    v9 = (unsigned int *)v49;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  v14 = 0;
  v39 = 0;
  v15 = 0;
  v16 = 0LL;
  v46 = 0LL;
  v17 = v9;
  v43 = v9;
  v18 = P;
  v54 = P;
  v19 = 580;
  v41 = 580;
  Object = 0LL;
  while ( 1 )
  {
    v45 = v16;
    if ( (unsigned int)v16 >= v47 )
      break;
    if ( v10 )
    {
      v22 = *(__m128i *)(v57 + 16LL * (unsigned int)v16);
      Object = *(PVOID *)(v10 + 8LL * (unsigned int)v16);
      v50 = 0LL;
      Address = (volatile void *)_mm_srli_si128(v22, 8).m128i_u64[0];
      v21 = _mm_cvtsi128_si32(v22);
    }
    else
    {
      v20 = 3 * v16;
      v21 = LOWORD(v13[v20 + 1]);
      Address = (volatile void *)v13[v20 + 2];
      v50 = v13[v20];
      v19 = v41;
    }
    v38 = v21;
    v23 = ((unsigned __int16)v21 + 73) & 0xFFFFFFF8;
    if ( v15 || v40 < v23 )
    {
      if ( v23 > v19 )
      {
        if ( v18 != P )
          ExFreePoolWithTag(v18, 0);
        v18 = (_BYTE *)ExAllocatePool2(0x40uLL);
        v54 = v18;
        if ( !v18 )
        {
          v11 = -1073741670;
          break;
        }
        v41 = v23;
      }
      v24 = (unsigned int *)v18;
      v44 = v23;
      v46 = 0LL;
      v15 = 1;
    }
    else
    {
      v24 = v17;
      v44 = v40;
    }
    memset_0(v24, 0, 0x40uLL);
    v24[11] = 2;
    *v24 = v23;
    *((_QWORD *)v24 + 2) = v50;
    v24[12] = 64;
    v24[14] = v23;
    v25 = v38;
    *((_WORD *)v24 + 32) = v38;
    v26 = (char *)v24 + 66;
    if ( a2 == 1 )
    {
      ProbeForRead(Address, v25, 2u);
      v26 = (char *)v24 + 66;
    }
    memmove(v26, (const void *)Address, v25);
    v38 = *v24;
    if ( (int)WmipQuerySetExecuteSI(Object, (__int64)v24, v44, (__int64)&v38) < 0 )
      goto LABEL_29;
    v27 = v24[11];
    if ( (v27 & 0x100) != 0 )
      goto LABEL_29;
    ++v42;
    if ( (v27 & 0x20) != 0 )
    {
      v14 += (v24[12] + 7) & 0xFFFFFFF8;
      v39 = v14;
      v15 = 1;
LABEL_29:
      v17 = v43;
      goto LABEL_30;
    }
    if ( v15 )
    {
      v14 += (v38 + 7) & 0xFFFFFFF8;
      v39 = v14;
      goto LABEL_29;
    }
    if ( v46 )
      v46[3] = v52;
    v28 = v24;
    v29 = v24 + 3;
    while ( 1 )
    {
      v30 = *v29;
      v46 = v28;
      if ( !(_DWORD)v30 )
        break;
      v29 = (unsigned int *)((char *)v29 + v30);
      v28 = (unsigned int *)((char *)v28 + v30);
    }
    v31 = (v38 + 7) & 0xFFFFFFF8;
    v14 += v31;
    v39 = v14;
    v40 -= v31;
    v17 = (unsigned int *)((char *)v43 + v31);
    v43 = v17;
    v52 = (unsigned int)((_DWORD)v17 - (_DWORD)v28);
LABEL_30:
    v16 = (unsigned int)(v45 + 1);
    v19 = v41;
    v10 = v59;
  }
  v32 = (_DWORD *)v56;
  v33 = v55;
  if ( v18 != P )
    ExFreePoolWithTag(v18, 0);
  if ( !v42 )
    v11 = -1073741163;
  if ( v11 >= 0 && v15 )
  {
    v34 = 56;
    *v33 = 56;
    v35 = v49;
    *((_DWORD *)v49 + 11) = 32;
    v35[12] = v14;
  }
  else
  {
    v34 = v14;
  }
  *v32 = v34;
  if ( v13 )
    ExFreePoolWithTag(v13, 0);
  return (unsigned int)v11;
}
