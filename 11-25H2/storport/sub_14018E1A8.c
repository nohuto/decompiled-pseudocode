/*
 * XREFs of sub_14018E1A8 @ 0x14018E1A8
 * Callers:
 *     sub_14018C298 @ 0x14018C298 (sub_14018C298.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400BCC38 @ 0x1400BCC38 (sub_1400BCC38.c)
 *     sub_1400CDB80 @ 0x1400CDB80 (sub_1400CDB80.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 *     memset_0 @ 0x14013C980 (memset_0.c)
 */

__int64 __fastcall sub_14018E1A8(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  int v3; // ebx
  IRP *v4; // rdi
  unsigned int v5; // r15d
  struct _IRP *MasterIrp; // rax
  __int64 v7; // r13
  struct _IRP *v8; // r14
  unsigned int v9; // eax
  _QWORD *v10; // r12
  PMDL *p_MdlAddress; // rsi
  _QWORD *v12; // r13
  unsigned __int64 v13; // rbp
  int *v14; // rax
  int v15; // ecx
  int v16; // eax
  int v17; // eax
  __int64 Size; // rax
  bool v19; // zf
  unsigned __int64 v20; // rcx
  __int64 v21; // rdx
  int *Information; // rax
  const EVENT_DESCRIPTOR *v23; // rdx
  __int64 v24; // rdx
  char v25; // r12
  _BYTE *v26; // r9
  unsigned __int8 v27; // r10
  char v28; // si
  char v29; // r11
  char v30; // r13
  char *v31; // r11
  unsigned int v32; // r14d
  unsigned __int64 v33; // rbp
  __int64 v34; // r8
  int v35; // ecx
  char v36; // cl
  char v37; // r8
  _BYTE *v38; // rax
  unsigned int v39; // eax
  unsigned __int64 v40; // r8
  char v41; // al
  int Status; // [rsp+20h] [rbp-B8h]
  char v44; // [rsp+60h] [rbp-78h]
  char v45; // [rsp+61h] [rbp-77h]
  char v46; // [rsp+61h] [rbp-77h]
  unsigned int v47; // [rsp+64h] [rbp-74h]
  GUID v50; // [rsp+80h] [rbp-58h] BYREF

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  v3 = 0;
  a2->IoStatus.Information = 0LL;
  v4 = a2;
  v5 = 0;
  if ( (*(_BYTE *)(a1 + 144) & 1) != 0 && *(_QWORD *)(a1 + 592) )
  {
    MasterIrp = a2->AssociatedIrp.MasterIrp;
    if ( MasterIrp
      && CurrentStackLocation->Parameters.Create.Options >= 0x10
      && MasterIrp->Type == 1
      && MasterIrp->Size >= 0x10u )
    {
      v45 = *(_BYTE *)(&MasterIrp->Size + 1) & 1;
      if ( CurrentStackLocation->Parameters.Read.Length >= 8 )
      {
        *(_QWORD *)&v50.Data1 = sub_1400CDB80(a1, (__int64)MasterIrp->MdlAddress ^ a1, 0, 0LL);
        v7 = *(_QWORD *)&v50.Data1;
        if ( *(_QWORD *)&v50.Data1 )
        {
          v8 = v4->AssociatedIrp.MasterIrp;
          memset_0(v8, 0, CurrentStackLocation->Parameters.Read.Length);
          v8->Type = 1;
          KeEnterCriticalRegion();
          ExAcquireResourceSharedLite((PERESOURCE)(v7 + 632), 1u);
          v9 = (unsigned __int16)(32 * *(_WORD *)(v7 + 624) + 8);
          v8->Size = v9;
          if ( CurrentStackLocation->Parameters.Read.Length < v9 )
          {
            Size = 8LL;
          }
          else
          {
            v10 = *(_QWORD **)(v7 + 608);
            p_MdlAddress = &v8->MdlAddress;
            if ( v10 != (_QWORD *)(v7 + 608) )
            {
              v12 = (_QWORD *)(v7 + 608);
              do
              {
                v13 = (unsigned __int64)(v10 - 8);
                if ( (int)sub_1400BCC38((__int64)(v10 - 8)) >= 0 )
                {
                  v14 = (int *)(v13 + 568);
                  if ( !v45 || *v14 == 2 )
                  {
                    *(_DWORD *)p_MdlAddress = 2097153;
                    v15 = *v14;
                    if ( *v14 == 2 )
                    {
                      *((_DWORD *)p_MdlAddress + 1) |= 1u;
                    }
                    else if ( v15 == 3 )
                    {
                      *((_DWORD *)p_MdlAddress + 1) |= 2u;
                    }
                    else if ( v15 == 4 )
                    {
                      v16 = *((_DWORD *)p_MdlAddress + 1);
                      if ( **(_DWORD **)(v13 + 1272) == 1 )
                        v17 = v16 | 0x10;
                      else
                        v17 = v16 | 4;
                      *((_DWORD *)p_MdlAddress + 1) = v17;
                    }
                    if ( (*(_BYTE *)(v13 + 136) & 4) != 0 )
                      *((_DWORD *)p_MdlAddress + 1) |= 8u;
                    p_MdlAddress[1] = (PMDL)(v13 ^ a1);
                    *((_WORD *)p_MdlAddress + 8) = *(_WORD *)(v13 + 4);
                    *((_DWORD *)p_MdlAddress + 5) = *(_DWORD *)(v13 + 572);
                    if ( *(_DWORD *)(v13 + 572) == 1 )
                    {
                      *((_WORD *)p_MdlAddress + 12) = *(_WORD *)(v13 + 20);
                      *((_WORD *)p_MdlAddress + 13) = *(_WORD *)(v13 + 8);
                    }
                    ++*(_DWORD *)(&v8->Size + 1);
                    p_MdlAddress += 4;
                  }
                  ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v13 + 552));
                }
                v10 = (_QWORD *)*v10;
              }
              while ( v10 != v12 );
              v4 = a2;
              v5 = 0;
              v7 = *(_QWORD *)&v50.Data1;
            }
            if ( *(_DWORD *)(&v8->Size + 1) < *(_DWORD *)(v7 + 624) )
              v8->Size = 32 * *(&v8->Size + 1) + 8;
            Size = v8->Size;
          }
          v4->IoStatus.Information = Size;
          ExReleaseResourceLite((PERESOURCE)(v7 + 632));
          KeLeaveCriticalRegion();
          ExReleaseRundownProtectionCacheAware(*(PEX_RUNDOWN_REF_CACHE_AWARE *)(v7 + 40));
        }
        else
        {
          v5 = -1073741275;
        }
      }
      else
      {
        v5 = -1073741789;
      }
    }
    else
    {
      v5 = -1073741811;
    }
  }
  else
  {
    v5 = -1073741637;
  }
  v19 = byte_140168DAA == 0;
  *((_BYTE *)&v4->Tail.CompletionKey + 21) = -84;
  v4->IoStatus.Status = v5;
  if ( v19 )
    goto LABEL_105;
  v50 = 0LL;
  IoGetActivityIdIrp(v4, &v50);
  v21 = (__int64)v4->Tail.Overlay.CurrentStackLocation;
  if ( *(_BYTE *)v21 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_105;
    Status = v4->IoStatus.Status;
    v23 = &stru_140148B18;
    goto LABEL_104;
  }
  if ( *(_BYTE *)v21 != 15 )
  {
    if ( *(_BYTE *)v21 != 27 )
      goto LABEL_105;
    if ( *(_BYTE *)(v21 + 1) == 7 && !*(_DWORD *)(v21 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        Information = (int *)v4->IoStatus.Information;
        if ( Information )
          v3 = *Information;
        sub_140056AB0(v20, v21, &v50, v4, v3, v4->IoStatus.Status);
      }
      goto LABEL_105;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_105;
    v23 = &stru_140149FE8;
    Status = v4->IoStatus.Status;
LABEL_104:
    sub_140052F3C(v20, v23, &v50, v4, Status);
    goto LABEL_105;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_105;
  v24 = *(_QWORD *)(v21 + 8);
  v25 = 0;
  v26 = 0LL;
  v44 = 0;
  v27 = 0;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  if ( *(_BYTE *)(v24 + 2) != 40 )
  {
    v36 = *(_BYTE *)(v24 + 72);
    v26 = *(_BYTE **)(v24 + 32);
    v27 = *(_BYTE *)(v24 + 11);
    v25 = *(_BYTE *)(v24 + 4);
    if ( !*(_BYTE *)(v24 + 2) )
      goto LABEL_81;
    goto LABEL_105;
  }
  v31 = 0LL;
  v46 = 0;
  if ( *(_DWORD *)(v24 + 20) )
    goto LABEL_105;
  v32 = 0;
  v47 = *(_DWORD *)(v24 + 56);
  if ( !v47 )
    goto LABEL_78;
  while ( 1 )
  {
    v20 = *(unsigned int *)(v24 + 4LL * v32 + 120);
    if ( (unsigned int)v20 >= 0x80 )
    {
      v33 = *(unsigned int *)(v24 + 16);
      if ( (unsigned int)v20 < (unsigned int)v33 )
        break;
    }
LABEL_72:
    if ( ++v32 >= v47 )
      goto LABEL_78;
  }
  v34 = (unsigned int)v20;
  v35 = *(_DWORD *)(v20 + v24) - 64;
  if ( v35 )
  {
    v20 = (unsigned int)(v35 - 1);
    if ( (_DWORD)v20 )
    {
      if ( (_DWORD)v20 == 1 )
      {
        v20 = v34 + 40;
        if ( v34 + 40 <= v33 )
        {
          if ( *(_DWORD *)(v34 + v24 + 12) )
            v31 = (char *)(v34 + v24 + 32);
          v26 = *(_BYTE **)(v34 + v24 + 24);
          goto LABEL_77;
        }
      }
    }
    else
    {
      v20 = v34 + 56;
      if ( v34 + 56 <= v33 )
      {
        v46 = 1;
        if ( *(_BYTE *)(v34 + v24 + 10) )
          v31 = (char *)(v34 + v24 + 24);
        v25 = *(_BYTE *)(v34 + v24 + 8);
        v26 = *(_BYTE **)(v34 + v24 + 16);
        v27 = *(_BYTE *)(v34 + v24 + 9);
      }
    }
    goto LABEL_71;
  }
  v20 = v34 + 40;
  if ( v34 + 40 > v33 )
  {
LABEL_71:
    if ( v46 )
      goto LABEL_78;
    goto LABEL_72;
  }
  if ( *(_BYTE *)(v34 + v24 + 10) )
    v31 = (char *)(v34 + v24 + 24);
  v26 = *(_BYTE **)(v34 + v24 + 16);
LABEL_77:
  v27 = *(_BYTE *)(v34 + v24 + 9);
  v25 = *(_BYTE *)(v34 + v24 + 8);
LABEL_78:
  if ( v31 )
  {
    v36 = *v31;
    v29 = 0;
LABEL_81:
    LOBYTE(v20) = v36 - 8;
    if ( (v20 & 0x5D) == 0 )
    {
      if ( *(_BYTE *)(v24 + 3) == 1 || !v26 || !v27 )
        goto LABEL_100;
      v37 = 0;
      v20 = (unsigned __int64)&v26[v27];
      v38 = v26 + 8;
      if ( (unsigned __int8)((*v26 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v38 <= v20 )
        {
          v37 = 1;
          v29 = v26[2];
          v28 = v26[1] & 0xF;
          v30 = v26[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v38 <= v20 )
        {
          v28 = v26[2] & 0xF;
          v39 = v27;
          if ( (unsigned int)(unsigned __int8)v26[7] + 8 <= v27 )
            v39 = (unsigned __int8)v26[7] + 8;
          v20 = (unsigned __int64)(v26 + 13);
          v40 = (unsigned __int64)&v26[v39];
          if ( (unsigned __int64)(v26 + 13) > v40 )
            v44 = 0;
          else
            v44 = v26[12];
          if ( (unsigned __int64)(v26 + 14) <= v40 )
            v30 = *(_BYTE *)v20;
          v37 = 1;
        }
        v29 = v44;
      }
      if ( v37 )
      {
        LOBYTE(v3) = v29;
        v41 = v30;
      }
      else
      {
LABEL_100:
        v28 = 0;
        v41 = 0;
      }
      sub_140052E64(v20, v24, &v50, v4, v4->IoStatus.Status, *(_BYTE *)(v24 + 3), v25, v28, v3, v41, v4);
    }
  }
LABEL_105:
  IofCompleteRequest(v4, 0);
  return v5;
}
