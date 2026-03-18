/*
 * XREFs of MiResolveSharedZeroFault @ 0x1402D1B90
 * Callers:
 *     MiZeroFault @ 0x140422AB0 (MiZeroFault.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x1402BBF00 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402BC760 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     MiGetProtoPteAddress @ 0x1402D2540 (MiGetProtoPteAddress.c)
 *     MiMakePrototypePteDirect @ 0x1402D27B0 (MiMakePrototypePteDirect.c)
 *     MiPteHasShadow @ 0x1403011E0 (MiPteHasShadow.c)
 */

char __fastcall MiResolveSharedZeroFault(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rbx
  unsigned int v16; // edi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // rbp
  __int64 v20; // r8
  __int64 v21; // r9
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  __int128 *v25; // r8
  unsigned __int64 v26; // r14
  __int64 v27; // r13
  unsigned __int64 v28; // rdx
  unsigned __int64 v29; // rsi
  unsigned __int64 v30; // r12
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdi
  __int64 v33; // rax
  unsigned __int64 v34; // rbx
  __int64 v35; // rdx
  unsigned __int64 v36; // r8
  unsigned __int64 v37; // r9
  _QWORD *v38; // rax
  unsigned __int64 v39; // r11
  unsigned __int64 v40; // r10
  __int64 v41; // r11
  unsigned __int64 v42; // r8
  unsigned __int64 v43; // rax
  __int64 v44; // rbx
  unsigned int v45; // edi
  __int64 v46; // rcx
  __int64 v47; // rdx
  bool v48; // zf
  __int64 v49; // rcx
  _KPROCESS *Process; // r8
  unsigned __int64 KernelWaitTime; // r9
  __int64 v52; // rdx
  __int64 v53; // rcx
  _KPROCESS *v54; // r9
  unsigned __int64 v55; // rdx
  __int64 v56; // rdx
  __int64 v57; // r8
  __int64 *v58; // rax
  __int64 v59; // rcx
  __int64 HasShadow; // rax
  unsigned __int64 v61; // r8
  unsigned __int64 v62; // r9
  __int64 v63; // rax
  __int64 v64; // rax
  unsigned __int64 v65; // rdx
  __int128 v66; // xmm1
  __int64 v67; // xmm0_8
  unsigned __int64 v68; // rsi
  __int64 v70; // [rsp+20h] [rbp-108h]
  unsigned __int64 v71; // [rsp+28h] [rbp-100h]
  __int128 v72; // [rsp+30h] [rbp-F8h] BYREF
  __int64 v73; // [rsp+40h] [rbp-E8h]
  unsigned __int64 v74; // [rsp+48h] [rbp-E0h]
  char v75[16]; // [rsp+50h] [rbp-D8h] BYREF
  __int128 v76; // [rsp+60h] [rbp-C8h]
  __int128 v77; // [rsp+70h] [rbp-B8h]
  __int64 v78; // [rsp+80h] [rbp-A8h]
  char v80; // [rsp+138h] [rbp+10h]
  int v81; // [rsp+140h] [rbp+18h]
  __int128 *v82; // [rsp+148h] [rbp+20h]

  v4 = *(unsigned __int64 **)(a1 + 8);
  v72 = 0LL;
  v5 = a1;
  v6 = *v4;
  v7 = *(_DWORD *)(a1 + 32);
  v8 = ((*v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v81 = v7;
  v73 = 0LL;
  v9 = v8 << 25 >> 16;
  if ( v7 == 256 )
  {
    PrototypePteDirect = MiMakePrototypePteDirect(*(_QWORD *)(v5 + 24), a2, a3, a4);
  }
  else
  {
    PrototypePteDirect = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v7 & 0x1F | 0x1FFFFFFFFFFA0LL));
    if ( qword_140E2D740 )
    {
      if ( (qword_140E2D740 & PrototypePteDirect) != 0 )
        PrototypePteDirect |= 0x10uLL;
      else
        PrototypePteDirect |= qword_140E2D740;
    }
  }
  *(_QWORD *)v8 = PrototypePteDirect;
  v11 = (unsigned __int64 *)(((v9 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  LOBYTE(ProtoPteAddress) = 104;
  v13 = 0xFFFFDE0000000000uLL;
  if ( ((v9 >> 18) & 0x3FFFFFF8) != 0x3DBEDF68 )
  {
    v14 = *v11;
    if ( (unsigned __int64)v11 >= 0xFFFFF6FB7DBED000uLL
      && (unsigned __int64)v11 <= 0xFFFFF6FB7DBED7F8uLL
      && (v14 & 1) != 0
      && ((v14 & 0x20) == 0 || (v14 & 0x42) == 0) )
    {
      HasShadow = MiPteHasShadow(0xFFFFFFFFFFLL, v14, *v11);
      if ( HasShadow )
      {
        v63 = *(_QWORD *)(HasShadow + 1288);
        if ( v63 )
        {
          v64 = *(_QWORD *)(v63 + 8 * ((v62 >> 3) & 0x1FF));
          if ( (v64 & 0x20) != 0 )
            v61 |= 0x20uLL;
          v14 = v61 | 0x42;
          if ( (v64 & 0x42) == 0 )
            v14 = v61;
        }
      }
    }
    v15 = v13 + 48 * ((v14 >> 12) & 0xFFFFFFFFFFLL);
    v16 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v16);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(__int64 *)(v15 + 24) < 0 );
    }
    if ( (*(_DWORD *)(v15 + 36) & 0x4000000) != 0 )
      v17 = *(_QWORD *)v15 >> 36;
    else
      v17 = *(_QWORD *)(v15 + 16) >> 17;
    v18 = (unsigned int)(v17 + 1);
    if ( (*(_DWORD *)(v15 + 36) & 0x4000000) != 0 )
    {
      ProtoPteAddress = (v18 << 36) ^ ((v18 << 36) ^ *(_QWORD *)v15) & 0xFFFFC00FFFFFFFFFuLL;
      *(_QWORD *)v15 = ProtoPteAddress;
    }
    else
    {
      ProtoPteAddress = (v18 << 17) ^ ((v18 << 17) ^ *(_QWORD *)(v15 + 16)) & 0xFFFFFFFFF801FFFFuLL;
      *(_QWORD *)(v15 + 16) = ProtoPteAddress;
    }
    _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  v19 = *(_QWORD *)(v5 + 56);
  if ( v19 )
  {
    v20 = *(unsigned int *)(v19 + 24);
    v21 = *(unsigned __int8 *)(v19 + 32);
    LODWORD(ProtoPteAddress) = *(_DWORD *)(v19 + 48);
    v22 = *(unsigned int *)(v19 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v19 + 33) << 32);
    v80 = 0;
    if ( MiVadPageSizes[((unsigned int)ProtoPteAddress >> 17) & 3] == 16 )
    {
      v68 = v6 & 0xFFFFFFFFFFFF0000uLL;
      *((_QWORD *)&v72 + 1) = 0x10000LL;
      *(_QWORD *)&v72 = v68;
      ProtoPteAddress = v68 >> 12;
      if ( v68 >> 12 >= (v20 | (unsigned __int64)(v21 << 32)) )
      {
        ProtoPteAddress = (v68 + 0xFFFF) >> 12;
        if ( ProtoPteAddress <= v22 )
        {
          v25 = &v72;
          v70 = 1LL;
          v26 = 0LL;
          v82 = &v72;
          v27 = 0LL;
          v71 = 16LL;
          v28 = 0LL;
          v29 = 0LL;
          goto LABEL_23;
        }
      }
    }
    else
    {
      if ( (*(_DWORD *)v5 & 2) != 0 )
      {
        ProtoPteAddress = *(_QWORD *)(v5 + 48);
        v65 = v22 - (v6 >> 12) + 1;
        v66 = *(_OWORD *)(ProtoPteAddress + 16);
        v76 = *(_OWORD *)ProtoPteAddress;
        v67 = *(_QWORD *)(ProtoPteAddress + 32);
        v25 = (__int128 *)*((_QWORD *)&v76 + 1);
        v77 = v66;
        v26 = *((_QWORD *)&v66 + 1);
        v71 = 512LL;
        LOBYTE(ProtoPteAddress) = v66;
        v78 = v67;
        v27 = v67;
        v70 = v66;
        v82 = (__int128 *)*((_QWORD *)&v76 + 1);
        if ( v65 < 0x200 )
          v71 = v65;
      }
      else
      {
        LOBYTE(ProtoPteAddress) = ProtoPteAddress & 0x1C;
        if ( (_BYTE)ProtoPteAddress == 8 )
          return ProtoPteAddress;
        v23 = 8LL;
        *(_QWORD *)&v72 = v6 & 0xFFFFFFFFFFFFF000uLL;
        v24 = *(_QWORD *)(v19 + 128);
        if ( v24 >= 0 )
        {
          v57 = *(_QWORD *)(v19 + 128) & 0xFFFLL;
          if ( (v24 & 0xFFF) != 0 && v57 + (((unsigned __int64)v24 >> 12) & 0x7FFFFFFFFFFFFLL) - 1 == v6 >> 12 )
          {
            v58 = *(__int64 **)(v19 + 80);
            if ( v58 )
            {
              v59 = *v58;
              if ( *(_QWORD *)(*v58 + 64) )
              {
                if ( (*(_DWORD *)(v59 + 56) & 0x20) == 0 && (*(_DWORD *)(v59 + 56) & 0x30000000) == 0x10000000 )
                {
                  v23 = 2 * v57;
                  v80 = 1;
                  if ( (unsigned __int64)(2 * v57) > 0x80 )
                    v23 = 128LL;
                }
              }
            }
          }
        }
        v25 = &v72;
        v82 = &v72;
        ProtoPteAddress = v22 - (v6 >> 12) + 1;
        if ( v23 <= ProtoPteAddress )
          ProtoPteAddress = v23;
        v26 = 0LL;
        v71 = ProtoPteAddress;
        *((_QWORD *)&v72 + 1) = ProtoPteAddress << 12;
        v27 = 0LL;
        LOBYTE(ProtoPteAddress) = 1;
        v70 = 1LL;
      }
      v28 = 0LL;
      v29 = 0LL;
      if ( v71 )
      {
LABEL_23:
        v30 = v70;
        while ( 1 )
        {
          v74 = ((v27 << 12) + *(_QWORD *)&v25[v26]) & 0xFFFFFFFFFFFFF000uLL;
          v31 = v74;
          v32 = ((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
          if ( v29 )
          {
            LOBYTE(ProtoPteAddress) = v28;
            if ( v74 != v28 + 4096 || ((v74 >> 9) & 0xFF8) == 0 )
            {
LABEL_49:
              v5 = a1;
              break;
            }
          }
          v33 = *(_QWORD *)v32;
          if ( v32 >= 0xFFFFF6FB7DBED000uLL && v32 <= 0xFFFFF6FB7DBED7F8uLL )
          {
            v49 = *(_QWORD *)v32;
            if ( (v33 & 1) != 0 && ((v33 & 0x20) == 0 || (v33 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
            {
              Process = KeGetCurrentThread()->ApcState.Process;
              if ( Process->AddressPolicy != 1 )
              {
                KernelWaitTime = Process[2].KernelWaitTime;
                if ( KernelWaitTime )
                {
                  v52 = *(_QWORD *)(KernelWaitTime + 8 * ((v32 >> 3) & 0x1FF));
                  if ( (v52 & 0x20) != 0 )
                    v49 = v33 | 0x20;
                  v33 = v49 | 0x42;
                  if ( (v52 & 0x42) == 0 )
                    v33 = v49;
                }
              }
            }
            v25 = v82;
          }
          if ( !v33 )
          {
            v34 = v74 >> 12;
            ProtoPteAddress = MiGetProtoPteAddress(v19, v74 >> 12, 12LL, v75);
            v37 = ProtoPteAddress;
            if ( !ProtoPteAddress )
              goto LABEL_49;
            v38 = *(_QWORD **)(v19 + 128);
            if ( (__int64)v38 < 0 )
            {
              v35 = *(unsigned int *)(v19 + 24);
              v36 = v35 | ((unsigned __int64)*(unsigned __int8 *)(v19 + 32) << 32);
              ProtoPteAddress = (unsigned __int64)(*v38 - 1LL) >> 12;
              if ( v34 - v36 > ProtoPteAddress )
                goto LABEL_49;
            }
            v39 = (__int64)((v32 << 25) - v73) >> 16;
            if ( v81 == 256 )
            {
              v40 = MiMakePrototypePteDirect(v37, v35, v36, v37);
            }
            else
            {
              v40 = *(_QWORD *)&CLFS_LSN_NULL_EXT & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v81 & 0x1F | 0x1FFFFFFFFFFA0LL));
              if ( qword_140E2D740 )
              {
                if ( (qword_140E2D740 & v40) != 0 )
                  v40 |= 0x10uLL;
                else
                  v40 |= qword_140E2D740;
              }
            }
            v41 = (v39 >> 18) & 0x3FFFFFF8;
            *(_QWORD *)v32 = v40;
            v42 = v41 - 0x904C0000000LL;
            if ( v41 != 1035919208 )
            {
              v43 = *(_QWORD *)v42;
              if ( v42 >= 0xFFFFF6FB7DBED000uLL && v42 <= 0xFFFFF6FB7DBED7F8uLL )
              {
                v53 = *(_QWORD *)v42;
                if ( (v43 & 1) != 0 && ((v43 & 0x20) == 0 || (v43 & 0x42) == 0) && (MiFlags & 0x1800000) != 0 )
                {
                  v54 = KeGetCurrentThread()->ApcState.Process;
                  if ( v54->AddressPolicy != 1 )
                  {
                    v55 = v54[2].KernelWaitTime;
                    if ( v55 )
                    {
                      v56 = *(_QWORD *)(v55 + 8 * ((v42 >> 3) & 0x1FF));
                      if ( (v56 & 0x20) != 0 )
                        v53 = v43 | 0x20;
                      v43 = v53 | 0x42;
                      if ( (v56 & 0x42) == 0 )
                        v43 = v53;
                    }
                  }
                }
              }
              v31 = v74;
              v44 = 48 * ((v43 >> 12) & 0xFFFFFFFFFFLL) - 0x220000000000LL;
              v30 = v70;
              v45 = 0;
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
              {
                do
                {
                  if ( (++v45 & HvlLongSpinCountMask) == 0
                    && (HvlEnlightenments & 0x40) != 0
                    && KiCheckVpBackingLongSpinWaitHypercall() )
                  {
                    HvlNotifyLongSpinWait(v45);
                  }
                  else
                  {
                    _mm_pause();
                  }
                }
                while ( *(__int64 *)(v44 + 24) < 0 );
              }
              if ( (*(_DWORD *)(v44 + 36) & 0x4000000) != 0 )
                v46 = *(_QWORD *)v44 >> 36;
              else
                v46 = *(_QWORD *)(v44 + 16) >> 17;
              v47 = (unsigned int)(v46 + 1);
              if ( (*(_DWORD *)(v44 + 36) & 0x4000000) != 0 )
                *(_QWORD *)v44 = (v47 << 36) ^ ((v47 << 36) ^ *(_QWORD *)v44) & 0xFFFFC00FFFFFFFFFuLL;
              else
                *(_QWORD *)(v44 + 16) = (v47 << 17) ^ ((v47 << 17) ^ *(_QWORD *)(v44 + 16)) & 0xFFFFFFFFF801FFFFuLL;
              _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            v25 = v82;
          }
          ++v27;
          LOBYTE(ProtoPteAddress) = 16 * v26;
          if ( v27 == (*((_QWORD *)&v25[v26] + 1) + (unsigned __int64)(v25[v26] & 0xFFF) + 4095) >> 12 )
          {
            ++v26;
            v27 = 0LL;
            v48 = v26 == v30;
            if ( v26 >= v30 )
              goto LABEL_47;
            LOBYTE(ProtoPteAddress) = 2 * v26;
            if ( !*((_QWORD *)&v25[v26] + 1) )
              goto LABEL_49;
          }
          v48 = v26 == v30;
LABEL_47:
          if ( !v48 )
          {
            ++v29;
            v28 = v31;
            if ( v29 < v71 )
              continue;
          }
          goto LABEL_49;
        }
      }
      if ( v80 )
      {
        LODWORD(ProtoPteAddress) = *(_DWORD *)v5;
        *(_DWORD *)v5 ^= (*(_DWORD *)v5 ^ ((_DWORD)v29 << 10)) & 0x3FC00;
      }
    }
  }
  return ProtoPteAddress;
}
