/*
 * XREFs of VfSpecialPoolEntry @ 0x140725AB0
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

__int64 VfSpecialPoolEntry()
{
  const char *v1; // [rsp+20h] [rbp-E0h] BYREF
  int v2; // [rsp+28h] [rbp-D8h]
  __int64 (__fastcall *v3)(); // [rsp+30h] [rbp-D0h]
  __int64 v4; // [rsp+38h] [rbp-C8h]
  const char *v5; // [rsp+40h] [rbp-C0h]
  int v6; // [rsp+48h] [rbp-B8h]
  __int64 (__fastcall *v7)(); // [rsp+50h] [rbp-B0h]
  __int64 v8; // [rsp+58h] [rbp-A8h]
  const char *v9; // [rsp+60h] [rbp-A0h]
  int v10; // [rsp+68h] [rbp-98h]
  __int64 (__fastcall *v11)(); // [rsp+70h] [rbp-90h]
  __int64 v12; // [rsp+78h] [rbp-88h]
  const char *v13; // [rsp+80h] [rbp-80h]
  int v14; // [rsp+88h] [rbp-78h]
  __int64 (__fastcall *v15)(); // [rsp+90h] [rbp-70h]
  __int64 v16; // [rsp+98h] [rbp-68h]
  const char *v17; // [rsp+A0h] [rbp-60h]
  int v18; // [rsp+A8h] [rbp-58h]
  __int64 (__fastcall *v19)(); // [rsp+B0h] [rbp-50h]
  __int64 v20; // [rsp+B8h] [rbp-48h]
  const char *v21; // [rsp+C0h] [rbp-40h]
  int v22; // [rsp+C8h] [rbp-38h]
  __int64 (__fastcall *v23)(); // [rsp+D0h] [rbp-30h]
  __int64 v24; // [rsp+D8h] [rbp-28h]
  const char *v25; // [rsp+E0h] [rbp-20h]
  int v26; // [rsp+E8h] [rbp-18h]
  __int64 (__fastcall *v27)(); // [rsp+F0h] [rbp-10h]
  __int64 v28; // [rsp+F8h] [rbp-8h]
  const char *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  __int64 (__fastcall *v31)(); // [rsp+110h] [rbp+10h]
  __int64 v32; // [rsp+118h] [rbp+18h]
  const char *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  __int64 (__fastcall *v35)(); // [rsp+130h] [rbp+30h]
  __int64 v36; // [rsp+138h] [rbp+38h]
  const char *v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]
  __int64 v39; // [rsp+150h] [rbp+50h]
  __int64 (__fastcall *v40)(); // [rsp+158h] [rbp+58h]
  const char *v41; // [rsp+160h] [rbp+60h]
  int v42; // [rsp+168h] [rbp+68h]
  __int64 v43; // [rsp+170h] [rbp+70h]
  __int64 (__fastcall *v44)(); // [rsp+178h] [rbp+78h]
  const char *v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+188h] [rbp+88h]
  __int64 v47; // [rsp+190h] [rbp+90h]
  __int64 (__fastcall *v48)(); // [rsp+198h] [rbp+98h]
  const char *v49; // [rsp+1A0h] [rbp+A0h]
  int v50; // [rsp+1A8h] [rbp+A8h]
  __int64 v51; // [rsp+1B0h] [rbp+B0h]
  __int64 (__fastcall *v52)(); // [rsp+1B8h] [rbp+B8h]
  const char *v53; // [rsp+1C0h] [rbp+C0h]
  int v54; // [rsp+1C8h] [rbp+C8h]
  __int64 v55; // [rsp+1D0h] [rbp+D0h]
  __int64 (__fastcall *v56)(); // [rsp+1D8h] [rbp+D8h]
  const char *v57; // [rsp+1E0h] [rbp+E0h]
  int v58; // [rsp+1E8h] [rbp+E8h]
  __int64 v59; // [rsp+1F0h] [rbp+F0h]
  __int64 (__fastcall *v60)(); // [rsp+1F8h] [rbp+F8h]
  const char *v61; // [rsp+200h] [rbp+100h]
  int v62; // [rsp+208h] [rbp+108h]
  __int64 v63; // [rsp+210h] [rbp+110h]
  __int64 (__fastcall *v64)(); // [rsp+218h] [rbp+118h]
  const char *v65; // [rsp+220h] [rbp+120h]
  int v66; // [rsp+228h] [rbp+128h]
  __int64 v67; // [rsp+230h] [rbp+130h]
  __int64 (__fastcall *v68)(); // [rsp+238h] [rbp+138h]
  const char *v69; // [rsp+240h] [rbp+140h]
  int v70; // [rsp+248h] [rbp+148h]
  __int64 v71; // [rsp+250h] [rbp+150h]
  __int64 (__fastcall *v72)(); // [rsp+258h] [rbp+158h]
  const char *v73; // [rsp+260h] [rbp+160h]
  int v74; // [rsp+268h] [rbp+168h]
  __int64 v75; // [rsp+270h] [rbp+170h]
  __int64 (__fastcall *v76)(); // [rsp+278h] [rbp+178h]
  const char *v77; // [rsp+280h] [rbp+180h]
  int v78; // [rsp+288h] [rbp+188h]
  __int64 v79; // [rsp+290h] [rbp+190h]
  __int64 (__fastcall *v80)(); // [rsp+298h] [rbp+198h]
  const char *v81; // [rsp+2A0h] [rbp+1A0h]
  int v82; // [rsp+2A8h] [rbp+1A8h]
  __int64 v83; // [rsp+2B0h] [rbp+1B0h]
  __int64 (__fastcall *v84)(); // [rsp+2B8h] [rbp+1B8h]
  const char *v85; // [rsp+2C0h] [rbp+1C0h]
  int v86; // [rsp+2C8h] [rbp+1C8h]
  __int64 v87; // [rsp+2D0h] [rbp+1D0h]
  __int64 (__fastcall *v88)(); // [rsp+2D8h] [rbp+1D8h]
  const char *v89; // [rsp+2E0h] [rbp+1E0h]
  int v90; // [rsp+2E8h] [rbp+1E8h]
  __int64 v91; // [rsp+2F0h] [rbp+1F0h]
  __int64 (__fastcall *v92)(); // [rsp+2F8h] [rbp+1F8h]
  const char *v93; // [rsp+300h] [rbp+200h]
  int v94; // [rsp+308h] [rbp+208h]
  __int64 v95; // [rsp+310h] [rbp+210h]
  __int64 (__fastcall *v96)(); // [rsp+318h] [rbp+218h]
  const char *v97; // [rsp+320h] [rbp+220h]
  int v98; // [rsp+328h] [rbp+228h]
  __int64 v99; // [rsp+330h] [rbp+230h]
  __int64 (__fastcall *v100)(); // [rsp+338h] [rbp+238h]
  const char *v101; // [rsp+340h] [rbp+240h]
  int v102; // [rsp+348h] [rbp+248h]
  __int64 (__fastcall *v103)(); // [rsp+350h] [rbp+250h]
  __int64 v104; // [rsp+358h] [rbp+258h]
  const char *v105; // [rsp+360h] [rbp+260h]
  int v106; // [rsp+368h] [rbp+268h]
  __int64 (__fastcall *v107)(); // [rsp+370h] [rbp+270h]
  __int64 v108; // [rsp+378h] [rbp+278h]
  const char *v109; // [rsp+380h] [rbp+280h]
  int v110; // [rsp+388h] [rbp+288h]
  __int64 (__fastcall *v111)(); // [rsp+390h] [rbp+290h]
  __int64 v112; // [rsp+398h] [rbp+298h]
  const char *v113; // [rsp+3A0h] [rbp+2A0h]
  int v114; // [rsp+3A8h] [rbp+2A8h]
  __int64 (__fastcall *v115)(); // [rsp+3B0h] [rbp+2B0h]
  __int64 v116; // [rsp+3B8h] [rbp+2B8h]
  const char *v117; // [rsp+3C0h] [rbp+2C0h]
  int v118; // [rsp+3C8h] [rbp+2C8h]
  __int64 (__fastcall *v119)(); // [rsp+3D0h] [rbp+2D0h]
  __int64 v120; // [rsp+3D8h] [rbp+2D8h]

  v2 = 412;
  v4 = 0LL;
  v1 = "ExAllocatePool";
  v3 = ViSpIoAllocateIrp_Exit;
  v5 = "ExAllocatePool2";
  v7 = ViSpIoAllocateIrp_Exit;
  v9 = "ExAllocatePool3";
  v11 = ViSpIoAllocateIrp_Exit;
  v13 = "ExAllocatePoolWithTag";
  v15 = ViSpIoAllocateIrp_Exit;
  v17 = "ExAllocatePoolWithTagPriority";
  v19 = ViSpIoAllocateIrp_Exit;
  v21 = "ExAllocatePoolWithQuota";
  v23 = ViSpIoAllocateIrp_Exit;
  v25 = "ExAllocatePoolWithQuotaTag";
  v27 = ViSpIoAllocateIrp_Exit;
  v29 = "ExFreePool";
  v31 = ViSpIoAllocateIrp_Exit;
  v33 = "ExFreePoolWithTag";
  v35 = ViSpIoAllocateIrp_Exit;
  v37 = "RtlAnsiStringToUnicodeString";
  v40 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v41 = "RtlUnicodeStringToAnsiString";
  v44 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v45 = "RtlUpcaseUnicodeStringToAnsiString";
  v48 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v49 = "RtlOemStringToUnicodeString";
  v52 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v53 = "RtlUnicodeStringToOemString";
  v6 = 418;
  v8 = 0LL;
  v10 = 417;
  v12 = 0LL;
  v14 = 413;
  v16 = 0LL;
  v18 = 414;
  v20 = 0LL;
  v22 = 415;
  v24 = 0LL;
  v26 = 416;
  v28 = 0LL;
  v30 = 400;
  v32 = 0LL;
  v34 = 399;
  v36 = 0LL;
  v38 = 169;
  v39 = 0LL;
  v42 = 156;
  v43 = 0LL;
  v46 = 152;
  v47 = 0LL;
  v50 = 160;
  v51 = 0LL;
  v54 = 154;
  v56 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v57 = "RtlUpcaseUnicodeStringToOemString";
  v60 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v61 = "RtlOemStringToCountedUnicodeString";
  v64 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v65 = "RtlUnicodeStringToCountedOemString";
  v68 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v69 = "RtlUpcaseUnicodeStringToCountedOemString";
  v72 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v73 = "RtlUpcaseUnicodeString";
  v76 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v77 = "RtlDowncaseUnicodeString";
  v80 = ViSpRtlUpcaseUnicodeStringToAnsiString_Exit;
  v81 = "RtlCreateUnicodeString";
  v84 = ViSpRtlCreateUnicodeString_Exit;
  v85 = "RtlDuplicateUnicodeString";
  v88 = ViSpRtlDuplicateUnicodeString_Exit;
  v89 = "IoAllocateIrp";
  v92 = ViSpIoAllocateIrp_Exit;
  v93 = "IoAllocateMdl";
  v96 = ViSpIoAllocateIrp_Exit;
  v97 = "IoSetCompletionRoutineEx";
  v100 = ViSpIoSetCompletionRoutineEx_Exit;
  v101 = "MmProbeAndLockPages";
  v103 = ViSpMmProbeAndLockPages_Entry;
  v105 = "MmProbeAndLockProcessPages";
  v107 = ViSpMmProbeAndLockProcessPages_Entry;
  v55 = 0LL;
  v58 = 150;
  v59 = 0LL;
  v62 = 161;
  v63 = 0LL;
  v66 = 155;
  v67 = 0LL;
  v70 = 151;
  v71 = 0LL;
  v74 = 153;
  v75 = 0LL;
  v78 = 163;
  v79 = 0LL;
  v82 = 165;
  v83 = 0LL;
  v86 = 162;
  v87 = 0LL;
  v90 = 365;
  v91 = 0LL;
  v94 = 364;
  v95 = 0LL;
  v98 = 313;
  v99 = 0LL;
  v102 = 217;
  v104 = 0LL;
  v106 = 216;
  v108 = 0LL;
  v109 = "MmMapLockedPagesSpecifyCache";
  v111 = ViSpMmMapLockedPagesSpecifyCache_Entry;
  v113 = "MmMapIoSpace";
  v115 = ViSpMmMapIoSpace_Entry;
  v117 = "MmMapLockedPages";
  v119 = ViSpMmMapLockedPages_Entry;
  v110 = 219;
  v112 = 0LL;
  v114 = 221;
  v116 = 0LL;
  v118 = 220;
  v120 = 0LL;
  return DifRegisterPlugin((__int64)&v1, 0x1Eu, 0, 0LL);
}
