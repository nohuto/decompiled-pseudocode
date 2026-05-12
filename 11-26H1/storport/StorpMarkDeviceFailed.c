/*
 * XREFs of StorpMarkDeviceFailed @ 0x14007CEEC
 * Callers:
 *     StorPortNotification @ 0x14000DE70 (StorPortNotification.c)
 *     NvmeControllerInitPhase1 @ 0x1400F570C (NvmeControllerInitPhase1.c)
 *     NvmeControllerInitPhase2 @ 0x1400F5A18 (NvmeControllerInitPhase2.c)
 * Callees:
 *     RaidAdapterFindUnit @ 0x140028FF0 (RaidAdapterFindUnit.c)
 *     DbgLogRequest @ 0x14002A5C0 (DbgLogRequest.c)
 *     _tlgCreate1Sz_wchar_t @ 0x14003F144 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgCreate1Sz_char @ 0x14003F184 (_tlgCreate1Sz_char.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x14003F280 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x140049D1C (_tlgKeywordOn.c)
 *     RaidDriverGetName @ 0x14004A42C (RaidDriverGetName.c)
 *     RaidAdapterGetFirstUnit @ 0x140061318 (RaidAdapterGetFirstUnit.c)
 *     McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer @ 0x140078FD4 (McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer.c)
 *     StorpPopulateErrorData @ 0x140082D48 (StorpPopulateErrorData.c)
 *     StorpWheaReportError @ 0x140082EA8 (StorpWheaReportError.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 */

__int64 __fastcall StorpMarkDeviceFailed(
        __int64 a1,
        __int64 a2,
        int a3,
        __int16 a4,
        const wchar_t *a5,
        unsigned __int16 a6,
        void *a7,
        unsigned __int16 a8,
        void *a9)
{
  __int64 v9; // r13
  __int64 v11; // rdi
  bool v12; // zf
  int *v14; // r15
  __int64 *Unit; // rax
  char v16; // cl
  int v17; // r8d
  __int16 v18; // r12
  char v19; // al
  char v20; // r11
  char v21; // r9
  __int64 v22; // r10
  unsigned __int8 v23; // al
  __int64 FirstUnit; // rax
  __int16 v25; // cx
  int v26; // edx
  char v27; // al
  const char *v28; // rax
  char v29; // al
  __int64 v30; // rdx
  int *v31; // r9
  int *v32; // r8
  _DWORD *v33; // r13
  int v34; // edx
  int *v35; // rcx
  int v36; // r8d
  int v37; // edx
  unsigned int v38; // eax
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // r12
  const wchar_t *v42; // rcx
  const char *v43; // r8
  const char *v44; // rdx
  const char *v45; // rax
  const wchar_t *v46; // rcx
  const char *v47; // r8
  const char *v48; // rdx
  const char *v49; // rax
  const wchar_t *v50; // rcx
  const char *v51; // r8
  const char *v52; // rdx
  const char *v53; // rax
  int *v54; // rdx
  int v55; // r9d
  __int64 v56; // r8
  __int64 v57; // r9
  struct _DEVICE_OBJECT *v58; // rcx
  size_t Size; // [rsp+40h] [rbp-110h]
  char v60; // [rsp+D0h] [rbp-80h]
  __int16 v61; // [rsp+D1h] [rbp-7Fh] BYREF
  char v62; // [rsp+D3h] [rbp-7Dh]
  char v63; // [rsp+D4h] [rbp-7Ch] BYREF
  int v64; // [rsp+D8h] [rbp-78h] BYREF
  __int16 v65; // [rsp+DCh] [rbp-74h]
  int v66; // [rsp+E0h] [rbp-70h] BYREF
  unsigned int v67; // [rsp+E4h] [rbp-6Ch]
  const char *v68; // [rsp+E8h] [rbp-68h]
  const wchar_t *v69; // [rsp+F0h] [rbp-60h]
  __int64 v70; // [rsp+F8h] [rbp-58h]
  void *Src; // [rsp+100h] [rbp-50h]
  void *v72; // [rsp+108h] [rbp-48h]
  __int64 v73; // [rsp+110h] [rbp-40h]
  int *v74; // [rsp+118h] [rbp-38h]
  int v75[4]; // [rsp+120h] [rbp-30h] BYREF
  __int128 v76; // [rsp+130h] [rbp-20h] BYREF
  int v77[4]; // [rsp+140h] [rbp-10h] BYREF
  _OWORD v78[2]; // [rsp+150h] [rbp+0h] BYREF
  int v79; // [rsp+170h] [rbp+20h]
  struct _EVENT_DATA_DESCRIPTOR v80[2]; // [rsp+180h] [rbp+30h] BYREF
  __int128 *v81; // [rsp+1A0h] [rbp+50h]
  __int64 v82; // [rsp+1A8h] [rbp+58h]
  int *v83; // [rsp+1B0h] [rbp+60h]
  __int64 v84; // [rsp+1B8h] [rbp+68h]
  int *v85; // [rsp+1C0h] [rbp+70h]
  __int64 v86; // [rsp+1C8h] [rbp+78h]
  char *v87; // [rsp+1D0h] [rbp+80h]
  __int64 v88; // [rsp+1D8h] [rbp+88h]
  __int16 *v89; // [rsp+1E0h] [rbp+90h]
  __int64 v90; // [rsp+1E8h] [rbp+98h]
  char *v91; // [rsp+1F0h] [rbp+A0h]
  __int64 v92; // [rsp+1F8h] [rbp+A8h]
  _DWORD *v93; // [rsp+200h] [rbp+B0h]
  __int64 v94; // [rsp+208h] [rbp+B8h]
  __int64 v95; // [rsp+210h] [rbp+C0h]
  _DWORD v96[2]; // [rsp+218h] [rbp+C8h] BYREF
  char v97[16]; // [rsp+220h] [rbp+D0h] BYREF
  char v98[16]; // [rsp+230h] [rbp+E0h] BYREF
  int *v99; // [rsp+240h] [rbp+F0h]
  __int64 v100; // [rsp+248h] [rbp+F8h]
  char v101[16]; // [rsp+250h] [rbp+100h] BYREF
  __int64 retaddr; // [rsp+2A8h] [rbp+158h]

  v69 = a5;
  v72 = a7;
  v9 = a2;
  Src = a9;
  v11 = 0LL;
  v64 = RaidNullAddress;
  v12 = *(_DWORD *)a1 == 1314275652;
  v65 = a4;
  v66 = a3;
  v73 = a2;
  v67 = 0;
  *(_OWORD *)v75 = 0LL;
  v79 = 0;
  *(_OWORD *)v77 = 0LL;
  v62 = 0;
  v76 = 0LL;
  v68 = 0LL;
  memset(v78, 0, sizeof(v78));
  if ( v12 )
    return 3238002690LL;
  RaidDriverGetName(*(_QWORD *)(a1 + 16), (__int64)v75);
  v14 = (int *)&dword_140154ADC;
  v76 = *(_OWORD *)(a1 + 5128);
  if ( !v9 )
  {
    FirstUnit = RaidAdapterGetFirstUnit(a1);
    v25 = *(char *)(a1 + 104);
    v11 = FirstUnit;
    v26 = *(_DWORD *)(a1 + 92);
    v70 = *(_QWORD *)(a1 + 8);
    v18 = (((v25 >> 15) & 2) + 1) | 4;
    if ( !v26 )
      v18 = ((v25 >> 15) & 2) + 1;
    v27 = *(_BYTE *)(a1 + 110);
    if ( (v27 & 1) != 0 )
    {
      v20 = 0;
    }
    else
    {
      v20 = 1;
      *(_BYTE *)(a1 + 110) = v27 | 1;
    }
    v21 = v66;
    LODWORD(v28) = v66;
    if ( (v66 & 3) == 1 && (v25 & 0x80u) == 0 && !v26 )
    {
      v29 = *(_BYTE *)(a1 + 109);
      if ( (v29 & 8) == 0 )
      {
        v62 = 1;
        *(_BYTE *)(a1 + 109) = v29 | 8;
      }
    }
    v22 = v11;
    v61 = *(_WORD *)((char *)&v64 + 1);
    v60 = v64;
    if ( !v11 )
      goto LABEL_37;
LABEL_31:
    v28 = *(const char **)(v11 + 160);
    if ( v28 )
    {
      v28 += 90;
    }
    else
    {
      v30 = *(_QWORD *)(v11 + 152);
      if ( !v30
        || (LODWORD(v28) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 24) + 608LL) + 184LL),
            ((unsigned __int8)v28 & 0x40) == 0) )
      {
LABEL_37:
        if ( (v18 & 6) == 0 || (v21 & 2) != 0 )
          LOBYTE(v28) = 0;
        else
          LODWORD(v28) = ReportAllWheaErrorsAsNonFatal == 0;
        v64 = (int)v28;
        if ( (v20 || (_BYTE)v28) && !_InterlockedCompareExchange(&WheaPendingError, 1, 0) )
        {
          if ( v11 )
          {
            v31 = (int *)(v11 + 177);
            v32 = (int *)(v11 + 168);
          }
          else
          {
            v31 = (int *)&dword_140154ADC;
            v32 = (int *)&dword_140154ADC;
          }
          if ( v9 )
          {
            v33 = (_DWORD *)(v11 + 3432);
            v34 = *(_DWORD *)(v11 + 3432);
          }
          else
          {
            v34 = *(_DWORD *)(a1 + 4340);
            v33 = (_DWORD *)(v22 + 3432);
          }
          v35 = (int *)&v76;
          if ( v73 )
            v35 = v77;
          LODWORD(Size) = a6;
          v74 = v35;
          StorpPopulateErrorData((int)v35, v34, (int)v75, (int)v31, v65, v18, v32, v31, Size, v72);
          v37 = v64;
          if ( (_BYTE)v64 )
          {
            if ( !v73 )
              v33 = (_DWORD *)(a1 + 4340);
            BYTE1(v78[0]) = *v33;
            WORD3(v78[0]) = v65;
            *((_QWORD *)&v78[1] + 1) = 0LL;
            v79 = 0;
            LOBYTE(v78[0]) = 1;
            WORD1(v78[0]) = v18;
            WORD2(v78[0]) = 1;
            *(_OWORD *)((char *)v78 + 8) = *(_OWORD *)v74;
            if ( Src )
            {
              v38 = a8;
              if ( a8 > 8u )
                v38 = 8;
              memmove((char *)&v78[1] + 8, Src, v38);
              v37 = v64;
            }
          }
          v9 = v73;
          v39 = a1;
          if ( v73 )
            v39 = v11;
          StorpWheaReportError(v70, v37, v36, (unsigned __int64)v78 & -(__int64)((_BYTE)v37 != 0), v39);
          _InterlockedExchange(&WheaPendingError, 0);
        }
        goto LABEL_62;
      }
      v28 = (const char *)(v30 + 41);
    }
    v68 = v28;
    goto LABEL_37;
  }
  if ( *(_WORD *)v9 == 1 && *(_DWORD *)(v9 + 4) >= 4u )
  {
    LOBYTE(v64) = *(_BYTE *)(v9 + 8);
    v60 = v64;
    BYTE1(v64) = *(_BYTE *)(v9 + 9);
    LOBYTE(v61) = BYTE1(v64);
    BYTE2(v64) = *(_BYTE *)(v9 + 10);
    HIBYTE(v61) = BYTE2(v64);
    Unit = RaidAdapterFindUnit(a1, v64);
    v11 = (__int64)Unit;
    if ( !Unit )
    {
      v67 = -1056964601;
LABEL_62:
      v23 = v60;
      goto LABEL_63;
    }
    *(_OWORD *)v77 = *(_OWORD *)(Unit + 263);
    v16 = *((_BYTE *)Unit + 506);
    v17 = *((_DWORD *)Unit + 259);
    v70 = Unit[1];
    v18 = (2 * (v16 & 1)) | 4;
    if ( !v17 )
      v18 = 2 * (v16 & 1);
    v19 = *((_BYTE *)Unit + 507);
    if ( (v19 & 8) != 0 )
    {
      v20 = 0;
    }
    else
    {
      v20 = 1;
      *(_BYTE *)(v11 + 507) = v19 | 8;
    }
    v21 = v66;
    if ( (v66 & 3) == 1 && (v16 & 1) == 0 && !v17 && (v16 & 0x20) == 0 )
    {
      v62 = 1;
      *(_BYTE *)(v11 + 506) = v16 | 0x20;
    }
    v22 = v11;
    goto LABEL_31;
  }
  v67 = -1056964601;
  v61 = *(_WORD *)((char *)&v64 + 1);
  v23 = v64;
  v60 = v64;
LABEL_63:
  DbgLogRequest(
    a1,
    44,
    a1,
    retaddr,
    (__int64)v69,
    HIBYTE(v61) | (unsigned __int64)(((unsigned __int8)v61 | (v23 << 8)) << 8),
    0LL);
  v41 = *(_QWORD *)&v75[2];
  if ( StorEtwLoggingEnabled )
  {
    if ( (v66 & 1) != 0 )
    {
      if ( (byte_140173445 & 8) != 0 )
      {
        v42 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v42 = *(const wchar_t **)(a1 + 5144);
        if ( v11 )
        {
          v43 = (const char *)(v11 + 242);
          v44 = (const char *)(v11 + 177);
          v45 = (const char *)(v11 + 168);
        }
        else
        {
          v43 = (const char *)&dword_140154ADC;
          v44 = (const char *)&dword_140154ADC;
          v45 = (const char *)&dword_140154ADC;
        }
        McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
          (__int64)v42,
          &EventMarkAndRemoveFailedDevice,
          (__int64)v43,
          *(_DWORD *)(a1 + 392),
          *(_DWORD *)(a1 + 952),
          *(_DWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 964),
          *(_DWORD *)(a1 + 56),
          v60,
          v61,
          SHIBYTE(v61),
          (__int64)v77,
          (__int64)&v76,
          *(const wchar_t **)&v75[2],
          v45,
          v44,
          v43,
          v42,
          v68,
          v65,
          v69,
          a6,
          (__int64)v72,
          a8,
          (__int64)Src,
          v66);
      }
    }
    else if ( (v66 & 2) != 0 )
    {
      if ( (byte_140173445 & 8) != 0 )
      {
        v46 = (const wchar_t *)&unk_140153274;
        if ( *(_QWORD *)(a1 + 5144) )
          v46 = *(const wchar_t **)(a1 + 5144);
        if ( v11 )
        {
          v47 = (const char *)(v11 + 242);
          v48 = (const char *)(v11 + 177);
          v49 = (const char *)(v11 + 168);
        }
        else
        {
          v47 = (const char *)&dword_140154ADC;
          v48 = (const char *)&dword_140154ADC;
          v49 = (const char *)&dword_140154ADC;
        }
        McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
          (__int64)v46,
          &EventMarkDevicePotentiallyFailed,
          (__int64)v47,
          *(_DWORD *)(a1 + 392),
          *(_DWORD *)(a1 + 952),
          *(_DWORD *)(a1 + 960),
          *(_DWORD *)(a1 + 964),
          *(_DWORD *)(a1 + 56),
          v60,
          v61,
          SHIBYTE(v61),
          (__int64)v77,
          (__int64)&v76,
          *(const wchar_t **)&v75[2],
          v49,
          v48,
          v47,
          v46,
          v68,
          v65,
          v69,
          a6,
          (__int64)v72,
          a8,
          (__int64)Src,
          v66);
      }
    }
    else if ( (byte_140173445 & 8) != 0 )
    {
      v50 = (const wchar_t *)&unk_140153274;
      if ( *(_QWORD *)(a1 + 5144) )
        v50 = *(const wchar_t **)(a1 + 5144);
      if ( v11 )
      {
        v51 = (const char *)(v11 + 242);
        v52 = (const char *)(v11 + 177);
        v53 = (const char *)(v11 + 168);
      }
      else
      {
        v51 = (const char *)&dword_140154ADC;
        v52 = (const char *)&dword_140154ADC;
        v53 = (const char *)&dword_140154ADC;
      }
      McTemplateK0qqqqquuujjzssszshzhbr18hbr20q_EtwWriteTransfer(
        (__int64)v50,
        &EventMarkDeviceFailed,
        (__int64)v51,
        *(_DWORD *)(a1 + 392),
        *(_DWORD *)(a1 + 952),
        *(_DWORD *)(a1 + 960),
        *(_DWORD *)(a1 + 964),
        *(_DWORD *)(a1 + 56),
        v60,
        v61,
        SHIBYTE(v61),
        (__int64)v77,
        (__int64)&v76,
        *(const wchar_t **)&v75[2],
        v53,
        v52,
        v51,
        v50,
        v68,
        v65,
        v69,
        a6,
        (__int64)v72,
        a8,
        (__int64)Src,
        v66);
    }
  }
  if ( (unsigned int)dword_140172178 > 5 && tlgKeywordOn(v40, 0x400000000000LL) )
  {
    v82 = 16LL;
    v81 = &v76;
    v83 = v77;
    v54 = (int *)(v11 + 168);
    v66 = *(_DWORD *)(a1 + 56);
    v85 = &v66;
    v63 = v60;
    v87 = &v63;
    v89 = &v61;
    v91 = (char *)&v61 + 1;
    v93 = v96;
    v96[0] = LOWORD(v75[0]);
    v84 = 16LL;
    v86 = 4LL;
    v88 = 1LL;
    v90 = 1LL;
    v92 = 1LL;
    v94 = 2LL;
    v95 = v41;
    v96[1] = 0;
    if ( !v11 )
      v54 = (int *)&dword_140154ADC;
    tlgCreate1Sz_char((__int64)v97, v54);
    if ( v11 )
      v14 = (int *)(v11 + 177);
    tlgCreate1Sz_char((__int64)v98, v14);
    v99 = &v64;
    v64 = v55;
    v100 = 4LL;
    tlgCreate1Sz_wchar_t((__int64)v101, v69);
    tlgWriteTransfer_EtwWriteTransfer((__int64)v80, (unsigned __int8 *)dword_140160154, v56, v57, 0xEu, v80);
  }
  if ( v62 )
  {
    if ( v9 )
      v58 = *(struct _DEVICE_OBJECT **)(v11 + 8);
    else
      v58 = *(struct _DEVICE_OBJECT **)(a1 + 8);
    IoInvalidateDeviceState(v58);
  }
  return v67;
}
