/*
 * XREFs of sub_1401A7B6C @ 0x1401A7B6C
 * Callers:
 *     sub_1401A8380 @ 0x1401A8380 (sub_1401A8380.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_14013115C @ 0x14013115C (sub_14013115C.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memmove @ 0x14013C680 (memmove.c)
 */

void __fastcall sub_1401A7B6C(__int64 a1, __int64 a2)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  __int64 v4; // r13
  __int64 *v5; // r12
  PIRP v6; // rax
  PIRP v7; // rdi
  struct _IRP *MasterIrp; // rbx
  unsigned __int16 v9; // dx
  bool v10; // zf
  __int64 v11; // rcx
  __int64 CurrentStackLocation; // rdx
  unsigned int *Information; // rax
  __int64 v14; // rcx
  const GUID *v15; // r8
  const EVENT_DESCRIPTOR *v16; // rdx
  const GUID *v17; // r8
  unsigned __int64 v18; // rdx
  char v19; // bl
  char v20; // r12
  _BYTE *v21; // r9
  unsigned __int8 v22; // r11
  char v23; // r13
  unsigned __int8 v24; // r10
  char *v25; // rbx
  char v26; // r14
  unsigned int v27; // esi
  unsigned int v28; // r15d
  __int64 v29; // rcx
  unsigned __int64 v30; // r10
  __int64 v31; // r8
  int v32; // ecx
  int v33; // ecx
  char v34; // cl
  char v35; // r8
  _BYTE *v36; // rcx
  _BYTE *v37; // rax
  unsigned int v38; // eax
  unsigned __int64 v39; // rcx
  char v40; // al
  __int64 v41; // rcx
  const GUID *v42; // r8
  unsigned int v43; // eax
  unsigned int *v44; // rax
  char v45; // bl
  char v46; // r13
  _BYTE *v47; // r9
  unsigned __int8 v48; // r11
  char v49; // r12
  unsigned __int8 v50; // r10
  char *v51; // rbx
  char v52; // r14
  unsigned int v53; // esi
  unsigned int v54; // r15d
  __int64 v55; // rcx
  unsigned __int64 v56; // r10
  __int64 v57; // r8
  int v58; // ecx
  int v59; // ecx
  char v60; // cl
  char v61; // r8
  _BYTE *v62; // rcx
  _BYTE *v63; // rax
  unsigned __int8 *v64; // r8
  unsigned int v65; // eax
  unsigned __int64 v66; // rcx
  char v67; // al
  __int64 v68; // [rsp+20h] [rbp-69h]
  __int64 v69; // [rsp+28h] [rbp-61h]
  __int64 v70; // [rsp+30h] [rbp-59h]
  __int64 v71; // [rsp+38h] [rbp-51h]
  __int64 v72; // [rsp+40h] [rbp-49h]
  __int64 v73; // [rsp+48h] [rbp-41h]
  PIRP v74; // [rsp+50h] [rbp-39h]
  unsigned __int8 v75; // [rsp+60h] [rbp-29h]
  unsigned __int8 v76; // [rsp+60h] [rbp-29h]
  char v77; // [rsp+61h] [rbp-28h]
  char v78; // [rsp+61h] [rbp-28h]
  __int64 *v79; // [rsp+68h] [rbp-21h]
  __int64 v81; // [rsp+80h] [rbp-9h]
  __int128 v82; // [rsp+88h] [rbp-1h] BYREF
  __int128 v83; // [rsp+98h] [rbp+Fh] BYREF

  if ( !a2 )
    return;
  v2 = a2;
  v81 = sub_14013115C(a1);
  v3 = v81;
  if ( !v81 )
    return;
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)(v81 + 24), 1u);
  v4 = v81 + 8;
  v5 = *(__int64 **)(v81 + 8);
  v79 = v5;
  if ( v5 == (__int64 *)(v81 + 8) )
    goto LABEL_153;
  do
  {
    if ( (v5[4] & 1) != 0 && ((v5[6] & *(_QWORD *)(v2 + 8)) != 0 || (*(_QWORD *)(v2 + 16) & v5[7]) != 0) )
    {
      if ( *((__int16 *)v5 + 18) > 0 )
      {
        v6 = IoCsqRemoveNextIrp((PIO_CSQ)(v5 + 10), 0LL);
        v7 = v6;
        if ( !v6 )
          goto LABEL_151;
        MasterIrp = v6->AssociatedIrp.MasterIrp;
        if ( *(_DWORD *)(v2 + 32) )
        {
          v9 = *(_WORD *)(v2 + 32) + 40;
          if ( v6->Tail.Overlay.CurrentStackLocation->Parameters.Read.Length < v9 )
          {
            v10 = byte_140168DAA == 0;
            *((_BYTE *)&v6->Tail.CompletionKey + 21) = -84;
            v6->IoStatus.Status = -1073741789;
            if ( v10 )
              goto LABEL_79;
            v82 = 0LL;
            IoGetActivityIdIrp(v6, &v82);
            CurrentStackLocation = (__int64)v7->Tail.Overlay.CurrentStackLocation;
            if ( *(_BYTE *)CurrentStackLocation == 14 )
            {
              if ( (byte_1401694F2 & 8) == 0 )
                goto LABEL_79;
              v16 = &stru_140148B18;
LABEL_25:
              v17 = (const GUID *)&v82;
              goto LABEL_26;
            }
            if ( *(_BYTE *)CurrentStackLocation != 15 )
            {
              if ( *(_BYTE *)CurrentStackLocation != 27 )
                goto LABEL_79;
              if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
              {
                if ( (byte_1401694F2 & 0x40) != 0 )
                {
                  Information = (unsigned int *)v7->IoStatus.Information;
                  if ( Information )
                    v14 = *Information;
                  else
                    v14 = 0LL;
                  v15 = (const GUID *)&v82;
LABEL_22:
                  LODWORD(v69) = v7->IoStatus.Status;
                  LODWORD(v68) = v14;
                  sub_140056AB0(v14, CurrentStackLocation, v15, v7, v68, v69);
                }
LABEL_79:
                IofCompleteRequest(v7, 0);
                v2 = a2;
                goto LABEL_151;
              }
              if ( (byte_1401694F2 & 0x20) == 0 )
                goto LABEL_79;
              v16 = &stru_140149FE8;
              goto LABEL_25;
            }
            if ( byte_1401694F1 >= 0 )
              goto LABEL_79;
            v18 = *(_QWORD *)(CurrentStackLocation + 8);
            v19 = 0;
            v20 = 0;
            v77 = 0;
            v21 = 0LL;
            v75 = 0;
            v22 = 0;
            v23 = 0;
            v24 = 0;
            if ( *(_BYTE *)(v18 + 2) == 40 )
            {
              v25 = 0LL;
              v26 = 0;
              if ( *(_DWORD *)(v18 + 20) )
                goto LABEL_78;
              v27 = 0;
              v28 = *(_DWORD *)(v18 + 56);
              if ( v28 )
              {
                do
                {
                  v29 = *(unsigned int *)(v18 + 4LL * v27 + 120);
                  if ( (unsigned int)v29 >= 0x80 )
                  {
                    v30 = *(unsigned int *)(v18 + 16);
                    if ( (unsigned int)v29 < (unsigned int)v30 )
                    {
                      v31 = (unsigned int)v29;
                      v32 = *(_DWORD *)(v29 + v18) - 64;
                      if ( v32 )
                      {
                        v33 = v32 - 1;
                        if ( v33 )
                        {
                          if ( v33 == 1 && v31 + 40 <= v30 )
                          {
                            if ( *(_DWORD *)(v31 + v18 + 12) )
                              v25 = (char *)(v31 + v18 + 32);
                            v21 = *(_BYTE **)(v31 + v18 + 24);
LABEL_40:
                            v20 = *(_BYTE *)(v31 + v18 + 8);
                            v24 = 0;
                            v22 = *(_BYTE *)(v31 + v18 + 9);
                            goto LABEL_49;
                          }
                        }
                        else if ( v31 + 56 <= v30 )
                        {
                          v26 = 1;
                          if ( *(_BYTE *)(v31 + v18 + 10) )
                            v25 = (char *)(v31 + v18 + 24);
                          v20 = *(_BYTE *)(v31 + v18 + 8);
                          v21 = *(_BYTE **)(v31 + v18 + 16);
                          v22 = *(_BYTE *)(v31 + v18 + 9);
                        }
                      }
                      else if ( v31 + 40 <= v30 )
                      {
                        if ( *(_BYTE *)(v31 + v18 + 10) )
                          v25 = (char *)(v31 + v18 + 24);
                        v21 = *(_BYTE **)(v31 + v18 + 16);
                        goto LABEL_40;
                      }
                      if ( v26 )
                        break;
                    }
                  }
                  ++v27;
                }
                while ( v27 < v28 );
                v24 = 0;
              }
LABEL_49:
              if ( !v25 )
                goto LABEL_78;
              v34 = *v25;
              v19 = 0;
            }
            else
            {
              v34 = *(_BYTE *)(v18 + 72);
              v21 = *(_BYTE **)(v18 + 32);
              v22 = *(_BYTE *)(v18 + 11);
              v20 = *(_BYTE *)(v18 + 4);
              if ( *(_BYTE *)(v18 + 2) )
                goto LABEL_78;
            }
            if ( ((v34 - 8) & 0x5D) == 0 )
            {
              v35 = *(_BYTE *)(v18 + 3);
              if ( v35 == 1 || !v21 || !v22 )
                goto LABEL_75;
              LOBYTE(v18) = 0;
              v36 = &v21[v22];
              v37 = v21 + 8;
              if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
              {
                if ( v37 <= v36 )
                {
                  LOBYTE(v18) = 1;
                  v19 = v21[2];
                  v23 = v21[1] & 0xF;
                  v24 = v21[3];
                }
              }
              else
              {
                if ( v37 <= v36 )
                {
                  v18 = (unsigned __int64)(v21 + 13);
                  v23 = v21[2] & 0xF;
                  v38 = v22;
                  if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
                    v38 = (unsigned __int8)v21[7] + 8;
                  v39 = (unsigned __int64)&v21[v38];
                  if ( v18 > v39 )
                    v77 = 0;
                  else
                    v77 = v21[12];
                  if ( (unsigned __int64)(v21 + 14) > v39 )
                    v75 = 0;
                  else
                    v75 = *(_BYTE *)v18;
                  LOBYTE(v18) = 1;
                }
                v24 = v75;
                v19 = v77;
              }
              if ( (_BYTE)v18 )
              {
                v40 = v19;
                v41 = v24;
              }
              else
              {
LABEL_75:
                v23 = 0;
                v40 = 0;
                v41 = 0LL;
              }
              v74 = v7;
              LOBYTE(v73) = v41;
              LOBYTE(v72) = v40;
              LOBYTE(v71) = v23;
              LOBYTE(v70) = v20;
              LOBYTE(v69) = v35;
              v42 = (const GUID *)&v82;
LABEL_77:
              LODWORD(v68) = v7->IoStatus.Status;
              sub_140052E64(v41, v18, v42, v7, v68, v69, v70, v71, v72, v73, v74);
            }
LABEL_78:
            v5 = v79;
            v4 = v81 + 8;
            goto LABEL_79;
          }
        }
        else
        {
          v9 = 48;
        }
        MasterIrp->Size = v9;
        MasterIrp->Type = 1;
        *(_DWORD *)(&MasterIrp->Size + 1) = 0;
        MasterIrp->MdlAddress = *(PMDL *)(v2 + 8);
        *(_QWORD *)&MasterIrp->Flags = *(_QWORD *)(v2 + 16);
        LODWORD(MasterIrp->ThreadListEntry.Flink) = _InterlockedExchange((volatile __int32 *)v5 + 10, 0);
        HIDWORD(MasterIrp->ThreadListEntry.Flink) = *(_DWORD *)(v2 + 32);
        v43 = *(_DWORD *)(v2 + 32);
        if ( v43 )
          memmove(&MasterIrp->ThreadListEntry.Blink, (const void *)(v2 + 36), v43);
        v10 = byte_140168DAA == 0;
        v7->IoStatus.Information = MasterIrp->Size;
        *((_BYTE *)&v7->Tail.CompletionKey + 21) = -84;
        v7->IoStatus.Status = 0;
        if ( v10 )
          goto LABEL_79;
        v83 = 0LL;
        IoGetActivityIdIrp(v7, &v83);
        CurrentStackLocation = (__int64)v7->Tail.Overlay.CurrentStackLocation;
        if ( *(_BYTE *)CurrentStackLocation == 14 )
        {
          if ( (byte_1401694F2 & 8) == 0 )
            goto LABEL_79;
          v17 = (const GUID *)&v83;
          v16 = &stru_140148B18;
          goto LABEL_26;
        }
        if ( *(_BYTE *)CurrentStackLocation != 15 )
        {
          if ( *(_BYTE *)CurrentStackLocation != 27 )
            goto LABEL_79;
          if ( *(_BYTE *)(CurrentStackLocation + 1) == 7 && !*(_DWORD *)(CurrentStackLocation + 8) )
          {
            if ( (byte_1401694F2 & 0x40) == 0 )
              goto LABEL_79;
            v44 = (unsigned int *)v7->IoStatus.Information;
            if ( v44 )
              v14 = *v44;
            else
              v14 = 0LL;
            v15 = (const GUID *)&v83;
            goto LABEL_22;
          }
          if ( (byte_1401694F2 & 0x20) == 0 )
            goto LABEL_79;
          v17 = (const GUID *)&v83;
          v16 = &stru_140149FE8;
LABEL_26:
          LODWORD(v68) = v7->IoStatus.Status;
          sub_140052F3C(v11, v16, v17, v7, v68);
          goto LABEL_79;
        }
        if ( byte_1401694F1 >= 0 )
          goto LABEL_79;
        v18 = *(_QWORD *)(CurrentStackLocation + 8);
        v45 = 0;
        v46 = 0;
        v78 = 0;
        v47 = 0LL;
        v76 = 0;
        v48 = 0;
        v49 = 0;
        v50 = 0;
        if ( *(_BYTE *)(v18 + 2) == 40 )
        {
          v51 = 0LL;
          v52 = 0;
          if ( *(_DWORD *)(v18 + 20) )
            goto LABEL_78;
          v53 = 0;
          v54 = *(_DWORD *)(v18 + 56);
          if ( v54 )
          {
            do
            {
              v55 = *(unsigned int *)(v18 + 4LL * v53 + 120);
              if ( (unsigned int)v55 >= 0x80 )
              {
                v56 = *(unsigned int *)(v18 + 16);
                if ( (unsigned int)v55 < (unsigned int)v56 )
                {
                  v57 = (unsigned int)v55;
                  v58 = *(_DWORD *)(v55 + v18) - 64;
                  if ( v58 )
                  {
                    v59 = v58 - 1;
                    if ( v59 )
                    {
                      if ( v59 == 1 && v57 + 40 <= v56 )
                      {
                        if ( *(_DWORD *)(v57 + v18 + 12) )
                          v51 = (char *)(v57 + v18 + 32);
                        v47 = *(_BYTE **)(v57 + v18 + 24);
LABEL_111:
                        v46 = *(_BYTE *)(v57 + v18 + 8);
                        v50 = 0;
                        v48 = *(_BYTE *)(v57 + v18 + 9);
                        goto LABEL_120;
                      }
                    }
                    else if ( v57 + 56 <= v56 )
                    {
                      v52 = 1;
                      if ( *(_BYTE *)(v57 + v18 + 10) )
                        v51 = (char *)(v57 + v18 + 24);
                      v46 = *(_BYTE *)(v57 + v18 + 8);
                      v47 = *(_BYTE **)(v57 + v18 + 16);
                      v48 = *(_BYTE *)(v57 + v18 + 9);
                    }
                  }
                  else if ( v57 + 40 <= v56 )
                  {
                    if ( *(_BYTE *)(v57 + v18 + 10) )
                      v51 = (char *)(v57 + v18 + 24);
                    v47 = *(_BYTE **)(v57 + v18 + 16);
                    goto LABEL_111;
                  }
                  if ( v52 )
                    break;
                }
              }
              ++v53;
            }
            while ( v53 < v54 );
            v50 = 0;
          }
LABEL_120:
          if ( !v51 )
            goto LABEL_78;
          v60 = *v51;
          v45 = 0;
        }
        else
        {
          v60 = *(_BYTE *)(v18 + 72);
          v47 = *(_BYTE **)(v18 + 32);
          v48 = *(_BYTE *)(v18 + 11);
          v46 = *(_BYTE *)(v18 + 4);
          if ( *(_BYTE *)(v18 + 2) )
            goto LABEL_78;
        }
        if ( ((v60 - 8) & 0x5D) != 0 )
          goto LABEL_78;
        if ( *(_BYTE *)(v18 + 3) == 1 || !v47 || !v48 )
          goto LABEL_146;
        v61 = 0;
        v62 = &v47[v48];
        v63 = v47 + 8;
        if ( (unsigned __int8)((*v47 & 0x7F) - 114) <= 1u )
        {
          if ( v63 <= v62 )
          {
            v61 = 1;
            v45 = v47[2];
            v49 = v47[1] & 0xF;
            v50 = v47[3];
          }
        }
        else
        {
          if ( v63 <= v62 )
          {
            v64 = v47 + 13;
            v49 = v47[2] & 0xF;
            v65 = v48;
            if ( (unsigned int)(unsigned __int8)v47[7] + 8 <= v48 )
              v65 = (unsigned __int8)v47[7] + 8;
            v66 = (unsigned __int64)&v47[v65];
            if ( (unsigned __int64)v64 > v66 )
              v78 = 0;
            else
              v78 = v47[12];
            if ( (unsigned __int64)(v47 + 14) > v66 )
              v76 = 0;
            else
              v76 = *v64;
            v61 = 1;
          }
          v50 = v76;
          v45 = v78;
        }
        if ( v61 )
        {
          v67 = v45;
          v41 = v50;
        }
        else
        {
LABEL_146:
          v49 = 0;
          v67 = 0;
          v41 = 0LL;
        }
        v74 = v7;
        v42 = (const GUID *)&v83;
        LOBYTE(v73) = v41;
        LOBYTE(v72) = v67;
        LOBYTE(v71) = v49;
        LOBYTE(v70) = v46;
        LOBYTE(v69) = *(_BYTE *)(v18 + 3);
        goto LABEL_77;
      }
      _InterlockedAdd((volatile signed __int32 *)v5 + 10, 1u);
    }
LABEL_151:
    v5 = (__int64 *)*v5;
    v79 = v5;
  }
  while ( v5 != (__int64 *)v4 );
  v3 = v81;
LABEL_153:
  ExReleaseResourceLite((PERESOURCE)(v3 + 24));
  KeLeaveCriticalRegion();
}
