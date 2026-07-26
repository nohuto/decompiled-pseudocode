/*
 * XREFs of ndisNsiGetInterfaceRwInformation @ 0x140154950
 * Callers:
 *     ?ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z @ 0x1400126D0 (-ndisNsiGetInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_PARAMETER@@@Z.c)
 *     ?ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z @ 0x140014610 (-ndisNsiGetAllInterfaceInformation@@YAJPEAU_NM_REQUEST_GET_ALL_PARAMETERS@@@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000FFE0 (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_qqqL @ 0x14001E380 (WPP_RECORDER_SF_qqqL.c)
 *     WPP_RECORDER_SF_qqq @ 0x1400350D0 (WPP_RECORDER_SF_qqq.c)
 *     __security_check_cookie @ 0x1400EA060 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1400EA140 (_guard_dispatch_icall.c)
 *     memmove @ 0x1400EA1C0 (memmove.c)
 *     memset @ 0x1400EA4C0 (memset.c)
 */

__int64 __fastcall ndisNsiGetInterfaceRwInformation(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  unsigned int v4; // esi
  __int64 v5; // r13
  char v6; // r14
  __int64 v7; // rdi
  char *v8; // rdx
  BOOL v9; // ecx
  char *v10; // r12
  unsigned int v11; // ebx
  int v12; // ebp
  char v14; // r8
  __int64 v15; // r13
  unsigned int v16; // r14d
  unsigned int v17; // r15d
  int v18; // edi
  unsigned int v19; // eax
  unsigned int v20; // ebx
  __int64 v21; // rcx
  unsigned int (__fastcall *v22)(__int64, _QWORD, unsigned int *, char *); // rax
  _QWORD *v23; // rdi
  __int64 v24; // r12
  unsigned __int16 v25; // cx
  char *v26; // r9
  __int64 v27; // rdx
  unsigned int v28; // eax
  const void *v29; // rdx
  __int64 v30; // rdi
  char v31; // [rsp+50h] [rbp-2A8h]
  unsigned int v32; // [rsp+54h] [rbp-2A4h] BYREF
  char *v33; // [rsp+58h] [rbp-2A0h]
  BOOL v34; // [rsp+60h] [rbp-298h]
  char *v35; // [rsp+68h] [rbp-290h]
  __int64 v36; // [rsp+70h] [rbp-288h]
  __int64 v37; // [rsp+78h] [rbp-280h]
  _QWORD *v38; // [rsp+80h] [rbp-278h]
  __int64 v39; // [rsp+88h] [rbp-270h]
  __int64 v40; // [rsp+90h] [rbp-268h]
  char v41[528]; // [rsp+A0h] [rbp-258h] BYREF

  v3 = a2;
  v39 = a3;
  v4 = 0;
  v40 = a2;
  v37 = a1;
  v5 = a3;
  v6 = a2;
  if ( !a2 )
    v3 = a1;
  v7 = a1;
  v36 = v3;
  memset(v41, 0, 0x204uLL);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x16u,
      0x12u,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      v7,
      v6,
      v5);
  v10 = *(char **)(v5 + 40);
  v11 = *(_DWORD *)(v5 + 52);
  v12 = *(_DWORD *)(v5 + 48);
  v33 = v10;
  if ( !v10 )
  {
    *(_DWORD *)(v5 + 48) = 0;
    goto LABEL_7;
  }
  v14 = 0;
  v31 = 0;
  if ( v12 > 0 )
  {
    v15 = v7;
    while ( 1 )
    {
      if ( v14 )
      {
LABEL_31:
        v5 = v39;
        LOBYTE(v7) = v37;
        v6 = v40;
        break;
      }
      LOBYTE(v9) = 0;
      v8 = 0LL;
      v34 = v9;
      v16 = 0;
      if ( v11 > 0x218 )
      {
        if ( v11 == 570 )
        {
          v17 = 516;
          if ( *(_QWORD *)(v15 + 1424) )
          {
            v8 = *(char **)(v15 + 1424);
            v18 = 1088;
          }
          else
          {
            v18 = 1088;
            v9 = (unsigned int)v12 >= 0x204;
          }
        }
        else
        {
          if ( v11 != 1088 )
            goto LABEL_39;
          v18 = 1092;
          v31 = 1;
          v17 = 4;
          v8 = (char *)(v15 + 1484);
        }
      }
      else if ( v11 == 536 )
      {
        v17 = 34;
        v8 = (char *)(v36 + 1124);
        v18 = 570;
        if ( !*(_BYTE *)(v15 + 1393) )
        {
          v8 = 0LL;
          v16 = 16843010;
        }
      }
      else if ( v11 )
      {
        if ( v11 == 16 )
        {
          v18 = 20;
          v17 = 4;
          v16 = 66184;
        }
        else
        {
          if ( v11 != 20 )
            goto LABEL_39;
          v17 = 516;
          if ( !*(_BYTE *)(v15 + 1393) )
          {
            v16 = 66185;
            goto LABEL_21;
          }
          if ( !*(_BYTE *)(v15 + 1394) )
          {
            v8 = (char *)(v15 + 596);
LABEL_21:
            v18 = 536;
            goto LABEL_25;
          }
          v23 = *(_QWORD **)(v15 + 1408);
          v38 = v23;
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x16u,
              0xEu,
              (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
              (char)v23,
              v41);
          memset(v41, 0, 0x204uLL);
          *(_WORD *)v41 = *(_WORD *)(v23[2] + 112LL) + 12 + *(_WORD *)(*(_QWORD *)(v23[4] + 4040LL) + 596LL);
          if ( *(_WORD *)v41 > 0x200u )
            *(_WORD *)v41 = 512;
          memmove(
            &v41[2],
            (const void *)(*(_QWORD *)(v23[4] + 4040LL) + 598LL),
            *(unsigned __int16 *)(*(_QWORD *)(v23[4] + 4040LL) + 596LL));
          v24 = *(unsigned __int16 *)(*(_QWORD *)(v23[4] + 4040LL) + 596LL);
          v25 = *(_WORD *)v41;
          v26 = &v41[v24 + 2];
          v35 = &v41[v24 + 2];
          if ( *(unsigned __int16 *)v41 - (unsigned int)v24 >= 2 )
          {
            *(_WORD *)v26 = 45;
            LODWORD(v24) = v24 + 2;
            v25 = *(_WORD *)v41;
            v26 += 2;
            v35 = v26;
          }
          if ( v25 > (unsigned int)v24 )
          {
            v27 = v23[2];
            v28 = *(unsigned __int16 *)(v27 + 112);
            v29 = *(const void **)(v27 + 120);
            if ( v25 - (unsigned int)v24 <= v28 )
              v28 = v25 - (_DWORD)v24;
            v30 = v28;
            memmove(v26, v29, v28);
            LODWORD(v24) = v30 + v24;
            v25 = *(_WORD *)v41;
            v26 = &v35[v30];
            v23 = v38;
          }
          if ( v25 - (unsigned int)v24 >= 2 )
          {
            *(_WORD *)v26 = 45;
            LODWORD(v24) = v24 + 2;
            v25 = *(_WORD *)v41;
            v26 += 2;
          }
          if ( v25 - (unsigned int)v24 >= 8 )
            *(_QWORD *)v26 = *(_QWORD *)(*(_QWORD *)(v23[5] + 8LL)
                                       + 2 * (((unsigned __int64)*(unsigned __int16 *)v23[5] - 8) >> 1));
          if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
            WPP_RECORDER_SF_qq(
              *((_QWORD *)WPP_GLOBAL_Control + 8),
              4u,
              0x16u,
              0xFu,
              (struct _GUID *)&WPP_0533647bba4931a92b3f74f2e1f8f42b_Traceguids,
              (char)v23,
              v41);
          v9 = v34;
          v8 = v41;
          v10 = v33;
          v18 = 536;
        }
      }
      else
      {
        v17 = 16;
        v8 = (char *)(v15 + 580);
        v18 = 16;
      }
LABEL_25:
      if ( v12 < v17 )
        goto LABEL_39;
      if ( v16 )
      {
        v21 = *(_QWORD *)(v36 + 1320);
        v22 = *(unsigned int (__fastcall **)(__int64, _QWORD, unsigned int *, char *))(*(_QWORD *)(v36 + 1328) + 56LL);
        v32 = v17;
        if ( !v22(v21, v16, &v32, v10) )
        {
          if ( v32 < v17 )
            memset(&v10[v32], 0, v17 - v32);
          goto LABEL_29;
        }
        goto LABEL_46;
      }
      if ( !v8 )
      {
        if ( !v9 )
        {
LABEL_39:
          v14 = 1;
          v31 = 1;
          goto LABEL_30;
        }
LABEL_46:
        memset(v10, 0, v17);
        goto LABEL_29;
      }
      memmove(v10, v8, v17);
LABEL_29:
      v14 = v31;
      v19 = v18 - v11;
      v11 = v18;
      v9 = v19;
      v10 += v19;
      v33 = v10;
      v12 -= v19;
LABEL_30:
      if ( v12 <= 0 )
        goto LABEL_31;
    }
  }
  v20 = v11 - *(_DWORD *)(v5 + 52);
  *(_DWORD *)(v5 + 48) = v20;
  if ( !v20 )
    v4 = -1073741811;
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qqqL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)v8,
      0x16u,
      0x13u,
      (struct _GUID *)&WPP_1fac887ef26339fd0b855bd4d9383f6d_Traceguids,
      v7,
      v6,
      v5,
      v4);
  return v4;
}
