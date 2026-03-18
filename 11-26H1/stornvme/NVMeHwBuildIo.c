/*
 * XREFs of NVMeHwBuildIo @ 0x140002CA0
 * Callers:
 *     <none>
 * Callees:
 *     ProtocolCommandToNVMe @ 0x140001290 (ProtocolCommandToNVMe.c)
 *     NVMeSetSenseData @ 0x140002E20 (NVMeSetSenseData.c)
 *     ScsiToNVMe @ 0x140002FA0 (ScsiToNVMe.c)
 *     GetSrbDataBuffer @ 0x14000F230 (GetSrbDataBuffer.c)
 *     IoctlToNVMe @ 0x1400104F0 (IoctlToNVMe.c)
 *     ProcessCommandNvmePacket @ 0x14002B038 (ProcessCommandNvmePacket.c)
 *     memset @ 0x140032A40 (memset.c)
 */

char __fastcall NVMeHwBuildIo(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  unsigned __int64 v12; // r8
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  char v17; // si
  __int64 v18; // r8
  int v19; // eax
  int v20; // eax
  int v21; // eax
  bool v22; // zf
  char v23; // si
  int v24; // esi
  __int64 SrbDataBuffer; // r14
  void *v26; // r9
  unsigned __int8 v27; // cl
  _OWORD *v28; // rcx
  __int64 v29; // rax
  int v30; // esi
  __int64 v31; // rax
  __int64 v32; // r14
  unsigned int *v33; // r15
  int v34; // eax
  _OWORD *v35; // rcx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  _DWORD *v39; // rsi
  unsigned int v40; // eax
  unsigned int v41; // eax
  void *v42; // [rsp+60h] [rbp+20h] BYREF
  unsigned int *v43; // [rsp+68h] [rbp+28h] BYREF

  v5 = 104LL;
  if ( *(_BYTE *)(a2 + 2) != 40 )
    v5 = 56LL;
  v7 = *(_QWORD *)(v5 + a2);
  if ( (v7 & 0xFFF) != 0 )
    v7 = v7 - (v7 & 0xFFF) + 4096;
  if ( a1 && (*(_DWORD *)(a1 + 4064) & 0x1000) != 0 )
  {
    *(_BYTE *)(a2 + 3) = 6;
  }
  else
  {
    v8 = v7 + 4096;
    *(_OWORD *)v8 = 0LL;
    *(_OWORD *)(v8 + 16) = 0LL;
    *(_OWORD *)(v8 + 32) = 0LL;
    *(_OWORD *)(v8 + 48) = 0LL;
    *(_OWORD *)(v8 + 64) = 0LL;
    *(_OWORD *)(v8 + 80) = 0LL;
    *(_OWORD *)(v8 + 96) = 0LL;
    *(_OWORD *)(v8 + 112) = 0LL;
    *(_QWORD *)(v8 + 128) = 0LL;
    v9 = *(unsigned __int8 *)(a2 + 2);
    if ( (_BYTE)v9 == 40 )
      v10 = *(_DWORD *)(a2 + 20);
    else
      v10 = v9;
    if ( v10 )
    {
      if ( v10 == 43 )
      {
        if ( (_BYTE)v9 == 40 )
        {
          v14 = 60LL;
          v15 = 64LL;
        }
        else
        {
          v14 = 16LL;
          v15 = 24LL;
        }
        v16 = *(_QWORD *)(a2 + v15);
        if ( v16
          && *(_DWORD *)(a2 + v14) >= 0x18u
          && *(_DWORD *)(v16 + 8) == 1179468873
          && (v18 = *(_QWORD *)(v16 + 16)) != 0 )
        {
LABEL_67:
          v17 = 1;
          if ( (unsigned int)StorPortExtendedFunction(1LL, a1, v18, a4) )
            v17 = 4;
        }
        else
        {
LABEL_20:
          v17 = 6;
        }
        *(_BYTE *)(a2 + 3) = v17;
      }
      else
      {
        v12 = 0x140000000uLL;
        switch ( v10 )
        {
          case 2:
            v20 = *(_DWORD *)(a1 + 24);
            if ( (v20 & 1) == 0 )
            {
              LOBYTE(a4) = 37;
              LOBYTE(v12) = 5;
              LOBYTE(v9) = 8;
              goto LABEL_13;
            }
            if ( (v20 & 0x10) != 0 )
              goto LABEL_12;
            IoctlToNVMe(a1, a2);
            break;
          case 8:
            goto LABEL_63;
          case 9:
            v21 = *(_DWORD *)(a1 + 24);
            if ( (v21 & 1) == 0 )
            {
              LOBYTE(a4) = 37;
              LOBYTE(v12) = 5;
              LOBYTE(v9) = 8;
              goto LABEL_13;
            }
            if ( (v21 & 0x10) != 0 )
              goto LABEL_12;
            ProtocolCommandToNVMe(a1, a2);
            break;
          case 10:
            v19 = *(_DWORD *)(a1 + 24);
            if ( (v19 & 1) == 0 )
            {
              LOBYTE(a4) = 37;
              LOBYTE(v12) = 5;
              LOBYTE(v9) = 8;
              goto LABEL_13;
            }
            if ( (v19 & 0x10) != 0 )
              goto LABEL_12;
            ProcessCommandNvmePacket(a1, a2);
            break;
          case 36:
            if ( (_BYTE)v9 == 40 )
              v22 = *(_BYTE *)(*(unsigned int *)(a2 + 120) + a2 + 8) == 1;
            else
              v22 = *(_BYTE *)(a2 + 4) == 1;
            v23 = 1;
            if ( !v22 )
              v23 = 6;
            *(_BYTE *)(a2 + 3) = v23;
            break;
          case 38:
            v24 = 0;
            v43 = 0LL;
            v42 = 0LL;
            SrbDataBuffer = GetSrbDataBuffer(a2, &v43);
            if ( !SrbDataBuffer || *v43 < 0x48 || (*(_DWORD *)(a1 + 56) & 0x10) == 0 )
              goto LABEL_96;
            if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL, 1701672526LL) )
              goto LABEL_95;
            v26 = v42;
            if ( !v42 )
              goto LABEL_95;
            if ( *(_BYTE *)(a2 + 2) == 40 )
              v27 = *(_BYTE *)(*(unsigned int *)(a2 + 52) + a2 + 10);
            else
              v27 = *(_BYTE *)(a2 + 7);
            if ( (unsigned int)v27 < *(_DWORD *)(a1 + 224) && *(_QWORD *)(a1 + 8LL * v27 + 1672) )
            {
              _mm_lfence();
              v26 = v42;
              v24 = *(_DWORD *)(*(_QWORD *)(a1 + 8LL * v27 + 1672) + 16LL);
            }
            memset(v26, 0, 0x98uLL);
            *(_DWORD *)SrbDataBuffer = 7340288;
            *(_QWORD *)(SrbDataBuffer + 64) = v42;
            *(_WORD *)v42 = *(_WORD *)(a1 + 4);
            *((_WORD *)v42 + 1) = *(_WORD *)(a1 + 6);
            *((_BYTE *)v42 + 4) = *(_BYTE *)(a1 + 8);
            v28 = v42;
            *((_OWORD *)v42 + 1) = *(_OWORD *)(a1 + 32);
            v28[2] = *(_OWORD *)(a1 + 48);
            v28[3] = *(_OWORD *)(a1 + 64);
            v28[4] = *(_OWORD *)(a1 + 80);
            v28[5] = *(_OWORD *)(a1 + 96);
            v28[6] = *(_OWORD *)(a1 + 112);
            v28[7] = *(_OWORD *)(a1 + 128);
            v28[8] = *(_OWORD *)(a1 + 144);
            *((_DWORD *)v28 + 36) = *(_DWORD *)(a1 + 160);
            *((_DWORD *)v42 + 10) &= ~8u;
            *((_QWORD *)v42 + 1) = *(_QWORD *)(a1 + 168);
            *((_DWORD *)v42 + 37) = v24;
LABEL_63:
            *(_BYTE *)(a2 + 3) = 1;
            break;
          case 39:
            v42 = 0LL;
            v29 = GetSrbDataBuffer(a2, &v42);
            if ( !v29 || *(_DWORD *)v42 < 0x48u )
              goto LABEL_20;
            v18 = *(_QWORD *)(v29 + 64);
            goto LABEL_67;
          case 42:
            v30 = 0;
            v43 = 0LL;
            v42 = 0LL;
            v31 = GetSrbDataBuffer(a2, &v43);
            v32 = v31;
            if ( v31
              && (v33 = v43, *v43 >= 0x1C)
              && *(_DWORD *)(v31 + 8) == 1196246085
              && (v34 = *(unsigned __int16 *)(v31 + 12), (_WORD)v34)
              && *(_WORD *)(v32 + 14) == 1
              && *(_DWORD *)(v32 + 16) == 16
              && *(_DWORD *)(v32 + 4) == 16 * v34 + 24 )
            {
              if ( (unsigned int)StorPortExtendedFunction(0LL, a1, 152LL, 1701672526LL) || !v42 )
              {
LABEL_95:
                *(_BYTE *)(a2 + 3) = 4;
              }
              else
              {
                memset(v42, 0, 0x98uLL);
                *(_WORD *)v42 = *(_WORD *)(a1 + 4);
                *((_WORD *)v42 + 1) = *(_WORD *)(a1 + 6);
                *((_BYTE *)v42 + 4) = *(_BYTE *)(a1 + 8);
                v35 = v42;
                *((_OWORD *)v42 + 1) = *(_OWORD *)(a1 + 32);
                v35[2] = *(_OWORD *)(a1 + 48);
                v35[3] = *(_OWORD *)(a1 + 64);
                v35[4] = *(_OWORD *)(a1 + 80);
                v35[5] = *(_OWORD *)(a1 + 96);
                v35[6] = *(_OWORD *)(a1 + 112);
                v35[7] = *(_OWORD *)(a1 + 128);
                v35[8] = *(_OWORD *)(a1 + 144);
                *((_DWORD *)v35 + 36) = *(_DWORD *)(a1 + 160);
                *((_DWORD *)v42 + 10) &= ~8u;
                *((_QWORD *)v42 + 1) = *(_QWORD *)(a1 + 168);
                *(_BYTE *)(a2 + 3) = 1;
                if ( *(_WORD *)(v32 + 24) == 1 && *(_DWORD *)(v32 + 28) == 4 )
                {
                  v36 = *(unsigned __int8 *)(v32 + 34);
                  if ( (unsigned int)v36 < *(_DWORD *)(a1 + 224) )
                  {
                    _mm_lfence();
                    v37 = *(_QWORD *)(a1 + 8 * v36 + 1672);
                    if ( v37 )
                      v30 = *(_DWORD *)(v37 + 16);
                  }
                  *((_DWORD *)v42 + 37) = v30;
                }
                else
                {
                  *(_BYTE *)(a2 + 3) = 6;
                }
                if ( *(_BYTE *)(a2 + 3) == 1 )
                {
                  v38 = 64LL;
                  if ( *(_BYTE *)(a2 + 2) != 40 )
                    v38 = 24LL;
                  v39 = *(_DWORD **)(v38 + a2);
                  v40 = *v33;
                  if ( (*v33 & 3) != 0 )
                  {
                    if ( v40 )
                      memset(v39, 0, *v33);
                  }
                  else
                  {
                    v41 = v40 >> 2;
                    if ( v41 )
                      memset(v39, 0, 4LL * v41);
                  }
                  *v39 = 24;
                  v39[1] = 24;
                  v39[2] = 1297105993;
                  *((_QWORD *)v39 + 2) = v42;
                }
              }
            }
            else
            {
LABEL_96:
              *(_BYTE *)(a2 + 3) = 6;
            }
            break;
          default:
            break;
        }
      }
    }
    else
    {
      v11 = *(_DWORD *)(a1 + 24);
      if ( (v11 & 1) != 0 )
      {
        if ( (v11 & 0x10) != 0 )
        {
LABEL_12:
          a4 = 0LL;
          LOBYTE(v9) = 14;
          v12 = 0LL;
LABEL_13:
          NVMeSetSenseData(a2, v9, v12, a4);
        }
        else
        {
          ScsiToNVMe(a1, a2);
        }
      }
      else
      {
        LOBYTE(a4) = 37;
        LOBYTE(a3) = 5;
        LOBYTE(v9) = 8;
        NVMeSetSenseData(a2, v9, a3, a4);
      }
    }
    if ( !*(_BYTE *)(a2 + 3) )
      return 1;
  }
  StorPortNotification(0LL, a1, a2);
  return 0;
}
