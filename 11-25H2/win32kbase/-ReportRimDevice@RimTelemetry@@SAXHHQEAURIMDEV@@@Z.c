/*
 * XREFs of ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x1401140A0
 * Callers:
 *     RIMCreateDev @ 0x1401D4A5C (RIMCreateDev.c)
 *     RIMFreeDev @ 0x1401D5288 (RIMFreeDev.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x140114428 (RimDeviceTypeToRimInputTypeString.c)
 *     ?LogPointerDeviceCreated@RimTelemetry@@CAXGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x1401144E0 (-LogPointerDeviceCreated@RimTelemetry@@CAXGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_ST.c)
 *     ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1401147CC (-LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x1401D4890 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z @ 0x1401D4948 (-LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z.c)
 *     ?PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z @ 0x1401D49AC (-PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x140242EA0 (__security_check_cookie.c)
 */

void __fastcall RimTelemetry::ReportRimDevice(int a1, int a2, struct RIMDEV *const a3)
{
  int v4; // esi
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // r15
  __int64 v7; // r13
  int v8; // r8d
  int v9; // r12d
  unsigned __int16 *v10; // rax
  unsigned __int64 v11; // r9
  char v12; // r10
  const unsigned __int16 *v13; // rdx
  char v14; // r11
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  bool v17; // cf
  int v18; // r14d
  int v19; // eax
  __int64 v20; // rbx
  const unsigned __int16 *v21; // rax
  __int64 v22; // rcx
  char v23; // [rsp+E8h] [rbp-80h]
  char v24; // [rsp+E9h] [rbp-7Fh]
  char v25; // [rsp+EAh] [rbp-7Eh]
  unsigned __int16 v26; // [rsp+ECh] [rbp-7Ch]
  int v27; // [rsp+F0h] [rbp-78h]
  int v28; // [rsp+F4h] [rbp-74h]
  int v29; // [rsp+F8h] [rbp-70h]
  int v30; // [rsp+FCh] [rbp-6Ch]
  void *v33; // [rsp+108h] [rbp-60h]
  unsigned __int16 *v34; // [rsp+110h] [rbp-58h]
  unsigned __int16 *v35; // [rsp+118h] [rbp-50h]
  struct _UNICODE_STRING v36; // [rsp+120h] [rbp-48h] BYREF
  struct _UNICODE_STRING v37; // [rsp+130h] [rbp-38h] BYREF
  unsigned __int64 v38; // [rsp+140h] [rbp-28h]
  unsigned __int64 v39; // [rsp+148h] [rbp-20h]
  unsigned __int16 *v40; // [rsp+150h] [rbp-18h]
  char v41; // [rsp+158h] [rbp-10h] BYREF
  char v42; // [rsp+168h] [rbp+0h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v26 = 0;
  v7 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v35 = (unsigned __int16 *)RimDeviceTypeToRimInputTypeString(a3, *((unsigned int *)a3 + 12));
  v34 = (unsigned __int16 *)*((_QWORD *)a3 + 25);
  if ( v8 == 2 )
  {
    v22 = *((_QWORD *)a3 + 56);
    v5 = *(_WORD *)(v22 + 18);
    v6 = *(_WORD *)(v22 + 16);
    v26 = v5;
  }
  v9 = -__CFSHR__(*((_DWORD *)a3 + 42), 14);
  v10 = (unsigned __int16 *)RimTelemetry::LocationToString(*((unsigned int *)a3 + 534));
  v11 = *((_QWORD *)a3 + 22);
  v12 = *((_BYTE *)a3 + 188);
  v13 = v10;
  v14 = *((_BYTE *)a3 + 189);
  v15 = v7 - *((_QWORD *)a3 + 8);
  v16 = v7 - *((_QWORD *)a3 + 9);
  v40 = v10;
  v23 = *((_BYTE *)a3 + 190);
  v33 = (void *)*((_QWORD *)a3 + 29);
  v30 = *((_DWORD *)a3 + 68);
  v29 = *((_DWORD *)a3 + 64);
  v28 = *((_DWORD *)a3 + 34);
  LODWORD(v10) = *((_DWORD *)a3 + 42);
  v17 = __CFSHR__((_DWORD)v10, 8);
  v39 = v11;
  v18 = -__CFSHR__((_DWORD)v10, 8);
  v25 = v12;
  v24 = v14;
  v38 = v15;
  if ( ((unsigned __int16)v10 & 0x100) != 0 || (v19 = 1, !v17) )
    v19 = 0;
  v27 = v19;
  if ( a2 )
  {
    if ( a1 )
    {
      v20 = *(_QWORD *)(*((_QWORD *)a3 + 4) + 528LL);
      v37.Buffer = (PWSTR)&v41;
      v36.Buffer = (PWSTR)&v42;
      *(_QWORD *)&v37.Length = 0x100000LL;
      *(_QWORD *)&v36.Length = 0x100000LL;
      RimTelemetry::GetHidVidPidStrings(a3, &v37, &v36);
      v21 = (const unsigned __int16 *)RimTelemetry::PointerDeviceTypeToString(*(unsigned int *)(v20 + 24));
      LOBYTE(v4) = *(_DWORD *)(v20 + 24) == 6;
      RimTelemetry::LogPointerDeviceCreated(
        v26,
        v6,
        v35,
        v34,
        v9,
        v40,
        (const struct _GUID *)((char *)a3 + 2120),
        v39,
        v25,
        v24,
        v23,
        v33,
        v30,
        v29,
        v28,
        v38,
        v16,
        v18,
        v27,
        v21,
        *(_DWORD *)(v20 + 776),
        v4,
        (struct _UNICODE_STRING *const)(v20 + 376),
        (struct _UNICODE_STRING *const)(v20 + 904),
        v37.Buffer,
        v36.Buffer,
        (const struct tagRECT *)(v20 + 140),
        (const struct tagRECT *)(v20 + 124));
    }
  }
  else if ( v6 < 0xFF00u )
  {
    RimTelemetry::LogNonPointerDeviceStateChange(
      a1,
      v5,
      v6,
      v35,
      v34,
      v9,
      v13,
      (const struct _GUID *)((char *)a3 + 2120),
      v11,
      v12,
      v14,
      v23,
      v33,
      v30,
      v29,
      v28,
      v15,
      v16,
      v18,
      v19);
  }
}
