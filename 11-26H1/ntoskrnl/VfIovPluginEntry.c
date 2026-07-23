/*
 * XREFs of VfIovPluginEntry @ 0x140646270
 * Callers:
 *     <none>
 * Callees:
 *     DifRegisterPlugin @ 0x14064F790 (DifRegisterPlugin.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     ViIovInitialization @ 0x140C30C7C (ViIovInitialization.c)
 */

__int64 VfIovPluginEntry()
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
  __int64 v27; // [rsp+F0h] [rbp-10h]
  __int64 (__fastcall *v28)(); // [rsp+F8h] [rbp-8h]
  const char *v29; // [rsp+100h] [rbp+0h]
  int v30; // [rsp+108h] [rbp+8h]
  __int64 v31; // [rsp+110h] [rbp+10h]
  __int64 (__fastcall *v32)(); // [rsp+118h] [rbp+18h]
  const char *v33; // [rsp+120h] [rbp+20h]
  int v34; // [rsp+128h] [rbp+28h]
  __int64 v35; // [rsp+130h] [rbp+30h]
  __int64 (__fastcall *v36)(); // [rsp+138h] [rbp+38h]
  const char *v37; // [rsp+140h] [rbp+40h]
  int v38; // [rsp+148h] [rbp+48h]
  __int64 (__fastcall *v39)(); // [rsp+150h] [rbp+50h]
  __int64 v40; // [rsp+158h] [rbp+58h]
  const char *v41; // [rsp+160h] [rbp+60h]
  int v42; // [rsp+168h] [rbp+68h]
  __int64 (__fastcall *v43)(); // [rsp+170h] [rbp+70h]
  __int64 v44; // [rsp+178h] [rbp+78h]
  const char *v45; // [rsp+180h] [rbp+80h]
  int v46; // [rsp+188h] [rbp+88h]
  __int64 (__fastcall *v47)(); // [rsp+190h] [rbp+90h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  const char *v49; // [rsp+1A0h] [rbp+A0h]
  int v50; // [rsp+1A8h] [rbp+A8h]
  __int64 (__fastcall *v51)(); // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]

  ViIovInitialization();
  v2 = 329;
  v4 = 0LL;
  qword_140F08988 = (__int64)ViIovPluginUnload;
  v1 = "IoInitializeRemoveLockEx";
  v3 = ViSpIoAllocateIrp_Exit;
  v5 = "IoAcquireRemoveLockEx";
  v7 = ViSpIoAllocateIrp_Exit;
  v9 = "IoReleaseRemoveLockEx";
  v11 = ViSpIoAllocateIrp_Exit;
  v13 = "IoReleaseRemoveLockAndWaitEx";
  v15 = ViSpIoAllocateIrp_Exit;
  v17 = "ExFreePool";
  v19 = ViIovExFreePool_Entry;
  v21 = "ExFreePoolWithTag";
  v23 = ViIovExFreePoolWithTag_Entry;
  v25 = "IoBuildAsynchronousFsdRequest";
  v28 = ViIovIoBuildAsynchronousFsdRequest_Exit;
  v29 = "IoBuildDeviceIoControlRequest";
  v32 = ViIovIoBuildDeviceIoControlRequest_Exit;
  v33 = "IoBuildSynchronousFsdRequest";
  v36 = ViIovIoBuildSynchronousFsdRequest_Exit;
  v37 = "IoAllocateIrp";
  v39 = ViSpIoAllocateIrp_Exit;
  v41 = "IoAllocateIrpEx";
  v43 = ViSpIoAllocateIrp_Exit;
  v45 = "IoInitializeTimer";
  v47 = ViIoInitializeTimer_Entry;
  v49 = "IoFreeIrp";
  v51 = ViSpIoAllocateIrp_Exit;
  v6 = 370;
  v8 = 0LL;
  v10 = 315;
  v12 = 0LL;
  v14 = 316;
  v16 = 0LL;
  v18 = 400;
  v20 = 0LL;
  v22 = 399;
  v24 = 0LL;
  v26 = 361;
  v27 = 0LL;
  v30 = 360;
  v31 = 0LL;
  v34 = 359;
  v35 = 0LL;
  v38 = 365;
  v40 = 0LL;
  v42 = 366;
  v44 = 0LL;
  v46 = 328;
  v48 = 0LL;
  v50 = 339;
  v52 = 0LL;
  return ((__int64 (__fastcall *)(const char **, __int64, __int64, void *))DifRegisterPlugin)(
           &v1,
           13LL,
           4LL,
           &ViIovPluginSetting);
}
