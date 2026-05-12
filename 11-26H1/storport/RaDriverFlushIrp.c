/*
 * XREFs of RaDriverFlushIrp @ 0x140041210
 * Callers:
 *     <none>
 * Callees:
 *     NvmeNamespaceFlushIrp @ 0x140041328 (NvmeNamespaceFlushIrp.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     WPP_SF_qqD @ 0x14005BAF8 (WPP_SF_qqD.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     WPP_SF_qq @ 0x14006F514 (WPP_SF_qq.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall RaDriverFlushIrp(__int64 a1, __int64 a2)
{
  __int64 v3; // rsi
  unsigned int v4; // ebx
  _DWORD *v5; // rcx
  bool v7; // zf
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int *v10; // rcx
  int v11; // ecx
  void *v12; // rdx
  __int64 v13; // rdx
  _BYTE *v14; // r9
  unsigned __int8 v15; // r11
  char v16; // si
  char v17; // r14
  char v18; // r10
  char v19; // r15
  char *v20; // r15
  unsigned int v21; // r13d
  unsigned __int64 v22; // r12
  __int64 v23; // r8
  int v24; // ecx
  char v25; // r12
  char v26; // cl
  char v27; // r8
  char v28; // al
  char *v29; // r10
  unsigned int v30; // eax
  unsigned __int64 v31; // rcx
  __int64 v32; // rdx
  unsigned int *v33; // rax
  void *v34; // rdx
  __int64 v35; // rdx
  _BYTE *v36; // r9
  unsigned __int8 v37; // r11
  char v38; // si
  char v39; // r14
  char v40; // r10
  char v41; // r15
  char *v42; // r15
  unsigned int v43; // r13d
  unsigned __int64 v44; // r12
  __int64 v45; // r8
  int v46; // ecx
  char v47; // r12
  char v48; // cl
  char v49; // r8
  char v50; // al
  char *v51; // r10
  unsigned int v52; // eax
  char v53; // [rsp+60h] [rbp-9h]
  char v54; // [rsp+60h] [rbp-9h]
  char v55; // [rsp+61h] [rbp-8h]
  char v56; // [rsp+61h] [rbp-8h]
  unsigned int v58; // [rsp+70h] [rbp+7h]
  unsigned int v59; // [rsp+70h] [rbp+7h]
  __int128 v60; // [rsp+78h] [rbp+Fh] BYREF

  v3 = a1;
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qq(WPP_GLOBAL_Control->AttachedDevice, 22LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, a1, a2);
  }
  v4 = 0;
  *(_BYTE *)(a2 + 141) = -88;
  *(_QWORD *)(a2 + 56) = 0LL;
  v5 = *(_DWORD **)(v3 + 64);
  if ( *v5 != 1314278989 )
  {
    if ( *v5 != 1314275652 )
    {
      v7 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(a2 + 141) = -84;
      *(_DWORD *)(a2 + 48) = 0;
      if ( v7 )
        goto LABEL_79;
      v60 = 0LL;
      IoGetActivityIdIrp(a2, &v60);
      v9 = *(_QWORD *)(a2 + 184);
      if ( *(_BYTE *)v9 == 14 )
      {
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_79;
        v12 = &EventNonReadWriteRequestComplete;
        goto LABEL_26;
      }
      if ( *(_BYTE *)v9 != 15 )
      {
        if ( *(_BYTE *)v9 == 27 )
        {
          if ( *(_BYTE *)(v9 + 1) == 7 && !*(_DWORD *)(v9 + 8) )
          {
            if ( (byte_140173442 & 0x40) != 0 )
            {
              v10 = *(int **)(a2 + 56);
              if ( v10 )
                v11 = *v10;
              else
                v11 = 0;
              McTemplateK0pqd_EtwWriteTransfer(v11, v9, (unsigned int)&v60, a2, v11, *(_DWORD *)(a2 + 48));
            }
            goto LABEL_79;
          }
          if ( (byte_140173442 & 0x20) != 0 )
          {
            v12 = &EventPnpRequestComplete;
LABEL_26:
            McTemplateK0pd_EtwWriteTransfer(v8, v12, &v60, a2, *(_DWORD *)(a2 + 48));
          }
        }
LABEL_79:
        IofCompleteRequest((PIRP)a2, 0);
        goto LABEL_4;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_79;
      v13 = *(_QWORD *)(v9 + 8);
      v14 = 0LL;
      v53 = 0;
      v15 = 0;
      v16 = 0;
      v17 = 0;
      v18 = 0;
      v19 = 0;
      if ( *(_BYTE *)(v13 + 2) == 40 )
      {
        v20 = 0LL;
        v55 = 0;
        if ( *(_DWORD *)(v13 + 20) )
          goto LABEL_78;
        v21 = 0;
        v58 = *(_DWORD *)(v13 + 56);
        if ( !v58 )
          goto LABEL_78;
        while ( 1 )
        {
          v8 = *(unsigned int *)(v13 + 4LL * v21 + 120);
          if ( (unsigned int)v8 >= 0x80 )
          {
            v22 = *(unsigned int *)(v13 + 16);
            if ( (unsigned int)v8 < (unsigned int)v22 )
            {
              v23 = (unsigned int)v8;
              v24 = *(_DWORD *)(v8 + v13) - 64;
              if ( v24 )
              {
                LODWORD(v8) = v24 - 1;
                if ( (_DWORD)v8 )
                {
                  if ( (_DWORD)v8 == 1 )
                  {
                    LODWORD(v8) = v23 + 40;
                    if ( v23 + 40 <= v22 )
                    {
                      if ( *(_DWORD *)(v23 + v13 + 12) )
                        v20 = (char *)(v23 + v13 + 32);
                      v14 = *(_BYTE **)(v23 + v13 + 24);
                      goto LABEL_53;
                    }
                  }
                }
                else
                {
                  LODWORD(v8) = v23 + 56;
                  if ( v23 + 56 <= v22 )
                  {
                    v55 = 1;
                    if ( *(_BYTE *)(v23 + v13 + 10) )
                      v20 = (char *)(v23 + v13 + 24);
                    v14 = *(_BYTE **)(v23 + v13 + 16);
                    v15 = *(_BYTE *)(v23 + v13 + 9);
                    v53 = *(_BYTE *)(v23 + v13 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v8) = v23 + 40;
                if ( v23 + 40 <= v22 )
                {
                  if ( *(_BYTE *)(v23 + v13 + 10) )
                    v20 = (char *)(v23 + v13 + 24);
                  v14 = *(_BYTE **)(v23 + v13 + 16);
LABEL_53:
                  v25 = *(_BYTE *)(v23 + v13 + 8);
                  v15 = *(_BYTE *)(v23 + v13 + 9);
LABEL_47:
                  if ( v20 )
                  {
                    v26 = *v20;
                    v19 = 0;
                    goto LABEL_55;
                  }
                  goto LABEL_78;
                }
              }
              if ( v55 )
                goto LABEL_46;
            }
          }
          if ( ++v21 >= v58 )
          {
LABEL_46:
            v25 = v53;
            goto LABEL_47;
          }
        }
      }
      v26 = *(_BYTE *)(v13 + 72);
      v14 = *(_BYTE **)(v13 + 32);
      v15 = *(_BYTE *)(v13 + 11);
      v25 = *(_BYTE *)(v13 + 4);
      if ( *(_BYTE *)(v13 + 2) )
        goto LABEL_78;
LABEL_55:
      LOBYTE(v8) = v26 - 8;
      if ( (v8 & 0x5D) != 0 )
      {
LABEL_78:
        v3 = a1;
        goto LABEL_79;
      }
      v27 = *(_BYTE *)(v13 + 3);
      if ( v27 == 1 || !v14 || !v15 )
      {
LABEL_74:
        if ( byte_140173441 < 0 )
        {
          if ( !v19 )
          {
            v18 = 0;
            v17 = 0;
            v16 = 0;
          }
          McTemplateK0pduuuuup_EtwWriteTransfer(
            v8,
            v13,
            (unsigned int)&v60,
            a2,
            *(_DWORD *)(a2 + 48),
            v27,
            v25,
            v16,
            v17,
            v18,
            a2);
        }
        goto LABEL_78;
      }
      v28 = *v14 & 0x7F;
      if ( v28 == 114 || v28 == 115 )
      {
        v8 = (unsigned __int64)&v14[v15];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v14 + 8) > v8 )
          goto LABEL_72;
        v17 = v14[2];
        v16 = v14[1] & 0xF;
        v18 = v14[3];
      }
      else
      {
        v8 = (unsigned __int64)&v14[v15];
        LOBYTE(v13) = 0;
        if ( (unsigned __int64)(v14 + 8) > v8 )
          goto LABEL_72;
        v29 = v14 + 13;
        v16 = v14[2] & 0xF;
        v30 = v15;
        if ( (unsigned int)(unsigned __int8)v14[7] + 8 <= v15 )
          v30 = (unsigned __int8)v14[7] + 8;
        v8 = (unsigned __int64)&v14[v30];
        if ( (unsigned __int64)v29 <= v8 )
          v17 = v14[12];
        if ( (unsigned __int64)(v14 + 14) > v8 )
          v18 = 0;
        else
          v18 = *v29;
      }
      LOBYTE(v13) = 1;
LABEL_72:
      if ( (_BYTE)v13 )
        v19 = 1;
      goto LABEL_74;
    }
    v7 = StorEtwLoggingEnabled == 0;
    *(_BYTE *)(a2 + 141) = -84;
    *(_DWORD *)(a2 + 48) = -1073741823;
    if ( v7 )
      goto LABEL_147;
    v60 = 0LL;
    IoGetActivityIdIrp(a2, &v60);
    v32 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v32 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_147;
      v34 = &EventNonReadWriteRequestComplete;
      goto LABEL_94;
    }
    if ( *(_BYTE *)v32 != 15 )
    {
      if ( *(_BYTE *)v32 == 27 )
      {
        if ( *(_BYTE *)(v32 + 1) == 7 && !*(_DWORD *)(v32 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v33 = *(unsigned int **)(a2 + 56);
            if ( v33 )
              v4 = *v33;
            McTemplateK0pqd_EtwWriteTransfer(v31, v32, (unsigned int)&v60, a2, v4, *(_DWORD *)(a2 + 48));
          }
          goto LABEL_147;
        }
        if ( (byte_140173442 & 0x20) != 0 )
        {
          v34 = &EventPnpRequestComplete;
LABEL_94:
          McTemplateK0pd_EtwWriteTransfer(v31, v34, &v60, a2, *(_DWORD *)(a2 + 48));
        }
      }
LABEL_147:
      IofCompleteRequest((PIRP)a2, 0);
      v4 = -1073741823;
      goto LABEL_4;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_147;
    v35 = *(_QWORD *)(v32 + 8);
    v36 = 0LL;
    v54 = 0;
    v37 = 0;
    v38 = 0;
    v39 = 0;
    v40 = 0;
    v41 = 0;
    if ( *(_BYTE *)(v35 + 2) == 40 )
    {
      v42 = 0LL;
      v56 = 0;
      if ( *(_DWORD *)(v35 + 20) )
        goto LABEL_146;
      v43 = 0;
      v59 = *(_DWORD *)(v35 + 56);
      if ( !v59 )
        goto LABEL_146;
      while ( 1 )
      {
        v31 = *(unsigned int *)(v35 + 4LL * v43 + 120);
        if ( (unsigned int)v31 >= 0x80 )
        {
          v44 = *(unsigned int *)(v35 + 16);
          if ( (unsigned int)v31 < (unsigned int)v44 )
          {
            v45 = (unsigned int)v31;
            v46 = *(_DWORD *)(v31 + v35) - 64;
            if ( v46 )
            {
              LODWORD(v31) = v46 - 1;
              if ( (_DWORD)v31 )
              {
                if ( (_DWORD)v31 == 1 )
                {
                  LODWORD(v31) = v45 + 40;
                  if ( v45 + 40 <= v44 )
                  {
                    if ( *(_DWORD *)(v45 + v35 + 12) )
                      v42 = (char *)(v45 + v35 + 32);
                    v36 = *(_BYTE **)(v45 + v35 + 24);
                    goto LABEL_121;
                  }
                }
              }
              else
              {
                LODWORD(v31) = v45 + 56;
                if ( v45 + 56 <= v44 )
                {
                  v56 = 1;
                  if ( *(_BYTE *)(v45 + v35 + 10) )
                    v42 = (char *)(v45 + v35 + 24);
                  v36 = *(_BYTE **)(v45 + v35 + 16);
                  v37 = *(_BYTE *)(v45 + v35 + 9);
                  v54 = *(_BYTE *)(v45 + v35 + 8);
                }
              }
            }
            else
            {
              LODWORD(v31) = v45 + 40;
              if ( v45 + 40 <= v44 )
              {
                if ( *(_BYTE *)(v45 + v35 + 10) )
                  v42 = (char *)(v45 + v35 + 24);
                v36 = *(_BYTE **)(v45 + v35 + 16);
LABEL_121:
                v47 = *(_BYTE *)(v45 + v35 + 8);
                v37 = *(_BYTE *)(v45 + v35 + 9);
LABEL_115:
                if ( v42 )
                {
                  v48 = *v42;
                  v41 = 0;
                  goto LABEL_123;
                }
                goto LABEL_146;
              }
            }
            if ( v56 )
              goto LABEL_114;
          }
        }
        if ( ++v43 >= v59 )
        {
LABEL_114:
          v47 = v54;
          goto LABEL_115;
        }
      }
    }
    v48 = *(_BYTE *)(v35 + 72);
    v36 = *(_BYTE **)(v35 + 32);
    v37 = *(_BYTE *)(v35 + 11);
    v47 = *(_BYTE *)(v35 + 4);
    if ( *(_BYTE *)(v35 + 2) )
      goto LABEL_146;
LABEL_123:
    LOBYTE(v31) = v48 - 8;
    if ( (v31 & 0x5D) != 0 )
    {
LABEL_146:
      v3 = a1;
      goto LABEL_147;
    }
    v49 = *(_BYTE *)(v35 + 3);
    if ( v49 == 1 || !v36 || !v37 )
    {
LABEL_142:
      if ( byte_140173441 < 0 )
      {
        if ( !v41 )
        {
          v40 = 0;
          v39 = 0;
          v38 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v31,
          v35,
          (unsigned int)&v60,
          a2,
          *(_DWORD *)(a2 + 48),
          v49,
          v47,
          v38,
          v39,
          v40,
          a2);
      }
      goto LABEL_146;
    }
    v50 = *v36 & 0x7F;
    if ( v50 == 114 || v50 == 115 )
    {
      v31 = (unsigned __int64)&v36[v37];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v36 + 8) > v31 )
        goto LABEL_140;
      v39 = v36[2];
      v38 = v36[1] & 0xF;
      v40 = v36[3];
    }
    else
    {
      v31 = (unsigned __int64)&v36[v37];
      LOBYTE(v35) = 0;
      if ( (unsigned __int64)(v36 + 8) > v31 )
        goto LABEL_140;
      v51 = v36 + 13;
      v38 = v36[2] & 0xF;
      v52 = v37;
      if ( (unsigned int)(unsigned __int8)v36[7] + 8 <= v37 )
        v52 = (unsigned __int8)v36[7] + 8;
      v31 = (unsigned __int64)&v36[v52];
      if ( (unsigned __int64)v51 <= v31 )
        v39 = v36[12];
      if ( (unsigned __int64)(v36 + 14) > v31 )
        v40 = 0;
      else
        v40 = *v51;
    }
    LOBYTE(v35) = 1;
LABEL_140:
    if ( (_BYTE)v35 )
      v41 = 1;
    goto LABEL_142;
  }
  v4 = NvmeNamespaceFlushIrp(v5, (PIRP)a2);
LABEL_4:
  if ( WPP_GLOBAL_Control != (PDEVICE_OBJECT)&WPP_GLOBAL_Control
    && (HIDWORD(WPP_GLOBAL_Control->Timer) & 8) != 0
    && BYTE1(WPP_GLOBAL_Control->Timer) >= 4u )
  {
    WPP_SF_qqD(WPP_GLOBAL_Control->AttachedDevice, 23LL, &WPP_24b5fd126b0737de4e117b7643a3f5f0_Traceguids, v3, a2, v4);
  }
  return v4;
}
