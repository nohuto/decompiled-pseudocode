/*
 * XREFs of NvmeContinueScatterGatherProcessCommand @ 0x14011F630
 * Callers:
 *     <none>
 * Callees:
 *     NvmeControllerProcessCommand @ 0x140044AF0 (NvmeControllerProcessCommand.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x1401385D0 (_guard_dispatch_icall.c)
 */

void __fastcall NvmeContinueScatterGatherProcessCommand(__int64 a1, __int64 a2, unsigned int *a3, __int64 *a4)
{
  int v4; // ebx
  __int64 *v5; // rdi
  unsigned int v7; // r10d
  unsigned int v8; // ebp
  unsigned int v9; // r13d
  void *v10; // rcx
  __int64 v11; // r9
  _QWORD *v12; // rcx
  unsigned int v13; // r11d
  _QWORD *v14; // r8
  _QWORD *v15; // rdi
  __int64 v16; // rsi
  __int64 v17; // r12
  int v18; // edx
  int v19; // esi
  void (__fastcall *v20)(PVOID, _QWORD, _QWORD); // rax
  __int64 v21; // rdi
  bool v22; // zf
  unsigned __int64 v23; // rcx
  __int64 v24; // rdx
  int *v25; // rax
  const EVENT_DESCRIPTOR *v26; // rdx
  __int64 v27; // rdx
  char v28; // r12
  _BYTE *v29; // r9
  unsigned __int8 v30; // bp
  char v31; // r10
  char v32; // si
  char v33; // r11
  char v34; // r14
  char *v35; // r14
  unsigned int v36; // r13d
  unsigned __int64 v37; // r15
  __int64 v38; // r8
  int v39; // ecx
  char v40; // cl
  char v41; // r8
  char v42; // al
  char *v43; // r11
  unsigned int v44; // eax
  char v45; // [rsp+60h] [rbp-68h]
  unsigned int v46; // [rsp+64h] [rbp-64h]
  unsigned int v47; // [rsp+64h] [rbp-64h]
  __int64 v49; // [rsp+78h] [rbp-50h]
  PVOID SystemArgument2[2]; // [rsp+80h] [rbp-48h] BYREF

  v4 = 0;
  v5 = a4;
  v7 = 0;
  v8 = 0;
  v9 = 0;
  v10 = *(void **)(*a4 + 4232);
  *(_QWORD *)(*a4 + 4176) = a3;
  v11 = *a4;
  SystemArgument2[0] = v10;
  v12 = (_QWORD *)(v11 + 4120);
  v46 = *(_DWORD *)(v11 + 4248);
  v49 = v5[1];
  v13 = v11 != 0 ? 513 : 2;
  if ( *a3 )
  {
    v14 = (_QWORD *)(v11 + 4128);
    v15 = (_QWORD *)(v11 + 4120);
    do
    {
      v16 = *(_QWORD *)&a3[6 * v9 + 4];
      v17 = a3[6 * v9 + 6];
      if ( v17 + v16 % 4096 > 4096 )
      {
        while ( (_DWORD)v17 )
        {
          *v12 = v16;
          v18 = v16 & 0xFFF;
          v8 += 4096 - v18;
          if ( (unsigned int)(v18 + v17) <= 0x1000 )
            break;
          LODWORD(v17) = v18 + v17 - 4096;
          v16 += (unsigned int)(4096 - v18);
          if ( v12 == v15 )
          {
            v12 = (_QWORD *)(v11 + 4128);
          }
          else if ( v12 == v14 )
          {
            if ( v11 )
              v12 = (_QWORD *)(v11 + 8);
          }
          else
          {
            ++v12;
          }
          if ( ++v7 >= v13 || v8 >= v46 )
            goto LABEL_25;
        }
      }
      else
      {
        *v12 = v16;
        v8 += a3[6 * v9 + 6];
      }
      if ( v12 == v15 )
      {
        v12 = (_QWORD *)(v11 + 4128);
      }
      else if ( v12 == v14 )
      {
        if ( v11 )
          v12 = (_QWORD *)(v11 + 8);
      }
      else
      {
        ++v12;
      }
      if ( ++v7 >= v13 )
        break;
      if ( v8 >= v46 )
        break;
      ++v9;
    }
    while ( v9 < *a3 );
LABEL_25:
    v5 = a4;
    if ( v7 > 2 )
    {
      *(_QWORD *)v11 = *v14;
      *v14 = v49;
    }
  }
  v19 = NvmeControllerProcessCommand((__int64)SystemArgument2[0], v5);
  if ( v19 < 0 )
  {
    v20 = *(void (__fastcall **)(PVOID, _QWORD, _QWORD))(*v5 + 4192);
    if ( v20 )
      v20(SystemArgument2[0], *(_QWORD *)(*v5 + 4200), 0LL);
    v21 = *(_QWORD *)(*v5 + 4184);
    if ( v21 )
    {
      v22 = StorEtwLoggingEnabled == 0;
      *(_BYTE *)(v21 + 141) = -84;
      *(_DWORD *)(v21 + 48) = v19;
      if ( v22 )
        goto LABEL_97;
      *(_OWORD *)SystemArgument2 = 0LL;
      IoGetActivityIdIrp(v21, SystemArgument2);
      v24 = *(_QWORD *)(v21 + 184);
      if ( *(_BYTE *)v24 == 14 )
      {
        if ( (byte_140173442 & 8) == 0 )
          goto LABEL_97;
        v26 = &EventNonReadWriteRequestComplete;
        goto LABEL_96;
      }
      if ( *(_BYTE *)v24 != 15 )
      {
        if ( *(_BYTE *)v24 != 27 )
          goto LABEL_97;
        if ( *(_BYTE *)(v24 + 1) == 7 && !*(_DWORD *)(v24 + 8) )
        {
          if ( (byte_140173442 & 0x40) != 0 )
          {
            v25 = *(int **)(v21 + 56);
            if ( v25 )
              v4 = *v25;
            McTemplateK0pqd_EtwWriteTransfer(v23, v24, (const GUID *)SystemArgument2, v21, v4, *(_DWORD *)(v21 + 48));
          }
          goto LABEL_97;
        }
        if ( (byte_140173442 & 0x20) == 0 )
          goto LABEL_97;
        v26 = &EventPnpRequestComplete;
LABEL_96:
        McTemplateK0pd_EtwWriteTransfer(v23, v26, (const GUID *)SystemArgument2, v21, *(_DWORD *)(v21 + 48));
        goto LABEL_97;
      }
      if ( byte_140173441 >= 0 )
        goto LABEL_97;
      v27 = *(_QWORD *)(v24 + 8);
      v28 = 0;
      v29 = 0LL;
      v30 = 0;
      v31 = 0;
      v32 = 0;
      v33 = 0;
      v34 = 0;
      if ( *(_BYTE *)(v27 + 2) == 40 )
      {
        v35 = 0LL;
        v45 = 0;
        if ( *(_DWORD *)(v27 + 20) )
          goto LABEL_97;
        v36 = 0;
        v47 = *(_DWORD *)(v27 + 56);
        if ( !v47 )
          goto LABEL_97;
        while ( 1 )
        {
          v23 = *(unsigned int *)(v27 + 4LL * v36 + 120);
          if ( (unsigned int)v23 >= 0x80 )
          {
            v37 = *(unsigned int *)(v27 + 16);
            if ( (unsigned int)v23 < (unsigned int)v37 )
            {
              v38 = (unsigned int)v23;
              v39 = *(_DWORD *)(v23 + v27) - 64;
              if ( v39 )
              {
                v23 = (unsigned int)(v39 - 1);
                if ( (_DWORD)v23 )
                {
                  if ( (_DWORD)v23 == 1 )
                  {
                    v23 = v38 + 40;
                    if ( v38 + 40 <= v37 )
                    {
                      if ( *(_DWORD *)(v38 + v27 + 12) )
                        v35 = (char *)(v38 + v27 + 32);
                      v29 = *(_BYTE **)(v38 + v27 + 24);
                      goto LABEL_67;
                    }
                  }
                }
                else
                {
                  v23 = v38 + 56;
                  if ( v38 + 56 <= v37 )
                  {
                    v45 = 1;
                    if ( *(_BYTE *)(v38 + v27 + 10) )
                      v35 = (char *)(v38 + v27 + 24);
                    v28 = *(_BYTE *)(v38 + v27 + 8);
                    v29 = *(_BYTE **)(v38 + v27 + 16);
                    v30 = *(_BYTE *)(v38 + v27 + 9);
                  }
                }
              }
              else
              {
                v23 = v38 + 40;
                if ( v38 + 40 <= v37 )
                {
                  if ( *(_BYTE *)(v38 + v27 + 10) )
                    v35 = (char *)(v38 + v27 + 24);
                  v29 = *(_BYTE **)(v38 + v27 + 16);
LABEL_67:
                  v30 = *(_BYTE *)(v38 + v27 + 9);
                  v28 = *(_BYTE *)(v38 + v27 + 8);
LABEL_68:
                  if ( v35 )
                  {
                    v40 = *v35;
                    v34 = 0;
                    goto LABEL_71;
                  }
                  goto LABEL_97;
                }
              }
              if ( v45 )
                goto LABEL_68;
            }
          }
          if ( ++v36 >= v47 )
            goto LABEL_68;
        }
      }
      v40 = *(_BYTE *)(v27 + 72);
      v29 = *(_BYTE **)(v27 + 32);
      v30 = *(_BYTE *)(v27 + 11);
      v28 = *(_BYTE *)(v27 + 4);
      if ( *(_BYTE *)(v27 + 2) )
        goto LABEL_97;
LABEL_71:
      LOBYTE(v23) = v40 - 8;
      if ( (v23 & 0x5D) == 0 )
      {
        v41 = *(_BYTE *)(v27 + 3);
        if ( v41 == 1 || !v29 || !v30 )
        {
LABEL_90:
          if ( byte_140173441 < 0 )
          {
            if ( !v34 )
            {
              v33 = 0;
              v32 = 0;
              v31 = 0;
            }
            McTemplateK0pduuuuup_EtwWriteTransfer(
              v23,
              v27,
              (const GUID *)SystemArgument2,
              v21,
              *(_DWORD *)(v21 + 48),
              v41,
              v28,
              v31,
              v32,
              v33,
              v21);
          }
          goto LABEL_97;
        }
        v42 = *v29 & 0x7F;
        if ( v42 == 114 || v42 == 115 )
        {
          v23 = (unsigned __int64)&v29[v30];
          LOBYTE(v27) = 0;
          if ( (unsigned __int64)(v29 + 8) > v23 )
            goto LABEL_88;
          v32 = v29[2];
          v31 = v29[1] & 0xF;
          v33 = v29[3];
        }
        else
        {
          v23 = (unsigned __int64)&v29[v30];
          LOBYTE(v27) = 0;
          if ( (unsigned __int64)(v29 + 8) > v23 )
            goto LABEL_88;
          v43 = v29 + 13;
          v31 = v29[2] & 0xF;
          v44 = v30;
          if ( (unsigned int)(unsigned __int8)v29[7] + 8 <= v30 )
            v44 = (unsigned __int8)v29[7] + 8;
          v23 = (unsigned __int64)&v29[v44];
          if ( (unsigned __int64)v43 <= v23 )
            v32 = v29[12];
          if ( (unsigned __int64)(v29 + 14) > v23 )
            v33 = 0;
          else
            v33 = *v43;
        }
        LOBYTE(v27) = 1;
LABEL_88:
        if ( (_BYTE)v27 )
          v34 = 1;
        goto LABEL_90;
      }
LABEL_97:
      IofCompleteRequest((PIRP)v21, 0);
    }
  }
}
