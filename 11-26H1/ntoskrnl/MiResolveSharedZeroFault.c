/*
 * XREFs of MiResolveSharedZeroFault @ 0x1402B3950
 * Callers:
 *     MiZeroFault @ 0x14041A2F0 (MiZeroFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiMakePrototypePteDirect @ 0x1402B4570 (MiMakePrototypePteDirect.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     HvlNotifyLongSpinWait @ 0x140306BC0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140307420 (KiCheckVpBackingLongSpinWaitHypercall.c)
 */

char __fastcall MiResolveSharedZeroFault(__int64 a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  unsigned __int64 *v4; // rax
  __int64 v5; // r12
  unsigned __int64 v6; // rsi
  int v7; // ecx
  __int64 v8; // rbx
  unsigned __int64 v9; // r11
  unsigned __int64 PrototypePteDirect; // r10
  unsigned __int64 *v11; // r9
  unsigned __int64 ProtoPteAddress; // rax
  __int64 v13; // rcx
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rdx
  __int64 v16; // rdx
  unsigned __int64 v17; // rbx
  unsigned int v18; // edi
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // rbp
  __int64 v22; // r8
  __int64 v23; // r9
  unsigned __int64 v24; // rdx
  unsigned __int64 v25; // r9
  __int64 v26; // rax
  __int128 *v27; // r8
  unsigned __int64 v28; // r14
  __int64 v29; // r13
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // r12
  unsigned __int64 v33; // r15
  unsigned __int64 v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 CurrentThread; // rdx
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r9
  _QWORD *v40; // rax
  unsigned __int64 v41; // r11
  unsigned __int64 v42; // r10
  __int64 v43; // r11
  unsigned __int64 v44; // r8
  unsigned __int64 v45; // rax
  __int64 v46; // rcx
  __int64 v47; // rbx
  unsigned int v48; // edi
  __int64 v49; // rcx
  __int64 v50; // rdx
  bool v51; // zf
  __int64 v52; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v55; // rdx
  _KPROCESS *v56; // r9
  __int64 v57; // r8
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 HasShadow; // rax
  unsigned __int64 v61; // r9
  __int64 v62; // rax
  __int64 v63; // rax
  unsigned __int64 v64; // rdx
  __int128 v65; // xmm1
  __int64 v66; // xmm0_8
  unsigned __int64 v67; // rsi
  __int64 v69; // [rsp+20h] [rbp-108h]
  unsigned __int64 v70; // [rsp+28h] [rbp-100h]
  __int128 v71; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v72; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v73; // [rsp+48h] [rbp-E0h]
  char v74[16]; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v75; // [rsp+60h] [rbp-C8h]
  __int128 v76; // [rsp+70h] [rbp-B8h]
  __int64 v77; // [rsp+80h] [rbp-A8h]
  char v79; // [rsp+138h] [rbp+10h]
  int v80; // [rsp+140h] [rbp+18h]
  __int128 *v81; // [rsp+148h] [rbp+20h]

  v4 = *(unsigned __int64 **)(a1 + 8);
  v71 = 0LL;
  v5 = a1;
  v6 = *v4;
  v7 = *(_DWORD *)(a1 + 32);
  v8 = ((*v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v80 = v7;
  v72 = 0LL;
  v9 = v8 << 25 >> 16;
  if ( v7 == 256 )
  {
    PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v5 + 24), a2, a3, a4);
  }
  else
  {
    PrototypePteDirect = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v7 & 0x1F | 0x1FFFFFFFFFFA0LL));
    if ( qword_140E2D8C0 )
    {
      if ( (qword_140E2D8C0 & PrototypePteDirect) != 0 )
        PrototypePteDirect |= 0x10uLL;
      else
        PrototypePteDirect |= qword_140E2D8C0;
    }
  }
  *(_QWORD *)v8 = PrototypePteDirect;
  v11 = (unsigned __int64 *)(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  LOBYTE(ProtoPteAddress) = 104;
  v13 = 0xFFFFFFFFFFLL;
  v14 = 0xFFFFDE0000000000uLL;
  if ( ((v9 >> 18) & 0x3FFFFFF8) != 0x3DBEDF68 )
  {
    v15 = *v11;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL )
    {
      a3 = *v11;
      if ( (v15 & 1) != 0 && ((v15 & 0x20) == 0 || (v15 & 0x42) == 0) )
      {
        HasShadow = MiPteHasShadow(0xFFFFFFFFFFLL, v15, a3);
        if ( HasShadow )
        {
          v62 = *(_QWORD *)(HasShadow + 1288);
          if ( v62 )
          {
            v63 = *(_QWORD *)(v62 + 8 * ((v61 >> 3) & 0x1FF));
            if ( (v63 & 0x20) != 0 )
              a3 |= 0x20uLL;
            v15 = a3 | 0x42;
            if ( (v63 & 0x42) == 0 )
              v15 = a3;
          }
        }
        v13 = 0xFFFFFFFFFFLL;
      }
    }
    v16 = (v15 >> 12) & 0xFFFFFFFFFFLL;
    v17 = v14 + 48 * v16;
    v18 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v17 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v18 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v13, v16, a3) )
        {
          HvlNotifyLongSpinWait(v18);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v17 + 24) < 0 );
    }
    if ( (*(_DWORD *)(v17 + 36) & 0x4000000) != 0 )
      v19 = *(_QWORD *)v17 >> 36;
    else
      v19 = *(_QWORD *)(v17 + 16) >> 17;
    v20 = (unsigned int)(v19 + 1);
    if ( (*(_DWORD *)(v17 + 36) & 0x4000000) != 0 )
    {
      ProtoPteAddress = (v20 << 36) ^ ((v20 << 36) ^ *(_QWORD *)v17) & 0xFFFFC00FFFFFFFFFuLL;
      *(_QWORD *)v17 = ProtoPteAddress;
    }
    else
    {
      ProtoPteAddress = (v20 << 17) ^ ((v20 << 17) ^ *(_QWORD *)(v17 + 16)) & 0xFFFFFFFFF801FFFFuLL;
      *(_QWORD *)(v17 + 16) = ProtoPteAddress;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v17 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v21 = *(_QWORD *)(v5 + 56);
  if ( v21 )
  {
    v22 = *(unsigned int *)(v21 + 24);
    v23 = *(unsigned __int8 *)(v21 + 32);
    LODWORD(ProtoPteAddress) = *(_DWORD *)(v21 + 48);
    v24 = *(unsigned int *)(v21 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v21 + 33) << 32);
    v79 = 0;
    if ( MiVadPageSizes[((unsigned int)ProtoPteAddress >> 17) & 3] == 16 )
    {
      v67 = v6 & 0xFFFFFFFFFFFF0000uLL;
      *((_QWORD *)&v71 + 1) = 0x10000LL;
      *(_QWORD *)&v71 = v67;
      ProtoPteAddress = v67 >> 12;
      if ( v67 >> 12 >= (v22 | (unsigned __int64)(v23 << 32)) )
      {
        ProtoPteAddress = (v67 + 0xFFFF) >> 12;
        if ( ProtoPteAddress <= v24 )
        {
          v27 = &v71;
          v69 = 1LL;
          v28 = 0LL;
          v81 = &v71;
          v29 = 0LL;
          v70 = 16LL;
          v30 = 0LL;
          v31 = 0LL;
          goto LABEL_23;
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)v5 & 2) != 0 )
      {
        ProtoPteAddress = *(_QWORD *)(v5 + 48);
        v64 = v24 - (v6 >> 12) + 1;
        v65 = *(_OWORD *)(ProtoPteAddress + 16);
        v75 = *(_OWORD *)ProtoPteAddress;
        v66 = *(_QWORD *)(ProtoPteAddress + 32);
        v27 = (__int128 *)*((_QWORD *)&v75 + 1);
        v76 = v65;
        v28 = *((_QWORD *)&v65 + 1);
        v70 = 512LL;
        LOBYTE(ProtoPteAddress) = v65;
        v77 = v66;
        v29 = v66;
        v69 = v65;
        v81 = (__int128 *)*((_QWORD *)&v75 + 1);
        if ( v64 < 0x200 )
          v70 = v64;
      }
      else
      {
        LOBYTE(ProtoPteAddress) = ProtoPteAddress & 0x1C;
        if ( (_BYTE)ProtoPteAddress == 8 )
          return ProtoPteAddress;
        v25 = 8LL;
        *(_QWORD *)&v71 = v6 & 0xFFFFFFFFFFFFF000uLL;
        v26 = *(_QWORD *)(v21 + 128);
        if ( v26 >= 0 )
        {
          v57 = *(_QWORD *)(v21 + 128) & 0xFFFLL;
          if ( (v26 & 0xFFF) != 0 && v57 + (((unsigned __int64)v26 >> 12) & 0x7FFFFFFFFFFFFLL) - 1 == v6 >> 12 )
          {
            v58 = *(__int64 **)(v21 + 80);
            if ( v58 )
            {
              v59 = *v58;
              if ( *(_QWORD *)(*v58 + 64) )
              {
                if ( (*(_DWORD *)(v59 + 56) & 0x20) == 0 && (*(_DWORD *)(v59 + 56) & 0x30000000) == 0x10000000 )
                {
                  v25 = 2 * v57;
                  v79 = 1;
                  if ( (unsigned __int64)(2 * v57) > 0x80 )
                    v25 = 128LL;
                }
              }
            }
          }
        }
        v27 = &v71;
        v81 = &v71;
        ProtoPteAddress = v24 - (v6 >> 12) + 1;
        if ( v25 <= ProtoPteAddress )
          ProtoPteAddress = v25;
        v28 = 0LL;
        v70 = ProtoPteAddress;
        *((_QWORD *)&v71 + 1) = ProtoPteAddress << 12;
        v29 = 0LL;
        LOBYTE(ProtoPteAddress) = 1;
        v69 = 1LL;
      }
      v30 = 0LL;
      v31 = 0LL;
      if ( v70 )
      {
LABEL_23:
        v32 = v69;
        while ( 1 )
        {
          v73 = ((v29 << 12) + *(_QWORD *)&v27[v28]) & 0xFFFFFFFFFFFFF000uLL;
          v33 = v73;
          v34 = ((v73 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v31 )
          {
            LOBYTE(ProtoPteAddress) = v30;
            if ( v73 != v30 + 4096 || ((v73 >> 9) & 0xFF8) == 0 )
            {
LABEL_49:
              v5 = a1;
              break;
            }
          }
          v35 = *(_QWORD *)v34;
          if ( v34 >= 0xFFFFF6FB7DBED000uLL && v34 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v52 = *(_QWORD *)v34;
            if ( (v35 & 1) != 0 && ((v35 & 0x20) == 0 || (v35 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v55 = *(_QWORD *)(KernelWaitTime + 8 * ((v34 >> 3) & 0x1FF));
                  if ( (v55 & 0x20) != 0 )
                    v52 = v35 | 0x20;
                  v35 = v52 | 0x42;
                  if ( (v55 & 0x42) == 0 )
                    v35 = v52;
                }
              }
            }
            v27 = v81;
          }
          if ( !v35 )
          {
            v36 = v73 >> 12;
            ProtoPteAddress = MiGetProtoPteAddress(v21, v73 >> 12, 12LL, v74);
            v39 = ProtoPteAddress;
            if ( !ProtoPteAddress )
              goto LABEL_49;
            v40 = *(_QWORD **)(v21 + 128);
            if ( (__int64)v40 < 0 )
            {
              CurrentThread = *(unsigned int *)(v21 + 24);
              v38 = CurrentThread | ((unsigned __int64)*(unsigned __int8 *)(v21 + 32) << 32);
              ProtoPteAddress = (unsigned __int64)(*v40 - 1LL) >> 12;
              if ( v36 - v38 > ProtoPteAddress )
                goto LABEL_49;
            }
            v41 = (__int64)((v34 << 25) - v72) >> 16;
            if ( v80 == 256 )
            {
              v42 = MiMakePrototypePteDirect(v39, CurrentThread, v38, v39);
            }
            else
            {
              v42 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v80 & 0x1F | 0x1FFFFFFFFFFA0LL));
              if ( qword_140E2D8C0 )
              {
                if ( (qword_140E2D8C0 & v42) != 0 )
                  v42 |= 0x10uLL;
                else
                  v42 |= qword_140E2D8C0;
              }
            }
            v43 = (v41 >> 18) & 0x3FFFFFF8;
            *(_QWORD *)v34 = v42;
            v44 = v43 - 0x904C0000000LL;
            if ( v43 != 1035919208 )
            {
              v45 = *(_QWORD *)v44;
              v46 = 0xFFFFF6FB7DBED000uLL;
              if ( v44 >= 0xFFFFF6FB7DBED000uLL )
              {
                v46 = 0xFFFFF6FB7DBED7F8uLL;
                if ( v44 <= 0xFFFFF6FB7DBED7F8uLL )
                {
                  v46 = *(_QWORD *)v44;
                  if ( (v45 & 1) != 0 && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
                  {
                    CurrentThread = (unsigned __int64)KeGetCurrentThread();
                    v56 = *(_KPROCESS **)(CurrentThread + 184);
                    if ( v56->AddressPolicy != 1 )
                    {
                      CurrentThread = v56[2].KernelWaitTime;
                      if ( CurrentThread )
                      {
                        v44 = (v44 >> 3) & 0x1FF;
                        CurrentThread = *(_QWORD *)(CurrentThread + 8 * v44);
                        if ( (CurrentThread & 0x20) != 0 )
                          v46 = v45 | 0x20;
                        v45 = v46 | 0x42;
                        if ( (CurrentThread & 0x42) == 0 )
                          v45 = v46;
                      }
                    }
                  }
                }
              }
              v33 = v73;
              v47 = 48 * ((v45 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              v32 = v69;
              v48 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v47 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v48 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v46, CurrentThread, v44) )
                  {
                    HvlNotifyLongSpinWait(v48);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v47 + 24) < 0 );
              }
              if ( (*(_DWORD *)(v47 + 36) & 0x4000000) != 0 )
                v49 = *(_QWORD *)v47 >> 36;
              else
                v49 = *(_QWORD *)(v47 + 16) >> 17;
              v50 = (unsigned int)(v49 + 1);
              if ( (*(_DWORD *)(v47 + 36) & 0x4000000) != 0 )
                *(_QWORD *)v47 = (v50 << 36) ^ ((v50 << 36) ^ *(_QWORD *)v47) & 0xFFFFC00FFFFFFFFFuLL;
              else
                *(_QWORD *)(v47 + 16) = (v50 << 17) ^ ((v50 << 17) ^ *(_QWORD *)(v47 + 16)) & 0xFFFFFFFFF801FFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)(v47 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v27 = v81;
          }
          ++v29;
          LOBYTE(ProtoPteAddress) = 16 * v28;
          if ( v29 == (*((_QWORD *)&v27[v28] + 1) + (unsigned __int64)(v27[v28] & 0xFFF) + 4095) >> 12 )
          {
            ++v28;
            v29 = 0LL;
            v51 = v28 == v32;
            if ( v28 >= v32 )
              goto LABEL_47;
            LOBYTE(ProtoPteAddress) = 2 * v28;
            if ( !*((_QWORD *)&v27[v28] + 1) )
              goto LABEL_49;
          }
          v51 = v28 == v32;
LABEL_47:
          if ( !v51 )
          {
            ++v31;
            v30 = v33;
            if ( v31 < v70 )
              continue;
          }
          goto LABEL_49;
        }
      }
      if ( v79 )
      {
        LODWORD(ProtoPteAddress) = *(_DWORD *)v5;
        *(_DWORD *)v5 ^= (*(_DWORD *)v5 ^ ((_DWORD)v31 << 10)) & 0x3FC00;
      }
    }
  }
  return ProtoPteAddress;
}
