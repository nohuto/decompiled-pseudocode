/*
 * XREFs of ?ReportRimDevice@RimTelemetry@@SAXHHQEAURIMDEV@@@Z @ 0x140096FAC
 * Callers:
 *     RIMCreateDev @ 0x1400916DC (RIMCreateDev.c)
 *     RIMFreeDev @ 0x140092664 (RIMFreeDev.c)
 *     rimHandleAnyPnpRemovePendingDevices @ 0x140098420 (rimHandleAnyPnpRemovePendingDevices.c)
 * Callees:
 *     RimDeviceTypeToRimInputTypeString @ 0x14015EB68 (RimDeviceTypeToRimInputTypeString.c)
 *     ?GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z @ 0x140161350 (-GetHidVidPidStrings@RimTelemetry@@SAXQEAURIMDEV@@PEAU_UNICODE_STRING@@1@Z.c)
 *     ?LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z @ 0x140172D54 (-LocationToString@RimTelemetry@@CAPEBGW4tagHPD_LOCATION@@@Z.c)
 *     ?LogPointerDeviceCreated@RimTelemetry@@CAXGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_STRING@@400AEBUtagRECT@@5@Z @ 0x14018E3B4 (-LogPointerDeviceCreated@RimTelemetry@@CAXGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH0KHQEAU_UNICODE_ST.c)
 *     ?LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z @ 0x1401AE058 (-LogNonPointerDeviceStateChange@RimTelemetry@@CAXHGGPEBG0H0AEBU_GUID@@_KEEEQEAXJJJ22HH@Z.c)
 *     ?PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z @ 0x1401BEA1C (-PointerDeviceTypeToString@RimTelemetry@@CAPEBGW4tagHPD_TYPE@@@Z.c)
 *     __security_check_cookie @ 0x14024BC30 (__security_check_cookie.c)
 */

void __fastcall RimTelemetry::ReportRimDevice(int a1, int a2, struct RIMDEV *const a3)
{
  int v4; // esi
  unsigned __int16 v5; // bx
  unsigned __int16 v6; // r15
  __int64 v7; // r13
  int v8; // r8d
  __int64 v9; // rcx
  int v10; // r12d
  unsigned __int16 *v11; // rax
  unsigned __int64 v12; // r8
  const unsigned __int16 *v13; // rdx
  char v14; // r9
  unsigned __int64 v15; // rcx
  unsigned __int64 v16; // r13
  char v17; // r10
  char v18; // r11
  bool v19; // cf
  int v20; // r14d
  int v21; // eax
  __int64 v22; // rbx
  const unsigned __int16 *v23; // rax
  char v24; // [rsp+E8h] [rbp-80h]
  char v25; // [rsp+E9h] [rbp-7Fh]
  char v26; // [rsp+EAh] [rbp-7Eh]
  unsigned __int16 v27; // [rsp+ECh] [rbp-7Ch]
  int v28; // [rsp+F0h] [rbp-78h]
  int v29; // [rsp+F4h] [rbp-74h]
  int v30; // [rsp+F8h] [rbp-70h]
  int v31; // [rsp+FCh] [rbp-6Ch]
  void *v34; // [rsp+108h] [rbp-60h]
  unsigned __int16 *v35; // [rsp+110h] [rbp-58h]
  unsigned __int16 *v36; // [rsp+118h] [rbp-50h]
  struct _UNICODE_STRING v37; // [rsp+120h] [rbp-48h] BYREF
  struct _UNICODE_STRING v38; // [rsp+130h] [rbp-38h] BYREF
  unsigned __int64 v39; // [rsp+140h] [rbp-28h]
  unsigned __int64 v40; // [rsp+148h] [rbp-20h]
  unsigned __int16 *v41; // [rsp+150h] [rbp-18h]
  char v42; // [rsp+158h] [rbp-10h] BYREF
  char v43; // [rsp+168h] [rbp+0h] BYREF

  v4 = 0;
  v5 = 0;
  v6 = 0;
  v27 = 0;
  v7 = (((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
      * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64;
  v36 = (unsigned __int16 *)RimDeviceTypeToRimInputTypeString(a3, *((unsigned int *)a3 + 12));
  v35 = (unsigned __int16 *)*((_QWORD *)a3 + 25);
  if ( v8 == 2 )
  {
    v9 = *((_QWORD *)a3 + 56);
    v5 = *(_WORD *)(v9 + 18);
    v6 = *(_WORD *)(v9 + 16);
    v27 = v5;
  }
  v10 = -__CFSHR__(*((_DWORD *)a3 + 42), 14);
  v11 = (unsigned __int16 *)RimTelemetry::LocationToString(*((unsigned int *)a3 + 532));
  v12 = *((_QWORD *)a3 + 22);
  v13 = v11;
  v14 = *((_BYTE *)a3 + 188);
  v15 = v7 - *((_QWORD *)a3 + 8);
  v16 = v7 - *((_QWORD *)a3 + 9);
  v17 = *((_BYTE *)a3 + 189);
  v18 = *((_BYTE *)a3 + 190);
  v41 = v11;
  v34 = (void *)*((_QWORD *)a3 + 29);
  v31 = *((_DWORD *)a3 + 68);
  v30 = *((_DWORD *)a3 + 64);
  v29 = *((_DWORD *)a3 + 34);
  LODWORD(v11) = *((_DWORD *)a3 + 42);
  v19 = __CFSHR__((_DWORD)v11, 8);
  v40 = v12;
  v20 = -__CFSHR__((_DWORD)v11, 8);
  v26 = v14;
  v25 = v17;
  v24 = v18;
  v39 = v15;
  if ( ((unsigned __int16)v11 & 0x100) != 0 || (v21 = 1, !v19) )
    v21 = 0;
  v28 = v21;
  if ( a2 )
  {
    if ( a1 )
    {
      v22 = *(_QWORD *)(*((_QWORD *)a3 + 4) + 528LL);
      v38.Buffer = (PWSTR)&v42;
      v37.Buffer = (PWSTR)&v43;
      *(_QWORD *)&v38.Length = 0x100000LL;
      *(_QWORD *)&v37.Length = 0x100000LL;
      RimTelemetry::GetHidVidPidStrings(a3, &v38, &v37);
      v23 = (const unsigned __int16 *)RimTelemetry::PointerDeviceTypeToString(*(unsigned int *)(v22 + 24));
      LOBYTE(v4) = *(_DWORD *)(v22 + 24) == 6;
      RimTelemetry::LogPointerDeviceCreated(
        v27,
        v6,
        v36,
        v35,
        v10,
        v41,
        (const struct _GUID *)a3 + 132,
        v40,
        v26,
        v25,
        v24,
        v34,
        v31,
        v30,
        v29,
        v39,
        v16,
        v20,
        v28,
        v23,
        *(_DWORD *)(v22 + 776),
        v4,
        (struct _UNICODE_STRING *const)(v22 + 376),
        (struct _UNICODE_STRING *const)(v22 + 904),
        v38.Buffer,
        v37.Buffer,
        (const struct tagRECT *)(v22 + 140),
        (const struct tagRECT *)(v22 + 124));
    }
  }
  else if ( v6 < 0xFF00u )
  {
    RimTelemetry::LogNonPointerDeviceStateChange(
      a1,
      v5,
      v6,
      v36,
      v35,
      v10,
      v13,
      (const struct _GUID *)a3 + 132,
      v12,
      v14,
      v17,
      v18,
      v34,
      v31,
      v30,
      v29,
      v15,
      v16,
      v20,
      v21);
  }
}
