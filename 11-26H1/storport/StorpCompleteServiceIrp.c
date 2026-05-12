/*
 * XREFs of StorpCompleteServiceIrp @ 0x140049FFC
 * Callers:
 *     StorPortExtendedFunction @ 0x140001D50 (StorPortExtendedFunction.c)
 * Callees:
 *     RaidpPortGetAdapter @ 0x1400010E0 (RaidpPortGetAdapter.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 */

__int64 __fastcall StorpCompleteServiceIrp(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  bool v4; // zf
  unsigned __int64 v5; // rcx
  __int64 v6; // rdx
  int *v7; // rax
  int v8; // ecx
  void *v9; // rdx
  __int64 v10; // rdx
  _BYTE *v11; // r9
  unsigned __int8 v12; // r14
  char v13; // si
  char v14; // r11
  char v15; // r10
  char v16; // r15
  char *v17; // r15
  unsigned int v18; // r13d
  unsigned __int64 v19; // r12
  __int64 v20; // r8
  int v21; // ecx
  char v22; // r12
  char v23; // cl
  char v24; // r8
  char v25; // al
  char *v26; // r10
  unsigned int v27; // eax
  struct _EX_RUNDOWN_REF_CACHE_AWARE *v28; // rcx
  char v30; // [rsp+68h] [rbp+7h]
  char v31; // [rsp+69h] [rbp+8h]
  unsigned int v32; // [rsp+6Ch] [rbp+Bh]
  int *v33; // [rsp+70h] [rbp+Fh] BYREF
  int *v34; // [rsp+78h] [rbp+17h] BYREF
  __int128 v35; // [rsp+80h] [rbp+1Fh] BYREF

  v2 = 0;
  v33 = 0LL;
  v34 = 0LL;
  if ( !a2 )
    return (unsigned int)-1056964602;
  RaidpPortGetAdapter(a1, &v33, &v34);
  v4 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  if ( !v4 )
  {
    v35 = 0LL;
    IoGetActivityIdIrp(a2, &v35);
    v6 = *(_QWORD *)(a2 + 184);
    if ( *(_BYTE *)v6 == 14 )
    {
      if ( (byte_140173442 & 8) == 0 )
        goto LABEL_70;
      v9 = &EventNonReadWriteRequestComplete;
      goto LABEL_69;
    }
    if ( *(_BYTE *)v6 != 15 )
    {
      if ( *(_BYTE *)v6 != 27 )
        goto LABEL_70;
      if ( *(_BYTE *)(v6 + 1) == 7 && !*(_DWORD *)(v6 + 8) )
      {
        if ( (byte_140173442 & 0x40) != 0 )
        {
          v7 = *(int **)(a2 + 56);
          if ( v7 )
            v8 = *v7;
          else
            v8 = 0;
          McTemplateK0pqd_EtwWriteTransfer(v8, v6, (unsigned int)&v35, a2, v8, *(_DWORD *)(a2 + 48));
        }
        goto LABEL_70;
      }
      if ( (byte_140173442 & 0x20) == 0 )
        goto LABEL_70;
      v9 = &EventPnpRequestComplete;
LABEL_69:
      McTemplateK0pd_EtwWriteTransfer(v5, v9, &v35, a2, *(_DWORD *)(a2 + 48));
      goto LABEL_70;
    }
    if ( byte_140173441 >= 0 )
      goto LABEL_70;
    v10 = *(_QWORD *)(v6 + 8);
    v11 = 0LL;
    v30 = 0;
    v12 = 0;
    v13 = 0;
    v14 = 0;
    v15 = 0;
    v16 = 0;
    if ( *(_BYTE *)(v10 + 2) != 40 )
    {
      v23 = *(_BYTE *)(v10 + 72);
      v11 = *(_BYTE **)(v10 + 32);
      v12 = *(_BYTE *)(v10 + 11);
      v22 = *(_BYTE *)(v10 + 4);
      if ( *(_BYTE *)(v10 + 2) )
        goto LABEL_70;
LABEL_44:
      LOBYTE(v5) = v23 - 8;
      if ( (v5 & 0x5D) != 0 )
        goto LABEL_70;
      v24 = *(_BYTE *)(v10 + 3);
      if ( v24 == 1 || !v11 || !v12 )
        goto LABEL_63;
      v25 = *v11 & 0x7F;
      if ( v25 == 114 || v25 == 115 )
      {
        v5 = (unsigned __int64)&v11[v12];
        LOBYTE(v10) = 0;
        if ( (unsigned __int64)(v11 + 8) > v5 )
          goto LABEL_61;
        v14 = v11[2];
        v13 = v11[1] & 0xF;
        v15 = v11[3];
      }
      else
      {
        v5 = (unsigned __int64)&v11[v12];
        LOBYTE(v10) = 0;
        if ( (unsigned __int64)(v11 + 8) > v5 )
          goto LABEL_61;
        v26 = v11 + 13;
        v13 = v11[2] & 0xF;
        v27 = v12;
        if ( (unsigned int)(unsigned __int8)v11[7] + 8 <= v12 )
          v27 = (unsigned __int8)v11[7] + 8;
        v5 = (unsigned __int64)&v11[v27];
        if ( (unsigned __int64)v26 <= v5 )
          v14 = v11[12];
        if ( (unsigned __int64)(v11 + 14) > v5 )
          v15 = 0;
        else
          v15 = *v26;
      }
      LOBYTE(v10) = 1;
LABEL_61:
      if ( (_BYTE)v10 )
        v16 = 1;
LABEL_63:
      if ( byte_140173441 < 0 )
      {
        if ( !v16 )
        {
          v15 = 0;
          v14 = 0;
          v13 = 0;
        }
        McTemplateK0pduuuuup_EtwWriteTransfer(
          v5,
          v10,
          (unsigned int)&v35,
          a2,
          *(_DWORD *)(a2 + 48),
          v24,
          v22,
          v13,
          v14,
          v15,
          a2);
      }
      goto LABEL_70;
    }
    v17 = 0LL;
    v31 = 0;
    if ( !*(_DWORD *)(v10 + 20) )
    {
      v18 = 0;
      v32 = *(_DWORD *)(v10 + 56);
      if ( v32 )
      {
        do
        {
          v5 = *(unsigned int *)(v10 + 4LL * v18 + 120);
          if ( (unsigned int)v5 >= 0x80 )
          {
            v19 = *(unsigned int *)(v10 + 16);
            if ( (unsigned int)v5 < (unsigned int)v19 )
            {
              v20 = (unsigned int)v5;
              v21 = *(_DWORD *)(v5 + v10) - 64;
              if ( v21 )
              {
                LODWORD(v5) = v21 - 1;
                if ( (_DWORD)v5 )
                {
                  if ( (_DWORD)v5 == 1 )
                  {
                    LODWORD(v5) = v20 + 40;
                    if ( v20 + 40 <= v19 )
                    {
                      if ( *(_DWORD *)(v20 + v10 + 12) )
                        v17 = (char *)(v20 + v10 + 32);
                      v11 = *(_BYTE **)(v20 + v10 + 24);
LABEL_29:
                      v22 = *(_BYTE *)(v20 + v10 + 8);
                      v12 = *(_BYTE *)(v20 + v10 + 9);
                      goto LABEL_38;
                    }
                  }
                }
                else
                {
                  LODWORD(v5) = v20 + 56;
                  if ( v20 + 56 <= v19 )
                  {
                    v31 = 1;
                    if ( *(_BYTE *)(v20 + v10 + 10) )
                      v17 = (char *)(v20 + v10 + 24);
                    v11 = *(_BYTE **)(v20 + v10 + 16);
                    v12 = *(_BYTE *)(v20 + v10 + 9);
                    v30 = *(_BYTE *)(v20 + v10 + 8);
                  }
                }
              }
              else
              {
                LODWORD(v5) = v20 + 40;
                if ( v20 + 40 <= v19 )
                {
                  if ( *(_BYTE *)(v20 + v10 + 10) )
                    v17 = (char *)(v20 + v10 + 24);
                  v11 = *(_BYTE **)(v20 + v10 + 16);
                  goto LABEL_29;
                }
              }
              if ( v31 )
                break;
            }
          }
          ++v18;
        }
        while ( v18 < v32 );
        v22 = v30;
LABEL_38:
        if ( v17 )
        {
          v23 = *v17;
          v16 = 0;
          goto LABEL_44;
        }
      }
    }
  }
LABEL_70:
  IofCompleteRequest((PIRP)a2, 0);
  if ( v33 )
  {
    v28 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v33 + 42);
    goto LABEL_74;
  }
  if ( v34 )
  {
    v28 = (struct _EX_RUNDOWN_REF_CACHE_AWARE *)*((_QWORD *)v34 + 19);
LABEL_74:
    ExReleaseRundownProtectionCacheAware(v28);
    return v2;
  }
  return (unsigned int)-1056964602;
}
