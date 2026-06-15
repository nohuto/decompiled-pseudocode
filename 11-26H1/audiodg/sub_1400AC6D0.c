/*
 * XREFs of sub_1400AC6D0 @ 0x1400AC6D0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140003238 @ 0x140003238 (sub_140003238.c)
 *     sub_14000C2A8 @ 0x14000C2A8 (sub_14000C2A8.c)
 *     sub_14001189C @ 0x14001189C (sub_14001189C.c)
 *     sub_14001821C @ 0x14001821C (sub_14001821C.c)
 *     sub_140018FF0 @ 0x140018FF0 (sub_140018FF0.c)
 *     sub_140019444 @ 0x140019444 (sub_140019444.c)
 *     sub_14001D96C @ 0x14001D96C (sub_14001D96C.c)
 *     sub_140035D64 @ 0x140035D64 (sub_140035D64.c)
 *     sub_14003826C @ 0x14003826C (sub_14003826C.c)
 *     sub_140038D28 @ 0x140038D28 (sub_140038D28.c)
 *     sub_1400390B4 @ 0x1400390B4 (sub_1400390B4.c)
 *     sub_140039BB8 @ 0x140039BB8 (sub_140039BB8.c)
 *     sub_14003E394 @ 0x14003E394 (sub_14003E394.c)
 *     memcmp @ 0x14004A694 (memcmp.c)
 *     memcpy @ 0x14004A6A0 (memcpy.c)
 *     memset @ 0x14004A6AC (memset.c)
 *     sub_1400A29A8 @ 0x1400A29A8 (sub_1400A29A8.c)
 *     sub_1400AA1A8 @ 0x1400AA1A8 (sub_1400AA1A8.c)
 *     sub_1400AC554 @ 0x1400AC554 (sub_1400AC554.c)
 *     sub_1400AC5F4 @ 0x1400AC5F4 (sub_1400AC5F4.c)
 *     sub_1400AC62C @ 0x1400AC62C (sub_1400AC62C.c)
 *     sub_1400AC678 @ 0x1400AC678 (sub_1400AC678.c)
 *     sub_1400B6010 @ 0x1400B6010 (sub_1400B6010.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall sub_1400AC6D0(__int64 a1, __int64 a2, _QWORD *a3)
{
  struct _RTL_CRITICAL_SECTION *v6; // rbx
  __int64 v7; // r8
  __int64 v8; // r9
  int v9; // edi
  int v10; // edx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rcx
  void *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rcx
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rcx
  unsigned int v25; // eax
  void *v26; // rbx
  __int64 *v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // eax
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // r8
  __int64 v35; // rcx
  int v36; // eax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // rax
  __int64 v43; // rdx
  __int64 v45; // [rsp+50h] [rbp-29h] BYREF
  __int64 v46; // [rsp+58h] [rbp-21h] BYREF
  struct _RTL_CRITICAL_SECTION *v47; // [rsp+60h] [rbp-19h] BYREF
  __int64 v48; // [rsp+68h] [rbp-11h] BYREF
  __int64 v49; // [rsp+70h] [rbp-9h] BYREF
  char v50; // [rsp+78h] [rbp-1h]
  __int64 *v51; // [rsp+80h] [rbp+7h] BYREF
  WCHAR *v52; // [rsp+88h] [rbp+Fh] BYREF
  char v53; // [rsp+90h] [rbp+17h]
  _UNKNOWN *retaddr; // [rsp+D8h] [rbp+5Fh]
  __int64 v55; // [rsp+E0h] [rbp+67h] BYREF
  void *v56; // [rsp+F8h] [rbp+7Fh] BYREF

  v6 = (struct _RTL_CRITICAL_SECTION *)(a1 - 1320);
  EnterCriticalSection((LPCRITICAL_SECTION)(a1 - 1320));
  v47 = v6;
  sub_1400AC554(
    "CSpatialCrossProcessServerEndpoint<struct SpatialStaticControlData_V0,struct SpatialVolatileControlData_V0,struct Sp"
    "atialControlData_V0>::Initialize",
    39,
    v7,
    v8);
  v45 = 0LL;
  if ( *(_BYTE *)(a1 - 1352 + 96) )
  {
    v9 = -2005139440;
    v10 = 44;
LABEL_45:
    sub_14000C2A8(
      (int)retaddr,
      v10,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      v9);
    goto LABEL_46;
  }
  if ( !a3 )
  {
    v9 = -2147467261;
    v10 = 47;
    goto LABEL_45;
  }
  if ( !a2 )
  {
    v9 = -2147467261;
    v10 = 48;
    goto LABEL_45;
  }
  if ( *(_DWORD *)a2 != 152 )
  {
    v9 = -2147024809;
    v10 = 49;
    goto LABEL_45;
  }
  *(_QWORD *)(a1 + 96) = *(_QWORD *)(a2 + 128);
  *(_DWORD *)(a1 + 104) = memcmp((const void *)(a2 + 136), &unk_1400C96D0, 0x10uLL) != 0 ? 4 : 2;
  v11 = *(unsigned int *)(a2 + 84) * (unsigned __int64)*(unsigned __int16 *)(*(_QWORD *)(a2 + 120) + 12LL);
  if ( v11 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v10 = 60;
    goto LABEL_45;
  }
  v12 = (unsigned int)v11;
  v13 = sub_140038D28((unsigned int)v11);
  *(_QWORD *)(a1 - 1240) = v13;
  if ( !v13 )
  {
    v9 = -2147024882;
    v10 = 63;
    goto LABEL_45;
  }
  v15 = (void *)sub_140035D64(v14, v12);
  *(_QWORD *)(a1 - 1248) = v15;
  if ( !v15 )
  {
    v9 = -2147024882;
    sub_14000C2A8(
      (int)retaddr,
      71,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      -2147024882);
    goto LABEL_27;
  }
  memset(v15, 0, v12);
  v55 = 0LL;
  if ( !*(_QWORD *)(a2 + 96) )
  {
    v51 = &v55;
    v52 = 0LL;
    v53 = 1;
    v48 = a1 - 48;
    v49 = 0LL;
    v50 = 1;
    v9 = sub_1400A29A8((a1 + 8) & -(__int64)(a1 != 1352), *(_DWORD *)(a2 + 88), &v49, &v52);
    sub_1400390B4((__int64)&v48);
    sub_14001189C((__int64)&v51);
    if ( v9 < 0 )
    {
      sub_14000C2A8(
        (int)retaddr,
        80,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        v9);
      sub_14001D96C((void **)&v55);
      v20 = *(_QWORD *)(a1 - 1240);
      if ( v20 )
      {
        sub_140039BB8(v20, v18, v19);
        *(_QWORD *)(a1 - 1240) = 0LL;
      }
      goto LABEL_46;
    }
    *(_DWORD *)(a1 + 52) = *(_DWORD *)(a2 + 88);
  }
  sub_140019444(&v45);
  v21 = sub_1400AA1A8(
          a1 - 1352,
          *(_QWORD *)(a2 + 104),
          *(unsigned __int16 **)(a2 + 120),
          v55,
          *(_DWORD *)(a2 + 84),
          *(_DWORD *)(a2 + 8),
          *(_DWORD *)(a2 + 20),
          *(_DWORD *)(a2 + 24),
          *(_DWORD *)(a2 + 28),
          &v45);
  v9 = v21;
  if ( v21 >= 0 )
  {
    *(_OWORD *)(a1 + 64) = *(_OWORD *)(a2 + 32);
    v25 = *(_DWORD *)(a2 + 48);
    *(_DWORD *)(a1 + 80) = v25;
    v26 = 0LL;
    v56 = 0LL;
    if ( v25 )
    {
      v27 = sub_1400AC62C(&v46, v25);
      sub_1400AC5F4((__int64 *)&v56, v27);
      sub_14003E394(&v46, v28);
      v26 = v56;
      if ( !v56 )
      {
        v9 = -2147024882;
        sub_14000C2A8(
          (int)retaddr,
          102,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
          -2147024882);
        sub_14003E394((__int64 *)&v56, v29);
        sub_14001D96C((void **)&v55);
LABEL_27:
        v30 = *(_QWORD *)(a1 - 1240);
        if ( v30 )
        {
          sub_140039BB8(v30, v16, v17);
          *(_QWORD *)(a1 - 1240) = 0LL;
        }
        goto LABEL_46;
      }
      memcpy(v56, *(const void **)(a2 + 56), *(unsigned int *)(a1 + 80));
    }
    _InterlockedExchange(
      (volatile __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 - 16) + 1312LL) + 44LL),
      (int)((float)((float)*(int *)(*(_QWORD *)(a2 + 120) + 8LL)
                  / (float)*(unsigned __int16 *)(*(_QWORD *)(a2 + 120) + 12LL))
          * (double)(int)*(_QWORD *)(a2 + 72)
          / 10000000.0
          + 0.5));
    sub_1400B6010(a1 - 1328);
    v9 = v31;
    if ( v31 >= 0 )
    {
      sub_1400B6010(a1 - 1328);
      v9 = v36;
      if ( v36 >= 0 )
      {
        v41 = *(_QWORD *)(a2 + 96);
        if ( v41 )
        {
          sub_14001821C((__int64 *)(a1 + 24), v41);
          sub_1400B6010(*(_QWORD *)(a1 + 24));
          *(_QWORD *)(a1 + 32) = v42;
          _InterlockedOr((volatile signed __int32 *)(*(_QWORD *)(*(_QWORD *)(a1 - 16) + 1312LL) + 64LL), 0x20u);
        }
        sub_1400AC678((__int64 *)(a1 - 568), *(_QWORD *)(a2 + 112));
        if ( v26 )
        {
          v56 = 0LL;
          *(_QWORD *)(a1 + 88) = v26;
        }
        sub_14003826C(&v45, a3);
        *(_BYTE *)(a1 - 1256) = 1;
        sub_14003E394((__int64 *)&v56, v43);
        sub_14001D96C((void **)&v55);
        v9 = 0;
      }
      else
      {
        sub_14000C2A8(
          (int)retaddr,
          115,
          (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
          v36);
        sub_14003E394((__int64 *)&v56, v37);
        sub_14001D96C((void **)&v55);
        v40 = *(_QWORD *)(a1 - 1240);
        if ( v40 )
        {
          sub_140039BB8(v40, v38, v39);
          *(_QWORD *)(a1 - 1240) = 0LL;
        }
      }
    }
    else
    {
      sub_14000C2A8(
        (int)retaddr,
        113,
        (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
        v31);
      sub_14003E394((__int64 *)&v56, v32);
      sub_14001D96C((void **)&v55);
      v35 = *(_QWORD *)(a1 - 1240);
      if ( v35 )
      {
        sub_140039BB8(v35, v33, v34);
        *(_QWORD *)(a1 - 1240) = 0LL;
      }
    }
  }
  else
  {
    sub_14000C2A8(
      (int)retaddr,
      93,
      (int)"avcore\\audiocore\\engine\\core\\endpoint\\spatialcrossprocess\\spatialcpserverendpoint.cpp",
      v21);
    sub_14001D96C((void **)&v55);
    v24 = *(_QWORD *)(a1 - 1240);
    if ( v24 )
    {
      sub_140039BB8(v24, v22, v23);
      *(_QWORD *)(a1 - 1240) = 0LL;
    }
  }
LABEL_46:
  sub_140003238(&v45);
  sub_140018FF0(&v47);
  return (unsigned int)v9;
}
