/*
 * XREFs of sub_140198640 @ 0x140198640
 * Callers:
 *     sub_14002D0D0 @ 0x14002D0D0 (sub_14002D0D0.c)
 * Callees:
 *     sub_140046AC0 @ 0x140046AC0 (sub_140046AC0.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056988 @ 0x140056988 (sub_140056988.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14008FCE8 @ 0x14008FCE8 (sub_14008FCE8.c)
 *     sub_1400D1EB8 @ 0x1400D1EB8 (sub_1400D1EB8.c)
 *     sub_1400F8C38 @ 0x1400F8C38 (sub_1400F8C38.c)
 *     sub_1400F8C88 @ 0x1400F8C88 (sub_1400F8C88.c)
 *     sub_1400FC608 @ 0x1400FC608 (sub_1400FC608.c)
 *     sub_1400FDD94 @ 0x1400FDD94 (sub_1400FDD94.c)
 *     sub_1400FE140 @ 0x1400FE140 (sub_1400FE140.c)
 *     sub_1400FE4EC @ 0x1400FE4EC (sub_1400FE4EC.c)
 *     sub_140100D00 @ 0x140100D00 (sub_140100D00.c)
 *     sub_1401011F4 @ 0x1401011F4 (sub_1401011F4.c)
 *     sub_140101854 @ 0x140101854 (sub_140101854.c)
 *     sub_140101C60 @ 0x140101C60 (sub_140101C60.c)
 *     sub_140102828 @ 0x140102828 (sub_140102828.c)
 *     sub_140104E64 @ 0x140104E64 (sub_140104E64.c)
 *     sub_140107670 @ 0x140107670 (sub_140107670.c)
 *     sub_140108588 @ 0x140108588 (sub_140108588.c)
 *     sub_14010E334 @ 0x14010E334 (sub_14010E334.c)
 *     sub_140110708 @ 0x140110708 (sub_140110708.c)
 *     sub_14012BDE0 @ 0x14012BDE0 (sub_14012BDE0.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     sub_1401963B4 @ 0x1401963B4 (sub_1401963B4.c)
 *     sub_140196430 @ 0x140196430 (sub_140196430.c)
 *     sub_1401973B0 @ 0x1401973B0 (sub_1401973B0.c)
 *     sub_140197C28 @ 0x140197C28 (sub_140197C28.c)
 *     sub_140199F08 @ 0x140199F08 (sub_140199F08.c)
 *     sub_14019A2F8 @ 0x14019A2F8 (sub_14019A2F8.c)
 *     sub_14019A6A4 @ 0x14019A6A4 (sub_14019A6A4.c)
 *     sub_14019AA60 @ 0x14019AA60 (sub_14019AA60.c)
 *     sub_14019B054 @ 0x14019B054 (sub_14019B054.c)
 *     sub_14019BA40 @ 0x14019BA40 (sub_14019BA40.c)
 *     sub_14019E49C @ 0x14019E49C (sub_14019E49C.c)
 *     sub_14019E86C @ 0x14019E86C (sub_14019E86C.c)
 *     sub_14019F624 @ 0x14019F624 (sub_14019F624.c)
 *     sub_14019F9DC @ 0x14019F9DC (sub_14019F9DC.c)
 *     sub_14019FD80 @ 0x14019FD80 (sub_14019FD80.c)
 *     sub_1401A4D74 @ 0x1401A4D74 (sub_1401A4D74.c)
 *     sub_1401A6470 @ 0x1401A6470 (sub_1401A6470.c)
 */

__int64 __fastcall sub_140198640(_QWORD *Context, PIRP Irp)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  int v3; // ebx
  unsigned int LowPart; // esi
  __int64 v7; // rcx
  bool v9; // zf
  unsigned __int64 v10; // rcx
  struct _IO_STACK_LOCATION *v11; // rdx
  int *v12; // rax
  const GUID *v13; // r8
  const GUID *v14; // r8
  const EVENT_DESCRIPTOR *v15; // rdx
  unsigned __int64 ProviderId; // rdx
  char v17; // r12
  _BYTE *v18; // r9
  unsigned __int8 v19; // r10
  char v20; // si
  char v21; // r11
  char v22; // r13
  char *v23; // r11
  unsigned int v24; // r15d
  unsigned __int64 v25; // r14
  __int64 v26; // r8
  int v27; // ecx
  char v28; // cl
  char v29; // r8
  _BYTE *v30; // rax
  unsigned int v31; // eax
  char v32; // al
  const GUID *v33; // r8
  NTSTATUS v34; // eax
  int *Information; // rax
  char v36; // r12
  _BYTE *v37; // r9
  unsigned __int8 v38; // r10
  char v39; // si
  char v40; // r11
  char v41; // r13
  char *v42; // r11
  unsigned int v43; // r15d
  unsigned __int64 v44; // r14
  __int64 v45; // r8
  int v46; // ecx
  char v47; // cl
  char v48; // r8
  _BYTE *v49; // rax
  unsigned int v50; // eax
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // r8
  unsigned int v54; // esi
  unsigned int v55; // esi
  unsigned int v56; // esi
  unsigned int v57; // esi
  unsigned int v58; // esi
  unsigned int v59; // esi
  unsigned int v60; // esi
  unsigned int v61; // esi
  NTSTATUS v62; // eax
  __int64 v63; // rcx
  unsigned int v64; // eax
  unsigned int v65; // esi
  unsigned int v66; // esi
  unsigned int v67; // esi
  unsigned int v68; // esi
  unsigned int v69; // esi
  unsigned int v70; // esi
  unsigned int v71; // esi
  __int64 v72; // rcx
  struct _IO_STACK_LOCATION *v73; // rdx
  int v74; // eax
  unsigned int *v75; // rax
  __int64 v76; // rcx
  const EVENT_DESCRIPTOR *v77; // rdx
  unsigned __int64 v78; // rdx
  _BYTE *v79; // r9
  unsigned __int8 v80; // r10
  char v81; // r13
  char v82; // r12
  unsigned __int8 v83; // r11
  char *v84; // r11
  unsigned int v85; // r12d
  __int64 v86; // rcx
  unsigned __int64 v87; // r15
  __int64 v88; // r8
  int v89; // ecx
  int v90; // ecx
  char v91; // r15
  char v92; // cl
  char v93; // r8
  _BYTE *v94; // rcx
  _BYTE *v95; // rax
  unsigned int v96; // eax
  char v97; // al
  __int64 v98; // rcx
  unsigned int v99; // esi
  unsigned int v100; // esi
  unsigned int v101; // esi
  unsigned int v102; // esi
  unsigned int v103; // esi
  unsigned int v104; // esi
  unsigned int v105; // esi
  unsigned int v106; // esi
  unsigned int v107; // esi
  unsigned int v108; // esi
  unsigned int v109; // esi
  unsigned int v110; // esi
  unsigned int v111; // esi
  unsigned int v112; // esi
  unsigned __int8 v113; // r10
  int v114; // eax
  char *v115; // r11
  unsigned int v116; // r12d
  __int64 v117; // rcx
  unsigned __int64 v118; // r15
  __int64 v119; // r8
  int v120; // ecx
  int v121; // ecx
  char v122; // cl
  unsigned int v123; // eax
  __int64 v124; // rcx
  unsigned int v125; // r12d
  __int64 v126; // rcx
  unsigned __int64 v127; // r15
  __int64 v128; // r8
  int v129; // ecx
  int v130; // ecx
  __int64 v131; // [rsp+20h] [rbp-69h]
  __int64 v132; // [rsp+28h] [rbp-61h]
  __int64 v133; // [rsp+30h] [rbp-59h]
  char v134; // [rsp+38h] [rbp-51h]
  char v135; // [rsp+40h] [rbp-49h]
  char v136; // [rsp+48h] [rbp-41h]
  PIRP v137; // [rsp+50h] [rbp-39h]
  char v138; // [rsp+60h] [rbp-29h] BYREF
  char v139; // [rsp+61h] [rbp-28h]
  unsigned __int8 v140; // [rsp+62h] [rbp-27h]
  char v141; // [rsp+63h] [rbp-26h]
  unsigned int v142; // [rsp+64h] [rbp-25h]
  unsigned int v143; // [rsp+68h] [rbp-21h]
  GUID v144; // [rsp+70h] [rbp-19h] BYREF
  __int128 v145; // [rsp+80h] [rbp-9h] BYREF
  GUID v146; // [rsp+90h] [rbp+7h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  v138 = 1;
  v146 = 0LL;
  LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
  if ( byte_140168DAA )
  {
    IoGetActivityIdIrp(Irp, &v146);
    if ( (byte_1401694F2 & 2) != 0 )
      sub_140056988(
        v7,
        &stru_14014A0E8,
        &v146,
        Irp,
        Irp->Tail.Overlay.CurrentStackLocation->MajorFunction,
        Irp->Tail.Overlay.CurrentStackLocation->MinorFunction,
        LowPart);
  }
  if ( LowPart == 2955532 )
    return sub_140104E64((__int64)Context, (__int64)Irp);
  if ( (Context[14] & 2) != 0 )
  {
    v34 = sub_1400F8C38((__int64)Context, (__int64)Irp);
    v143 = v34;
    if ( v34 < 0 )
    {
      v9 = byte_140168DAA == 0;
      Irp->IoStatus.Information = 0LL;
      *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
      Irp->IoStatus.Status = v34;
      if ( v9 )
        goto LABEL_139;
      v144 = 0LL;
      IoGetActivityIdIrp(Irp, &v144);
      v11 = Irp->Tail.Overlay.CurrentStackLocation;
      if ( v11->MajorFunction != 14 )
      {
        if ( v11->MajorFunction == 15 )
        {
          if ( byte_1401694F1 >= 0 )
            goto LABEL_139;
          ProviderId = v11->Parameters.WMI.ProviderId;
          v36 = 0;
          v37 = 0LL;
          v138 = 0;
          v38 = 0;
          v39 = 0;
          v40 = 0;
          v41 = 0;
          if ( *(_BYTE *)(ProviderId + 2) != 40 )
          {
            v47 = *(_BYTE *)(ProviderId + 72);
            v37 = *(_BYTE **)(ProviderId + 32);
            v38 = *(_BYTE *)(ProviderId + 11);
            v36 = *(_BYTE *)(ProviderId + 4);
            if ( *(_BYTE *)(ProviderId + 2) )
              goto LABEL_139;
            goto LABEL_114;
          }
          v42 = 0LL;
          v139 = 0;
          if ( *(_DWORD *)(ProviderId + 20) )
            goto LABEL_139;
          v43 = 0;
          v142 = *(_DWORD *)(ProviderId + 56);
          if ( !v142 )
            goto LABEL_111;
          while ( 1 )
          {
            v10 = *(unsigned int *)(ProviderId + 4LL * v43 + 120);
            if ( (unsigned int)v10 >= 0x80 )
            {
              v44 = *(unsigned int *)(ProviderId + 16);
              if ( (unsigned int)v10 < (unsigned int)v44 )
              {
                v45 = (unsigned int)v10;
                v46 = *(_DWORD *)(v10 + ProviderId) - 64;
                if ( v46 )
                {
                  v10 = (unsigned int)(v46 - 1);
                  if ( (_DWORD)v10 )
                  {
                    if ( (_DWORD)v10 == 1 )
                    {
                      v10 = v45 + 40;
                      if ( v45 + 40 <= v44 )
                      {
                        if ( *(_DWORD *)(v45 + ProviderId + 12) )
                          v42 = (char *)(v45 + ProviderId + 32);
                        v37 = *(_BYTE **)(v45 + ProviderId + 24);
                        goto LABEL_110;
                      }
                    }
                  }
                  else
                  {
                    v10 = v45 + 56;
                    if ( v45 + 56 <= v44 )
                    {
                      v139 = 1;
                      if ( *(_BYTE *)(v45 + ProviderId + 10) )
                        v42 = (char *)(v45 + ProviderId + 24);
                      v36 = *(_BYTE *)(v45 + ProviderId + 8);
                      v37 = *(_BYTE **)(v45 + ProviderId + 16);
                      v38 = *(_BYTE *)(v45 + ProviderId + 9);
                    }
                  }
                }
                else
                {
                  v10 = v45 + 40;
                  if ( v45 + 40 <= v44 )
                  {
                    if ( *(_BYTE *)(v45 + ProviderId + 10) )
                      v42 = (char *)(v45 + ProviderId + 24);
                    v37 = *(_BYTE **)(v45 + ProviderId + 16);
LABEL_110:
                    v38 = *(_BYTE *)(v45 + ProviderId + 9);
                    v36 = *(_BYTE *)(v45 + ProviderId + 8);
LABEL_111:
                    if ( !v42 )
                      goto LABEL_139;
                    v47 = *v42;
                    v40 = 0;
LABEL_114:
                    LOBYTE(v10) = v47 - 8;
                    if ( (v10 & 0x5D) != 0 )
                      goto LABEL_139;
                    v48 = *(_BYTE *)(ProviderId + 3);
                    if ( v48 == 1 || !v37 || !v38 )
                      goto LABEL_133;
                    LOBYTE(ProviderId) = 0;
                    v10 = (unsigned __int64)&v37[v38];
                    v49 = v37 + 8;
                    if ( (unsigned __int8)((*v37 & 0x7F) - 114) <= 1u )
                    {
                      if ( (unsigned __int64)v49 <= v10 )
                      {
                        LOBYTE(ProviderId) = 1;
                        v40 = v37[2];
                        v39 = v37[1] & 0xF;
                        v41 = v37[3];
                      }
                    }
                    else
                    {
                      if ( (unsigned __int64)v49 <= v10 )
                      {
                        v39 = v37[2] & 0xF;
                        v50 = v38;
                        if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
                          v50 = (unsigned __int8)v37[7] + 8;
                        v10 = (unsigned __int64)(v37 + 13);
                        ProviderId = (unsigned __int64)&v37[v50];
                        if ( (unsigned __int64)(v37 + 13) > ProviderId )
                          v138 = 0;
                        else
                          v138 = v37[12];
                        if ( (unsigned __int64)(v37 + 14) <= ProviderId )
                          v41 = *(_BYTE *)v10;
                        LOBYTE(ProviderId) = 1;
                      }
                      v40 = v138;
                    }
                    if ( (_BYTE)ProviderId )
                    {
                      LOBYTE(v3) = v40;
                      v51 = v41;
                    }
                    else
                    {
LABEL_133:
                      v39 = 0;
                      v51 = 0;
                    }
                    v137 = Irp;
                    v136 = v51;
                    v135 = v3;
                    v134 = v39;
                    LOBYTE(v133) = v36;
                    LOBYTE(v132) = v48;
                    v33 = &v144;
LABEL_70:
                    LODWORD(v131) = Irp->IoStatus.Status;
                    sub_140052E64(v10, ProviderId, v33, Irp, v131, v132, v133, v134, v135, v136, v137);
                    goto LABEL_139;
                  }
                }
                if ( v139 )
                  goto LABEL_111;
              }
            }
            if ( ++v43 >= v142 )
              goto LABEL_111;
          }
        }
        if ( v11->MajorFunction != 27 )
          goto LABEL_139;
        if ( v11->MinorFunction == 7 && !v11->Parameters.Read.Length )
        {
          if ( (byte_1401694F2 & 0x40) == 0 )
            goto LABEL_139;
          Information = (int *)Irp->IoStatus.Information;
          if ( Information )
            v3 = *Information;
          v13 = &v144;
LABEL_17:
          LODWORD(v132) = Irp->IoStatus.Status;
          LODWORD(v131) = v3;
          sub_140056AB0(v10, (__int64)v11, v13, Irp, v131, v132);
          goto LABEL_139;
        }
        if ( (byte_1401694F2 & 0x20) == 0 )
          goto LABEL_139;
        v14 = &v144;
        goto LABEL_20;
      }
      if ( (byte_1401694F2 & 8) == 0 )
        goto LABEL_139;
      v14 = &v144;
LABEL_137:
      v15 = &stru_140148B18;
      goto LABEL_138;
    }
    if ( sub_140046AC0(Context[1]) && sub_14012BDE0((__int64)Context, (__int64)Irp, LowPart) )
    {
      v54 = 259;
LABEL_366:
      sub_140108588((__int64)Context);
LABEL_367:
      if ( byte_140168DAA && (byte_1401694F2 & 8) != 0 )
      {
        LODWORD(v131) = v54;
        sub_140052F3C(v63, &stru_140148B18, &v146, Irp, v131);
      }
      return v54;
    }
    if ( LowPart <= 0x2D4800 )
    {
      if ( LowPart == 2967552 )
        goto LABEL_252;
      if ( LowPart > 0x2D1400 )
      {
        v65 = LowPart - 2954827;
        if ( !v65 )
        {
          if ( (*(_DWORD *)(*(_QWORD *)(Context[2] + 1048LL) + 24LL) & 0x40000000) != 0 )
            v64 = sub_140196430((__int64)Context, (__int64)Irp);
          else
            v64 = sub_1401973B0((__int64)Context, (__int64)Irp);
          goto LABEL_157;
        }
        v66 = v65 - 1461;
        if ( v66 )
        {
          v67 = v66 - 128;
          if ( v67 )
          {
            v68 = v67 - 20;
            if ( v68 )
            {
              v69 = v68 - 48;
              if ( v69 )
              {
                v70 = v69 - 8;
                if ( v70 )
                {
                  v71 = v70 - 2880;
                  if ( v71 )
                  {
                    if ( v71 != 4 )
                      goto LABEL_281;
                    v64 = sub_140100D00((__int64)Context, (__int64)Irp);
                  }
                  else
                  {
                    v64 = sub_140110708((__int64)Context, (__int64)Irp);
                  }
                }
                else
                {
                  if ( (*(_BYTE *)(Context[2] + 136LL) & 2) != 0 )
                  {
                    v9 = byte_140168DAA == 0;
                    v54 = -1073741637;
                    Irp->IoStatus.Status = -1073741637;
                    Irp->IoStatus.Information = 0LL;
                    *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
                    if ( v9 )
                      goto LABEL_243;
                    v144 = 0LL;
                    IoGetActivityIdIrp(Irp, &v144);
                    v73 = Irp->Tail.Overlay.CurrentStackLocation;
                    if ( v73->MajorFunction != 14 )
                    {
                      v74 = v73->MajorFunction - 15;
                      if ( v73->MajorFunction == 15 )
                      {
                        if ( byte_1401694F1 >= 0 )
                          goto LABEL_243;
                        v78 = v73->Parameters.WMI.ProviderId;
                        v79 = 0LL;
                        v138 = 0;
                        v80 = 0;
                        v81 = 0;
                        v139 = 0;
                        v82 = 0;
                        v140 = 0;
                        v83 = 0;
                        if ( *(_BYTE *)(v78 + 2) != 40 )
                        {
                          v92 = *(_BYTE *)(v78 + 72);
                          v79 = *(_BYTE **)(v78 + 32);
                          v80 = *(_BYTE *)(v78 + 11);
                          v91 = *(_BYTE *)(v78 + 4);
                          if ( *(_BYTE *)(v78 + 2) )
                            goto LABEL_243;
                          goto LABEL_217;
                        }
                        v84 = 0LL;
                        v141 = 0;
                        if ( *(_DWORD *)(v78 + 20) )
                          goto LABEL_243;
                        v85 = 0;
                        v142 = *(_DWORD *)(v78 + 56);
                        if ( !v142 )
                        {
                          v91 = 0;
                          goto LABEL_210;
                        }
                        while ( 1 )
                        {
                          v86 = *(unsigned int *)(v78 + 4LL * v85 + 120);
                          if ( (unsigned int)v86 >= 0x80 )
                          {
                            v87 = *(unsigned int *)(v78 + 16);
                            if ( (unsigned int)v86 < (unsigned int)v87 )
                            {
                              v88 = (unsigned int)v86;
                              v89 = *(_DWORD *)(v78 + v86) - 64;
                              if ( v89 )
                              {
                                v90 = v89 - 1;
                                if ( v90 )
                                {
                                  if ( v90 == 1 && v88 + 40 <= v87 )
                                  {
                                    if ( *(_DWORD *)(v78 + v88 + 12) )
                                      v84 = (char *)(v88 + v78 + 32);
                                    v79 = *(_BYTE **)(v78 + v88 + 24);
                                    goto LABEL_201;
                                  }
                                }
                                else if ( v88 + 56 <= v87 )
                                {
                                  v141 = 1;
                                  if ( *(_BYTE *)(v78 + v88 + 10) )
                                    v84 = (char *)(v88 + v78 + 24);
                                  v79 = *(_BYTE **)(v78 + v88 + 16);
                                  v80 = *(_BYTE *)(v78 + v88 + 9);
                                  v138 = *(_BYTE *)(v78 + v88 + 8);
                                }
                              }
                              else if ( v88 + 40 <= v87 )
                              {
                                if ( *(_BYTE *)(v78 + v88 + 10) )
                                  v84 = (char *)(v88 + v78 + 24);
                                v79 = *(_BYTE **)(v78 + v88 + 16);
LABEL_201:
                                v91 = *(_BYTE *)(v78 + v88 + 8);
                                v80 = *(_BYTE *)(v78 + v88 + 9);
LABEL_210:
                                if ( !v84 )
                                  goto LABEL_243;
                                v92 = *v84;
                                v82 = 0;
                                v83 = 0;
LABEL_217:
                                if ( ((v92 - 8) & 0x5D) != 0 )
                                  goto LABEL_243;
                                v93 = *(_BYTE *)(v78 + 3);
                                if ( v93 == 1 || !v79 || !v80 )
                                  goto LABEL_238;
                                LOBYTE(v78) = 0;
                                v94 = &v79[v80];
                                v95 = v79 + 8;
                                if ( (unsigned __int8)((*v79 & 0x7F) - 114) > 1u )
                                {
                                  if ( v95 <= v94 )
                                  {
                                    v81 = v79[2] & 0xF;
                                    v96 = v80;
                                    if ( (unsigned int)(unsigned __int8)v79[7] + 8 <= v80 )
                                      v96 = (unsigned __int8)v79[7] + 8;
                                    v78 = (unsigned __int64)&v79[v96];
                                    if ( (unsigned __int64)(v79 + 13) > v78 )
                                      v139 = 0;
                                    else
                                      v139 = v79[12];
                                    if ( (unsigned __int64)(v79 + 14) > v78 )
                                      v140 = 0;
                                    else
                                      v140 = v79[13];
                                    LOBYTE(v78) = 1;
                                  }
                                  v82 = v139;
LABEL_233:
                                  v83 = v140;
LABEL_236:
                                  if ( (_BYTE)v78 )
                                  {
                                    v97 = v82;
                                    v98 = v83;
LABEL_239:
                                    LOBYTE(v133) = v91;
                                    LOBYTE(v132) = v93;
                                    LODWORD(v131) = Irp->IoStatus.Status;
                                    sub_140052E64(v98, v78, &v144, Irp, v131, v132, v133, v81, v97, v98, Irp);
                                    goto LABEL_243;
                                  }
LABEL_238:
                                  v81 = 0;
                                  v97 = 0;
                                  v98 = 0LL;
                                  goto LABEL_239;
                                }
LABEL_234:
                                if ( v95 <= v94 )
                                {
                                  LOBYTE(v78) = 1;
                                  v82 = v79[2];
                                  v81 = v79[1] & 0xF;
                                  v83 = v79[3];
                                }
                                goto LABEL_236;
                              }
                              if ( v141 )
                                goto LABEL_209;
                            }
                          }
                          if ( ++v85 >= v142 )
                          {
LABEL_209:
                            v91 = v138;
                            goto LABEL_210;
                          }
                        }
                      }
LABEL_178:
                      if ( v74 != 12 )
                        goto LABEL_243;
                      if ( v73->MinorFunction == 7 && !v73->Parameters.Read.Length )
                      {
                        if ( (byte_1401694F2 & 0x40) != 0 )
                        {
                          v75 = (unsigned int *)Irp->IoStatus.Information;
                          if ( v75 )
                            v76 = *v75;
                          else
                            v76 = 0LL;
                          LODWORD(v132) = Irp->IoStatus.Status;
                          LODWORD(v131) = v76;
                          sub_140056AB0(v76, (__int64)v73, &v144, Irp, v131, v132);
                        }
                        goto LABEL_243;
                      }
                      if ( (byte_1401694F2 & 0x20) == 0 )
                        goto LABEL_243;
                      v77 = &stru_140149FE8;
LABEL_242:
                      LODWORD(v131) = Irp->IoStatus.Status;
                      sub_140052F3C(v72, v77, &v144, Irp, v131);
                      goto LABEL_243;
                    }
LABEL_240:
                    if ( (byte_1401694F2 & 8) == 0 )
                      goto LABEL_243;
                    v77 = &stru_140148B18;
                    goto LABEL_242;
                  }
                  v64 = sub_14019E86C(Context, Irp);
                }
              }
              else
              {
                v64 = sub_14019B054(Context, Irp);
              }
            }
            else
            {
              v64 = sub_140102828((__int64)Context, (__int64)Irp);
            }
          }
          else
          {
            v64 = sub_1400FC608((__int64)Context, (__int64)Irp);
          }
          goto LABEL_157;
        }
        v62 = sub_1400FE4EC((__int64)Context, Irp, &v138);
      }
      else
      {
        if ( LowPart != 2954240 )
        {
          v55 = LowPart - 266264;
          if ( !v55 )
          {
            v64 = sub_14019E49C(Context, Irp);
            goto LABEL_157;
          }
          v56 = v55 - 192508;
          if ( !v56 )
          {
            v64 = sub_14019AA60(Context, Irp);
            goto LABEL_157;
          }
          v57 = v56 - 16;
          if ( !v57 )
          {
            v64 = sub_14019A2F8(Context, Irp);
            goto LABEL_157;
          }
          v58 = v57 - 16560;
          if ( !v58 )
          {
            v64 = sub_140199F08(Context, Irp);
            goto LABEL_157;
          }
          v59 = v58 - 32772;
          if ( !v59 )
          {
            v64 = sub_14019A6A4(Context, Irp);
            goto LABEL_157;
          }
          v60 = v59 - 2443048;
          if ( v60 )
          {
            v61 = v60 - 192;
            if ( v61 )
            {
              if ( v61 == 2872 )
              {
                v62 = sub_1401011F4((__int64)Context, (__int64)Irp, &v138);
                goto LABEL_365;
              }
LABEL_281:
              v9 = byte_140168DAA == 0;
              v54 = -1073741637;
              Irp->IoStatus.Status = -1073741637;
              *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
              if ( v9 )
                goto LABEL_243;
              v144 = 0LL;
              IoGetActivityIdIrp(Irp, &v144);
              v73 = Irp->Tail.Overlay.CurrentStackLocation;
              if ( v73->MajorFunction != 14 )
              {
                v74 = v73->MajorFunction - 15;
                if ( v73->MajorFunction == 15 )
                {
                  if ( byte_1401694F1 >= 0 )
                    goto LABEL_243;
                  v78 = v73->Parameters.WMI.ProviderId;
                  v79 = 0LL;
                  v139 = 0;
                  v113 = 0;
                  v81 = 0;
                  v138 = 0;
                  v82 = 0;
                  v140 = 0;
                  v114 = *(unsigned __int8 *)(v78 + 2);
                  v83 = 0;
                  if ( (_BYTE)v114 == 40 )
                  {
                    v115 = 0LL;
                    v141 = 0;
                    if ( *(_DWORD *)(v78 + 20) )
                      goto LABEL_243;
                    v116 = 0;
                    v142 = *(_DWORD *)(v78 + 56);
                    if ( v142 )
                    {
                      while ( 1 )
                      {
                        v117 = *(unsigned int *)(v78 + 4LL * v116 + 120);
                        if ( (unsigned int)v117 >= 0x80 )
                        {
                          v118 = *(unsigned int *)(v78 + 16);
                          if ( (unsigned int)v117 < (unsigned int)v118 )
                          {
                            v119 = (unsigned int)v117;
                            v120 = *(_DWORD *)(v78 + v117) - 64;
                            if ( v120 )
                            {
                              v121 = v120 - 1;
                              if ( v121 )
                              {
                                if ( v121 == 1 && v119 + 40 <= v118 )
                                {
                                  if ( *(_DWORD *)(v78 + v119 + 12) )
                                    v115 = (char *)(v119 + v78 + 32);
                                  v79 = *(_BYTE **)(v78 + v119 + 24);
                                  goto LABEL_297;
                                }
                              }
                              else if ( v119 + 56 <= v118 )
                              {
                                v141 = 1;
                                if ( *(_BYTE *)(v78 + v119 + 10) )
                                  v115 = (char *)(v119 + v78 + 24);
                                v79 = *(_BYTE **)(v78 + v119 + 16);
                                v113 = *(_BYTE *)(v78 + v119 + 9);
                                v139 = *(_BYTE *)(v78 + v119 + 8);
                              }
                            }
                            else if ( v119 + 40 <= v118 )
                            {
                              if ( *(_BYTE *)(v78 + v119 + 10) )
                                v115 = (char *)(v119 + v78 + 24);
                              v79 = *(_BYTE **)(v78 + v119 + 16);
LABEL_297:
                              v91 = *(_BYTE *)(v78 + v119 + 8);
                              v113 = *(_BYTE *)(v78 + v119 + 9);
LABEL_306:
                              if ( v115 )
                              {
                                v122 = *v115;
                                v82 = 0;
                                v83 = 0;
                                goto LABEL_313;
                              }
                              goto LABEL_243;
                            }
                            if ( v141 )
                              goto LABEL_305;
                          }
                        }
                        if ( ++v116 >= v142 )
                          goto LABEL_305;
                      }
                    }
                    goto LABEL_311;
                  }
                  goto LABEL_312;
                }
                goto LABEL_178;
              }
              goto LABEL_240;
            }
            v64 = sub_14019BA40(Context, Irp);
LABEL_157:
            v54 = v64;
            goto LABEL_366;
          }
LABEL_252:
          v64 = sub_14019F624(v52, Irp);
          goto LABEL_157;
        }
        v62 = sub_1401A4D74(Context, Irp, &v138);
      }
LABEL_365:
      v54 = v62;
      if ( !v138 )
        goto LABEL_367;
      goto LABEL_366;
    }
    if ( LowPart > 0x2DD03C )
    {
      v106 = LowPart - 3002436;
      if ( !v106 )
      {
        v62 = sub_14019F9DC(Context, Irp);
        goto LABEL_365;
      }
      v107 = v106 - 12;
      if ( !v107 )
      {
        v64 = sub_1400D1EB8(*(_QWORD *)(Context[2] + 128LL), (__int64)Context, (__int64)Irp);
        goto LABEL_157;
      }
      v108 = v107 - 432;
      if ( v108 )
      {
        v109 = v108 - 448;
        if ( v109 )
        {
          v110 = v109 - 2116;
          if ( v110 )
          {
            v111 = v110 - 4;
            if ( v111 )
            {
              v112 = v111 - 148;
              if ( v112 )
              {
                if ( v112 != 2936 )
                  goto LABEL_281;
                v64 = sub_14010E334((__int64)Context, (__int64)Irp);
              }
              else
              {
                v64 = sub_1400F8C88((__int64)Context, (__int64)Irp);
              }
              goto LABEL_157;
            }
            v62 = sub_1400FDD94((__int64)Context, (__int64)Irp, v53, &v138);
          }
          else
          {
            v62 = sub_1400FE140((__int64)Context, (__int64)Irp, &v138);
          }
        }
        else
        {
          v62 = sub_14019FD80(Context, Irp, &v138);
        }
        goto LABEL_365;
      }
      v124 = *(_QWORD *)(Context[2] + 136LL);
      Irp->IoStatus.Information = 0LL;
      if ( (v124 & 2) != 0 )
      {
        v9 = byte_140168DAA == 0;
        v54 = -1073741637;
        Irp->IoStatus.Status = -1073741637;
        *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
        if ( v9 )
          goto LABEL_243;
        v144 = 0LL;
        IoGetActivityIdIrp(Irp, &v144);
        v73 = Irp->Tail.Overlay.CurrentStackLocation;
        if ( v73->MajorFunction != 14 )
        {
          v74 = v73->MajorFunction - 15;
          if ( v73->MajorFunction == 15 )
          {
            if ( byte_1401694F1 >= 0 )
              goto LABEL_243;
            v78 = v73->Parameters.WMI.ProviderId;
            v79 = 0LL;
            v139 = 0;
            v113 = 0;
            v81 = 0;
            v138 = 0;
            v82 = 0;
            v140 = 0;
            v114 = *(unsigned __int8 *)(v78 + 2);
            v83 = 0;
            if ( (_BYTE)v114 == 40 )
            {
              v115 = 0LL;
              v141 = 0;
              if ( *(_DWORD *)(v78 + 20) )
                goto LABEL_243;
              v125 = 0;
              v142 = *(_DWORD *)(v78 + 56);
              if ( v142 )
              {
                while ( 1 )
                {
                  v126 = *(unsigned int *)(v78 + 4LL * v125 + 120);
                  if ( (unsigned int)v126 >= 0x80 )
                  {
                    v127 = *(unsigned int *)(v78 + 16);
                    if ( (unsigned int)v126 < (unsigned int)v127 )
                    {
                      v128 = (unsigned int)v126;
                      v129 = *(_DWORD *)(v126 + v78) - 64;
                      if ( v129 )
                      {
                        v130 = v129 - 1;
                        if ( v130 )
                        {
                          if ( v130 == 1 && v128 + 40 <= v127 )
                          {
                            if ( *(_DWORD *)(v128 + v78 + 12) )
                              v115 = (char *)(v128 + v78 + 32);
                            v79 = *(_BYTE **)(v128 + v78 + 24);
LABEL_351:
                            v91 = *(_BYTE *)(v128 + v78 + 8);
                            v113 = *(_BYTE *)(v128 + v78 + 9);
                            goto LABEL_306;
                          }
                        }
                        else if ( v128 + 56 <= v127 )
                        {
                          v141 = 1;
                          if ( *(_BYTE *)(v128 + v78 + 10) )
                            v115 = (char *)(v128 + v78 + 24);
                          v79 = *(_BYTE **)(v128 + v78 + 16);
                          v113 = *(_BYTE *)(v128 + v78 + 9);
                          v139 = *(_BYTE *)(v128 + v78 + 8);
                        }
                      }
                      else if ( v128 + 40 <= v127 )
                      {
                        if ( *(_BYTE *)(v128 + v78 + 10) )
                          v115 = (char *)(v128 + v78 + 24);
                        v79 = *(_BYTE **)(v128 + v78 + 16);
                        goto LABEL_351;
                      }
                      if ( v141 )
                        goto LABEL_305;
                    }
                  }
                  if ( ++v125 >= v142 )
                  {
LABEL_305:
                    v91 = v139;
                    goto LABEL_306;
                  }
                }
              }
LABEL_311:
              v91 = 0;
              goto LABEL_306;
            }
LABEL_312:
            v122 = *(_BYTE *)(v78 + 72);
            v79 = *(_BYTE **)(v78 + 32);
            v113 = *(_BYTE *)(v78 + 11);
            v91 = *(_BYTE *)(v78 + 4);
            if ( v114 )
              goto LABEL_243;
LABEL_313:
            if ( ((v122 - 8) & 0x5D) == 0 )
            {
              v93 = *(_BYTE *)(v78 + 3);
              if ( v93 == 1 || !v79 || !v113 )
                goto LABEL_238;
              LOBYTE(v78) = 0;
              v94 = &v79[v113];
              v95 = v79 + 8;
              if ( (unsigned __int8)((*v79 & 0x7F) - 114) > 1u )
              {
                if ( v95 <= v94 )
                {
                  v81 = v79[2] & 0xF;
                  v123 = v113;
                  if ( (unsigned int)(unsigned __int8)v79[7] + 8 <= v113 )
                    v123 = (unsigned __int8)v79[7] + 8;
                  v78 = (unsigned __int64)&v79[v123];
                  if ( (unsigned __int64)(v79 + 13) > v78 )
                    v138 = 0;
                  else
                    v138 = v79[12];
                  if ( (unsigned __int64)(v79 + 14) > v78 )
                    v140 = 0;
                  else
                    v140 = v79[13];
                  LOBYTE(v78) = 1;
                }
                v82 = v138;
                goto LABEL_233;
              }
              goto LABEL_234;
            }
LABEL_243:
            IofCompleteRequest(Irp, 0);
            goto LABEL_366;
          }
          goto LABEL_178;
        }
        goto LABEL_240;
      }
    }
    else
    {
      if ( LowPart != 3002428 )
      {
        v99 = LowPart - 2968604;
        if ( !v99 )
        {
          v64 = sub_14008FCE8(Irp);
          goto LABEL_157;
        }
        v100 = v99 - 1020;
        if ( !v100 )
        {
          v64 = sub_140101854((__int64)Context, (__int64)Irp);
          goto LABEL_157;
        }
        v101 = v100 - 48;
        if ( !v101 )
        {
          v64 = sub_14019F9DC(Context, Irp);
          goto LABEL_157;
        }
        v102 = v101 - 1532;
        if ( !v102 )
        {
          v64 = sub_1401963B4((__int64)Context, Irp);
          goto LABEL_157;
        }
        v103 = v102 - 15800;
        if ( v103 )
        {
          v104 = v103 - 8;
          if ( v104 )
          {
            v105 = v104 - 572;
            if ( v105 )
            {
              if ( v105 != 14812 )
                goto LABEL_281;
              v64 = sub_140101C60((__int64)Context, (__int64)Irp);
            }
            else
            {
              v64 = sub_140107670((__int64)Context, Irp);
            }
          }
          else
          {
            v64 = sub_140197C28((__int64)Context, (__int64)Irp);
          }
          goto LABEL_157;
        }
        v62 = sub_1401A6470(Context, Irp, &v138);
        goto LABEL_365;
      }
      Irp->IoStatus.Information = 0LL;
    }
    ++Irp->CurrentLocation;
    ++Irp->Tail.Overlay.CurrentStackLocation;
    v64 = IofCallDriver(*(PDEVICE_OBJECT *)(*(_QWORD *)(Context[2] + 128LL) + 8LL), Irp);
    goto LABEL_157;
  }
  v9 = byte_140168DAA == 0;
  v143 = -1073741808;
  Irp->IoStatus.Status = -1073741808;
  Irp->IoStatus.Information = 0LL;
  *((_BYTE *)&Irp->Tail.CompletionKey + 21) = -84;
  if ( v9 )
    goto LABEL_139;
  v145 = 0LL;
  IoGetActivityIdIrp(Irp, &v145);
  v11 = Irp->Tail.Overlay.CurrentStackLocation;
  if ( v11->MajorFunction == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_139;
    v14 = (const GUID *)&v145;
    goto LABEL_137;
  }
  if ( v11->MajorFunction != 15 )
  {
    if ( v11->MajorFunction != 27 )
      goto LABEL_139;
    if ( v11->MinorFunction == 7 && !v11->Parameters.Read.Length )
    {
      if ( (byte_1401694F2 & 0x40) == 0 )
        goto LABEL_139;
      v12 = (int *)Irp->IoStatus.Information;
      if ( v12 )
        v3 = *v12;
      v13 = (const GUID *)&v145;
      goto LABEL_17;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_139;
    v14 = (const GUID *)&v145;
LABEL_20:
    v15 = &stru_140149FE8;
LABEL_138:
    LODWORD(v131) = Irp->IoStatus.Status;
    sub_140052F3C(v10, v15, v14, Irp, v131);
    goto LABEL_139;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_139;
  ProviderId = v11->Parameters.WMI.ProviderId;
  v17 = 0;
  v18 = 0LL;
  v138 = 0;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  if ( *(_BYTE *)(ProviderId + 2) == 40 )
  {
    v23 = 0LL;
    v139 = 0;
    if ( *(_DWORD *)(ProviderId + 20) )
      goto LABEL_139;
    v24 = 0;
    v142 = *(_DWORD *)(ProviderId + 56);
    if ( !v142 )
      goto LABEL_46;
    while ( 1 )
    {
      v10 = *(unsigned int *)(ProviderId + 4LL * v24 + 120);
      if ( (unsigned int)v10 >= 0x80 )
      {
        v25 = *(unsigned int *)(ProviderId + 16);
        if ( (unsigned int)v10 < (unsigned int)v25 )
        {
          v26 = (unsigned int)v10;
          v27 = *(_DWORD *)(v10 + ProviderId) - 64;
          if ( v27 )
          {
            v10 = (unsigned int)(v27 - 1);
            if ( (_DWORD)v10 )
            {
              if ( (_DWORD)v10 == 1 )
              {
                v10 = v26 + 40;
                if ( v26 + 40 <= v25 )
                {
                  if ( *(_DWORD *)(v26 + ProviderId + 12) )
                    v23 = (char *)(v26 + ProviderId + 32);
                  v18 = *(_BYTE **)(v26 + ProviderId + 24);
                  goto LABEL_45;
                }
              }
            }
            else
            {
              v10 = v26 + 56;
              if ( v26 + 56 <= v25 )
              {
                v139 = 1;
                if ( *(_BYTE *)(v26 + ProviderId + 10) )
                  v23 = (char *)(v26 + ProviderId + 24);
                v17 = *(_BYTE *)(v26 + ProviderId + 8);
                v18 = *(_BYTE **)(v26 + ProviderId + 16);
                v19 = *(_BYTE *)(v26 + ProviderId + 9);
              }
            }
          }
          else
          {
            v10 = v26 + 40;
            if ( v26 + 40 <= v25 )
            {
              if ( *(_BYTE *)(v26 + ProviderId + 10) )
                v23 = (char *)(v26 + ProviderId + 24);
              v18 = *(_BYTE **)(v26 + ProviderId + 16);
LABEL_45:
              v19 = *(_BYTE *)(v26 + ProviderId + 9);
              v17 = *(_BYTE *)(v26 + ProviderId + 8);
LABEL_46:
              if ( v23 )
              {
                v28 = *v23;
                v21 = 0;
                goto LABEL_49;
              }
              goto LABEL_139;
            }
          }
          if ( v139 )
            goto LABEL_46;
        }
      }
      if ( ++v24 >= v142 )
        goto LABEL_46;
    }
  }
  v28 = *(_BYTE *)(ProviderId + 72);
  v18 = *(_BYTE **)(ProviderId + 32);
  v19 = *(_BYTE *)(ProviderId + 11);
  v17 = *(_BYTE *)(ProviderId + 4);
  if ( *(_BYTE *)(ProviderId + 2) )
    goto LABEL_139;
LABEL_49:
  LOBYTE(v10) = v28 - 8;
  if ( (v10 & 0x5D) == 0 )
  {
    v29 = *(_BYTE *)(ProviderId + 3);
    if ( v29 == 1 || !v18 || !v19 )
      goto LABEL_68;
    LOBYTE(ProviderId) = 0;
    v10 = (unsigned __int64)&v18[v19];
    v30 = v18 + 8;
    if ( (unsigned __int8)((*v18 & 0x7F) - 114) <= 1u )
    {
      if ( (unsigned __int64)v30 <= v10 )
      {
        LOBYTE(ProviderId) = 1;
        v21 = v18[2];
        v20 = v18[1] & 0xF;
        v22 = v18[3];
      }
    }
    else
    {
      if ( (unsigned __int64)v30 <= v10 )
      {
        v20 = v18[2] & 0xF;
        v31 = v19;
        if ( (unsigned int)(unsigned __int8)v18[7] + 8 <= v19 )
          v31 = (unsigned __int8)v18[7] + 8;
        v10 = (unsigned __int64)(v18 + 13);
        ProviderId = (unsigned __int64)&v18[v31];
        if ( (unsigned __int64)(v18 + 13) > ProviderId )
          v138 = 0;
        else
          v138 = v18[12];
        if ( (unsigned __int64)(v18 + 14) <= ProviderId )
          v22 = *(_BYTE *)v10;
        LOBYTE(ProviderId) = 1;
      }
      v21 = v138;
    }
    if ( (_BYTE)ProviderId )
    {
      LOBYTE(v3) = v21;
      v32 = v22;
    }
    else
    {
LABEL_68:
      v20 = 0;
      v32 = 0;
    }
    v137 = Irp;
    v136 = v32;
    v135 = v3;
    v134 = v20;
    LOBYTE(v133) = v17;
    LOBYTE(v132) = v29;
    v33 = (const GUID *)&v145;
    goto LABEL_70;
  }
LABEL_139:
  IofCompleteRequest(Irp, 0);
  return v143;
}
