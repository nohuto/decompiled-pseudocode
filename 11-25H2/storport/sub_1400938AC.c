/*
 * XREFs of sub_1400938AC @ 0x1400938AC
 * Callers:
 *     sub_14002E460 @ 0x14002E460 (sub_14002E460.c)
 * Callees:
 *     sub_140052E64 @ 0x140052E64 (sub_140052E64.c)
 *     sub_140052F3C @ 0x140052F3C (sub_140052F3C.c)
 *     sub_140056AB0 @ 0x140056AB0 (sub_140056AB0.c)
 *     sub_1400680F0 @ 0x1400680F0 (sub_1400680F0.c)
 *     sub_14008B5C8 @ 0x14008B5C8 (sub_14008B5C8.c)
 *     sub_14008D658 @ 0x14008D658 (sub_14008D658.c)
 *     sub_1400902E4 @ 0x1400902E4 (sub_1400902E4.c)
 *     sub_1400A3C90 @ 0x1400A3C90 (sub_1400A3C90.c)
 *     __security_check_cookie @ 0x14013C590 (__security_check_cookie.c)
 */

__int64 __fastcall sub_1400938AC(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  int v3; // edi
  int v4; // ebp
  char v5; // r13
  PVOID v6; // r15
  PHYSICAL_ADDRESS PhysicalAddress; // rbx
  __int64 v9; // r12
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  struct _KPROCESS *RequestorProcess; // r12
  bool v14; // zf
  unsigned __int64 v15; // rcx
  __int64 v16; // rdx
  int *v17; // rax
  const EVENT_DESCRIPTOR *v18; // rdx
  unsigned __int64 v19; // rdx
  char v20; // r12
  _BYTE *v21; // r9
  unsigned __int8 v22; // r10
  char v23; // bl
  char v24; // r11
  char v25; // r13
  char *v26; // r11
  unsigned int v27; // r15d
  unsigned __int64 v28; // r14
  __int64 v29; // r8
  int v30; // ecx
  char v31; // cl
  char v32; // r8
  _BYTE *v33; // rax
  unsigned int v34; // eax
  char v35; // al
  __int64 v37; // [rsp+20h] [rbp-D8h]
  char v38; // [rsp+60h] [rbp-98h]
  char v39; // [rsp+61h] [rbp-97h]
  unsigned int v41; // [rsp+68h] [rbp-90h]
  GUID v42; // [rsp+70h] [rbp-88h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+80h] [rbp-78h] BYREF

  v2 = *(_QWORD *)(a2 + 184);
  v3 = 0;
  *(_QWORD *)(a2 + 56) = 0LL;
  v4 = 0;
  v5 = 0;
  v6 = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  PhysicalAddress.QuadPart = 0LL;
  v9 = a1;
  if ( !(unsigned int)sub_1400902E4() || sub_14008B5C8() && *(struct _KTHREAD **)(a2 + 152) == KeGetCurrentThread() )
  {
    if ( *(_DWORD *)(v2 + 16) >= 0x18u )
    {
      if ( *(_DWORD *)(v2 + 8) >= 8u )
      {
        v12 = *(_QWORD *)(a2 + 24);
        if ( *(_DWORD *)v12 != 24
          || *(_DWORD *)(v12 + 4) < 0x18u
          || (v6 = *(PVOID *)(v12 + 8), (unsigned int)sub_1400902E4()) && v6 > MmHighestUserAddress )
        {
          v4 = -1073741811;
        }
        else
        {
          if ( !(unsigned int)sub_1400902E4() )
          {
            RequestorProcess = IoGetRequestorProcess((PIRP)a2);
            if ( RequestorProcess && RequestorProcess != (struct _KPROCESS *)PsGetCurrentProcess() )
            {
              KeStackAttachProcess(RequestorProcess, &ApcState);
              v5 = 1;
            }
            v9 = a1;
          }
          if ( MmIsAddressValid(v6) )
          {
            PhysicalAddress = MmGetPhysicalAddress(v6);
            if ( (*(_DWORD *)(v12 + 20) & 1) != 0 )
              v4 = sub_14008D658(v9, PhysicalAddress, *(_DWORD *)(v12 + 16));
          }
          else
          {
            v4 = -1073741503;
          }
          if ( !(unsigned int)sub_1400902E4() && v5 )
            KeUnstackDetachProcess(&ApcState);
          if ( v4 >= 0 )
          {
            **(PHYSICAL_ADDRESS **)(a2 + 24) = PhysicalAddress;
            *(_QWORD *)(a2 + 56) = 8LL;
            if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
              && (HIDWORD(off_140168120->Timer) & 1) != 0
              && BYTE1(off_140168120->Timer) >= 4u )
            {
              sub_1400680F0(
                (__int64)off_140168120->AttachedDevice,
                0x1Bu,
                (__int64)&unk_14014D880,
                v6,
                PhysicalAddress.QuadPart);
            }
            goto LABEL_35;
          }
        }
      }
      else
      {
        v4 = -1073741789;
      }
    }
    else
    {
      v4 = -1073741820;
    }
  }
  else
  {
    v4 = -1073741790;
  }
  if ( off_140168120 != (PDEVICE_OBJECT)&off_140168120
    && (HIDWORD(off_140168120->Timer) & 1) != 0
    && BYTE1(off_140168120->Timer) >= 2u )
  {
    sub_1400A3C90(off_140168120->AttachedDevice, v10, v11, v6, v4);
  }
LABEL_35:
  v14 = byte_140168DAA == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v4;
  if ( v14 )
    goto LABEL_99;
  v42 = 0LL;
  IoGetActivityIdIrp(a2, &v42);
  v16 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v16 == 14 )
  {
    if ( (byte_1401694F2 & 8) == 0 )
      goto LABEL_99;
    v18 = (const EVENT_DESCRIPTOR *)&unk_140148B18;
    goto LABEL_98;
  }
  if ( *(_BYTE *)v16 != 15 )
  {
    if ( *(_BYTE *)v16 != 27 )
      goto LABEL_99;
    if ( *(_BYTE *)(v16 + 1) == 7 && !*(_DWORD *)(v16 + 8) )
    {
      if ( (byte_1401694F2 & 0x40) != 0 )
      {
        v17 = *(int **)(a2 + 56);
        if ( v17 )
          v3 = *v17;
        LODWORD(v37) = v3;
        sub_140056AB0(v15, v16, &v42, a2, v37, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_99;
    }
    if ( (byte_1401694F2 & 0x20) == 0 )
      goto LABEL_99;
    v18 = &stru_140149FE8;
LABEL_98:
    LODWORD(v37) = *(_DWORD *)(a2 + 48);
    sub_140052F3C(v15, v18, &v42, a2, v37);
    goto LABEL_99;
  }
  if ( byte_1401694F1 >= 0 )
    goto LABEL_99;
  v19 = *(_QWORD *)(v16 + 8);
  v20 = 0;
  v21 = 0LL;
  v38 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  if ( *(_BYTE *)(v19 + 2) != 40 )
  {
    v31 = *(_BYTE *)(v19 + 72);
    v21 = *(_BYTE **)(v19 + 32);
    v22 = *(_BYTE *)(v19 + 11);
    v20 = *(_BYTE *)(v19 + 4);
    if ( !*(_BYTE *)(v19 + 2) )
      goto LABEL_75;
    goto LABEL_99;
  }
  v26 = 0LL;
  v39 = 0;
  if ( *(_DWORD *)(v19 + 20) )
    goto LABEL_99;
  v27 = 0;
  v41 = *(_DWORD *)(v19 + 56);
  if ( !v41 )
    goto LABEL_72;
  while ( 1 )
  {
    v15 = *(unsigned int *)(v19 + 4LL * v27 + 120);
    if ( (unsigned int)v15 >= 0x80 )
    {
      v28 = *(unsigned int *)(v19 + 16);
      if ( (unsigned int)v15 < (unsigned int)v28 )
        break;
    }
LABEL_66:
    if ( ++v27 >= v41 )
      goto LABEL_72;
  }
  v29 = (unsigned int)v15;
  v30 = *(_DWORD *)(v15 + v19) - 64;
  if ( v30 )
  {
    v15 = (unsigned int)(v30 - 1);
    if ( (_DWORD)v15 )
    {
      if ( (_DWORD)v15 == 1 )
      {
        v15 = v29 + 40;
        if ( v29 + 40 <= v28 )
        {
          if ( *(_DWORD *)(v29 + v19 + 12) )
            v26 = (char *)(v29 + v19 + 32);
          v21 = *(_BYTE **)(v29 + v19 + 24);
          goto LABEL_71;
        }
      }
    }
    else
    {
      v15 = v29 + 56;
      if ( v29 + 56 <= v28 )
      {
        v39 = 1;
        if ( *(_BYTE *)(v29 + v19 + 10) )
          v26 = (char *)(v29 + v19 + 24);
        v20 = *(_BYTE *)(v29 + v19 + 8);
        v21 = *(_BYTE **)(v29 + v19 + 16);
        v22 = *(_BYTE *)(v29 + v19 + 9);
      }
    }
    goto LABEL_65;
  }
  v15 = v29 + 40;
  if ( v29 + 40 > v28 )
  {
LABEL_65:
    if ( v39 )
      goto LABEL_72;
    goto LABEL_66;
  }
  if ( *(_BYTE *)(v29 + v19 + 10) )
    v26 = (char *)(v29 + v19 + 24);
  v21 = *(_BYTE **)(v29 + v19 + 16);
LABEL_71:
  v22 = *(_BYTE *)(v29 + v19 + 9);
  v20 = *(_BYTE *)(v29 + v19 + 8);
LABEL_72:
  if ( v26 )
  {
    v31 = *v26;
    v24 = 0;
LABEL_75:
    LOBYTE(v15) = v31 - 8;
    if ( (v15 & 0x5D) == 0 )
    {
      v32 = *(_BYTE *)(v19 + 3);
      if ( v32 == 1 || !v21 || !v22 )
        goto LABEL_94;
      LOBYTE(v19) = 0;
      v15 = (unsigned __int64)&v21[v22];
      v33 = v21 + 8;
      if ( (unsigned __int8)((*v21 & 0x7F) - 114) <= 1u )
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          LOBYTE(v19) = 1;
          v24 = v21[2];
          v23 = v21[1] & 0xF;
          v25 = v21[3];
        }
      }
      else
      {
        if ( (unsigned __int64)v33 <= v15 )
        {
          v23 = v21[2] & 0xF;
          v34 = v22;
          if ( (unsigned int)(unsigned __int8)v21[7] + 8 <= v22 )
            v34 = (unsigned __int8)v21[7] + 8;
          v15 = (unsigned __int64)(v21 + 13);
          v19 = (unsigned __int64)&v21[v34];
          if ( (unsigned __int64)(v21 + 13) > v19 )
            v38 = 0;
          else
            v38 = v21[12];
          if ( (unsigned __int64)(v21 + 14) <= v19 )
            v25 = *(_BYTE *)v15;
          LOBYTE(v19) = 1;
        }
        v24 = v38;
      }
      if ( (_BYTE)v19 )
      {
        LOBYTE(v3) = v24;
        v35 = v25;
      }
      else
      {
LABEL_94:
        v23 = 0;
        v35 = 0;
      }
      LODWORD(v37) = *(_DWORD *)(a2 + 48);
      sub_140052E64(v15, v19, &v42, a2, v37, v32, v20, v23, v3, v35, a2);
    }
  }
LABEL_99:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v4;
}
