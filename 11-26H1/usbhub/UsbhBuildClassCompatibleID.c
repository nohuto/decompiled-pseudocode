/*
 * XREFs of UsbhBuildClassCompatibleID @ 0x140059AA8
 * Callers:
 *     UsbhBuildCompatibleID @ 0x14000E768 (UsbhBuildCompatibleID.c)
 * Callees:
 *     Log @ 0x140009B80 (Log.c)
 *     UsbhMakeId @ 0x14000E1C0 (UsbhMakeId.c)
 *     PdoExt @ 0x140016350 (PdoExt.c)
 *     UsbhBuildVendorSpecificCompatibleIDs @ 0x140035DA4 (UsbhBuildVendorSpecificCompatibleIDs.c)
 *     WPP_RECORDER_SF_Sd @ 0x14005A754 (WPP_RECORDER_SF_Sd.c)
 */

__int64 __fastcall UsbhBuildClassCompatibleID(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int8 *v6; // rax
  unsigned __int8 *v7; // rsi
  unsigned __int16 v8; // r14
  unsigned __int16 v9; // r12
  unsigned __int16 v10; // r13
  char *v11; // r10
  int v12; // r11d
  __int16 v13; // dx
  int v14; // ecx
  __int64 v15; // rax
  char *v16; // rax
  char *v17; // rax
  char *v18; // rcx
  char *v19; // rax
  int v20; // edx
  int v21; // r8d
  __int64 v22; // r9
  __int64 v23; // rcx
  unsigned int v24; // r10d
  __int64 v26; // rax
  char *Id; // rax
  char *v28; // rax
  char *v29; // rax
  char *v30; // rax
  char *v31; // rax
  char *v32; // rax
  char *v33; // rax
  char *v34; // rax
  char *v35; // rax
  int v36; // r8d
  __int64 v37; // r10
  char v38; // r11
  int v39; // [rsp+88h] [rbp+48h] BYREF

  v6 = (unsigned __int8 *)PdoExt(a2);
  v39 = 0;
  v7 = v6;
  v8 = v6[2438];
  v9 = v6[2439];
  v10 = v6[2440];
  Log(a1, 4096, 1684228420, v6[2438], v6[2439]);
  v13 = v12 + 1;
  v14 = v12 + 2;
  if ( (*((_DWORD *)v7 + 706) & 0x20) == 0 )
  {
    v26 = *((_QWORD *)v7 + 316);
    if ( !v26 )
      goto LABEL_21;
    if ( *(_BYTE *)(v26 + 26) != (_BYTE)v12 )
    {
      Id = UsbhMakeId(v14, L"USB\\MS_COMP_n", 0LL, &v39, v12, v13, v12, (char *)(v26 + 18));
      if ( !Id )
        goto LABEL_10;
      v11 = UsbhMakeId(2, L"&MS_SUBCOMP_n", Id, &v39, 1u, 1, 0, (char *)(*((_QWORD *)v7 + 316) + 26LL));
      if ( !v11 )
        goto LABEL_10;
      v14 = 2;
      v13 = 1;
    }
    v28 = (char *)(*((_QWORD *)v7 + 316) + 18LL);
    if ( !*v28 )
      goto LABEL_21;
    v19 = UsbhMakeId(v14, L"USB\\MS_COMP_n", v11, &v39, v13, v13, 0, v28);
    goto LABEL_9;
  }
  v15 = *((_QWORD *)v7 + 356);
  if ( *(_BYTE *)(v15 + 12) != (_BYTE)v12 )
  {
    v16 = (char *)(v15 + 4);
    if ( *v16 != (_BYTE)v12 )
    {
      v17 = UsbhMakeId(v14, L"USB\\MS_COMP_n", 0LL, &v39, v12, v13, v12, v16);
      if ( !v17 )
        goto LABEL_10;
      v11 = UsbhMakeId(2, L"&MS_SUBCOMP_n", v17, &v39, 1u, 1, 0, (char *)(*((_QWORD *)v7 + 356) + 12LL));
      if ( !v11 )
        goto LABEL_10;
      v13 = 1;
    }
  }
  v18 = (char *)(*((_QWORD *)v7 + 356) + 4LL);
  if ( *v18 )
  {
    v19 = UsbhMakeId(2, L"USB\\MS_COMP_n", v11, &v39, v13, v13, 0, v18);
LABEL_9:
    v11 = v19;
    if ( !v19 )
    {
LABEL_10:
      v20 = 4;
LABEL_11:
      v21 = 1667839265;
LABEL_12:
      v22 = a2;
      v23 = a1;
LABEL_13:
      Log(v23, v20, v21, v22, -1073741670LL);
      return v24;
    }
  }
LABEL_21:
  v29 = UsbhBuildVendorSpecificCompatibleIDs(a1, a2, v11, &v39);
  if ( !v29 )
    return 3221225473LL;
  v30 = UsbhMakeId(0, L"USB\\Class_nn", v29, &v39, 0, 2, v8, 0LL);
  if ( !v30 )
  {
    v20 = 4096;
    goto LABEL_11;
  }
  v31 = UsbhMakeId(0, L"&SubClass_nn", v30, &v39, 0, 2, v9, 0LL);
  if ( !v31 )
  {
    v20 = 4096;
    v21 = 1667839009;
    goto LABEL_12;
  }
  v32 = UsbhMakeId(0, L"&Prot_nn", v31, &v39, 1u, 2, v10, 0LL);
  if ( !v32 )
  {
    v20 = 4096;
    v21 = 1667838753;
    goto LABEL_12;
  }
  v33 = UsbhMakeId(0, L"USB\\Class_nn", v32, &v39, 0, 2, v8, 0LL);
  if ( !v33 )
  {
    v20 = 4096;
    v21 = 1667838497;
    goto LABEL_12;
  }
  v34 = UsbhMakeId(0, L"&SubClass_nn", v33, &v39, 1u, 2, v9, 0LL);
  if ( !v34 )
  {
    v20 = 4096;
    v21 = 1667838241;
    goto LABEL_12;
  }
  v35 = UsbhMakeId(0, L"USB\\Class_nn", v34, &v39, 2u, 2, v8, 0LL);
  v22 = a2;
  v20 = 4096;
  v23 = a1;
  if ( !v35 )
  {
    v21 = 1667837985;
    goto LABEL_13;
  }
  *(_DWORD *)(a3 + 4) = v39;
  *(_QWORD *)(a3 + 8) = v35;
  Log(a1, 4096, 1667459428, a2, (__int64)v35);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_Sd(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v36,
        19,
        (__int64)&WPP_98a52ec283cc3c01b3a718f7732a7c3c_Traceguids,
        v37,
        v38);
  }
  return 0LL;
}
