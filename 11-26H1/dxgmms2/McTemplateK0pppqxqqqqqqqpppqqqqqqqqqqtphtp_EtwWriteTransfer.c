/*
 * XREFs of McTemplateK0pppqxqqqqqqqpppqqqqqqqqqqtphtp_EtwWriteTransfer @ 0x14004224C
 * Callers:
 *     ?DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z @ 0x1400D51C0 (-DestroyOneAllocation@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_DEVICE@@PEAUVIDMM_GLOBAL_ALLOC@@_N@Z.c)
 *     ?VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHAREDRESOURCE@@@Z @ 0x1400D7458 (-VidMmReportGlobalAlloc@@YAXPEBVDXGADAPTER@@PEBVDXGDEVICE@@PEBUVIDMM_GLOBAL_ALLOC@@PEBVDXGSHARED.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@U_DXGK_ALLOCATIONINFOFLAGS2@@PEBVDXGADAPTERALLOCATION@@PEAX77KE7PEAVVIDMM_PAGE_TABLE_BASE@@PEAPEAUVIDMM_CROSSADAPTER_ALLOC@@PEAVVIDMM_FENCE_STORAGE_PAGE@@PEAPEAUVIDMM_GLOBAL_ALLOC@@PEAE@Z @ 0x1400DEEC4 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KW4_DXGK_PAGESIZE@@2KKKU_D3DDDI_SE.c)
 * Callees:
 *     McGenEventWrite_EtwWriteTransfer @ 0x140012A70 (McGenEventWrite_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14005B770 (__security_check_cookie.c)
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
        char a9,
        int a10,
        char a11,
        char a12,
        int a13,
        char a14,
        char a15,
        char a16,
        char a17,
        int a18,
        char a19,
        char a20,
        char a21,
        char a22,
        char a23,
        char a24,
        char a25,
        char a26,
        char a27,
        char a28,
        char a29,
        char a30,
        char a31,
        char a32,
        char a33)
{
  int v34; // [rsp+30h] [rbp-D0h] BYREF
  int v35; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v36; // [rsp+40h] [rbp-C0h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v37; // [rsp+50h] [rbp-B0h] BYREF
  __int64 *v38; // [rsp+60h] [rbp-A0h]
  __int64 v39; // [rsp+68h] [rbp-98h]
  char *v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+78h] [rbp-88h]
  char *v42; // [rsp+80h] [rbp-80h]
  __int64 v43; // [rsp+88h] [rbp-78h]
  char *v44; // [rsp+90h] [rbp-70h]
  __int64 v45; // [rsp+98h] [rbp-68h]
  char *v46; // [rsp+A0h] [rbp-60h]
  __int64 v47; // [rsp+A8h] [rbp-58h]
  char *v48; // [rsp+B0h] [rbp-50h]
  __int64 v49; // [rsp+B8h] [rbp-48h]
  int *v50; // [rsp+C0h] [rbp-40h]
  __int64 v51; // [rsp+C8h] [rbp-38h]
  char *v52; // [rsp+D0h] [rbp-30h]
  __int64 v53; // [rsp+D8h] [rbp-28h]
  char *v54; // [rsp+E0h] [rbp-20h]
  __int64 v55; // [rsp+E8h] [rbp-18h]
  int *v56; // [rsp+F0h] [rbp-10h]
  __int64 v57; // [rsp+F8h] [rbp-8h]
  char *v58; // [rsp+100h] [rbp+0h]
  __int64 v59; // [rsp+108h] [rbp+8h]
  char *v60; // [rsp+110h] [rbp+10h]
  __int64 v61; // [rsp+118h] [rbp+18h]
  char *v62; // [rsp+120h] [rbp+20h]
  __int64 v63; // [rsp+128h] [rbp+28h]
  char *v64; // [rsp+130h] [rbp+30h]
  __int64 v65; // [rsp+138h] [rbp+38h]
  __int64 *v66; // [rsp+140h] [rbp+40h]
  __int64 v67; // [rsp+148h] [rbp+48h]
  char *v68; // [rsp+150h] [rbp+50h]
  __int64 v69; // [rsp+158h] [rbp+58h]
  char *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  char *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]
  char *v74; // [rsp+180h] [rbp+80h]
  __int64 v75; // [rsp+188h] [rbp+88h]
  char *v76; // [rsp+190h] [rbp+90h]
  __int64 v77; // [rsp+198h] [rbp+98h]
  char *v78; // [rsp+1A0h] [rbp+A0h]
  __int64 v79; // [rsp+1A8h] [rbp+A8h]
  char *v80; // [rsp+1B0h] [rbp+B0h]
  __int64 v81; // [rsp+1B8h] [rbp+B8h]
  char *v82; // [rsp+1C0h] [rbp+C0h]
  __int64 v83; // [rsp+1C8h] [rbp+C8h]
  char *v84; // [rsp+1D0h] [rbp+D0h]
  __int64 v85; // [rsp+1D8h] [rbp+D8h]
  char *v86; // [rsp+1E0h] [rbp+E0h]
  __int64 v87; // [rsp+1E8h] [rbp+E8h]
  char *v88; // [rsp+1F0h] [rbp+F0h]
  __int64 v89; // [rsp+1F8h] [rbp+F8h]
  char *v90; // [rsp+200h] [rbp+100h]
  __int64 v91; // [rsp+208h] [rbp+108h]
  char *v92; // [rsp+210h] [rbp+110h]
  __int64 v93; // [rsp+218h] [rbp+118h]
  char *v94; // [rsp+220h] [rbp+120h]
  __int64 v95; // [rsp+228h] [rbp+128h]
  char *v96; // [rsp+230h] [rbp+130h]
  __int64 v97; // [rsp+238h] [rbp+138h]
  __int64 v98; // [rsp+278h] [rbp+178h] BYREF

  v98 = a4;
  v39 = 8LL;
  v38 = &v98;
  v36 = 0LL;
  v40 = &a5;
  v42 = &a6;
  v44 = &a7;
  v46 = &a8;
  v48 = &a9;
  v50 = &v34;
  v52 = &a11;
  v54 = &a12;
  v56 = &v35;
  v58 = &a14;
  v60 = &a15;
  v62 = &a16;
  v64 = &a17;
  v66 = &v36;
  v68 = &a19;
  v70 = &a20;
  v72 = &a21;
  v74 = &a22;
  v76 = &a23;
  v78 = &a24;
  v80 = &a25;
  v82 = &a26;
  v84 = &a27;
  v86 = &a28;
  v88 = &a29;
  v35 = 0;
  v34 = 0;
  v41 = 8LL;
  v43 = 8LL;
  v45 = 4LL;
  v47 = 8LL;
  v49 = 4LL;
  v51 = 4LL;
  v53 = 4LL;
  v55 = 4LL;
  v57 = 4LL;
  v59 = 4LL;
  v61 = 4LL;
  v63 = 8LL;
  v65 = 8LL;
  v67 = 8LL;
  v69 = 4LL;
  v71 = 4LL;
  v73 = 4LL;
  v75 = 4LL;
  v77 = 4LL;
  v79 = 4LL;
  v81 = 4LL;
  v83 = 4LL;
  v85 = 4LL;
  v87 = 4LL;
  v89 = 4LL;
  v90 = &a30;
  v91 = 8LL;
  v92 = &a31;
  v93 = 2LL;
  v94 = &a32;
  v96 = &a33;
  v95 = 4LL;
  v97 = 8LL;
  return McGenEventWrite_EtwWriteTransfer(&DxgkControlGuid_Context, a2, a3, 0x1Fu, &v37);
}
