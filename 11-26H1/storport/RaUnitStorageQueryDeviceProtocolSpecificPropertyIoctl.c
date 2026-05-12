/*
 * XREFs of RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl @ 0x1400088DC
 * Callers:
 *     RaUnitStorageQueryPropertyIoctl @ 0x1401B2144 (RaUnitStorageQueryPropertyIoctl.c)
 * Callees:
 *     RaidUnitSendSrbIoControlSynchronously @ 0x1400082A8 (RaidUnitSendSrbIoControlSynchronously.c)
 *     RaBuildQueryProtocolSpecificPropertyBufferForMiniport @ 0x1400095B0 (RaBuildQueryProtocolSpecificPropertyBufferForMiniport.c)
 *     McTemplateK0pd_EtwWriteTransfer @ 0x140057920 (McTemplateK0pd_EtwWriteTransfer.c)
 *     McTemplateK0pduuuuup_EtwWriteTransfer @ 0x14005D468 (McTemplateK0pduuuuup_EtwWriteTransfer.c)
 *     McTemplateK0pqd_EtwWriteTransfer @ 0x14005D540 (McTemplateK0pqd_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x140138590 (__security_check_cookie.c)
 *     memmove @ 0x140138680 (memmove.c)
 *     memset_0 @ 0x140138980 (memset_0.c)
 */

__int64 __fastcall RaUnitStorageQueryDeviceProtocolSpecificPropertyIoctl(__int64 a1, __int64 a2)
{
  __int64 v4; // rax
  int v5; // edi
  __int64 v6; // r15
  unsigned int *v7; // r13
  unsigned int v8; // edx
  int v9; // ecx
  unsigned __int64 v10; // r9
  int v11; // esi
  unsigned int v12; // eax
  char v13; // bl
  unsigned int v14; // r8d
  __m128i v15; // xmm1
  __int128 v16; // xmm2
  __int128 v17; // xmm3
  __int128 v18; // xmm0
  size_t v19; // r12
  int v20; // eax
  __m128i v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  __int64 v25; // xmm0_8
  unsigned int v26; // ecx
  unsigned int v27; // eax
  unsigned int v28; // ebx
  int v29; // eax
  __int64 v30; // rax
  bool v31; // zf
  unsigned __int64 v32; // rcx
  __int64 v33; // rdx
  int *v34; // rax
  void *v35; // rdx
  __int64 v36; // rdx
  _BYTE *v37; // r9
  unsigned __int8 v38; // r15
  char v39; // r10
  char v40; // bl
  char v41; // r11
  char v42; // r12
  char *v43; // r12
  int v44; // ecx
  __int64 v45; // rax
  unsigned __int64 v46; // r13
  __int64 v47; // r8
  int v48; // ecx
  char v49; // r13
  char v50; // cl
  char v51; // r8
  char v52; // al
  char *v53; // r11
  unsigned int v54; // eax
  char v56; // [rsp+60h] [rbp-A0h]
  char v57; // [rsp+61h] [rbp-9Fh]
  int v58; // [rsp+64h] [rbp-9Ch] BYREF
  unsigned int *v59; // [rsp+68h] [rbp-98h] BYREF
  __int64 v60; // [rsp+70h] [rbp-90h]
  __m128i v61; // [rsp+78h] [rbp-88h]
  __int128 v62; // [rsp+88h] [rbp-78h]
  __int128 v63; // [rsp+98h] [rbp-68h]
  __int128 v64; // [rsp+A8h] [rbp-58h]
  char v65[32]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v66; // [rsp+E0h] [rbp-20h]
  __int128 v67; // [rsp+F0h] [rbp-10h]
  __int128 v68; // [rsp+100h] [rbp+0h] BYREF

  *(_QWORD *)&v68 = a1;
  memset_0(v65, 0, 0x40uLL);
  v4 = *(_QWORD *)(a2 + 184);
  LOBYTE(v5) = 0;
  v6 = *(_QWORD *)(a2 + 24);
  v7 = 0LL;
  v59 = 0LL;
  v58 = 0;
  v8 = *(_DWORD *)(v4 + 16);
  v9 = *(_DWORD *)(v6 + 4);
  v10 = *(unsigned int *)(v4 + 8);
  if ( v9 )
  {
    if ( v9 == 1 )
    {
      v11 = 0;
      goto LABEL_42;
    }
    v11 = -1073741637;
    goto LABEL_41;
  }
  if ( *(_DWORD *)v6 == 50 )
  {
    v12 = 48;
    v13 = 0;
    v14 = 48;
  }
  else
  {
    if ( *(_DWORD *)v6 != 68 )
    {
LABEL_7:
      v11 = -1073741585;
LABEL_41:
      *(_QWORD *)(a2 + 56) = 0LL;
      goto LABEL_42;
    }
    v12 = 80;
    v13 = 1;
    v14 = 72;
  }
  if ( v8 < v12 )
    goto LABEL_7;
  if ( v13 )
  {
    if ( *(_DWORD *)(v6 + 8) != 1 || *(_DWORD *)(v6 + 12) != 72 )
    {
      v11 = -1073741585;
      goto LABEL_38;
    }
    v18 = *(_OWORD *)(v6 + 48);
    v15 = *(__m128i *)(v6 + 16);
    v16 = *(_OWORD *)(v6 + 32);
    v17 = *(_OWORD *)(v6 + 64);
    v60 = *(_QWORD *)(v6 + 48);
  }
  else
  {
    v15 = *(__m128i *)(v6 + 8);
    v16 = *(_OWORD *)(v6 + 24);
    v17 = v67;
    v60 = *(_QWORD *)(v6 + 40);
    *(_QWORD *)&v66 = v60;
    v18 = v66;
  }
  v64 = v17;
  v63 = v18;
  v62 = v16;
  v61 = v15;
  if ( !_mm_cvtsi128_si32(v15)
    || !v15.m128i_i32[1]
    || (_DWORD)v16 && ((unsigned int)v16 < (unsigned __int64)(v13 != 0 ? 0x18 : 0) + 40 || !DWORD1(v16)) )
  {
    goto LABEL_7;
  }
  if ( (unsigned int)v10 >= v14 )
  {
    v19 = v10;
    if ( v10 < (unsigned int)v16 + DWORD1(v16) + 8 )
      goto LABEL_7;
    v20 = RaBuildQueryProtocolSpecificPropertyBufferForMiniport(*(_QWORD *)(a1 + 8), a2, &v59, &v58);
    v7 = v59;
    v11 = v20;
    if ( v20 >= 0 )
    {
      v11 = RaidUnitSendSrbIoControlSynchronously(v68, a2, (__int64)v59, v58, 0LL, 0, 64);
      if ( v11 >= 0 )
      {
        memset_0((void *)v6, 0, v19);
        v21 = v61;
        v22 = v62;
        if ( v13 )
        {
          *(_DWORD *)v6 = 1;
          *(_DWORD *)(v6 + 4) = 72;
          *(__m128i *)(v6 + 8) = v21;
          v23 = v63;
          *(_OWORD *)(v6 + 24) = v22;
          v24 = v64;
          *(_OWORD *)(v6 + 40) = v23;
          *(_OWORD *)(v6 + 56) = v24;
        }
        else
        {
          *(__m128i *)(v6 + 8) = v61;
          *(_DWORD *)v6 = 48;
          v25 = v60;
          *(_OWORD *)(v6 + 24) = v22;
          *(_DWORD *)(v6 + 4) = 48;
          *(_QWORD *)(v6 + 40) = v25;
        }
        *(_DWORD *)(v6 + 32) = v7[15];
        v26 = v7[14];
        if ( v26 )
        {
          v27 = *(_DWORD *)(v6 + 28);
          if ( v27 >= v26 )
            v27 = v7[14];
          v28 = v27;
          memmove((void *)(v6 + *(unsigned int *)(v6 + 24) + 8LL), (char *)v7 + v7[13] + 36, v27);
          v29 = *(_DWORD *)(v6 + 24) + 8;
          *(_DWORD *)(v6 + 28) = v28;
          v30 = v28 + v29;
        }
        else
        {
          *(_DWORD *)(v6 + 28) = 0;
          v30 = v13 != 0 ? 72LL : 48LL;
        }
        *(_QWORD *)(a2 + 56) = v30;
      }
    }
  }
  else
  {
    if ( (unsigned int)v10 < 8 )
    {
      v11 = -1073741789;
      goto LABEL_41;
    }
    v11 = 0;
    *(_DWORD *)v6 = v13 != 0 ? 1 : 48;
    *(_DWORD *)(v6 + 4) = v13 != 0 ? 72 : 48;
    *(_QWORD *)(a2 + 56) = 8LL;
  }
LABEL_38:
  if ( v7 )
    ExFreePoolWithTag(v7, 0x72536152u);
  if ( v11 < 0 )
    goto LABEL_41;
LABEL_42:
  v31 = StorEtwLoggingEnabled == 0;
  *(_BYTE *)(a2 + 141) = -84;
  *(_DWORD *)(a2 + 48) = v11;
  if ( v31 )
    goto LABEL_108;
  v68 = 0LL;
  IoGetActivityIdIrp(a2, &v68);
  v33 = *(_QWORD *)(a2 + 184);
  if ( *(_BYTE *)v33 == 14 )
  {
    if ( (byte_140173442 & 8) == 0 )
      goto LABEL_108;
    v35 = &EventNonReadWriteRequestComplete;
    goto LABEL_107;
  }
  if ( *(_BYTE *)v33 != 15 )
  {
    if ( *(_BYTE *)v33 != 27 )
      goto LABEL_108;
    if ( *(_BYTE *)(v33 + 1) == 7 && !*(_DWORD *)(v33 + 8) )
    {
      if ( (byte_140173442 & 0x40) != 0 )
      {
        v34 = *(int **)(a2 + 56);
        if ( v34 )
          v5 = *v34;
        McTemplateK0pqd_EtwWriteTransfer(v32, v33, (unsigned int)&v68, a2, v5, *(_DWORD *)(a2 + 48));
      }
      goto LABEL_108;
    }
    if ( (byte_140173442 & 0x20) == 0 )
      goto LABEL_108;
    v35 = &EventPnpRequestComplete;
LABEL_107:
    McTemplateK0pd_EtwWriteTransfer(v32, v35, &v68, a2, *(_DWORD *)(a2 + 48));
    goto LABEL_108;
  }
  if ( byte_140173441 >= 0 )
    goto LABEL_108;
  v36 = *(_QWORD *)(v33 + 8);
  v37 = 0LL;
  v56 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  if ( *(_BYTE *)(v36 + 2) != 40 )
  {
    v50 = *(_BYTE *)(v36 + 72);
    v37 = *(_BYTE **)(v36 + 32);
    v38 = *(_BYTE *)(v36 + 11);
    v49 = *(_BYTE *)(v36 + 4);
    if ( *(_BYTE *)(v36 + 2) )
      goto LABEL_108;
LABEL_82:
    LOBYTE(v32) = v50 - 8;
    if ( (v32 & 0x5D) != 0 )
      goto LABEL_108;
    v51 = *(_BYTE *)(v36 + 3);
    if ( v51 == 1 || !v37 || !v38 )
      goto LABEL_101;
    v52 = *v37 & 0x7F;
    if ( v52 == 114 || v52 == 115 )
    {
      v32 = (unsigned __int64)&v37[v38];
      LOBYTE(v36) = 0;
      if ( (unsigned __int64)(v37 + 8) > v32 )
        goto LABEL_99;
      v40 = v37[2];
      v39 = v37[1] & 0xF;
      v41 = v37[3];
    }
    else
    {
      v32 = (unsigned __int64)&v37[v38];
      LOBYTE(v36) = 0;
      if ( (unsigned __int64)(v37 + 8) > v32 )
        goto LABEL_99;
      v53 = v37 + 13;
      v39 = v37[2] & 0xF;
      v54 = v38;
      if ( (unsigned int)(unsigned __int8)v37[7] + 8 <= v38 )
        v54 = (unsigned __int8)v37[7] + 8;
      v32 = (unsigned __int64)&v37[v54];
      if ( (unsigned __int64)v53 <= v32 )
        v40 = v37[12];
      if ( (unsigned __int64)(v37 + 14) > v32 )
        v41 = 0;
      else
        v41 = *v53;
    }
    LOBYTE(v36) = 1;
LABEL_99:
    if ( (_BYTE)v36 )
      v42 = 1;
LABEL_101:
    if ( byte_140173441 < 0 )
    {
      if ( !v42 )
      {
        v41 = 0;
        v40 = 0;
        v39 = 0;
      }
      McTemplateK0pduuuuup_EtwWriteTransfer(
        v32,
        v36,
        (unsigned int)&v68,
        a2,
        *(_DWORD *)(a2 + 48),
        v51,
        v49,
        v39,
        v40,
        v41,
        a2);
    }
    goto LABEL_108;
  }
  v43 = 0LL;
  v57 = 0;
  if ( !*(_DWORD *)(v36 + 20) )
  {
    v44 = *(_DWORD *)(v36 + 56);
    v45 = 0LL;
    v58 = 0;
    LODWORD(v59) = v44;
    if ( v44 )
    {
      do
      {
        v32 = *(unsigned int *)(v36 + 4 * v45 + 120);
        if ( (unsigned int)v32 >= 0x80 )
        {
          v46 = *(unsigned int *)(v36 + 16);
          if ( (unsigned int)v32 < (unsigned int)v46 )
          {
            v47 = (unsigned int)v32;
            v48 = *(_DWORD *)(v32 + v36) - 64;
            if ( v48 )
            {
              LODWORD(v32) = v48 - 1;
              if ( (_DWORD)v32 )
              {
                if ( (_DWORD)v32 == 1 )
                {
                  LODWORD(v32) = v47 + 40;
                  if ( v47 + 40 <= v46 )
                  {
                    if ( *(_DWORD *)(v47 + v36 + 12) )
                      v43 = (char *)(v47 + v36 + 32);
                    v37 = *(_BYTE **)(v47 + v36 + 24);
LABEL_67:
                    v49 = *(_BYTE *)(v47 + v36 + 8);
                    v38 = *(_BYTE *)(v47 + v36 + 9);
                    goto LABEL_76;
                  }
                }
              }
              else
              {
                LODWORD(v32) = v47 + 56;
                if ( v47 + 56 <= v46 )
                {
                  v57 = 1;
                  if ( *(_BYTE *)(v47 + v36 + 10) )
                    v43 = (char *)(v47 + v36 + 24);
                  v37 = *(_BYTE **)(v47 + v36 + 16);
                  v38 = *(_BYTE *)(v47 + v36 + 9);
                  v56 = *(_BYTE *)(v47 + v36 + 8);
                }
              }
            }
            else
            {
              LODWORD(v32) = v47 + 40;
              if ( v47 + 40 <= v46 )
              {
                if ( *(_BYTE *)(v47 + v36 + 10) )
                  v43 = (char *)(v47 + v36 + 24);
                v37 = *(_BYTE **)(v47 + v36 + 16);
                goto LABEL_67;
              }
            }
            if ( v57 )
              break;
          }
        }
        v45 = (unsigned int)(v58 + 1);
        v58 = v45;
      }
      while ( (unsigned int)v45 < (unsigned int)v59 );
      v49 = v56;
LABEL_76:
      if ( v43 )
      {
        v50 = *v43;
        v42 = 0;
        goto LABEL_82;
      }
    }
  }
LABEL_108:
  IofCompleteRequest((PIRP)a2, 0);
  return (unsigned int)v11;
}
