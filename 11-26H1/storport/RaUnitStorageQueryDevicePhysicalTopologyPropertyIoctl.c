/*
 * XREFs of RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl @ 0x1400A4B80
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaBuildQueryPhysicalTopologyBufferForMiniport @ 0x140008F48 (RaBuildQueryPhysicalTopologyBufferForMiniport.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDevicePhysicalTopologyPropertyIoctl(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  int v3; // esi
  __int64 v4; // rax
  int v7; // ecx
  unsigned int v8; // eax
  unsigned int v9; // r15d
  int PhysicalTopologyBufferForMiniport; // eax
  unsigned int *v11; // r13
  __int64 v12; // rbx
  bool v13; // zf
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  int *v16; // rax
  const EVENT_DESCRIPTOR *v17; // rdx
  __int64 v18; // rdx
  _BYTE *v19; // r9
  unsigned __int8 v20; // di
  char v21; // r11
  char v22; // bl
  char v23; // r10
  char v24; // r12
  char *v25; // r12
  int v26; // ecx
  __int64 v27; // rax
  unsigned __int64 v28; // r13
  __int64 v29; // r8
  int v30; // ecx
  char v31; // r13
  char v32; // cl
  char v33; // r8
  char v34; // al
  char *v35; // r10
  unsigned int v36; // eax
  __int64 v38; // [rsp+20h] [rbp-49h]
  __int64 v39; // [rsp+28h] [rbp-41h]
  __int64 v40; // [rsp+30h] [rbp-39h]
  char v41; // [rsp+60h] [rbp-9h]
  char v42; // [rsp+61h] [rbp-8h]
  int v43; // [rsp+64h] [rbp-5h] BYREF
  size_t Size; // [rsp+68h] [rbp-1h]
  PVOID P[2]; // [rsp+70h] [rbp+7h] BYREF

  v2 = *(_DWORD **)(a2 + 24);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 184);
  P[0] = 0LL;
  v43 = 0;
  v7 = v2[1];
  v8 = *(_DWORD *)(v4 + 8);
  LODWORD(Size) = v8;
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v9 = -1073741637;
LABEL_19:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_20;
    }
    goto LABEL_7;
  }
  if ( v8 < 0x38 )
  {
    if ( v8 < 8 )
    {
      v9 = -1073741789;
      goto LABEL_19;
    }
    *v2 = 56;
    v2[1] = 56;
    *(_QWORD *)(a2 + 56) = 8LL;
LABEL_7:
    v9 = 0;
    goto LABEL_20;
  }
  PhysicalTopologyBufferForMiniport = RaBuildQueryPhysicalTopologyBufferForMiniport(
                                        *(_QWORD *)(a1 + 8),
                                        a2,
                                        (__int64 *)P,
                                        (unsigned int *)&v43);
  v11 = (unsigned int *)P[0];
  v9 = PhysicalTopologyBufferForMiniport;
  if ( PhysicalTopologyBufferForMiniport >= 0 )
  {
    v9 = RaidUnitSendSrbIoControlSynchronously(a1, a2, (__int64)P[0], v43, 0LL, 0, 64);
    if ( ((v9 + 0x80000000) & 0x80000000) != 0 || v9 == -2147483643 )
    {
      v12 = v11[8];
      if ( (unsigned int)Size < (unsigned int)v12 )
        v12 = (unsigned int)Size;
      memset_0(v2, 0, (unsigned int)Size);
      memmove(v2, v11 + 7, (unsigned int)v12);
      *v2 = 56;
      *(_QWORD *)(a2 + 56) = v12;
    }
  }
  if ( v11 )
    ExFreePoolWithTag(v11, 0x72536152u);
  if ( ((v9 + 0x80000000) & 0x80000000) == 0 && v9 != -2147483643 )
    goto LABEL_19;
LABEL_20:
  v13 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v9;
  if ( v13 )
    goto LABEL_86;
  *(_OWORD *)P = 0LL;
  IoGetActivityIdIrp(a2, P);
  v15 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v15 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_86;
    v17 = (const EVENT_DESCRIPTOR *)&EventNonReadWriteRequestComplete;
    goto LABEL_85;
  }
  if ( *(_BYTE *)v15 != 15 )
  {
    if ( *(_BYTE *)v15 != 27 )
      goto LABEL_86;
    if ( *(_BYTE *)(v15 + 1) == 7 && !*(_DWORD *)(v15 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v16 = *(int **)(a2 + 56);
        if ( v16 )
          v3 = *v16;
        LODWORD(v39) = *(_DWORD *)(a2 + 48);
        LODWORD(v38) = v3;
        McTemplateK0pqd_EtwWriteTransfer(v14, v15, (const GUID *)P, a2, v38, v39);
      }
      goto LABEL_86;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_86;
    v17 = &EventPnpRequestComplete;
LABEL_85:
    LODWORD(v38) = *(_DWORD *)(a2 + 48);
    McTemplateK0pd_EtwWriteTransfer(v14, v17, (const GUID *)P, a2, v38);
    goto LABEL_86;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_86;
  v18 = *(_QWORD *)(v15 + 8);
  v19 = 0LL;
  v41 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  if ( *(_BYTE *)(v18 + 2) != 40 )
  {
    v32 = *(_BYTE *)(v18 + 72);
    v19 = *(_BYTE **)(v18 + 32);
    v20 = *(_BYTE *)(v18 + 11);
    v31 = *(_BYTE *)(v18 + 4);
    if ( *(_BYTE *)(v18 + 2) )
      goto LABEL_86;
LABEL_60:
    LOBYTE(v14) = v32 - 8;
    if ( (v14 & 0x5D) != 0 )
      goto LABEL_86;
    v33 = *(_BYTE *)(v18 + 3);
    if ( v33 == 1 || !v19 || !v20 )
      goto LABEL_79;
    v34 = *v19 & 0x7F;
    if ( v34 == 114 || v34 == 115 )
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_77;
      v22 = v19[2];
      v21 = v19[1] & 0xF;
      v23 = v19[3];
    }
    else
    {
      v14 = (unsigned __int64)&v19[v20];
      LOBYTE(v18) = 0;
      if ( (unsigned __int64)(v19 + 8) > v14 )
        goto LABEL_77;
      v35 = v19 + 13;
      v21 = v19[2] & 0xF;
      v36 = v20;
      if ( (unsigned int)(unsigned __int8)v19[7] + 8 <= v20 )
        v36 = (unsigned __int8)v19[7] + 8;
      v14 = (unsigned __int64)&v19[v36];
      if ( (unsigned __int64)v35 <= v14 )
        v22 = v19[12];
      if ( (unsigned __int64)(v19 + 14) > v14 )
        v23 = 0;
      else
        v23 = *v35;
    }
    LOBYTE(v18) = 1;
LABEL_77:
    if ( (_BYTE)v18 )
      v24 = 1;
LABEL_79:
    if ( byte_140173441 < 0 )
    {
      if ( !v24 )
      {
        v23 = 0;
        v22 = 0;
        v21 = 0;
      }
      LOBYTE(v40) = v31;
      LOBYTE(v39) = v33;
      LODWORD(v38) = *(_DWORD *)(a2 + 48);
      McTemplateK0pduuuuup_EtwWriteTransfer(v14, v18, (const GUID *)P, a2, v38, v39, v40, v21, v22, v23, a2);
    }
    goto LABEL_86;
  }
  v25 = 0LL;
  v42 = 0;
  if ( !*(_DWORD *)(v18 + 20) )
  {
    v26 = *(_DWORD *)(v18 + 56);
    v27 = 0LL;
    v43 = 0;
    LODWORD(Size) = v26;
    if ( v26 )
    {
      do
      {
        v14 = *(unsigned int *)(v18 + 4 * v27 + 120);
        if ( (unsigned int)v14 >= 0x80 )
        {
          v28 = *(unsigned int *)(v18 + 16);
          if ( (unsigned int)v14 < (unsigned int)v28 )
          {
            v29 = (unsigned int)v14;
            v30 = *(_DWORD *)(v14 + v18) - 64;
            if ( v30 )
            {
              v14 = (unsigned int)(v30 - 1);
              if ( (_DWORD)v14 )
              {
                if ( (_DWORD)v14 == 1 )
                {
                  v14 = v29 + 40;
                  if ( v29 + 40 <= v28 )
                  {
                    if ( *(_DWORD *)(v29 + v18 + 12) )
                      v25 = (char *)(v29 + v18 + 32);
                    v19 = *(_BYTE **)(v29 + v18 + 24);
LABEL_45:
                    v31 = *(_BYTE *)(v29 + v18 + 8);
                    v20 = *(_BYTE *)(v29 + v18 + 9);
                    goto LABEL_54;
                  }
                }
              }
              else
              {
                v14 = v29 + 56;
                if ( v29 + 56 <= v28 )
                {
                  v42 = 1;
                  if ( *(_BYTE *)(v29 + v18 + 10) )
                    v25 = (char *)(v29 + v18 + 24);
                  v19 = *(_BYTE **)(v29 + v18 + 16);
                  v20 = *(_BYTE *)(v29 + v18 + 9);
                  v41 = *(_BYTE *)(v29 + v18 + 8);
                }
              }
            }
            else
            {
              v14 = v29 + 40;
              if ( v29 + 40 <= v28 )
              {
                if ( *(_BYTE *)(v29 + v18 + 10) )
                  v25 = (char *)(v29 + v18 + 24);
                v19 = *(_BYTE **)(v29 + v18 + 16);
                goto LABEL_45;
              }
            }
            if ( v42 )
              break;
          }
        }
        v27 = (unsigned int)(v43 + 1);
        v43 = v27;
      }
      while ( (unsigned int)v27 < (unsigned int)Size );
      v31 = v41;
LABEL_54:
      if ( v25 )
      {
        v32 = *v25;
        v24 = 0;
        goto LABEL_60;
      }
    }
  }
LABEL_86:
  IofCompleteRequest((PIRP)a2, 0);
  return v9;
}
