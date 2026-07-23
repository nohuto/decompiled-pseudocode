/*
 * XREFs of MiComputePageFileReadPteCluster @ 0x1403729E4
 * Callers:
 *     MiResolvePageFileFault @ 0x140371F8C (MiResolvePageFileFault.c)
 * Callees:
 *     MiGetProtoPteAddress @ 0x1402B4300 (MiGetProtoPteAddress.c)
 *     MiPteHasShadow @ 0x1402E3260 (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140317020 (MiReadPteShadow.c)
 */

void __fastcall MiComputePageFileReadPteCluster(__int64 a1, unsigned __int64 *a2)
{
  bool v2; // cc
  __int64 *v4; // r13
  unsigned __int64 v6; // r14
  __int64 v7; // rdx
  unsigned __int64 v8; // r9
  unsigned int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r10
  _QWORD *v12; // r11
  unsigned int i; // r8d
  unsigned __int64 v14; // r12
  unsigned int v15; // r15d
  unsigned int v16; // edi
  unsigned int v17; // eax
  unsigned __int64 v18; // r9
  unsigned __int64 v19; // r11
  unsigned int v20; // eax
  unsigned __int64 v21; // r9
  int v22; // eax
  __int64 v23; // rax
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // r8
  unsigned int v26; // eax
  __int64 v27; // rdx
  __int64 v28; // rax
  int v29; // eax
  unsigned __int64 v30; // r10
  __int64 *v31; // rdi
  __int64 v32; // r12
  __int64 *v33; // r11
  unsigned int v34; // eax
  unsigned __int64 v35; // r10
  __int64 v36; // rax
  unsigned __int64 v37; // r9
  unsigned int v38; // eax
  __int64 PteShadow; // rax
  __int64 v40; // rax
  __int64 v41; // rax
  __int64 v42; // r9
  int v43; // rcx^4
  __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  _KPROCESS *v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rcx
  _KPROCESS *v50; // rdx
  unsigned __int64 v51; // r10
  __int64 v52; // rcx
  __int64 v53; // rdx
  _KPROCESS *v54; // rdx
  unsigned __int64 v55; // r8
  __int64 v56; // rcx
  __int64 v57; // rdx
  _KPROCESS *Process; // rdx
  unsigned __int64 KernelWaitTime; // r8
  __int64 v60; // rcx
  __int64 v61; // rdx
  _KPROCESS *v62; // rdx
  unsigned __int64 v63; // r8
  __int64 v64; // rcx
  __int64 v65; // rdx
  unsigned __int64 v66; // rax
  __int64 v67; // rcx
  __int64 v68; // rcx
  unsigned __int64 v69; // [rsp+20h] [rbp-38h] BYREF
  _QWORD v70[6]; // [rsp+28h] [rbp-30h] BYREF
  unsigned int *v71; // [rsp+60h] [rbp+8h] BYREF
  __int64 *v72; // [rsp+68h] [rbp+10h]

  v2 = *(_DWORD *)(a1 + 76) <= 1u;
  v4 = *(__int64 **)a1;
  v6 = *a2;
  v72 = v4;
  *(_QWORD *)(a1 + 136) = v4;
  if ( !v2 )
  {
    v7 = *(_QWORD *)(a1 + 32);
    v8 = *(_QWORD *)(v7 + 22464);
    if ( v8 >= 0x64 )
    {
LABEL_10:
      v14 = (unsigned __int64)v4;
      v15 = ((unsigned int)v4 >> 3) & 0x1FF;
      v16 = 511 - v15;
      if ( (*(_BYTE *)(a1 + 68) & 0x10) != 0 )
      {
        v66 = a2[11];
        if ( !v66
          || (*(_DWORD *)(v66 + 48) & 0x80000) != 0
          || (v67 = a2[11], v71 = 0LL, MiGetProtoPteAddress(v67, v6 >> 12, 0xCu, &v71), !v71)
          || (v71[8] & 0x20000) != 0 )
        {
          *(_DWORD *)(a1 + 76) = 1;
        }
        else
        {
          v68 = *((_QWORD *)v71 + 1);
          if ( (unsigned int)((v68 + 8LL * v71[11] - (__int64)v4) >> 3) - 1 < v16 )
            v16 = ((v68 + 8LL * v71[11] - (__int64)v4) >> 3) - 1;
          if ( (unsigned int)(((__int64)v4 - v68) >> 3) < v15 )
            v15 = ((__int64)v4 - v68) >> 3;
        }
      }
      if ( *(_QWORD *)(a1 + 24) || (*(_DWORD *)(a1 + 48) & 4) != 0 )
      {
        v15 = 0;
        if ( !v16 )
          *(_DWORD *)(a1 + 76) = 1;
      }
      v17 = *(_DWORD *)(a1 + 76);
      if ( v17 > 1 )
      {
        v18 = *(_QWORD *)(a1 + 8);
        v19 = (unsigned __int64)(v4 + 1);
        v20 = v17 - 1;
        v69 = v18;
        *(_DWORD *)(a1 + 76) = v20;
        if ( v16 > v20 )
          v16 = v20;
        if ( (v18 & 8) != 0 )
        {
          if ( qword_140E2D8C0 && (v18 & 0x10) == 0 )
            v18 &= qword_140E2D8C8;
          v21 = HIDWORD(v18);
        }
        else
        {
          LODWORD(v21) = 0;
        }
        if ( (unsigned int)v21 + v16 >= 0xFFFFFFFE )
          v16 = -3 - v21;
        v22 = *(_DWORD *)(a1 + 48);
        if ( (v22 & 1) != 0 || *(_QWORD *)(a1 + 24) )
          *(_DWORD *)(a1 + 48) = v22 | 8;
        v23 = v69;
        v24 = 0xFFFFF6FB7DBED7F8uLL;
        if ( (unsigned __int64)&v69 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v69 <= 0xFFFFF6FB7DBED7F8uLL
          && (v69 & 1) != 0
          && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( Process->AddressPolicy != 1 )
          {
            if ( Process )
            {
              KernelWaitTime = Process[2].KernelWaitTime;
              if ( KernelWaitTime )
              {
                v60 = *(_QWORD *)(KernelWaitTime + 8 * (((unsigned __int64)&v69 >> 3) & 0x1FF));
                if ( (v60 & 0x20) != 0 )
                  v23 = v69 | 0x20;
                v61 = v23;
                v23 |= 0x42uLL;
                if ( (v60 & 0x42) == 0 )
                  v23 = v61;
              }
            }
          }
        }
        v69 = v23 & 0xFFFFFFFFFFFFFFFBuLL;
        v25 = v23 & 0xFFFFFFFFF801FF1BuLL;
        if ( v16 )
        {
          while ( 1 )
          {
            LODWORD(v21) = v21 + 1;
            if ( v25 )
            {
              if ( qword_140E2D8C0 )
              {
                if ( (v25 & 0x10) != 0 )
                  LODWORD(v25) = v25 & 0xFFFFFFEF;
                else
                  LODWORD(v25) = qword_140E2D8C8 & v25;
              }
              v26 = v25;
            }
            else
            {
              v26 = 0;
            }
            v25 = v26 | ((unsigned __int64)(unsigned int)v21 << 32);
            if ( qword_140E2D8C0 )
            {
              if ( (qword_140E2D8C0 & v25) != 0 )
                v25 |= 0x10uLL;
              else
                v25 |= qword_140E2D8C0;
            }
            v27 = *(_QWORD *)v19;
            if ( v19 >= 0xFFFFF6FB7DBED000uLL
              && v19 <= v24
              && (v27 & 1) != 0
              && ((v27 & 0x20) == 0 || (v27 & 0x42) == 0) )
            {
              v46 = MiPteHasShadow();
              if ( v46 )
              {
                v47 = v46[2].KernelWaitTime;
                if ( v47 )
                {
                  v48 = *(_QWORD *)(v47 + 8 * ((v19 >> 3) & 0x1FF));
                  if ( (v48 & 0x20) != 0 )
                    v27 |= 0x20uLL;
                  v49 = v27;
                  v27 |= 0x42uLL;
                  if ( (v48 & 0x42) == 0 )
                    v27 = v49;
                }
              }
            }
            v70[0] = v27;
            if ( (v27 & 0x3E0) == 0 )
              goto LABEL_61;
            v28 = v70[0];
            if ( (unsigned __int64)v70 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v70 <= v24
              && (v70[0] & 1) != 0
              && ((v70[0] & 0x20) == 0 || (v70[0] & 0x42) == 0)
              && (MiFlags & 0x1800000) != 0 )
            {
              v50 = KeGetCurrentThread()->ApcState.Process;
              if ( v50->AddressPolicy != 1 )
              {
                if ( v50 )
                {
                  v51 = v50[2].KernelWaitTime;
                  if ( v51 )
                  {
                    v52 = *(_QWORD *)(v51 + 8 * (((unsigned __int64)v70 >> 3) & 0x1FF));
                    if ( (v52 & 0x20) != 0 )
                      v28 = v70[0] | 0x20LL;
                    v53 = v28;
                    v28 |= 0x42uLL;
                    if ( (v52 & 0x42) == 0 )
                      v28 = v53;
                  }
                  v24 = 0xFFFFF6FB7DBED7F8uLL;
                }
              }
            }
            v70[0] = v28 & 0xFFFFFFFFFFFFFFFBuLL;
            if ( (v28 & 0xFFFFFFFFF801FF1BuLL) == v25 )
            {
              v14 = v19;
            }
            else
            {
LABEL_61:
              if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
              {
LABEL_38:
                v4 = v72;
                break;
              }
            }
            v19 += 8LL;
            if ( !--v16 )
              goto LABEL_38;
          }
        }
        v29 = *(_DWORD *)(a1 + 76);
        v30 = *(_QWORD *)(a1 + 8);
        v31 = v4;
        v32 = (__int64)(v14 - (_QWORD)v4) >> 3;
        v33 = v4;
        *(_DWORD *)(a1 + 80) += v32;
        v34 = v29 - v32;
        *(_DWORD *)(a1 + 76) = v34;
        v69 = v30;
        if ( v15 > v34 )
          v15 = v34;
        if ( (v30 & 8) != 0 )
        {
          if ( qword_140E2D8C0 && (v30 & 0x10) == 0 )
            v30 &= qword_140E2D8C8;
          v35 = HIDWORD(v30);
        }
        else
        {
          LODWORD(v35) = 0;
        }
        if ( v15 > (int)v35 - 1 )
          v15 = v35 - 1;
        v36 = v69;
        if ( (unsigned __int64)&v69 >= 0xFFFFF6FB7DBED000uLL
          && (unsigned __int64)&v69 <= 0xFFFFF6FB7DBED7F8uLL
          && (v69 & 1) != 0
          && ((v69 & 0x20) == 0 || (v69 & 0x42) == 0)
          && (MiFlags & 0x1800000) != 0 )
        {
          v62 = KeGetCurrentThread()->ApcState.Process;
          if ( v62->AddressPolicy != 1 )
          {
            if ( v62 )
            {
              v63 = v62[2].KernelWaitTime;
              if ( v63 )
              {
                v64 = *(_QWORD *)(v63 + 8 * (((unsigned __int64)&v69 >> 3) & 0x1FF));
                if ( (v64 & 0x20) != 0 )
                  v36 = v69 | 0x20;
                v65 = v36;
                v36 |= 0x42uLL;
                if ( (v64 & 0x42) == 0 )
                  v36 = v65;
              }
            }
          }
        }
        v69 = v36 & 0xFFFFFFFFFFFFFFFBuLL;
        v37 = v36 & 0xFFFFFFFFF801FF1BuLL;
        if ( v15 )
        {
          do
          {
            --v33;
            LODWORD(v35) = v35 - 1;
            if ( v37 )
            {
              if ( qword_140E2D8C0 )
              {
                if ( (v37 & 0x10) != 0 )
                  LODWORD(v37) = v37 & 0xFFFFFFEF;
                else
                  LODWORD(v37) = qword_140E2D8C8 & v37;
              }
              v38 = v37;
            }
            else
            {
              v38 = 0;
            }
            v37 = v38 | ((unsigned __int64)(unsigned int)v35 << 32);
            if ( qword_140E2D8C0 )
            {
              if ( (qword_140E2D8C0 & v37) != 0 )
                v37 |= 0x10uLL;
              else
                v37 |= qword_140E2D8C0;
            }
            PteShadow = *v33;
            if ( (unsigned __int64)v33 >= 0xFFFFF6FB7DBED000uLL && (unsigned __int64)v33 <= 0xFFFFF6FB7DBED7F8uLL )
              PteShadow = MiReadPteShadow((unsigned __int64)v33, *v33);
            v70[0] = PteShadow;
            if ( (PteShadow & 0x3E0) == 0 )
              goto LABEL_59;
            v40 = v70[0];
            if ( (unsigned __int64)v70 >= 0xFFFFF6FB7DBED000uLL
              && (unsigned __int64)v70 <= 0xFFFFF6FB7DBED7F8uLL
              && (v70[0] & 1) != 0
              && ((v70[0] & 0x20) == 0 || (v70[0] & 0x42) == 0)
              && (MiFlags & 0x1800000) != 0 )
            {
              v54 = KeGetCurrentThread()->ApcState.Process;
              if ( v54->AddressPolicy != 1 )
              {
                if ( v54 )
                {
                  v55 = v54[2].KernelWaitTime;
                  if ( v55 )
                  {
                    v56 = *(_QWORD *)(v55 + 8 * (((unsigned __int64)v70 >> 3) & 0x1FF));
                    if ( (v56 & 0x20) != 0 )
                      v40 = v70[0] | 0x20LL;
                    v57 = v40;
                    v40 |= 0x42uLL;
                    if ( (v56 & 0x42) == 0 )
                      v40 = v57;
                  }
                }
              }
            }
            v70[0] = v40 & 0xFFFFFFFFFFFFFFFBuLL;
            if ( (v40 & 0xFFFFFFFFF801FF1BuLL) == v37 )
            {
              v31 = v33;
            }
            else
            {
LABEL_59:
              if ( (*(_DWORD *)(a1 + 48) & 8) != 0 )
                break;
            }
            --v15;
          }
          while ( v15 );
          v4 = v72;
        }
        v41 = *(_QWORD *)(a1 + 8);
        v42 = v4 - v31;
        v43 = HIDWORD(v41);
        if ( qword_140E2D8C0 && (v41 & 0x10) == 0 )
          v43 = HIDWORD(qword_140E2D8C8) & HIDWORD(v41);
        v44 = (unsigned int)(v43 - v42);
        if ( v41 && qword_140E2D8C0 )
        {
          if ( (v41 & 0x10) != 0 )
            LODWORD(v41) = v41 & 0xFFFFFFEF;
          else
            LODWORD(v41) = qword_140E2D8C8 & v41;
        }
        v45 = (unsigned int)v41 | (unsigned __int64)(v44 << 32);
        if ( qword_140E2D8C0 )
        {
          if ( (qword_140E2D8C0 & v45) != 0 )
            v45 |= 0x10uLL;
          else
            v45 |= qword_140E2D8C0;
        }
        *(_DWORD *)(a1 + 80) += v42;
        *(_QWORD *)(a1 + 40) = v45;
        *(_QWORD *)(a1 + 136) = &v4[-(unsigned int)v42];
      }
    }
    else
    {
      v9 = 0;
      v10 = *(_QWORD *)(v7 + 16) + 13856LL;
      while ( v9 < (unsigned __int16)KeNumberNodes )
      {
        v11 = 0LL;
        v12 = (_QWORD *)v10;
        while ( v11 <= 1 )
        {
          for ( i = 0; i < dword_140E2D90C; ++i )
          {
            v8 += *(unsigned __int16 *)(*v12 + 16LL * i);
            if ( v8 >= 0x64 )
              goto LABEL_10;
          }
          ++v11;
          ++v12;
        }
        v10 += 56320LL;
        ++v9;
      }
    }
  }
}
