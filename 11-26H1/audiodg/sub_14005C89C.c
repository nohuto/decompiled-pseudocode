/*
 * XREFs of sub_14005C89C @ 0x14005C89C
 * Callers:
 *     sub_14005C67C @ 0x14005C67C (sub_14005C67C.c)
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_140008C08 @ 0x140008C08 (sub_140008C08.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_140015C30 @ 0x140015C30 (sub_140015C30.c)
 *     sub_1400165A4 @ 0x1400165A4 (sub_1400165A4.c)
 *     sub_140016858 @ 0x140016858 (sub_140016858.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D1F4 @ 0x14001D1F4 (sub_14001D1F4.c)
 *     sub_140033E34 @ 0x140033E34 (sub_140033E34.c)
 *     sub_140039188 @ 0x140039188 (sub_140039188.c)
 *     sub_1400470EC @ 0x1400470EC (sub_1400470EC.c)
 *     sub_14005D050 @ 0x14005D050 (sub_14005D050.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall sub_14005C89C(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5, __int64 a6)
{
  struct _RTL_CRITICAL_SECTION *v10; // rbx
  int v11; // ebx
  int v12; // edx
  __int64 v13; // r12
  int v14; // eax
  int v15; // eax
  int v16; // r9d
  int v17; // edx
  int v18; // eax
  int v19; // eax
  int v20; // eax
  int v21; // eax
  int v22; // eax
  int v23; // eax
  signed __int32 v24; // eax
  __int64 (__fastcall *v25)(__int64); // rax
  __int64 v26; // rbx
  __int64 v27; // rbx
  int v28; // eax
  int v29; // eax
  __int64 v30; // r15
  int v31; // eax
  int v32; // eax
  int v33; // eax
  int v34; // eax
  int v35; // eax
  HANDLE WaitableTimer; // rax
  __int64 v37; // r9
  __int64 v39; // [rsp+40h] [rbp-49h] BYREF
  __int64 v40; // [rsp+48h] [rbp-41h] BYREF
  int *v41; // [rsp+50h] [rbp-39h] BYREF
  int v42; // [rsp+58h] [rbp-31h]
  DWORD pcbData; // [rsp+5Ch] [rbp-2Dh] BYREF
  DWORD pdwType; // [rsp+60h] [rbp-29h] BYREF
  int v45; // [rsp+64h] [rbp-25h]
  ULONG ActualResolution; // [rsp+68h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+70h] [rbp-19h] BYREF
  struct _RTL_CRITICAL_SECTION *v48; // [rsp+78h] [rbp-11h] BYREF
  _QWORD v49[2]; // [rsp+80h] [rbp-9h] BYREF
  char v50; // [rsp+90h] [rbp+7h]
  void *retaddr; // [rsp+D8h] [rbp+4Fh]
  unsigned int pvData; // [rsp+E0h] [rbp+57h] BYREF
  unsigned int v53; // [rsp+F0h] [rbp+67h]

  v53 = a3;
  v10 = (struct _RTL_CRITICAL_SECTION *)(a1 + 128);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 128));
  v48 = v10;
  if ( *(_BYTE *)(a1 + 72) )
  {
    v11 = -2005139440;
    v12 = 104;
LABEL_6:
    sub_14000C2A8((int)retaddr, v12, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v11);
    goto LABEL_87;
  }
  if ( (a2 & 0xFFFFFFF0) != 0 )
  {
    v12 = 107;
LABEL_5:
    v11 = -2147024809;
    goto LABEL_6;
  }
  if ( !a3 )
  {
    v12 = 108;
    goto LABEL_5;
  }
  if ( (a2 & 1) != 0 )
  {
    if ( (a2 & 2) != 0 )
    {
      v12 = 114;
      goto LABEL_5;
    }
  }
  else if ( (a2 & 2) == 0 )
  {
    v12 = (a2 & 1) + 112;
    goto LABEL_5;
  }
  *(_WORD *)(a1 + 74) = 0;
  *(_QWORD *)(a1 + 360) = 0LL;
  *(_QWORD *)(a1 + 368) = 0LL;
  *(_WORD *)(a1 + 4680) = 0;
  v39 = 0LL;
  v13 = a5;
  v14 = sub_1400B6010(a5);
  v11 = v14;
  if ( v14 < 0 )
  {
    sub_14000C2A8((int)retaddr, 130, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v14);
LABEL_16:
    sub_140003238(&v39);
    goto LABEL_87;
  }
  v40 = 0LL;
  v15 = sub_1400B6010(v13);
  v11 = v15;
  if ( v15 < 0 )
  {
    sub_14000C2A8((int)retaddr, 134, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v15);
LABEL_19:
    sub_140003238(&v40);
    goto LABEL_16;
  }
  v41 = 0LL;
  v49[0] = &v41;
  v49[1] = 0LL;
  v50 = 1;
  v11 = sub_1400B6010(v39);
  sub_140033E34((__int64)v49);
  if ( v11 < 0 )
  {
    v16 = v11;
    v17 = 138;
LABEL_22:
    sub_14000C2A8((int)retaddr, v17, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v16);
LABEL_23:
    sub_140008C08((void **)&v41, 0LL);
    goto LABEL_19;
  }
  v18 = sub_1400B6010(v39);
  v11 = v18;
  if ( v18 < 0 )
  {
    v16 = v18;
    v17 = 141;
    goto LABEL_22;
  }
  v19 = sub_14001D1F4(a1 + 264, 0);
  v11 = v19;
  if ( v19 < 0 )
  {
    v16 = v19;
    v17 = 144;
    goto LABEL_22;
  }
  v20 = sub_14001D1F4(a1 + 280, 1);
  v11 = v20;
  if ( v20 < 0 )
  {
    v16 = v20;
    v17 = 147;
    goto LABEL_22;
  }
  v42 = 0;
  if ( (a2 & 6) == 6 )
  {
    v42 = 1;
  }
  else
  {
    v21 = sub_1400B6010(v40);
    v11 = v21;
    if ( v21 < 0 )
    {
      v16 = v21;
      v17 = 159;
      goto LABEL_22;
    }
    if ( !v42 )
    {
      EnterCriticalSection(&stru_1400E86B0);
      v47 = &stru_1400E86B0;
      v24 = _InterlockedIncrement(&dword_1400E8958);
      *(_BYTE *)(a1 + 73) = 1;
      if ( v24 == 1 )
      {
        ActualResolution = 0;
        if ( NtSetTimerResolution(0x2710u, 1u, &ActualResolution) < 0 )
          sub_14005D050(retaddr, 185LL, "avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp");
      }
      sub_140018FF0(&v47);
      goto LABEL_43;
    }
  }
  v22 = sub_14001D1F4(a1 + 312, 0);
  v11 = v22;
  if ( v22 < 0 )
  {
    v16 = v22;
    v17 = 166;
    goto LABEL_22;
  }
  v23 = sub_1400B6010(v39);
  v11 = v23;
  if ( v23 < 0 )
  {
    v16 = v23;
    v17 = 167;
    goto LABEL_22;
  }
LABEL_43:
  v25 = sub_140015070;
  if ( (a2 & 1) == 0 )
    v25 = sub_140014350;
  *(_QWORD *)(a1 + 216) = v25;
  *(_QWORD *)(a1 + 104) = v53;
  v26 = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = a4;
  if ( a4 )
    sub_1400B6010(a4);
  if ( v26 )
    sub_1400B6010(v26);
  *(float *)(a1 + 112) = (float)v41[2] / (float)*((unsigned __int16 *)v41 + 6);
  v27 = *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 208) = v13;
  sub_1400B6010(v13);
  if ( v27 )
    sub_1400B6010(v27);
  pvData = 0;
  pcbData = 4;
  pdwType = 0;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
          L"AudioDGCPUPercentMax",
          0x10u,
          &pdwType,
          &pvData,
          &pcbData) )
  {
    v28 = pvData;
    if ( pvData >= 0xA )
    {
      if ( pvData <= 0x5A )
      {
LABEL_57:
        *(_QWORD *)(a1 + 352) = (unsigned int)(int)(float)((float)(int)(*(_QWORD *)(a1 + 104) * v28) / 100.0);
        goto LABEL_58;
      }
      v28 = 90;
    }
    else
    {
      v28 = 10;
    }
    pvData = v28;
    goto LABEL_57;
  }
LABEL_58:
  if ( !*(_QWORD *)(a1 + 352) )
    *(_QWORD *)(a1 + 352) = (unsigned int)(int)(float)((float)(int)*(_QWORD *)(a1 + 104) * 0.40000001);
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio\\Parameters",
          L"DeadlineDurationThreshold",
          0x10u,
          &pdwType,
          &pvData,
          &pcbData) )
    *(_QWORD *)(a1 + 440) = 10000 * pvData;
  v45 = 0;
  v29 = sub_1400B6010(v40);
  v11 = v29;
  if ( v29 < 0 )
  {
    v16 = v29;
    v17 = 253;
    goto LABEL_22;
  }
  v30 = a6;
  if ( (a2 & 4) != 0 && ((a2 & 1) != 0 && *(_QWORD *)(a1 + 312) && v45 == 1 || (a2 & 2) != 0) )
  {
    sub_140019444((__int64 *)(a1 + 408));
    v31 = sub_1400B6010(v30);
    v11 = v31;
    if ( v31 < 0 )
    {
      v16 = v31;
      v17 = 264;
      goto LABEL_22;
    }
    *(_BYTE *)(a1 + 4680) = 1;
    *(_DWORD *)(a1 + 4756) = 1;
  }
  if ( (a2 & 6) == 6 )
  {
    v32 = sub_14001D1F4(a1 + 416, 0);
    v11 = v32;
    if ( v32 < 0 )
    {
      v16 = v32;
      v17 = 277;
      goto LABEL_22;
    }
    v33 = sub_14001D1F4(a1 + 432, 0);
    v11 = v33;
    if ( v33 < 0 )
    {
      v16 = v33;
      v17 = 281;
      goto LABEL_22;
    }
    sub_140019444((__int64 *)(a1 + 424));
    v34 = sub_1400B6010(v30);
    v11 = v34;
    if ( v34 < 0 )
    {
      v16 = v34;
      v17 = 285;
      goto LABEL_22;
    }
    v35 = sub_14001D1F4(a1 + 288, 0);
    v11 = v35;
    if ( v35 < 0 )
    {
      v16 = v35;
      v17 = 289;
      goto LABEL_22;
    }
  }
  if ( sub_140039188(a1, a2) )
  {
    WaitableTimer = CreateWaitableTimerExW(0LL, 0LL, 0, 0x1F0003u);
    sub_140016858((void **)(a1 + 296), WaitableTimer);
    if ( sub_1400165A4((_QWORD *)(a1 + 296)) )
    {
      v11 = sub_1400470EC((int)retaddr, 298, (int)"avcore\\audiocore\\server\\audiodg\\exe\\audiopump.cpp", v37);
      goto LABEL_23;
    }
  }
  if ( sub_140015C30(a1) )
    _InterlockedExchange((volatile __int32 *)(a1 + 336), 0);
  *(_BYTE *)(a1 + 72) = 1;
  sub_140008C08((void **)&v41, 0LL);
  sub_140003238(&v40);
  sub_140003238(&v39);
  v11 = 0;
LABEL_87:
  sub_140018FF0(&v48);
  return (unsigned int)v11;
}
