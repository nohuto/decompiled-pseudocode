/*
 * XREFs of sub_14009EE00 @ 0x14009EE00
 * Callers:
 *     sub_1400A3BA0 @ 0x1400A3BA0 (sub_1400A3BA0.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008824 @ 0x140008824 (sub_140008824.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14000DA4C @ 0x14000DA4C (sub_14000DA4C.c)
 *     sub_14000DA94 @ 0x14000DA94 (sub_14000DA94.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_14003534C @ 0x14003534C (sub_14003534C.c)
 *     sub_140035D64 @ 0x140035D64 (sub_140035D64.c)
 *     sub_140038D28 @ 0x140038D28 (sub_140038D28.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 *     sub_140048108 @ 0x140048108 (sub_140048108.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     sub_14009D41C @ 0x14009D41C (sub_14009D41C.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall sub_14009EE00(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, unsigned int a6)
{
  struct _RTL_CRITICAL_SECTION *v9; // rbx
  unsigned int v10; // esi
  int v11; // edx
  __int64 v12; // rbx
  int v13; // eax
  int v14; // r9d
  int v15; // edx
  __int64 v16; // rsi
  _DWORD *v17; // r14
  __int64 v18; // rcx
  void *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // eax
  unsigned __int64 v23; // rax
  int v24; // r8d
  unsigned int v26; // ecx
  __int64 v27; // rdx
  unsigned int v28; // r8d
  __int64 v29; // rdx
  unsigned int v30; // eax
  unsigned int v31; // eax
  unsigned int v32; // ecx
  unsigned __int64 v33; // rax
  int v34; // r8d
  __int64 v35; // rax
  __int64 v36; // rcx
  unsigned __int64 v37; // rax
  int v38; // r8d
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r8
  __int64 v42; // rcx
  unsigned __int64 v43; // rax
  int v44; // r8d
  __int64 v45; // [rsp+20h] [rbp-20h] BYREF
  __int64 v46; // [rsp+28h] [rbp-18h]
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+30h] [rbp-10h] BYREF
  _UNKNOWN *retaddr; // [rsp+58h] [rbp+18h]

  v9 = (struct _RTL_CRITICAL_SECTION *)(a1 - 408);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 408));
  v47 = v9;
  if ( *(_DWORD *)(a1 - 368) )
  {
    v10 = -2005139440;
    v11 = 1045;
LABEL_5:
    sub_14000C2A8(
      (int)retaddr,
      v11,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      v10);
    goto LABEL_23;
  }
  if ( !a2 )
  {
    v10 = -2147024809;
    v11 = 1046;
    goto LABEL_5;
  }
  v45 = 0LL;
  sub_14001821C(&v45, a2);
  sub_14001821C((__int64 *)(a1 + 24), a4);
  sub_14001821C((__int64 *)(a1 + 32), a5);
  v46 = 0LL;
  v12 = v45;
  sub_1400B6010(v45);
  v10 = v13;
  if ( v13 < 0 )
  {
    v14 = v13;
    v15 = 1058;
LABEL_8:
    sub_14000C2A8(
      (int)retaddr,
      v15,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      v14);
LABEL_22:
    sub_140003238(&v45);
    goto LABEL_23;
  }
  v16 = v46;
  *(_QWORD *)(a1 - 344) = v46;
  sub_14000DA4C();
  v17 = (_DWORD *)(v16 + 204);
  v19 = (void *)sub_140035D64(v18, *(unsigned int *)(v16 + 204));
  *(_QWORD *)(a1 - 328) = v19;
  if ( !v19 )
  {
    v10 = -2147024882;
    v14 = -2147024882;
    v15 = 1065;
    goto LABEL_8;
  }
  memcpy(v19, (const void *)(v16 + 204), (unsigned int)*v17);
  if ( *(_DWORD *)v16 != 2
    || *(_DWORD *)(v16 + 200) != 1162888004
    || (int)sub_14003534C(v16 + 384) < 0
    || *v17 != 224
    || (v22 = *(_DWORD *)(v16 + 368), *(_DWORD *)(v16 + 364) >= v22)
    || v22 > *(_DWORD *)(v16 + 372) )
  {
LABEL_21:
    v10 = -2005139387;
    sub_14000C2A8(
      (int)retaddr,
      262,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\CPControlData.h",
      -2005139387);
    sub_14000C2A8(
      (int)retaddr,
      1074,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      -2005139387);
    v23 = sub_14000DA4C();
    sub_14000DA94(*(_QWORD *)(a1 - 328), v23, v24);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_22;
  }
  if ( (*(_DWORD *)(v16 + 172) & 0xFFFFFFF8) != 0 )
  {
    if ( (byte_1400E8401 & 4) != 0 )
      sub_14009D41C(v21, v20, v16 + 8);
    sub_140048108();
    _InterlockedAnd((volatile signed __int32 *)(v16 + 172), 0xFFFFFFFE);
    goto LABEL_21;
  }
  v26 = *(_DWORD *)(v16 + 336);
  if ( v26 && (*(_DWORD *)(v16 + 8) >= v26 || *(_DWORD *)(v16 + 12) >= *(_DWORD *)(v16 + 336)) )
  {
    sub_140048108();
    goto LABEL_21;
  }
  *(_QWORD *)(a1 - 224) = 0LL;
  *(_QWORD *)(a1 - 240) = 0LL;
  v27 = *(_QWORD *)(a1 - 328);
  *(_DWORD *)(a1 - 320) = *(unsigned __int16 *)(v27 + 192);
  *(float *)(a1 - 252) = (float)*(int *)(v27 + 184);
  *(_DWORD *)(a1 - 304) = sub_140008824((_WORD *)(v27 + 180));
  v30 = *(_DWORD *)(v29 + 164) - *(_DWORD *)(v29 + 160);
  *(_DWORD *)(a1 - 256) = v30;
  v31 = v30 / v28;
  v32 = a6;
  if ( a6 > v31 )
  {
    v10 = -2147024809;
    sub_14000C2A8(
      (int)retaddr,
      1098,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      -2147024809);
    v33 = sub_14000DA4C();
    sub_14000DA94(*(_QWORD *)(a1 - 328), v33, v34);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_22;
  }
  if ( !a6 )
    v32 = v31;
  *(_DWORD *)(a1 - 312) = v32;
  v35 = sub_140038D28(v28 * v32);
  *(_QWORD *)(a1 - 264) = v35;
  if ( !v35 )
  {
    v10 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      1104,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      -2147024882);
    v37 = sub_14000DA4C();
    sub_14000DA94(*(_QWORD *)(a1 - 328), v37, v38);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_22;
  }
  v39 = sub_140035D64(v36, (unsigned int)(*(_DWORD *)(a1 - 312) * *(_DWORD *)(a1 - 320)));
  *(_QWORD *)(a1 - 296) = v39;
  if ( !v39 )
  {
    v10 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      1113,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\crossprocess\\cpbaseendpoint.cpp",
      -2147024882);
    v42 = *(_QWORD *)(a1 - 264);
    if ( v42 )
    {
      sub_140039BB8(v42, v40, v41);
      *(_QWORD *)(a1 - 264) = 0LL;
    }
    v43 = sub_14000DA4C();
    sub_14000DA94(*(_QWORD *)(a1 - 328), v43, v44);
    *(_QWORD *)(a1 - 328) = 0LL;
    goto LABEL_22;
  }
  *(_QWORD *)(a1 - 336) = v16 + 8;
  *(_QWORD *)(a1 - 288) = v46 + *(unsigned int *)(*(_QWORD *)(a1 - 328) + 156LL);
  if ( *(_DWORD *)(v16 + 188) != -1 )
    *(_QWORD *)(a1 - 280) = v46 + *(unsigned int *)(*(_QWORD *)(a1 - 336) + 180LL);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a1 - 320) * *(_DWORD *)(*(_QWORD *)(a1 - 328) + 220LL);
  _InterlockedExchange((volatile __int32 *)(a1 - 368), 1);
  sub_14001821C((__int64 *)(a1 - 352), v12);
  sub_140003238(&v45);
  v10 = 0;
LABEL_23:
  sub_140018FF0(&v47);
  return v10;
}
