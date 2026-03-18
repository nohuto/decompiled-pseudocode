/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x140059520
 * Callers:
 *     UsbhBuildCompatibleID @ 0x140015C18 (UsbhBuildCompatibleID.c)
 * Callees:
 *     PdoExt @ 0x140004330 (PdoExt.c)
 *     UsbhMakeId @ 0x1400159A0 (UsbhMakeId.c)
 *     Log @ 0x14001C5D0 (Log.c)
 *     UsbhBuildVendorSpecificCompatibleIDs @ 0x140037C10 (UsbhBuildVendorSpecificCompatibleIDs.c)
 *     WPP_RECORDER_SF_Sd @ 0x14005A1D8 (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v6; // rsi
  unsigned __int16 v7; // r14
  unsigned __int16 v8; // r12
  unsigned __int16 v9; // r13
  char *v10; // r11
  __int16 v11; // dx
  int v12; // r10d
  __int64 v13; // rax
  char *v14; // rax
  char *v15; // rax
  char *v16; // rcx
  char *v17; // rax
  int v18; // edx
  int v19; // r8d
  __int64 v20; // r9
  __int64 v21; // rcx
  unsigned int v22; // r10d
  __int64 v24; // rax
  char *Id; // rax
  char *v26; // rax
  char *v27; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  int v34; // r8d
  __int64 v35; // r10
  char v36; // r11
  int v37; // [rsp+88h] [rbp+48h] BYREF

  v6 = PdoExt(a2);
  v37 = 0;
  v7 = *((unsigned __int8 *)v6 + 2438);
  v8 = *((unsigned __int8 *)v6 + 2439);
  v9 = *((unsigned __int8 *)v6 + 2440);
  Log(a1, 4096, 1684228420, *((unsigned __int8 *)v6 + 2438), *((unsigned __int8 *)v6 + 2439));
  v11 = (_WORD)v10 + 1;
  v12 = (_DWORD)v10 + 2;
  if ( (v6[706] & 0x20) == 0 )
  {
    v24 = *((_QWORD *)v6 + 316);
    if ( !v24 )
      goto LABEL_21;
    if ( *(_BYTE *)(v24 + 26) )
    {
      Id = UsbhMakeId(v12, L"USB\\MS_COMP_n", 0LL, &v37, 0, v11, 0, (char *)(v24 + 18));
      if ( !Id )
        goto LABEL_10;
      v10 = UsbhMakeId(2, L"&MS_SUBCOMP_n", Id, &v37, 1u, 1, 0, (char *)(*((_QWORD *)v6 + 316) + 26LL));
      if ( !v10 )
        goto LABEL_10;
      v11 = 1;
      v12 = 2;
    }
    v26 = (char *)(*((_QWORD *)v6 + 316) + 18LL);
    if ( !*v26 )
      goto LABEL_21;
    v17 = UsbhMakeId(v12, L"USB\\MS_COMP_n", v10, &v37, v11, v11, 0, v26);
    goto LABEL_9;
  }
  v13 = *((_QWORD *)v6 + 356);
  if ( *(_BYTE *)(v13 + 12) )
  {
    v14 = (char *)(v13 + 4);
    if ( *v14 )
    {
      v15 = UsbhMakeId(v12, L"USB\\MS_COMP_n", 0LL, &v37, 0, v11, 0, v14);
      if ( !v15 )
        goto LABEL_10;
      v10 = UsbhMakeId(2, L"&MS_SUBCOMP_n", v15, &v37, 1u, 1, 0, (char *)(*((_QWORD *)v6 + 356) + 12LL));
      if ( !v10 )
        goto LABEL_10;
      v11 = 1;
      v12 = 2;
    }
  }
  v16 = (char *)(*((_QWORD *)v6 + 356) + 4LL);
  if ( *v16 )
  {
    v17 = UsbhMakeId(v12, L"USB\\MS_COMP_n", v10, &v37, v11, v11, 0, v16);
LABEL_9:
    v10 = v17;
    if ( !v17 )
    {
LABEL_10:
      v18 = 4;
LABEL_11:
      v19 = 1667839265;
LABEL_12:
      v20 = a2;
      v21 = a1;
LABEL_13:
      Log(v21, v18, v19, v20, -1073741670LL);
      return v22;
    }
  }
LABEL_21:
  v27 = UsbhBuildVendorSpecificCompatibleIDs(a1, a2, v10, &v37);
  if ( !v27 )
    return 3221225473LL;
  v28 = UsbhMakeId(0, L"USB\\Class_nn", v27, &v37, 0, 2, v7, 0LL);
  if ( !v28 )
  {
    v18 = 4096;
    goto LABEL_11;
  }
  v29 = UsbhMakeId(0, L"&SubClass_nn", v28, &v37, 0, 2, v8, 0LL);
  if ( !v29 )
  {
    v18 = 4096;
    v19 = 1667839009;
    goto LABEL_12;
  }
  v30 = UsbhMakeId(0, L"&Prot_nn", v29, &v37, 1u, 2, v9, 0LL);
  if ( !v30 )
  {
    v18 = 4096;
    v19 = 1667838753;
    goto LABEL_12;
  }
  v31 = UsbhMakeId(0, L"USB\\Class_nn", v30, &v37, 0, 2, v7, 0LL);
  if ( !v31 )
  {
    v18 = 4096;
    v19 = 1667838497;
    goto LABEL_12;
  }
  v32 = UsbhMakeId(0, L"&SubClass_nn", v31, &v37, 1u, 2, v8, 0LL);
  if ( !v32 )
  {
    v18 = 4096;
    v19 = 1667838241;
    goto LABEL_12;
  }
  v33 = UsbhMakeId(0, L"USB\\Class_nn", v32, &v37, 2u, 2, v7, 0LL);
  v20 = a2;
  v18 = 4096;
  v21 = a1;
  if ( !v33 )
  {
    v19 = 1667837985;
    goto LABEL_13;
  }
  *(_DWORD *)(a3 + 4) = v37;
  *(_QWORD *)(a3 + 8) = v33;
  Log(a1, 4096, 1667459428, a2, (__int64)v33);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sd(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v34,
        19,
        (__int64)&WPP_b866e7e643183bb19f8ee1b1d6db2158_Traceguids,
        v35,
        v36);
  }
  return 0LL;
}
