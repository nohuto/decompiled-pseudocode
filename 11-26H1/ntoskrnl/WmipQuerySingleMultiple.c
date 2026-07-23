/*
 * XREFs of WmipQuerySingleMultiple @ 0x140829764
 * Callers:
 *     IoWMIQuerySingleInstanceMultiple @ 0x140828220 (IoWMIQuerySingleInstanceMultiple.c)
 *     WmipIoControl @ 0x140A0BC50 (WmipIoControl.c)
 * Callees:
 *     Feature_575661368__private_IsEnabledDeviceUsageNoInline @ 0x1406C71D8 (Feature_575661368__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     memmove @ 0x140742080 (memmove.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     ProbeForRead @ 0x1408F5E40 (ProbeForRead.c)
 *     WmipQuerySetExecuteSI @ 0x140A0D9D4 (WmipQuerySetExecuteSI.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
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
  unsigned int v9; // r15d
  char *v10; // rdi
  int v11; // ebx
  __int64 v12; // r9
  _QWORD *Pool2; // rax
  _QWORD *v14; // rsi
  int v15; // r14d
  char v16; // r13
  unsigned int *v17; // rdx
  _BYTE *v18; // r12
  unsigned int v19; // r8d
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  __m128i v23; // xmm1
  unsigned int v24; // edi
  unsigned int *v25; // r15
  unsigned __int16 v26; // di
  void *v27; // rax
  unsigned int v28; // eax
  unsigned int *v29; // rcx
  unsigned int *v30; // r15
  __int64 v31; // rax
  unsigned int v32; // edi
  _DWORD *v33; // r15
  _DWORD *v34; // rdi
  int v35; // eax
  char *v36; // rcx
  unsigned int v39; // [rsp+44h] [rbp-334h]
  int v40; // [rsp+48h] [rbp-330h] BYREF
  int v41; // [rsp+4Ch] [rbp-32Ch]
  int v42; // [rsp+50h] [rbp-328h]
  void *v43; // [rsp+58h] [rbp-320h]
  int v44; // [rsp+60h] [rbp-318h]
  int v45; // [rsp+64h] [rbp-314h]
  int v46; // [rsp+68h] [rbp-310h]
  unsigned int *v47; // [rsp+70h] [rbp-308h]
  __int64 v48; // [rsp+78h] [rbp-300h]
  unsigned int v49; // [rsp+80h] [rbp-2F8h]
  volatile void *Address; // [rsp+88h] [rbp-2F0h]
  char *v51; // [rsp+90h] [rbp-2E8h]
  __int64 v52; // [rsp+98h] [rbp-2E0h]
  PVOID Object; // [rsp+A0h] [rbp-2D8h]
  __int64 v54; // [rsp+A8h] [rbp-2D0h]
  PVOID v55; // [rsp+B0h] [rbp-2C8h]
  PVOID v56; // [rsp+B8h] [rbp-2C0h]
  _DWORD *v57; // [rsp+C0h] [rbp-2B8h]
  __int64 v58; // [rsp+C8h] [rbp-2B0h]
  __int64 v59; // [rsp+D0h] [rbp-2A8h]
  __int64 v60; // [rsp+D8h] [rbp-2A0h]
  _DWORD *v61; // [rsp+E0h] [rbp-298h]
  __int64 v62; // [rsp+E8h] [rbp-290h]
  _BYTE P[592]; // [rsp+F0h] [rbp-288h] BYREF

  v9 = a4;
  v39 = a4;
  v57 = a3;
  v60 = a1;
  v61 = a3;
  v10 = (char *)a3;
  v51 = (char *)a3;
  v49 = a6;
  v48 = a7;
  v59 = a8;
  v58 = a9;
  v62 = a9;
  LODWORD(v54) = 0;
  memset_0(P, 0, 0x248uLL);
  v11 = 0;
  v42 = 0;
  v12 = a7;
  if ( a7 )
  {
    v14 = 0LL;
    v55 = 0LL;
  }
  else
  {
    Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
    v14 = Pool2;
    v55 = Pool2;
    if ( Pool2 )
      memmove(Pool2, (const void *)(a5 + 8), 24LL * a6);
    else
      v11 = -1073741670;
    v10 = v51;
    v12 = v48;
  }
  if ( v11 < 0 )
    return (unsigned int)v11;
  v15 = 0;
  v41 = 0;
  v16 = 0;
  v47 = 0LL;
  v17 = (unsigned int *)v10;
  v43 = v10;
  v18 = P;
  v56 = P;
  v19 = 580;
  v46 = 580;
  v20 = 0LL;
  Object = 0LL;
  while ( 1 )
  {
    v45 = v20;
    if ( (unsigned int)v20 >= v49 )
      break;
    if ( v12 )
    {
      v23 = *(__m128i *)(v59 + 16LL * (unsigned int)v20);
      Object = *(PVOID *)(v12 + 8LL * (unsigned int)v20);
      v52 = 0LL;
      Address = (volatile void *)_mm_srli_si128(v23, 8).m128i_u64[0];
      v22 = _mm_cvtsi128_si32(v23);
    }
    else
    {
      v21 = 3 * v20;
      v22 = LOWORD(v14[v21 + 1]);
      Address = (volatile void *)v14[v21 + 2];
      v52 = v14[v21];
      v17 = (unsigned int *)v43;
    }
    v40 = v22;
    v24 = ((unsigned __int16)v22 + 73) & 0xFFFFFFF8;
    if ( v16 || v9 < v24 )
    {
      if ( v24 > v19 )
      {
        if ( v18 != P )
          ExFreePoolWithTag(v18, 0);
        v18 = (_BYTE *)ExAllocatePool2(0x40uLL);
        v56 = v18;
        if ( !v18 )
        {
          v11 = -1073741670;
          break;
        }
        v46 = v24;
      }
      v25 = (unsigned int *)v18;
      v44 = v24;
      v47 = 0LL;
      v16 = 1;
    }
    else
    {
      v25 = v17;
      v44 = v39;
    }
    memset_0(v25, 0, 0x40uLL);
    v25[11] = 2;
    *v25 = v24;
    *((_QWORD *)v25 + 2) = v52;
    v25[12] = 64;
    v25[14] = v24;
    v26 = v40;
    *((_WORD *)v25 + 32) = v40;
    v27 = (char *)v25 + 66;
    if ( a2 == 1 )
    {
      ProbeForRead(Address, v26, 2u);
      v27 = (char *)v25 + 66;
    }
    memmove(v27, (const void *)Address, v26);
    v40 = *v25;
    if ( (int)WmipQuerySetExecuteSI(Object, (__int64)v25, v44, (__int64)&v40) < 0 )
      goto LABEL_29;
    v28 = v25[11];
    if ( (v28 & 0x100) != 0 )
      goto LABEL_29;
    ++v42;
    if ( (v28 & 0x20) != 0 )
    {
      v15 += (v25[12] + 7) & 0xFFFFFFF8;
      v41 = v15;
      v16 = 1;
LABEL_29:
      v17 = (unsigned int *)v43;
      goto LABEL_30;
    }
    if ( v16 )
    {
      v15 += (v40 + 7) & 0xFFFFFFF8;
      v41 = v15;
      goto LABEL_29;
    }
    if ( v47 )
      v47[3] = v54;
    v29 = v25;
    v30 = v25 + 3;
    while ( 1 )
    {
      v31 = *v30;
      v47 = v29;
      if ( !(_DWORD)v31 )
        break;
      v30 = (unsigned int *)((char *)v30 + v31);
      v29 = (unsigned int *)((char *)v29 + v31);
    }
    v32 = (v40 + 7) & 0xFFFFFFF8;
    v15 += v32;
    v41 = v15;
    if ( (unsigned int)Feature_575661368__private_IsEnabledDeviceUsageNoInline() )
      v39 = v32 < v39 ? v39 - v32 : 0;
    else
      v39 -= v32;
    v17 = (unsigned int *)((char *)v43 + v32);
    v43 = v17;
    v54 = (unsigned int)((_DWORD)v17 - (_DWORD)v47);
LABEL_30:
    v20 = (unsigned int)(v45 + 1);
    v9 = v39;
    v19 = v46;
    v12 = v48;
  }
  v33 = (_DWORD *)v58;
  v34 = v57;
  if ( v18 != P )
    ExFreePoolWithTag(v18, 0);
  if ( !v42 )
    v11 = -1073741163;
  if ( v11 >= 0 && v16 )
  {
    v35 = 56;
    *v34 = 56;
    v36 = v51;
    *((_DWORD *)v51 + 11) = 32;
    *((_DWORD *)v36 + 12) = v15;
  }
  else
  {
    v35 = v15;
  }
  *v33 = v35;
  if ( v14 )
    ExFreePoolWithTag(v14, 0);
  return (unsigned int)v11;
}
