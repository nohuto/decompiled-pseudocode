/*
 * XREFs of McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x1400638F0
 * Callers:
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1402EAC9C (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z @ 0x140355DA0 (-DestroyCoreAllocations@DXGSHAREDRESOURCE@@QEAAXPEAPEAXI@Z.c)
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K6PEAU_D3DKMT_CREATESTANDARDALLOCATION@@PEAXI@Z @ 0x14035CE20 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z @ 0x14038BD00 (-DestroyAdapterAllocation@DXGDEVICE@@QEAAXPEAVDXGADAPTERALLOCATION@@@Z.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1403B30D4 (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x1400127B0 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer(
        __int64 a1,
        const EVENT_DESCRIPTOR *a2,
        __int64 a3,
        __int64 a4,
        char a5,
        char a6,
        char a7,
        char a8,
        int a9,
        int a10,
        int a11,
        int a12,
        int a13,
        int a14,
        int a15,
        int a16,
        char a17,
        int a18,
        int a19,
        int a20,
        int a21,
        int a22,
        int a23,
        int a24,
        int a25,
        int a26,
        int a27,
        int a28,
        int a29,
        int a30,
        char a31,
        int a32,
        __int64 a33)
{
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  int v36; // [rsp+40h] [rbp-C0h] BYREF
  int v37; // [rsp+48h] [rbp-B8h] BYREF
  int v38; // [rsp+50h] [rbp-B0h] BYREF
  int v39; // [rsp+58h] [rbp-A8h] BYREF
  int v40; // [rsp+60h] [rbp-A0h] BYREF
  int v41; // [rsp+68h] [rbp-98h] BYREF
  int v42; // [rsp+70h] [rbp-90h] BYREF
  int v43; // [rsp+78h] [rbp-88h] BYREF
  int v44; // [rsp+80h] [rbp-80h] BYREF
  int v45; // [rsp+88h] [rbp-78h] BYREF
  int v46; // [rsp+90h] [rbp-70h] BYREF
  int v47; // [rsp+98h] [rbp-68h] BYREF
  int v48; // [rsp+A0h] [rbp-60h] BYREF
  int v49; // [rsp+A8h] [rbp-58h] BYREF
  int v50; // [rsp+B0h] [rbp-50h] BYREF
  int v51; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v52; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v53; // [rsp+C8h] [rbp-38h] BYREF
  __int64 v54; // [rsp+D0h] [rbp-30h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v55; // [rsp+E0h] [rbp-20h] BYREF
  __int64 *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  char *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  char *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  char *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  char *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  int *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  int *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  int *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  int *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  int *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  int *v76; // [rsp+190h] [rbp+90h]
  __int64 v77; // [rsp+198h] [rbp+98h]
  int *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  __int64 *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  char *v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  __int64 *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  int *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  int *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  int *v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h]
  int *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  int *v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h]
  int *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  int *v98; // [rsp+240h] [rbp+140h]
  __int64 v99; // [rsp+248h] [rbp+148h]
  int *v100; // [rsp+250h] [rbp+150h]
  __int64 v101; // [rsp+258h] [rbp+158h]
  int *v102; // [rsp+260h] [rbp+160h]
  __int64 v103; // [rsp+268h] [rbp+168h]
  int *v104; // [rsp+270h] [rbp+170h]
  __int64 v105; // [rsp+278h] [rbp+178h]
  int *v106; // [rsp+280h] [rbp+180h]
  __int64 v107; // [rsp+288h] [rbp+188h]
  __int64 *v108; // [rsp+290h] [rbp+190h]
  __int64 v109; // [rsp+298h] [rbp+198h]
  char *v110; // [rsp+2A0h] [rbp+1A0h]
  __int64 v111; // [rsp+2A8h] [rbp+1A8h]
  int *v112; // [rsp+2B0h] [rbp+1B0h]
  __int64 v113; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v114; // [rsp+2C0h] [rbp+1C0h]
  __int64 v115; // [rsp+2C8h] [rbp+1C8h]
  __int64 v116; // [rsp+308h] [rbp+208h] BYREF

  v116 = a4;
  v57 = 8LL;
  a33 = 0LL;
  v56 = &v116;
  v58 = &a5;
  v60 = &a6;
  v62 = &a7;
  v64 = &a8;
  v66 = &v34;
  v68 = &v35;
  v70 = &v36;
  v72 = &v37;
  v74 = &v38;
  v76 = &v39;
  v78 = &v40;
  v80 = &v52;
  v82 = &a17;
  v84 = &v53;
  v86 = &v41;
  v88 = &v42;
  v90 = &v43;
  v92 = &v44;
  a32 = 0;
  v54 = 0LL;
  v51 = 0;
  v50 = 0;
  v49 = 0;
  v48 = 0;
  v47 = 0;
  v46 = 0;
  v45 = 0;
  v44 = 0;
  v43 = 0;
  v42 = 0;
  v41 = 0;
  v53 = 0LL;
  v52 = 0LL;
  v40 = 0;
  v39 = 0;
  v38 = 0;
  v37 = 0;
  v36 = 0;
  v35 = 0;
  v34 = 0;
  v59 = 8LL;
  v61 = 8LL;
  v63 = 4LL;
  v65 = 8LL;
  v67 = 4LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 8LL;
  v83 = 8LL;
  v85 = 8LL;
  v87 = 4LL;
  v89 = 4LL;
  v91 = 4LL;
  v93 = 4LL;
  v95 = 4LL;
  v94 = &v45;
  v97 = 4LL;
  v96 = &v46;
  v99 = 4LL;
  v98 = &v47;
  v100 = &v48;
  v102 = &v49;
  v104 = &v50;
  v106 = &v51;
  v108 = &v54;
  v110 = &a31;
  v112 = &a32;
  v114 = &a33;
  v101 = 4LL;
  v103 = 4LL;
  v105 = 4LL;
  v107 = 4LL;
  v109 = 8LL;
  v111 = 2LL;
  v113 = 4LL;
  v115 = 8LL;
  return McGenEventWrite_EtwWriteTransfer((REGHANDLE *)&DxgkControlGuid_Context, a2, a3, 0x1Fu, &v55);
}
