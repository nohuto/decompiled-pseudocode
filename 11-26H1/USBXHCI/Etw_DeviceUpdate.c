/*
 * XREFs of Etw_DeviceUpdate @ 0x140001114
 * Callers:
 *     UsbDevice_UpdateUsbDevice @ 0x14003C83C (UsbDevice_UpdateUsbDevice.c)
 *     UsbDevice_UcxEvtHubInfo @ 0x14004ECE0 (UsbDevice_UcxEvtHubInfo.c)
 * Callees:
 *     _tlgCreate1Sz_char @ 0x140001008 (_tlgCreate1Sz_char.c)
 *     _tlgKeywordOn @ 0x140001040 (_tlgKeywordOn.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14000106C (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer @ 0x140003224 (McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer.c)
 *     XilUsbDevice_QueryAttributes @ 0x14003D8F8 (XilUsbDevice_QueryAttributes.c)
 *     __security_check_cookie @ 0x140059450 (__security_check_cookie.c)
 */

char __fastcall Etw_DeviceUpdate(__int64 a1, __int64 a2)
{
  _UNKNOWN **v2; // rax
  unsigned __int8 v4; // si
  __int64 v5; // rdx
  __int64 v6; // r9
  char v8; // [rsp+E8h] [rbp-80h] BYREF
  char v9; // [rsp+E9h] [rbp-7Fh] BYREF
  unsigned __int8 v10; // [rsp+EAh] [rbp-7Eh] BYREF
  char v11; // [rsp+EBh] [rbp-7Dh] BYREF
  char v12; // [rsp+ECh] [rbp-7Ch] BYREF
  char v13; // [rsp+EDh] [rbp-7Bh] BYREF
  char v14; // [rsp+EEh] [rbp-7Ah] BYREF
  char v15; // [rsp+EFh] [rbp-79h] BYREF
  char v16; // [rsp+F0h] [rbp-78h] BYREF
  char v17; // [rsp+F1h] [rbp-77h] BYREF
  char v18; // [rsp+F2h] [rbp-76h] BYREF
  char v19; // [rsp+F3h] [rbp-75h] BYREF
  char v20; // [rsp+F4h] [rbp-74h] BYREF
  char v21; // [rsp+F5h] [rbp-73h] BYREF
  char v22; // [rsp+F6h] [rbp-72h] BYREF
  char v23; // [rsp+F7h] [rbp-71h] BYREF
  char v24; // [rsp+F8h] [rbp-70h] BYREF
  char v25; // [rsp+F9h] [rbp-6Fh] BYREF
  __int16 v26; // [rsp+FCh] [rbp-6Ch] BYREF
  __int16 v27; // [rsp+100h] [rbp-68h] BYREF
  __int16 v28; // [rsp+104h] [rbp-64h] BYREF
  __int16 v29; // [rsp+108h] [rbp-60h] BYREF
  __int16 v30; // [rsp+10Ch] [rbp-5Ch] BYREF
  __int16 v31; // [rsp+110h] [rbp-58h] BYREF
  __int16 v32; // [rsp+114h] [rbp-54h] BYREF
  __int16 v33; // [rsp+118h] [rbp-50h] BYREF
  int v34; // [rsp+11Ch] [rbp-4Ch] BYREF
  int v35; // [rsp+120h] [rbp-48h] BYREF
  int v36; // [rsp+124h] [rbp-44h] BYREF
  int v37; // [rsp+128h] [rbp-40h] BYREF
  int v38; // [rsp+12Ch] [rbp-3Ch] BYREF
  __int64 v39; // [rsp+130h] [rbp-38h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v40[2]; // [rsp+138h] [rbp-30h] BYREF
  __int64 *v41; // [rsp+158h] [rbp-10h]
  __int64 v42; // [rsp+160h] [rbp-8h]
  int *v43; // [rsp+168h] [rbp+0h]
  __int64 v44; // [rsp+170h] [rbp+8h]
  int *v45; // [rsp+178h] [rbp+10h]
  __int64 v46; // [rsp+180h] [rbp+18h]
  __int64 v47; // [rsp+188h] [rbp+20h]
  __int64 v48; // [rsp+190h] [rbp+28h]
  char *v49; // [rsp+198h] [rbp+30h]
  __int64 v50; // [rsp+1A0h] [rbp+38h]
  char *v51; // [rsp+1A8h] [rbp+40h]
  __int64 v52; // [rsp+1B0h] [rbp+48h]
  __int16 *v53; // [rsp+1B8h] [rbp+50h]
  __int64 v54; // [rsp+1C0h] [rbp+58h]
  char *v55; // [rsp+1C8h] [rbp+60h]
  __int64 v56; // [rsp+1D0h] [rbp+68h]
  char *v57; // [rsp+1D8h] [rbp+70h]
  __int64 v58; // [rsp+1E0h] [rbp+78h]
  char *v59; // [rsp+1E8h] [rbp+80h]
  __int64 v60; // [rsp+1F0h] [rbp+88h]
  char *v61; // [rsp+1F8h] [rbp+90h]
  __int64 v62; // [rsp+200h] [rbp+98h]
  __int16 *v63; // [rsp+208h] [rbp+A0h]
  __int64 v64; // [rsp+210h] [rbp+A8h]
  __int16 *v65; // [rsp+218h] [rbp+B0h]
  __int64 v66; // [rsp+220h] [rbp+B8h]
  __int16 *v67; // [rsp+228h] [rbp+C0h]
  __int64 v68; // [rsp+230h] [rbp+C8h]
  char *v69; // [rsp+238h] [rbp+D0h]
  __int64 v70; // [rsp+240h] [rbp+D8h]
  char *v71; // [rsp+248h] [rbp+E0h]
  __int64 v72; // [rsp+250h] [rbp+E8h]
  char *v73; // [rsp+258h] [rbp+F0h]
  __int64 v74; // [rsp+260h] [rbp+F8h]
  char *v75; // [rsp+268h] [rbp+100h]
  __int64 v76; // [rsp+270h] [rbp+108h]
  char *v77; // [rsp+278h] [rbp+110h]
  __int64 v78; // [rsp+280h] [rbp+118h]
  char *v79; // [rsp+288h] [rbp+120h]
  __int64 v80; // [rsp+290h] [rbp+128h]
  char *v81; // [rsp+298h] [rbp+130h]
  __int64 v82; // [rsp+2A0h] [rbp+138h]
  int *v83; // [rsp+2A8h] [rbp+140h]
  __int64 v84; // [rsp+2B0h] [rbp+148h]
  char *v85; // [rsp+2B8h] [rbp+150h]
  __int64 v86; // [rsp+2C0h] [rbp+158h]
  char *v87; // [rsp+2C8h] [rbp+160h]
  __int64 v88; // [rsp+2D0h] [rbp+168h]
  unsigned __int8 *v89; // [rsp+2D8h] [rbp+170h]
  __int64 v90; // [rsp+2E0h] [rbp+178h]
  char *v91; // [rsp+2E8h] [rbp+180h]
  __int64 v92; // [rsp+2F0h] [rbp+188h]
  _OWORD *v93; // [rsp+2F8h] [rbp+190h]
  __int64 v94; // [rsp+300h] [rbp+198h]
  _OWORD *v95; // [rsp+308h] [rbp+1A0h]
  __int64 v96; // [rsp+310h] [rbp+1A8h]
  int *v97; // [rsp+318h] [rbp+1B0h]
  __int64 v98; // [rsp+320h] [rbp+1B8h]
  int *v99; // [rsp+328h] [rbp+1C0h]
  __int64 v100; // [rsp+330h] [rbp+1C8h]
  __int16 *v101; // [rsp+338h] [rbp+1D0h]
  __int64 v102; // [rsp+340h] [rbp+1D8h]
  __int16 *v103; // [rsp+348h] [rbp+1E0h]
  __int64 v104; // [rsp+350h] [rbp+1E8h]
  __int16 *v105; // [rsp+358h] [rbp+1F0h]
  __int64 v106; // [rsp+360h] [rbp+1F8h]
  __int16 *v107; // [rsp+368h] [rbp+200h]
  __int64 v108; // [rsp+370h] [rbp+208h]
  char *v109; // [rsp+378h] [rbp+210h]
  __int64 v110; // [rsp+380h] [rbp+218h]
  _BYTE v111[16]; // [rsp+388h] [rbp+220h] BYREF
  _BYTE v112[16]; // [rsp+398h] [rbp+230h] BYREF
  _BYTE v113[16]; // [rsp+3A8h] [rbp+240h] BYREF
  _OWORD v114[2]; // [rsp+3B8h] [rbp+250h] BYREF
  _OWORD v115[2]; // [rsp+3D8h] [rbp+270h] BYREF
  _UNKNOWN *retaddr; // [rsp+430h] [rbp+2C8h] BYREF

  v2 = &retaddr;
  v4 = 0;
  v8 = 0;
  v9 = 0;
  v10 = 0;
  v11 = 0;
  if ( *(_BYTE *)(a2 + 664) )
  {
    LOBYTE(v2) = XilUsbDevice_QueryAttributes(
                   a2,
                   (unsigned int)&v8,
                   (unsigned int)&v9,
                   (unsigned int)&v10,
                   (__int64)v115,
                   (__int64)&v11,
                   (__int64)v114);
    if ( (unsigned int)dword_14006B470 > 5
      && (LOBYTE(v2) = tlgKeywordOn((__int64)&dword_14006B470, 0x400000000000LL), (_BYTE)v2) )
    {
      v39 = 33556480LL;
      v41 = &v39;
      v34 = *(_DWORD *)(a2 + 20);
      v43 = &v34;
      v35 = *(_DWORD *)(a2 + 36);
      v45 = &v35;
      v47 = a2 + 44;
      v12 = *(_BYTE *)(a2 + 124);
      v49 = &v12;
      v13 = *(_BYTE *)(a2 + 125);
      v51 = &v13;
      v26 = *(_WORD *)(a2 + 126);
      v53 = &v26;
      v14 = *(_BYTE *)(a2 + 128);
      v55 = &v14;
      v15 = *(_BYTE *)(a2 + 129);
      v57 = &v15;
      v16 = *(_BYTE *)(a2 + 130);
      v59 = &v16;
      v17 = *(_BYTE *)(a2 + 131);
      v61 = &v17;
      v27 = *(_WORD *)(a2 + 132);
      v63 = &v27;
      v28 = *(_WORD *)(a2 + 134);
      v65 = &v28;
      v29 = *(_WORD *)(a2 + 136);
      v67 = &v29;
      v18 = *(_BYTE *)(a2 + 138);
      v69 = &v18;
      v19 = *(_BYTE *)(a2 + 139);
      v71 = &v19;
      v20 = *(_BYTE *)(a2 + 140);
      v73 = &v20;
      v42 = 8LL;
      v44 = 4LL;
      v46 = 4LL;
      v48 = 24LL;
      v50 = 1LL;
      v52 = 1LL;
      v54 = 2LL;
      v56 = 1LL;
      v58 = 1LL;
      v60 = 1LL;
      v62 = 1LL;
      v64 = 2LL;
      v66 = 2LL;
      v68 = 2LL;
      v70 = 1LL;
      v72 = 1LL;
      v5 = *(_QWORD *)(a2 + 8);
      v4 = v10;
      v21 = *(_BYTE *)(a2 + 141);
      v75 = &v21;
      v22 = *(_BYTE *)(a2 + 578);
      v77 = &v22;
      v23 = *(_BYTE *)(a2 + 579);
      v79 = &v23;
      v24 = *(_BYTE *)(a2 + 580);
      v81 = &v24;
      v36 = *(_DWORD *)(a2 + 584);
      v83 = &v36;
      v85 = &v8;
      v87 = &v9;
      v89 = &v10;
      v91 = &v11;
      v93 = v115;
      v95 = v114;
      v74 = 1LL;
      v76 = 1LL;
      v78 = 1LL;
      v80 = 1LL;
      v82 = 1LL;
      v84 = 4LL;
      v86 = 1LL;
      v88 = 1LL;
      v90 = 1LL;
      v92 = 1LL;
      v94 = 32LL;
      v96 = 32LL;
      v37 = *(_DWORD *)(v5 + 644);
      v97 = &v37;
      v98 = 4LL;
      v38 = *(_DWORD *)(v5 + 660);
      v99 = &v38;
      v100 = 4LL;
      v30 = *(_WORD *)(v5 + 664);
      v101 = &v30;
      v102 = 2LL;
      v31 = *(_WORD *)(v5 + 668);
      v103 = &v31;
      v104 = 2LL;
      v32 = *(_WORD *)(v5 + 648);
      v105 = &v32;
      v106 = 2LL;
      v33 = *(_WORD *)(v5 + 652);
      v107 = &v33;
      v108 = 2LL;
      v25 = *(_BYTE *)(v5 + 656);
      v109 = &v25;
      v110 = 1LL;
      tlgCreate1Sz_char((__int64)v111, (_BYTE *)(v5 + 704));
      tlgCreate1Sz_char((__int64)v112, (_BYTE *)(*(_QWORD *)(a2 + 8) + 709LL));
      tlgCreate1Sz_char((__int64)v113, (_BYTE *)(*(_QWORD *)(a2 + 8) + 714LL));
      LOBYTE(v2) = tlgWriteTransfer_EtwWriteTransfer(
                     (__int64)&dword_14006B470,
                     (unsigned __int8 *)dword_140063A91,
                     (__int64)v40,
                     v6,
                     0x28u,
                     v40);
    }
    else
    {
      v4 = v10;
    }
  }
  else
  {
    memset(v115, 0, sizeof(v115));
    memset(v114, 0, sizeof(v114));
  }
  if ( ((__int64)WPP_MAIN_CB.Queue.Wcb.BufferChainingDpc & 2) != 0 )
    LOBYTE(v2) = McTemplateK0pppqqQ6qqqqntttuuuqttttU32U32_EtwWriteTransfer(
                   v4,
                   (unsigned int)"\t",
                   0,
                   *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8LL),
                   *(_QWORD *)(a2 + 24),
                   *(_QWORD *)a2,
                   *(_DWORD *)(a2 + 20),
                   *(_DWORD *)(a2 + 36),
                   a2 + 44,
                   *(_BYTE *)(a2 + 143),
                   *(_BYTE *)(a2 + 144) != 0,
                   *(_DWORD *)(a2 + 148),
                   *(_DWORD *)(a2 + 152));
  return (char)v2;
}
