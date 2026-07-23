/*
 * XREFs of HalMapTransferEx @ 0x140437D70
 * Callers:
 *     HalpAllocateAdapterCallbackV3 @ 0x140437530 (HalpAllocateAdapterCallbackV3.c)
 * Callees:
 *     IoFreeMdl @ 0x1403A0EF0 (IoFreeMdl.c)
 *     HalpDmaControllerQueryMaxFragments @ 0x140437058 (HalpDmaControllerQueryMaxFragments.c)
 *     HalpDmaControllerProgramChannel @ 0x1404381C8 (HalpDmaControllerProgramChannel.c)
 *     HalpDmaCheckMdlAccessibility @ 0x14043832C (HalpDmaCheckMdlAccessibility.c)
 *     IoMapTransferInternal @ 0x14043841C (IoMapTransferInternal.c)
 *     HalpDmaFlushBuffer @ 0x140438C2C (HalpDmaFlushBuffer.c)
 *     HalpDmaFlushDriverMdl @ 0x14057B1D8 (HalpDmaFlushDriverMdl.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 */

__int64 __fastcall HalMapTransferEx(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3,
        unsigned __int64 a4,
        unsigned int a5,
        unsigned int *a6,
        char a7,
        _DWORD *a8,
        unsigned int a9,
        __int64 a10,
        __int64 a11)
{
  bool v12; // zf
  __int64 *v14; // rsi
  unsigned int *v16; // rax
  __int64 v18; // rax
  unsigned __int64 v19; // rax
  __int64 v20; // r15
  unsigned int v21; // eax
  unsigned int v22; // r14d
  unsigned __int64 v23; // r13
  unsigned int *v24; // rcx
  unsigned int v25; // r12d
  unsigned int v26; // edx
  int v27; // ecx
  unsigned int v28; // r9d
  unsigned __int64 v29; // r8
  __int64 v30; // rax
  __int16 v31; // bx
  __int64 v32; // rcx
  unsigned int *v33; // rax
  char v34; // bl
  unsigned int MaxFragments; // eax
  _DWORD *v36; // rax
  unsigned int v37; // eax
  __int64 v38; // r10
  __int64 v39; // rdx
  PMDL v40; // rsi
  unsigned int v41; // r13d
  __int64 v42; // rcx
  unsigned int v43; // r11d
  __int64 *v44; // rax
  unsigned int v45; // r8d
  __int64 v46; // r9
  unsigned int v47; // eax
  __int64 v48; // rax
  __int64 v49; // rcx
  __int64 v50; // rcx
  struct _MDL *Next; // rbx
  int v52; // [rsp+20h] [rbp-99h]
  int v53; // [rsp+28h] [rbp-91h]
  unsigned int v54; // [rsp+40h] [rbp-79h]
  unsigned int v55; // [rsp+44h] [rbp-75h]
  unsigned int v56; // [rsp+44h] [rbp-75h]
  __int64 v57; // [rsp+48h] [rbp-71h]
  __int64 *v58; // [rsp+48h] [rbp-71h]
  unsigned int v59; // [rsp+50h] [rbp-69h]
  unsigned __int64 v60; // [rsp+58h] [rbp-61h]
  __int64 v61; // [rsp+58h] [rbp-61h]
  unsigned int v62; // [rsp+60h] [rbp-59h] BYREF
  unsigned __int64 v63; // [rsp+68h] [rbp-51h]
  __int64 v64; // [rsp+70h] [rbp-49h]
  __int64 *v65; // [rsp+78h] [rbp-41h]
  PMDL Mdl; // [rsp+80h] [rbp-39h] BYREF
  __int128 v67; // [rsp+88h] [rbp-31h]
  unsigned __int64 v68; // [rsp+98h] [rbp-21h]
  __int64 v69; // [rsp+A0h] [rbp-19h]
  __int128 v70; // [rsp+A8h] [rbp-11h]
  __int64 v71; // [rsp+B8h] [rbp-1h]
  char v72; // [rsp+100h] [rbp+47h] BYREF
  _QWORD *v73; // [rsp+110h] [rbp+57h]

  v73 = a3;
  v71 = 0LL;
  LODWORD(v68) = 0;
  v12 = *(_DWORD *)(a1 + 520) == 3;
  v14 = a2;
  v72 = 0;
  Mdl = 0LL;
  v70 = 0LL;
  v65 = 0LL;
  v67 = 0LL;
  if ( v12 && !a3 )
    return 3221225485LL;
  v69 = *(_QWORD *)(a1 + 512);
  v16 = a6;
  *(_BYTE *)(a1 + 524) = 1;
  v59 = 0;
  if ( *v16 )
  {
    if ( KeGetCurrentIrql() != 15 )
    {
      v18 = *(_QWORD *)(a1 + 360);
      if ( v18 )
      {
        if ( (*(_DWORD *)(v18 + 12) & 1) != 0 )
          return 3221225760LL;
      }
    }
    if ( !a2 )
      return 3221225485LL;
    while ( 1 )
    {
      v19 = *((unsigned int *)v14 + 10);
      if ( a4 < v19 )
        break;
      v14 = (__int64 *)*v14;
      a4 -= v19;
      if ( !v14 )
        return 3221225485LL;
    }
    v20 = (__int64)a8;
    if ( a8 )
    {
      v21 = a9;
      if ( a9 < 0x28 )
        return 3221225485LL;
    }
    else
    {
      if ( *(_BYTE *)(a1 + 441) )
        return 3221225485LL;
      v21 = *(_DWORD *)(a1 + 632);
      v20 = a1 + 640;
    }
    v22 = 0;
    *(_QWORD *)(v20 + 8) = 0LL;
    v23 = ((unsigned __int64)v21 - 16) / 0x18;
    v63 = v23;
    if ( !*(_BYTE *)(a1 + 441) )
    {
      MaxFragments = HalpDmaControllerQueryMaxFragments(*(_QWORD *)(a1 + 368), a1);
      if ( MaxFragments < (unsigned int)v23 )
        v23 = MaxFragments;
      v63 = v23;
    }
    HalpDmaCheckMdlAccessibility(a1, v14, (unsigned int)a4, *a6, &v72, &Mdl);
    v24 = a6;
    v12 = *(_DWORD *)(a1 + 520) == 3;
    v64 = 0LL;
    v57 = 0LL;
    if ( v12 )
    {
      v37 = *(_DWORD *)(a1 + 252);
      if ( *a6 > v37 )
        *a6 = v37;
      v65 = (__int64 *)a3[3];
      v57 = *v65;
      a3[5] = 0LL;
      a3[4] = 0LL;
    }
    v25 = *v24;
    v26 = 0;
    v27 = (int)v73;
    v54 = 0;
    if ( v73 )
    {
      LODWORD(v67) = 1;
      while ( 1 )
      {
        if ( !v25 )
          goto LABEL_34;
        v28 = v25;
        v29 = a4 + v14[4] + *((unsigned int *)v14 + 11);
        if ( *((_DWORD *)v14 + 10) - (int)a4 <= v25 )
          v28 = *((_DWORD *)v14 + 10) - a4;
        v25 -= v28;
        while ( 1 )
        {
          v55 = v28;
          v60 = v29;
          if ( !v28 )
            break;
          if ( v22 >= (unsigned int)v23 )
            goto LABEL_31;
          v62 = v28;
          v30 = IoMapTransferInternal(a1, (_DWORD)v14, v27, v29, (__int64)&v62, a7, v72);
          v23 = v62;
          v31 = v30;
          if ( !v62 )
          {
            v26 = v54;
            LODWORD(v23) = v63;
            v27 = (int)v73;
LABEL_31:
            v25 = 0;
            break;
          }
          *((_QWORD *)&v67 + 1) = v30 & 0xFFFFFFFFFFFFF000uLL;
          v12 = *(_DWORD *)(a1 + 520) == 3;
          v68 = (v62 + 4095LL + (v30 & 0xFFF)) & 0xFFFFFFFFFFFFF000uLL;
          if ( !v12 )
          {
            v32 = 3LL * v22;
            *(_QWORD *)(v20 + 8 * v32 + 32) = v14;
            *(_DWORD *)(v20 + 8 * v32 + 24) = v23;
            *(_QWORD *)(v20 + 8 * v32 + 16) = v30;
            goto LABEL_27;
          }
          v39 = v57;
          if ( (v57 & 0xFFF) != 0 )
          {
            v39 = v57 + 4096 - ((v57 + 4096) & 0xFFF);
            v57 = v39;
LABEL_84:
            v50 = v20 + 8 * (v22 + 2 * (v22 + 1LL));
            v64 = v50;
            *(_QWORD *)v50 = v39 + (v60 & 0xFFF);
            *(_QWORD *)(v50 + 16) = v14;
            *(_DWORD *)(v50 + 8) = v23;
            goto LABEL_85;
          }
          if ( (v30 & 0xFFF) != 0 || !v64 )
            goto LABEL_84;
          --v22;
          *(_DWORD *)(v64 + 8) += v62;
LABEL_85:
          v59 = guard_dispatch_icall_no_overrides(v65, v73[5]);
          v73[5] += v68;
          v57 += (v31 & 0xFFF) + (unsigned int)v23;
LABEL_27:
          if ( *(_DWORD *)(a1 + 520) == 1 )
            v59 = guard_dispatch_icall_no_overrides(*(_QWORD *)(v69 + 40), 3LL);
          v26 = v23 + v54;
          v29 = v23 + v60;
          v27 = (int)v73;
          v28 = v55 - v23;
          LODWORD(v23) = v63;
          ++v22;
          v54 = v26;
        }
        v14 = (__int64 *)*v14;
        a4 = 0LL;
        if ( !v14 )
          goto LABEL_33;
      }
    }
    v38 = 0LL;
    v61 = 0LL;
    while ( v25 )
    {
      v41 = v25;
      v42 = *((unsigned int *)v14 + 11);
      if ( *((_DWORD *)v14 + 10) - (int)a4 <= v25 )
        v41 = *((_DWORD *)v14 + 10) - a4;
      v25 -= v41;
      v43 = ((_WORD)v42 + (_WORD)a4) & 0xFFF;
      v56 = v43;
      v44 = &v14[((unsigned __int64)(unsigned int)(v42 + a4) >> 12) + 6];
      v58 = v44;
      if ( !*(_BYTE *)(a1 + 445) )
      {
        LOBYTE(v53) = v72;
        LOBYTE(v52) = a7;
        HalpDmaFlushBuffer(v42, v14, a4 + v42 + v14[4], v41, v52, v53);
        v26 = v54;
        v38 = v61;
        v43 = v56;
        v44 = v58;
      }
      while ( v41 )
      {
        v45 = v41;
        v46 = v43 + (*v44 << 12);
        v47 = 4096 - v43;
        v43 = 0;
        if ( v47 <= v41 )
          v45 = v47;
        if ( v46 == v38 + 1 && ((v46 ^ v38) & 0x100000000LL) == 0 && v22 )
        {
          *(_DWORD *)(v20 + 24 * (v22 - 1 + 1LL)) += v45;
        }
        else
        {
          if ( v22 >= (unsigned int)v63 )
          {
            v25 = 0;
            break;
          }
          v48 = v22++;
          v49 = 3 * v48;
          *(_QWORD *)(v20 + 8 * v49 + 16) = v46;
          *(_DWORD *)(v20 + 8 * v49 + 24) = v45;
        }
        v26 += v45;
        v41 -= v45;
        v54 = v26;
        v38 = v46 + v45 - 1LL;
        v44 = v58 + 1;
        v61 = v38;
        ++v58;
      }
      v14 = (__int64 *)*v14;
      a4 = 0LL;
      if ( !v14 )
        goto LABEL_42;
    }
LABEL_33:
    if ( v14 )
      goto LABEL_34;
LABEL_42:
    if ( v25 && v22 )
    {
      *(_DWORD *)(v20 + 24 * (v22 - 1 + 1LL)) += v25;
      v26 += v25;
    }
LABEL_34:
    v33 = a6;
    *(_DWORD *)v20 = v22;
    *v33 = v26;
    if ( v73 )
      *((_DWORD *)v73 + 4) = v26;
    v34 = a7;
    if ( v72 )
    {
      v40 = Mdl;
      HalpDmaFlushDriverMdl((ULONG_PTR)Mdl);
      if ( v40 )
      {
        do
        {
          Next = v40->Next;
          IoFreeMdl(v40);
          v40 = Next;
        }
        while ( Next );
        v34 = a7;
      }
    }
    if ( *(_BYTE *)(a1 + 441) )
      return v59;
    else
      return HalpDmaControllerProgramChannel(*(_QWORD *)(a1 + 368), a1, a10, a11, v20, *(_QWORD *)(a1 + 456) + a5, v34);
  }
  else
  {
    v36 = a8;
    if ( a8 && a9 >= 0x10 )
    {
      *a8 = 0;
      *((_QWORD *)v36 + 1) = 0LL;
    }
    else if ( *(_BYTE *)(a1 + 441) )
    {
      return 3221225485LL;
    }
    return 0LL;
  }
}
