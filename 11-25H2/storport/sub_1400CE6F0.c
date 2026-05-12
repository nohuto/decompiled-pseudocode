/*
 * XREFs of sub_1400CE6F0 @ 0x1400CE6F0
 * Callers:
 *     <none>
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400A870C @ 0x1400A870C (sub_1400A870C.c)
 *     sub_1400C941C @ 0x1400C941C (sub_1400C941C.c)
 *     sub_1400CE144 @ 0x1400CE144 (sub_1400CE144.c)
 *     sub_140122C20 @ 0x140122C20 (sub_140122C20.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

void __fastcall sub_1400CE6F0(char *Context, __int64 a2, __int64 a3)
{
  int v3; // edi
  unsigned int v6; // ebx
  __int64 v7; // r13
  int v8; // r11d
  __int64 v9; // rbp
  unsigned int v10; // r15d
  unsigned int v11; // ecx
  int v12; // ecx
  int v13; // ecx
  int v14; // ecx
  int v15; // ecx
  int v16; // ecx
  unsigned int v17; // ecx
  unsigned int v18; // ecx
  unsigned int v19; // ecx
  unsigned int v20; // ecx
  unsigned int v21; // ecx
  bool v22; // zf
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  unsigned int v27; // ecx
  unsigned int v28; // ecx
  unsigned int v29; // ecx
  unsigned int v30; // ecx
  unsigned int v31; // ecx
  unsigned int v32; // ecx
  unsigned int v33; // ecx
  unsigned int v34; // ecx
  unsigned int v35; // ecx
  unsigned int v36; // ecx
  bool v37; // zf
  unsigned int v38; // ecx
  unsigned int v39; // ecx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  unsigned int v44; // ecx
  unsigned int v45; // ecx
  unsigned int v46; // ecx
  unsigned int v47; // ecx
  unsigned int v48; // ecx
  unsigned int v49; // ecx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  bool v52; // zf
  unsigned int v53; // ecx
  unsigned int v54; // ecx
  unsigned int v55; // ecx
  unsigned int v56; // ecx
  unsigned int v57; // ecx
  unsigned int v58; // ecx
  unsigned int v59; // ecx
  unsigned int v60; // ecx
  unsigned int v61; // ecx
  unsigned int v62; // ecx
  unsigned int v63; // ecx
  unsigned int v64; // edx
  __int16 v65; // r10
  __int64 v66; // r9
  WORK_QUEUE_TYPE v67; // r11d
  const wchar_t *v68; // r9
  struct _IO_WORKITEM *v69; // rcx
  unsigned int v70; // edx
  const wchar_t *v71; // r9
  struct _IO_WORKITEM *v72; // rcx
  unsigned __int64 v73; // rcx
  __int64 v74; // rdx
  int *v75; // rax
  const EVENT_DESCRIPTOR *v76; // rdx
  __int64 v77; // rdx
  char v78; // si
  _BYTE *v79; // r9
  unsigned __int8 v80; // r10
  char v81; // r11
  char v82; // r12
  char v83; // r15
  char *v84; // rbx
  unsigned int *v85; // r13
  __int64 v86; // rax
  unsigned __int64 v87; // r14
  char v88; // cl
  char v89; // r8
  _BYTE *v90; // rax
  char *v91; // r15
  unsigned int v92; // eax
  char v93; // al
  __int64 v94; // [rsp+20h] [rbp-E8h]
  __int64 v95; // [rsp+28h] [rbp-E0h]
  __int64 v96; // [rsp+30h] [rbp-D8h]
  __int64 v97; // [rsp+38h] [rbp-D0h]
  __int64 v98; // [rsp+40h] [rbp-C8h]
  __int64 v99; // [rsp+48h] [rbp-C0h]
  char v100; // [rsp+A0h] [rbp-68h]
  int v101; // [rsp+A4h] [rbp-64h]
  unsigned int v102; // [rsp+A8h] [rbp-60h]
  GUID v103; // [rsp+B0h] [rbp-58h] BYREF

  v3 = 0;
  v6 = 0;
  v7 = *(_QWORD *)(*(_QWORD *)a2 + 4224LL);
  v8 = 1;
  v9 = *(_QWORD *)(*(_QWORD *)a2 + 4184LL);
  LOBYTE(v10) = 1;
  if ( !a3 )
  {
    sub_1400A870C(
      (__int64)Context,
      1,
      3,
      (__int64)L"Firmware activation caused null CQE.",
      (void *)&dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) = 0;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) &= 0xF1FFu;
    *(_WORD *)(*(_QWORD *)a2 + 4260LL) = *(_WORD *)(*(_QWORD *)a2 + 4260LL) & 0xFE01 | 0xC;
    v11 = *(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL);
    if ( ((v11 >> 9) & 7) != 0 )
    {
      if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 1 )
      {
        if ( ((*(unsigned __int16 *)(*(_QWORD *)a2 + 4260LL) >> 9) & 7) != 2 )
          goto LABEL_93;
        v12 = (unsigned __int8)(v11 >> 1) - 128;
        if ( !v12 )
          goto LABEL_93;
        v13 = v12 - 1;
        if ( !v13 )
          goto LABEL_93;
        v14 = v13 - 1;
        if ( !v14 )
          goto LABEL_93;
        v15 = v14 - 1;
        if ( !v15 )
          goto LABEL_93;
        v16 = v15 - 1;
        if ( !v16 )
          goto LABEL_93;
        v17 = v16 - 1;
        if ( !v17 )
          goto LABEL_93;
        goto LABEL_84;
      }
      v18 = (unsigned __int8)(v11 >> 1);
      if ( v18 <= 0x80 )
      {
        if ( v18 == 128 )
          goto LABEL_26;
        if ( v18 <= 0x11 )
        {
          if ( v18 == 17 )
            goto LABEL_35;
          if ( v18 <= 9 )
          {
            if ( v18 == 9 )
              goto LABEL_26;
            if ( !v18 )
              goto LABEL_26;
            v19 = v18 - 1;
            if ( !v19 )
              goto LABEL_26;
            v20 = v19 - 1;
            if ( !v20 )
              goto LABEL_26;
            v21 = v20 - 1;
            if ( !v21 )
              goto LABEL_26;
            v23 = v21 - 2;
            v22 = v23 == 0;
LABEL_23:
            if ( v22 )
              goto LABEL_26;
            v24 = v23 - 1;
            if ( !v24 )
              goto LABEL_26;
            v25 = v24 - 1;
            if ( !v25 )
              goto LABEL_26;
            goto LABEL_73;
          }
          v26 = v18 - 10;
          if ( v26 )
          {
            v27 = v26 - 1;
            if ( v27 )
            {
              v28 = v27 - 1;
              if ( !v28 )
                goto LABEL_26;
              v29 = v28 - 1;
              if ( !v29 )
                goto LABEL_26;
              v30 = v29 - 1;
              if ( !v30 )
                goto LABEL_26;
              v31 = v30 - 1;
              if ( !v31 )
                goto LABEL_26;
              if ( v31 != 1 )
                goto LABEL_93;
            }
LABEL_35:
            v6 = -2147483210;
            goto LABEL_27;
          }
LABEL_26:
          v6 = -1073741808;
LABEL_27:
          *(_DWORD *)(v9 + 48) = v6;
          *(_QWORD *)(v9 + 56) = 0LL;
          goto LABEL_120;
        }
        if ( v18 <= 0x1A )
        {
          if ( v18 == 26 )
            goto LABEL_46;
          v32 = v18 - 18;
          if ( !v32 )
            goto LABEL_46;
          v33 = v32 - 1;
          if ( !v33 )
            goto LABEL_46;
          v34 = v33 - 1;
          if ( !v34 )
          {
            v6 = -1073741800;
            goto LABEL_27;
          }
          v35 = v34 - 1;
          if ( !v35 )
            goto LABEL_93;
          v36 = v35 - 1;
          if ( !v36 )
            goto LABEL_46;
          v38 = v36 - 2;
          v37 = v38 == 0;
          goto LABEL_44;
        }
        v39 = v18 - 27;
        if ( !v39 )
        {
          v6 = -1073741637;
          goto LABEL_27;
        }
        v40 = v39 - 1;
        if ( !v40 )
          goto LABEL_26;
        v41 = v40 - 2;
        if ( v41 )
        {
          v23 = v41 - 1;
          v22 = v23 == 0;
          goto LABEL_23;
        }
LABEL_85:
        v6 = -1073741790;
        goto LABEL_27;
      }
      v42 = v18 - 129;
      if ( !v42 )
        goto LABEL_26;
      v25 = v42 - 1;
      if ( !v25 )
        goto LABEL_85;
LABEL_73:
      v52 = v25 == 1;
LABEL_92:
      if ( !v52 )
        goto LABEL_93;
      goto LABEL_26;
    }
    v43 = (unsigned __int8)(v11 >> 1);
    if ( v43 > 0x80 )
    {
      v63 = v43 - 129;
      if ( !v63 )
        goto LABEL_26;
      v25 = v63 - 1;
      if ( !v25 )
      {
        v6 = -1073741661;
        goto LABEL_27;
      }
      goto LABEL_73;
    }
    if ( v43 == 128 )
      goto LABEL_26;
    if ( v43 > 0xE )
    {
      if ( v43 <= 0x16 )
      {
        if ( v43 == 22 )
          goto LABEL_26;
        v53 = v43 - 15;
        if ( !v53 )
          goto LABEL_26;
        v54 = v53 - 1;
        if ( !v54 )
          goto LABEL_26;
        v55 = v54 - 1;
        if ( !v55 )
          goto LABEL_26;
        v56 = v55 - 1;
        if ( !v56 )
          goto LABEL_26;
        v57 = v56 - 1;
        if ( !v57 )
          goto LABEL_26;
        v17 = v57 - 1;
        if ( v17 )
        {
LABEL_84:
          if ( v17 == 1 )
            goto LABEL_85;
LABEL_93:
          v6 = -1073741435;
          goto LABEL_27;
        }
LABEL_46:
        v6 = -1073741436;
        goto LABEL_27;
      }
      v58 = v43 - 24;
      if ( !v58 )
        goto LABEL_26;
      v59 = v58 - 1;
      if ( !v59 || (v60 = v59 - 1) == 0 )
      {
        v6 = -1073741643;
        goto LABEL_27;
      }
      v61 = v60 - 1;
      if ( v61 )
      {
        v62 = v61 - 1;
        if ( !v62 )
          goto LABEL_93;
        v52 = v62 == 2;
        goto LABEL_92;
      }
    }
    else
    {
      if ( v43 == 14 )
        goto LABEL_26;
      if ( v43 > 7 )
      {
        v48 = v43 - 8;
        if ( v48 )
        {
          v49 = v48 - 1;
          if ( v49 )
          {
            v50 = v49 - 1;
            if ( v50 )
            {
              v51 = v50 - 1;
              if ( !v51 )
                goto LABEL_26;
              v25 = v51 - 1;
              if ( !v25 )
              {
                v6 = -1073740758;
                goto LABEL_27;
              }
              goto LABEL_73;
            }
          }
        }
      }
      else if ( v43 != 7 )
      {
        if ( !v43 )
          goto LABEL_27;
        v44 = v43 - 1;
        if ( !v44 )
          goto LABEL_26;
        v45 = v44 - 1;
        if ( !v45 )
          goto LABEL_26;
        v46 = v45 - 1;
        if ( !v46 )
          goto LABEL_93;
        v47 = v46 - 1;
        if ( !v47 )
          goto LABEL_93;
        v38 = v47 - 1;
        v37 = v38 == 0;
LABEL_44:
        if ( !v37 && v38 != 1 )
          goto LABEL_93;
        goto LABEL_46;
      }
    }
    v6 = -1073741248;
    goto LABEL_27;
  }
  v64 = *(unsigned __int16 *)(a3 + 14);
  v65 = v64 & 0x1FE;
  if ( (v64 & 0xE00) == 0 && (v64 & 0x1FE) == 0 )
  {
    if ( (*((_QWORD *)Context + 121) & 0x10000LL) != 0 )
      goto LABEL_120;
    if ( sub_1400C941C((__int64)Context) && (*((_QWORD *)Context + 121) & 0x400LL) == 0 )
    {
      IoQueueWorkItemEx(*((PIO_WORKITEM *)Context + 164), sub_1400D0FF0, v67, Context);
      v68 = L"Queued identify update worker after firmware activation.";
LABEL_105:
      sub_1400A870C(
        (__int64)Context,
        1,
        4,
        (__int64)v68,
        (void *)&dword_140149108,
        0,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        &dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0,
        (void *)&dword_140149108,
        0);
      goto LABEL_120;
    }
    *((_QWORD *)Context + 121) |= v66;
    *((_QWORD *)Context + 121) &= ~0x400uLL;
    v69 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 164);
    *((_QWORD *)Context + 121) |= 0x800000uLL;
    *((_QWORD *)Context + 161) = sub_1400CDCB0;
    *((_QWORD *)Context + 160) = a2;
    *((_QWORD *)Context + 162) = a2;
    Context[1304] = 0;
    IoQueueWorkItemEx(v69, sub_1400CF330, v67, Context + 1280);
    v68 = L"Queued identify update worker after firmware activation (1).";
LABEL_104:
    LOBYTE(v10) = 0;
    goto LABEL_105;
  }
  if ( (v64 & 0xE00) == 0x200 )
  {
    v70 = v64 >> 1;
    if ( (unsigned __int8)v70 == 7 )
    {
      v71 = L"Controller reported invalid image on firmware activate.";
    }
    else
    {
      if ( (unsigned __int8)v70 == 11 )
      {
        sub_1400A870C(
          (__int64)Context,
          1,
          3,
          (__int64)L"Controller requires conventional reset after firmware activation.  Device should be power cycled to complete update.",
          (void *)&dword_140149108,
          0,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0);
        v6 = -2147483210;
        goto LABEL_120;
      }
      if ( (unsigned int)(unsigned __int8)v70 - 16 < 2 )
      {
        *((_QWORD *)Context + 121) |= 0x20uLL;
        v72 = (struct _IO_WORKITEM *)*((_QWORD *)Context + 164);
        *((_QWORD *)Context + 121) |= 0x800000uLL;
        *((_QWORD *)Context + 161) = sub_1400CDCB0;
        *((_QWORD *)Context + 160) = a2;
        *((_QWORD *)Context + 162) = a2;
        Context[1304] = v65 == 32;
        IoQueueWorkItemEx(v72, sub_1400CF330, DelayedWorkQueue, Context + 1280);
        v68 = L"Queued controller reset after firmware activation (2).";
        goto LABEL_104;
      }
      if ( sub_1400C941C((__int64)Context)
        && (*((_QWORD *)Context + 121) & 0x400LL) == 0
        && (*((_QWORD *)Context + 121) & 0x10000LL) == 0 )
      {
        sub_1400A870C(
          (__int64)Context,
          v8,
          2,
          (__int64)L"Firmware activation without reset failed, attempting to re-active with reset.",
          (void *)&dword_140149108,
          0,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          &dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0,
          (void *)&dword_140149108,
          0);
        *((_QWORD *)Context + 121) |= 0x400uLL;
        v6 = sub_1400CE144(v7, Context, v9, a2, 0LL);
        v10 = v6 >> 31;
        goto LABEL_120;
      }
      v71 = L"Firmware activation failed (1).";
    }
    sub_1400A870C(
      (__int64)Context,
      v8,
      2,
      (__int64)v71,
      (void *)&dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    v6 = -1073741808;
  }
  else
  {
    sub_1400A870C(
      (__int64)Context,
      1,
      2,
      (__int64)L"Firmware activation failed (2).",
      (void *)&dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      &dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0,
      (void *)&dword_140149108,
      0);
    v6 = -1073741435;
  }
LABEL_120:
  *((_QWORD *)Context + 121) &= ~0x10000uLL;
  if ( (_BYTE)v10 )
  {
    *(_DWORD *)(v9 + 48) = v6;
    *((_QWORD *)Context + 121) &= ~0x800uLL;
    *((_QWORD *)Context + 121) &= ~0x400uLL;
    *((_QWORD *)Context + 121) &= ~0x800000uLL;
    _interlockedbittestandreset((volatile signed __int32 *)(*(_QWORD *)a2 + 4256LL), 3u);
    sub_140122C20(Context, a2);
    ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 152));
    v22 = byte_140168DAA == 0;
    *(_BYTE *)(v9 + 141) = -84;
    if ( v22 )
      goto LABEL_186;
    v103 = 0LL;
    IoGetActivityIdIrp(v9, &v103);
    v74 = *(_QWORD *)(v9 + 184);
    if ( *(_BYTE *)v74 == 14 )
    {
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_186;
      v76 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
      goto LABEL_185;
    }
    if ( *(_BYTE *)v74 != 15 )
    {
      v73 = 12LL;
      if ( *(_BYTE *)v74 != 27 )
        goto LABEL_186;
      if ( *(_BYTE *)(v74 + 1) == 7 && !*(_DWORD *)(v74 + 8) )
      {
        if ( (byte_1401694F2 & 0x40) != 0 )
        {
          v75 = *(int **)(v9 + 56);
          if ( v75 )
            v3 = *v75;
          LODWORD(v95) = *(_DWORD *)(v9 + 48);
          LODWORD(v94) = v3;
          sub_140056AB0(12LL, v74, &v103, v9, v94, v95);
        }
        goto LABEL_186;
      }
      if ( (byte_1401694F2 & 0x20) == 0 )
        goto LABEL_186;
      v76 = &stru_140149FE8;
LABEL_185:
      LODWORD(v94) = *(_DWORD *)(v9 + 48);
      sub_140052F3C(v73, v76, &v103, v9, v94);
      goto LABEL_186;
    }
    if ( (byte_1401694F1 & 0x80) == 0 )
      goto LABEL_186;
    v77 = *(_QWORD *)(v74 + 8);
    v78 = 0;
    v79 = 0LL;
    v80 = 0;
    v81 = 0;
    v82 = 0;
    v83 = 0;
    if ( *(_BYTE *)(v77 + 2) == 40 )
    {
      v84 = 0LL;
      v100 = 0;
      if ( *(_DWORD *)(v77 + 20) )
        goto LABEL_186;
      v73 = 0LL;
      v101 = 0;
      v102 = *(_DWORD *)(v77 + 56);
      if ( !v102 )
        goto LABEL_160;
      v85 = (unsigned int *)(v77 + 120);
      while ( 1 )
      {
        v86 = *v85;
        if ( (unsigned int)v86 >= 0x80 )
        {
          v87 = *(unsigned int *)(v77 + 16);
          if ( (unsigned int)v86 < (unsigned int)v87 )
          {
            if ( *(_DWORD *)(v86 + v77) == 64 )
            {
              v73 = v86 + 40;
              if ( v86 + 40 <= v87 )
              {
                if ( *(_BYTE *)(v86 + v77 + 10) )
                  v84 = (char *)(v86 + v77 + 24);
                v79 = *(_BYTE **)(v86 + v77 + 16);
LABEL_159:
                v80 = *(_BYTE *)(v86 + v77 + 9);
                v78 = *(_BYTE *)(v86 + v77 + 8);
LABEL_160:
                if ( v84 )
                {
                  v88 = *v84;
                  goto LABEL_163;
                }
                goto LABEL_186;
              }
            }
            else
            {
              v73 = (unsigned int)(*(_DWORD *)(v86 + v77) - 65);
              if ( *(_DWORD *)(v86 + v77) == 65 )
              {
                v73 = v86 + 56;
                if ( v86 + 56 <= v87 )
                {
                  v100 = 1;
                  if ( *(_BYTE *)(v86 + v77 + 10) )
                    v84 = (char *)(v86 + v77 + 24);
                  v78 = *(_BYTE *)(v86 + v77 + 8);
                  v79 = *(_BYTE **)(v86 + v77 + 16);
                  v80 = *(_BYTE *)(v86 + v77 + 9);
                }
              }
              else if ( *(_DWORD *)(v86 + v77) == 66 )
              {
                v73 = v86 + 40;
                if ( v86 + 40 <= v87 )
                {
                  if ( *(_DWORD *)(v86 + v77 + 12) )
                    v84 = (char *)(v86 + v77 + 32);
                  v79 = *(_BYTE **)(v86 + v77 + 24);
                  goto LABEL_159;
                }
              }
            }
            if ( v100 )
              goto LABEL_160;
            LODWORD(v73) = v101;
          }
        }
        v73 = (unsigned int)(v73 + 1);
        ++v85;
        v101 = v73;
        if ( (unsigned int)v73 >= v102 )
          goto LABEL_160;
      }
    }
    v88 = *(_BYTE *)(v77 + 72);
    v79 = *(_BYTE **)(v77 + 32);
    v80 = *(_BYTE *)(v77 + 11);
    v78 = *(_BYTE *)(v77 + 4);
    if ( *(_BYTE *)(v77 + 2) )
      goto LABEL_186;
LABEL_163:
    LOBYTE(v73) = v88 - 8;
    if ( (v73 & 0x5D) == 0 )
    {
      v89 = *(_BYTE *)(v77 + 3);
      if ( v89 == 1 || !v79 || !v80 )
        goto LABEL_181;
      LOBYTE(v77) = 0;
      v73 = (unsigned __int64)&v79[v80];
      v90 = v79 + 8;
      if ( (unsigned __int8)((*v79 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v90 > v73 )
          goto LABEL_179;
        v82 = v79[2];
        v81 = v79[1] & 0xF;
        v83 = v79[3];
      }
      else
      {
        if ( (unsigned __int64)v90 > v73 )
          goto LABEL_179;
        v91 = v79 + 13;
        v81 = v79[2] & 0xF;
        v92 = v80;
        if ( (unsigned int)(unsigned __int8)v79[7] + 8 <= v80 )
          v92 = (unsigned __int8)v79[7] + 8;
        v73 = (unsigned __int64)&v79[v92];
        if ( (unsigned __int64)v91 <= v73 )
          v82 = v79[12];
        if ( (unsigned __int64)(v79 + 14) > v73 )
          v83 = 0;
        else
          v83 = *v91;
      }
      LOBYTE(v77) = 1;
LABEL_179:
      if ( (_BYTE)v77 )
      {
        LOBYTE(v3) = v82;
        v93 = v83;
LABEL_182:
        LOBYTE(v99) = v93;
        LOBYTE(v98) = v3;
        LOBYTE(v97) = v81;
        LOBYTE(v96) = v78;
        LOBYTE(v95) = v89;
        LODWORD(v94) = *(_DWORD *)(v9 + 48);
        sub_140052E64(v73, v77, &v103, v9, v94, v95, v96, v97, v98, v99, v9);
        goto LABEL_186;
      }
LABEL_181:
      v81 = 0;
      v93 = 0;
      goto LABEL_182;
    }
LABEL_186:
    IofCompleteRequest((PIRP)v9, 1);
  }
}
