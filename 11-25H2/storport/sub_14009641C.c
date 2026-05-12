/*
 * XREFs of sub_14009641C @ 0x14009641C
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_1400143E0 @ 0x1400143E0 (sub_1400143E0.c)
 *     sub_140015A14 @ 0x140015A14 (sub_140015A14.c)
 *     sub_1400161E0 @ 0x1400161E0 (sub_1400161E0.c)
 *     sub_140016754 @ 0x140016754 (sub_140016754.c)
 *     sub_140017A20 @ 0x140017A20 (sub_140017A20.c)
 *     sub_140017C40 @ 0x140017C40 (sub_140017C40.c)
 *     sub_140017D90 @ 0x140017D90 (sub_140017D90.c)
 *     sub_1400184D0 @ 0x1400184D0 (sub_1400184D0.c)
 *     sub_140021280 @ 0x140021280 (sub_140021280.c)
 *     sub_14002285C @ 0x14002285C (sub_14002285C.c)
 *     sub_1400229C8 @ 0x1400229C8 (sub_1400229C8.c)
 *     sub_140039B40 @ 0x140039B40 (sub_140039B40.c)
 *     sub_14003CC48 @ 0x14003CC48 (sub_14003CC48.c)
 *     sub_1400403EC @ 0x1400403EC (sub_1400403EC.c)
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140055BD4 @ 0x140055BD4 (sub_140055BD4.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_140067F28 @ 0x140067F28 (sub_140067F28.c)
 *     sub_140067FD4 @ 0x140067FD4 (sub_140067FD4.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_1400781F4 @ 0x1400781F4 (sub_1400781F4.c)
 *     sub_1400A1F34 @ 0x1400A1F34 (sub_1400A1F34.c)
 *     sub_1400A3C18 @ 0x1400A3C18 (sub_1400A3C18.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14009641C(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  int v3; // ebx
  unsigned int *v6; // r14
  int v7; // edi
  _DWORD *v8; // r15
  _DWORD *v9; // rax
  _DWORD *v10; // rdi
  __int64 v11; // rcx
  _QWORD *v12; // rcx
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // r15
  __int64 v16; // rdi
  PVOID v17; // rax
  PVOID v18; // rcx
  PVOID v19; // rdi
  __int64 v20; // rdx
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rdx
  _QWORD *v24; // r11
  __int64 v25; // rcx
  __int64 v26; // r11
  _QWORD *v27; // r8
  int v28; // eax
  PVOID v29; // rcx
  char *v30; // rdx
  int v31; // eax
  int v32; // eax
  _DWORD *v33; // rax
  __int64 v34; // rax
  unsigned int v35; // ecx
  int v36; // eax
  char *v37; // rcx
  USHORT *v38; // rdi
  int FullDriverPath; // eax
  __int64 v40; // rdx
  __int64 v41; // r8
  void *v42; // rcx
  size_t v43; // rdi
  WCHAR *v44; // rax
  const WCHAR *v45; // rsi
  void *v46; // rcx
  void *v47; // rcx
  __int64 v48; // rsi
  unsigned int *v49; // rax
  bool v50; // zf
  unsigned __int64 v51; // rcx
  __int64 v52; // rdx
  int *v53; // rax
  const EVENT_DESCRIPTOR *v54; // rdx
  __int64 v55; // rdx
  char v56; // r14
  _BYTE *v57; // r9
  unsigned __int8 v58; // r10
  char v59; // r11
  char v60; // si
  char v61; // r12
  char *v62; // rsi
  unsigned int v63; // eax
  unsigned int v64; // r8d
  unsigned int *v65; // rax
  __int64 v66; // rax
  unsigned __int64 v67; // r15
  char v68; // cl
  char v69; // r8
  _BYTE *v70; // rax
  char *v71; // r12
  unsigned int v72; // eax
  char v73; // al
  PLARGE_INTEGER Timeout; // [rsp+20h] [rbp-A9h]
  char v76; // [rsp+60h] [rbp-69h]
  char v77; // [rsp+60h] [rbp-69h]
  char v78; // [rsp+61h] [rbp-68h]
  int v79; // [rsp+64h] [rbp-65h]
  unsigned int v80; // [rsp+64h] [rbp-65h]
  UNICODE_STRING String2; // [rsp+68h] [rbp-61h] BYREF
  PVOID P; // [rsp+78h] [rbp-51h]
  __int64 v83; // [rsp+80h] [rbp-49h]
  PVOID v84; // [rsp+88h] [rbp-41h]
  unsigned int *v85; // [rsp+90h] [rbp-39h]
  PVOID v86; // [rsp+98h] [rbp-31h]
  __int64 v87; // [rsp+A0h] [rbp-29h]
  __int128 v88; // [rsp+A8h] [rbp-21h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-11h] BYREF
  WCHAR SourceString[8]; // [rsp+C8h] [rbp-1h] BYREF
  __int64 v91; // [rsp+D8h] [rbp+Fh]
  int v92; // [rsp+E0h] [rbp+17h]
  __int16 v93; // [rsp+E4h] [rbp+1Bh]

  v2 = *(_QWORD *)(a1 + 24);
  v3 = 0;
  v86 = 0LL;
  v6 = 0LL;
  v87 = 0LL;
  v83 = 0LL;
  v88 = 0LL;
  v85 = 0LL;
  v76 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  if ( !*(_BYTE *)(a2 + 64) )
  {
    if ( *(_DWORD *)(*(_QWORD *)(a2 + 184) + 8LL) < 0x68u )
    {
      v7 = -1073741789;
      goto LABEL_139;
    }
    v8 = *(_DWORD **)(a2 + 24);
    memset_0(v8, 0, 0x68uLL);
    v9 = (_DWORD *)sub_1400143E0(64LL, 352LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    P = v9;
    if ( !v9 )
    {
      v7 = -1073741670;
      goto LABEL_139;
    }
    *v9 = 1;
    v9[1] = 280;
    v10 = v9 + 70;
    v9[2] = 1145917508;
    *((_OWORD *)v9 + 1) = *(_OWORD *)(v2 + 384);
    *((_OWORD *)v9 + 2) = *(_OWORD *)(v2 + 400);
    *((_OWORD *)v9 + 3) = *(_OWORD *)(v2 + 416);
    *((_OWORD *)v9 + 4) = *(_OWORD *)(v2 + 432);
    *((_OWORD *)v9 + 5) = *(_OWORD *)(v2 + 448);
    *((_OWORD *)v9 + 6) = *(_OWORD *)(v2 + 464);
    *((_OWORD *)v9 + 7) = *(_OWORD *)(v2 + 480);
    *((_OWORD *)v9 + 8) = *(_OWORD *)(v2 + 496);
    *((_OWORD *)v9 + 9) = *(_OWORD *)(v2 + 512);
    *((_OWORD *)v9 + 10) = *(_OWORD *)(v2 + 528);
    *((_OWORD *)v9 + 11) = *(_OWORD *)(v2 + 544);
    *((_OWORD *)v9 + 12) = *(_OWORD *)(v2 + 560);
    *((_OWORD *)v9 + 13) = *(_OWORD *)(v2 + 576);
    *((_OWORD *)v9 + 14) = *(_OWORD *)(v2 + 592);
    sub_14003CC48(*(_DWORD *)(a1 + 3432), (__int64)(v9 + 60), (_WORD *)v9 + 136);
    v11 = *(_QWORD *)(v2 + 608);
    if ( (*(_DWORD *)(v11 + 184) & 0x80u) != 0 && (*(_DWORD *)(v11 + 188) & 2) != 0 )
      *((_WORD *)P + 137) = word_140168464;
    else
      *((_WORD *)P + 137) = -1;
    if ( sub_140021280(a1) )
    {
      if ( (int)PoFxRegisterCrashdumpDevice(**(_QWORD **)(a1 + 1872)) >= 0 )
      {
        *(_BYTE *)v10 = 1;
        v76 = 1;
        *((_QWORD *)v10 + 1) = **(_QWORD **)(a1 + 1872);
      }
      ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(a1 + 1864));
    }
    v12 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 4960LL);
    if ( v12 && (int)PoFxRegisterCrashdumpDevice(*v12) >= 0 )
    {
      *((_BYTE *)v10 + 32) = 1;
      v76 = 1;
      *((_QWORD *)v10 + 5) = **(_QWORD **)(*(_QWORD *)(a1 + 24) + 4960LL);
    }
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5026LL) = 1;
    *(_WORD *)(*(_QWORD *)(a1 + 24) + 5024LL) = 40;
    if ( sub_1400781F4(*(PDEVICE_OBJECT *)(*(_QWORD *)(a1 + 24) + 24LL), (LARGE_INTEGER)(*(_QWORD *)(a1 + 24) + 5024LL)) >= 0
      && (v13 = *(_QWORD *)(a1 + 24), (v14 = *(_QWORD *)(v13 + 5056)) != 0)
      && *(_QWORD *)(v13 + 5048) )
    {
      *((_QWORD *)v10 + 7) = v14;
      *((_QWORD *)v10 + 8) = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 5032LL);
    }
    else
    {
      *(_WORD *)(*(_QWORD *)(a1 + 24) + 5026LL) = 0;
      if ( !v76 )
        goto LABEL_24;
    }
    *((_QWORD *)v8 + 12) = v10;
    *((_QWORD *)v8 + 11) = sub_1400799A0;
LABEL_24:
    *((_QWORD *)v10 + 2) = a1 + 1862;
    *((_QWORD *)v10 + 6) = *(_QWORD *)(a1 + 24) + 4893LL;
    *((_QWORD *)v10 + 3) = a1 + 1863;
    v84 = (PVOID)sub_1400143E0(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    if ( !v84 )
    {
      v7 = -1073741670;
      v15 = 0LL;
      goto LABEL_122;
    }
    *(_QWORD *)&String2.Length = sub_1400143E0(64LL, 88LL, 1145266514LL, *(_QWORD *)(a1 + 8));
    v16 = *(_QWORD *)&String2.Length;
    if ( !*(_QWORD *)&String2.Length )
    {
      v7 = -1073741670;
      v15 = 0LL;
      goto LABEL_122;
    }
    sub_140039B40((wchar_t *)v84 + 4, 0x1EuLL, L"diskdump.sys");
    sub_140039B40((wchar_t *)v84 + 19, 0x1EuLL, L"storport.sys");
    v17 = v84;
    v18 = P;
    *(_QWORD *)v84 = *(_QWORD *)&String2.Length;
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v8 + 5) = v17;
    *((_QWORD *)v8 + 10) = a1 + 1863;
    *v8 = 4;
    v8[1] = 104;
    *((_QWORD *)v8 + 1) = v18;
    *((_QWORD *)v8 + 2) = 0LL;
    *((_BYTE *)v8 + 28) = 1;
    *((_QWORD *)v8 + 4) = 0LL;
    if ( (unsigned __int8)(*(_BYTE *)(v2 + 528) - 2) <= 2u )
      v8[12] |= 1u;
    if ( (*(_DWORD *)(*(_QWORD *)(v2 + 608) + 184LL) & 0x20) != 0 )
      v8[12] |= 4u;
    if ( !*(_BYTE *)(v2 + 4370) || (*(_DWORD *)(*(_QWORD *)(v2 + 608) + 184LL) & 8) != 0 )
    {
      v86 = (PVOID)sub_1400143E0(64LL, 112LL, 1145266514LL, *(_QWORD *)(a1 + 8));
      v19 = v86;
      if ( !v86 )
        goto LABEL_35;
      v6 = (unsigned int *)sub_140015A14(*(_QWORD *)(a1 + 8), 0x26u, *(_BYTE *)(v2 + 482), 0);
      if ( !v6 )
        goto LABEL_35;
      v21 = 316LL;
      if ( *(_DWORD *)v2 != 1314275652 )
        v21 = 524LL;
      v22 = sub_14002285C(((*(_DWORD *)(v21 + v2) + 7) & 0xFFFFFFF8) + 1184, v20, (_QWORD *)v2);
      v87 = v22;
      if ( !v22 )
      {
LABEL_35:
        v7 = -1073741670;
LABEL_121:
        v15 = *(_QWORD *)&String2.Length;
        goto LABEL_122;
      }
      v83 = v22 + 48;
      sub_140017C40(v22 + 48, v23, 0, 0LL);
      v24 = (_QWORD *)v83;
      *(_BYTE *)(v83 + 17) |= 8u;
      v24[22] = a2;
      v24[23] = v19;
      v24[21] = v6;
      if ( *(_BYTE *)(v2 + 482) == 1 )
      {
        *((_QWORD *)v6 + 12) = v24;
        *((_QWORD *)v6 + 10) = a2;
        v6[5] = 38;
        *((_QWORD *)v6 + 8) = v19;
        v6[15] = 112;
        v6[6] = 256;
        v85 = v6;
        if ( !*(_BYTE *)(v2 + 4370) )
          v6[6] = 64;
        v25 = v6[13];
        v6[10] = 10;
        *((_BYTE *)v6 + v25 + 8) = *(_BYTE *)(a1 + 104);
        *((_BYTE *)v6 + v25 + 9) = *(_BYTE *)(a1 + 105);
        *((_BYTE *)v6 + v25 + 10) = *(_BYTE *)(a1 + 106);
      }
      else
      {
        *((_QWORD *)v6 + 6) = v24;
        *((_BYTE *)v6 + 2) = 38;
        *((_QWORD *)v6 + 3) = v19;
        v6[4] = 112;
        *(_WORD *)v6 = 88;
        v6[3] = 256;
        if ( !*(_BYTE *)(v2 + 4370) )
          v6[3] = 64;
        v6[5] = 10;
        *((_BYTE *)v6 + 5) = *(_BYTE *)(a1 + 104);
        *((_BYTE *)v6 + 6) = *(_BYTE *)(a1 + 105);
        *((_BYTE *)v6 + 7) = *(_BYTE *)(a1 + 106);
      }
      sub_1400161E0((int *)v2, (__int64)v6, v87 + 1184);
      KeInitializeEvent((PRKEVENT)(v26 + 664), NotificationEvent, 0);
      v27 = (_QWORD *)v83;
      *(_QWORD *)(v83 + 656) = sub_140038660;
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x100) != 0
        && BYTE1(off_140168120->Timer) )
      {
        sub_1400680F0((__int64)off_140168120->AttachedDevice, 0x1Du, (__int64)&unk_14014D880, v27, v6);
        v27 = (_QWORD *)v83;
      }
      if ( *(_BYTE *)(v2 + 4370) )
        v28 = sub_140017D90(v2, v27);
      else
        v28 = sub_1400184D0(v2, (__int64)v27);
      v7 = v28;
      if ( v28 >= 0 )
      {
        KeWaitForSingleObject((PVOID)(v83 + 664), Executive, 0, 0, 0LL);
        v7 = sub_1400229C8(*((_BYTE *)v6 + 3));
      }
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x100) != 0
        && BYTE1(off_140168120->Timer) )
      {
        LODWORD(Timeout) = *((unsigned __int8 *)v6 + 3);
        sub_140067F28((__int64)off_140168120->AttachedDevice, 0x1Eu, (__int64)&unk_14014D880, v7, Timeout);
      }
      if ( v7 < 0 )
      {
        if ( !*(_BYTE *)(v2 + 4370) || (*(_DWORD *)(*(_QWORD *)(v2 + 608) + 184LL) & 0x1000) != 0 )
        {
          if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
            && (HIDWORD(off_140168120->Timer) & 0x100) != 0
            && BYTE1(off_140168120->Timer) )
          {
            LODWORD(Timeout) = v7;
            sub_140067FD4((__int64)off_140168120->AttachedDevice, 0x1Fu, (__int64)&unk_14014D880, v83, Timeout);
          }
          goto LABEL_121;
        }
      }
      else
      {
        v29 = v86;
        v30 = (char *)P + 16;
        v31 = *((_DWORD *)v86 + 20);
        if ( v31 )
        {
          *((_DWORD *)P + 10) = v31;
          v32 = *((_DWORD *)v29 + 20);
        }
        else
        {
          v32 = *((_DWORD *)P + 10);
        }
        v8[15] = v32;
        *((_QWORD *)v30 + 8) = *((_QWORD *)v29 + 8);
        if ( !*(_BYTE *)(v2 + 4370) )
        {
          *((_DWORD *)v30 + 1) = *((_DWORD *)v29 + 18);
          *((_DWORD *)v30 + 2) = *((_DWORD *)v29 + 19);
          *((_DWORD *)v30 + 7) = *((_DWORD *)v29 + 21);
          *((_DWORD *)v30 + 12) = *((_DWORD *)v29 + 22);
          *((_DWORD *)v30 + 13) = *((_DWORD *)v29 + 23);
          *((_QWORD *)v30 + 7) = *((_QWORD *)v29 + 12);
          v30[72] = *((_BYTE *)v29 + 104);
          v30[82] = *((_BYTE *)v29 + 105);
          v30[89] = *((_BYTE *)v29 + 106);
          v30[97] = *((_BYTE *)v29 + 107);
          if ( !*((_WORD *)v29 + 2) )
          {
            v7 = -1073741637;
            goto LABEL_121;
          }
          v7 = sub_140039B40((wchar_t *)(*(_QWORD *)&String2.Length + 8LL), 0x1EuLL, (const wchar_t *)v29 + 2);
          if ( v7 < 0 )
            goto LABEL_121;
          v33 = v86;
          *((_QWORD *)v8 + 8) = 0LL;
          *((_QWORD *)v8 + 9) = 0LL;
          v8[6] = v33[14];
        }
        *(_BYTE *)(a1 + 1861) = 1;
      }
      v16 = *(_QWORD *)&String2.Length;
    }
    sub_1400403EC(*(_QWORD *)(v2 + 16), (__int64)&v88);
    if ( *(_BYTE *)(v2 + 4370) )
    {
      sub_140039B40((wchar_t *)(v16 + 8), 0x1EuLL, L"%ws.sys", *((_QWORD *)&v88 + 1));
      v34 = 316LL;
      if ( *(_DWORD *)v2 != 1314275652 )
        v34 = 524LL;
      v35 = (*(_DWORD *)(v34 + v2) + 7) & 0xFFFFFFF8;
      if ( !v35 )
        v35 = 16;
      v8[6] = (*(_DWORD *)(v2 + 928) + 4095 + 16 * v35) & 0xFFFFF000;
      if ( !v8[15] )
        v8[15] = *((_DWORD *)P + 10);
      *((_QWORD *)v8 + 8) = *(_QWORD *)(v2 + 880);
      *((_QWORD *)v8 + 9) = v2 + 952;
      if ( (*(_DWORD *)(v2 + 604) & 1) != 0 || (v36 = *(_DWORD *)(a1 + 3432), v36 == 10) || v36 == 1 )
        v8[12] |= 2u;
    }
    v37 = (char *)v84;
    v8[12] |= 8u;
    RtlInitUnicodeString((PUNICODE_STRING)(v37 + 72), L"\\SystemRoot\\System32\\Drivers\\diskdump.sys");
    v15 = *(_QWORD *)&String2.Length;
    v38 = (USHORT *)(*(_QWORD *)&String2.Length + 72LL);
    FullDriverPath = IoQueryFullDriverPath(*(_QWORD *)(*(_QWORD *)(v2 + 16) + 8LL), *(_QWORD *)&String2.Length + 72LL);
    if ( FullDriverPath < 0 || *(_BYTE *)(v2 + 4370) )
    {
LABEL_90:
      v7 = 0;
      if ( FullDriverPath >= 0 )
        v7 = FullDriverPath;
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x100) != 0
        && BYTE1(off_140168120->Timer) )
      {
        sub_1400A3C18(off_140168120->AttachedDevice, v40, v41, v15 + 8);
      }
      if ( *(_DWORD *)(v2 + 576) )
        v7 = sub_1400A1F34(v2, (char *)P + 16);
      if ( v7 >= 0 )
      {
        *(_QWORD *)(a2 + 56) = 104LL;
LABEL_128:
        v48 = v87;
        if ( v87 )
        {
          sub_140017A20(v83, 0);
          sub_140016754(v2, v48);
        }
        if ( v6 )
        {
          if ( *((_BYTE *)v6 + 2) == 40 )
          {
            v49 = v85;
            if ( !v85 )
              v49 = v6;
            *((_QWORD *)v49 + 10) = 0LL;
            *((_QWORD *)v49 + 13) = 0LL;
          }
          else
          {
            *((_QWORD *)v6 + 6) = 0LL;
            *((_QWORD *)v6 + 7) = 0LL;
          }
          ExFreePoolWithTag(v6, 0x72536152u);
        }
        if ( v86 )
          ExFreePoolWithTag(v86, 0x44436152u);
        goto LABEL_139;
      }
      if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
        && (HIDWORD(off_140168120->Timer) & 0x100) != 0
        && BYTE1(off_140168120->Timer) )
      {
        sub_140055BD4((__int64)off_140168120->AttachedDevice, 0x21u, (__int64)&unk_14014D880, v7);
      }
LABEL_122:
      ExFreePoolWithTag(P, 0x44436152u);
      if ( v84 )
        ExFreePoolWithTag(v84, 0x44436152u);
      if ( v15 )
      {
        v47 = *(void **)(v15 + 80);
        if ( v47 )
          ExFreePoolWithTag(v47, 0);
        ExFreePoolWithTag((PVOID)v15, 0x44436152u);
      }
      goto LABEL_128;
    }
    v91 = 0LL;
    *(_OWORD *)SourceString = 0LL;
    v92 = 0;
    v93 = 0;
    DestinationString = 0LL;
    FullDriverPath = sub_140039B40(SourceString, 0x1EuLL, L"%ws.sys", *((_QWORD *)&v88 + 1));
    v79 = FullDriverPath;
    if ( FullDriverPath >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, SourceString);
      if ( *v38 > DestinationString.Length )
      {
        v43 = *v38 - (unsigned __int64)DestinationString.Length;
        String2 = 0LL;
        RtlInitUnicodeString(&String2, (PCWSTR)(v15 + 8));
        if ( RtlCompareUnicodeString(&DestinationString, &String2, 1u) )
        {
          if ( DestinationString.Length >= String2.Length )
          {
            memset_0((void *)(v43 + *(_QWORD *)(v15 + 80)), 0, DestinationString.Length);
            memmove((void *)(v43 + *(_QWORD *)(v15 + 80)), String2.Buffer, String2.Length);
            *(_WORD *)(v15 + 72) = String2.Length + v43;
          }
          else
          {
            v44 = (WCHAR *)sub_1400143E0(
                             64LL,
                             String2.Length + *(unsigned __int16 *)(v15 + 74) - DestinationString.Length + 2LL,
                             1145266514LL,
                             *(_QWORD *)(a1 + 8));
            v45 = v44;
            if ( v44 )
            {
              memmove(v44, *(const void **)(v15 + 80), v43);
              memmove((char *)v45 + v43, String2.Buffer, String2.Length);
            }
            v46 = *(void **)(v15 + 80);
            if ( v46 )
            {
              ExFreePoolWithTag(v46, 0);
              *(_OWORD *)(v15 + 72) = 0LL;
            }
            if ( v45 )
              RtlInitUnicodeString((PUNICODE_STRING)(v15 + 72), v45);
          }
        }
        goto LABEL_89;
      }
      v42 = *(void **)(*(_QWORD *)&String2.Length + 80LL);
      if ( !v42 )
      {
LABEL_89:
        FullDriverPath = v79;
        goto LABEL_90;
      }
    }
    else
    {
      v42 = *(void **)(*(_QWORD *)&String2.Length + 80LL);
      if ( !v42 )
        goto LABEL_90;
    }
    ExFreePoolWithTag(v42, 0);
    *(_OWORD *)v38 = 0LL;
    goto LABEL_89;
  }
  v7 = -1073741790;
LABEL_139:
  v50 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v7;
  if ( v50 )
    goto LABEL_206;
  DestinationString = 0LL;
  IoGetActivityIdIrp(a2, &DestinationString);
  v52 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v52 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_206;
    v54 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_205;
  }
  if ( *(_BYTE *)v52 != 15 )
  {
    if ( *(_BYTE *)v52 != 27 )
      goto LABEL_206;
    if ( *(_BYTE *)(v52 + 1) == 7 && !*(_DWORD *)(v52 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v53 = *(int **)(a2 + 56);
        if ( v53 )
          v3 = *v53;
        LODWORD(Timeout) = v3;
        sub_140056AB0(v51, v52, (const GUID *)&DestinationString, a2, Timeout, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_206;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_206;
    v54 = &stru_140149FE8;
LABEL_205:
    LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v51, v54, (const GUID *)&DestinationString, a2, Timeout);
    goto LABEL_206;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_206;
  v55 = *(_QWORD *)(v52 + 8);
  v56 = 0;
  v57 = 0LL;
  v77 = 0;
  v58 = 0;
  v59 = 0;
  v60 = 0;
  v61 = 0;
  if ( *(_BYTE *)(v55 + 2) != 40 )
  {
    v68 = *(_BYTE *)(v55 + 72);
    v57 = *(_BYTE **)(v55 + 32);
    v58 = *(_BYTE *)(v55 + 11);
    v56 = *(_BYTE *)(v55 + 4);
    if ( !*(_BYTE *)(v55 + 2) )
      goto LABEL_181;
    goto LABEL_206;
  }
  v62 = 0LL;
  v78 = 0;
  if ( *(_DWORD *)(v55 + 20) )
    goto LABEL_206;
  v63 = *(_DWORD *)(v55 + 56);
  v51 = 0LL;
  *(_DWORD *)&String2.Length = 0;
  v80 = v63;
  if ( !v63 )
    goto LABEL_178;
  v64 = v63;
  v65 = (unsigned int *)(v55 + 120);
  v85 = (unsigned int *)(v55 + 120);
  while ( 1 )
  {
    v66 = *v65;
    if ( (unsigned int)v66 >= 0x80 )
    {
      v67 = *(unsigned int *)(v55 + 16);
      if ( (unsigned int)v66 < (unsigned int)v67 )
        break;
    }
LABEL_172:
    v51 = (unsigned int)(v51 + 1);
    v65 = v85 + 1;
    *(_DWORD *)&String2.Length = v51;
    ++v85;
    if ( (unsigned int)v51 >= v64 )
      goto LABEL_178;
  }
  if ( *(_DWORD *)(v55 + v66) != 64 )
  {
    v51 = (unsigned int)(*(_DWORD *)(v55 + v66) - 65);
    if ( *(_DWORD *)(v55 + v66) == 65 )
    {
      v51 = v66 + 56;
      if ( v66 + 56 <= v67 )
      {
        v78 = 1;
        if ( *(_BYTE *)(v55 + v66 + 10) )
          v62 = (char *)(v66 + v55 + 24);
        v56 = *(_BYTE *)(v55 + v66 + 8);
        v57 = *(_BYTE **)(v55 + v66 + 16);
        v58 = *(_BYTE *)(v55 + v66 + 9);
      }
    }
    else if ( *(_DWORD *)(v55 + v66) == 66 )
    {
      v51 = v66 + 40;
      if ( v66 + 40 <= v67 )
      {
        if ( *(_DWORD *)(v55 + v66 + 12) )
          v62 = (char *)(v66 + v55 + 32);
        v57 = *(_BYTE **)(v55 + v66 + 24);
        goto LABEL_177;
      }
    }
    goto LABEL_170;
  }
  v51 = v66 + 40;
  if ( v66 + 40 > v67 )
  {
LABEL_170:
    if ( v78 )
      goto LABEL_178;
    LODWORD(v51) = *(_DWORD *)&String2.Length;
    v64 = v80;
    goto LABEL_172;
  }
  if ( *(_BYTE *)(v55 + v66 + 10) )
    v62 = (char *)(v66 + v55 + 24);
  v57 = *(_BYTE **)(v55 + v66 + 16);
LABEL_177:
  v58 = *(_BYTE *)(v55 + v66 + 9);
  v56 = *(_BYTE *)(v55 + v66 + 8);
LABEL_178:
  if ( v62 )
  {
    v68 = *v62;
    v60 = 0;
LABEL_181:
    LOBYTE(v51) = v68 - 8;
    if ( (v51 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v55 + 3) == 1 || !v57 || !v58 )
        goto LABEL_201;
      v69 = 0;
      v51 = (unsigned __int64)&v57[v58];
      v70 = v57 + 8;
      if ( (unsigned __int8)((*v57 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v70 <= v51 )
        {
          v69 = 1;
          v60 = v57[2];
          v59 = v57[1] & 0xF;
          v61 = v57[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v70 <= v51 )
        {
          v71 = v57 + 13;
          v59 = v57[2] & 0xF;
          v72 = v58;
          if ( (unsigned int)(unsigned __int8)v57[7] + 8 <= v58 )
            v72 = (unsigned __int8)v57[7] + 8;
          v51 = (unsigned __int64)&v57[v72];
          if ( (unsigned __int64)v71 > v51 )
            v77 = 0;
          else
            v77 = v57[12];
          if ( (unsigned __int64)(v57 + 14) > v51 )
            v61 = 0;
          else
            v61 = *v71;
          v69 = 1;
        }
        v60 = v77;
      }
      if ( v69 )
      {
        LOBYTE(v3) = v60;
        v73 = v61;
      }
      else
      {
LABEL_201:
        v59 = 0;
        v73 = 0;
      }
      LODWORD(Timeout) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v51, v55, (const GUID *)&DestinationString, a2, Timeout, *(_BYTE *)(v55 + 3), v56, v59, v3, v73, a2);
    }
  }
LABEL_206:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v7;
}
