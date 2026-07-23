/*
 * XREFs of HvHiveStartMemoryBacked @ 0x140B4A534
 * Callers:
 *     CmpCreateHive @ 0x1408BC440 (CmpCreateHive.c)
 *     CmpGetSystemControlValues @ 0x140CF26DC (CmpGetSystemControlValues.c)
 * Callees:
 *     SetFailureLocation @ 0x14048E3E4 (SetFailureLocation.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     HvIsInPlaceBaseBlockValid @ 0x1408653CC (HvIsInPlaceBaseBlockValid.c)
 *     HvpBuildMapForMemoryBackedHive @ 0x1408666FC (HvpBuildMapForMemoryBackedHive.c)
 *     HvpAdjustHiveFreeDisplay @ 0x140A88570 (HvpAdjustHiveFreeDisplay.c)
 *     HvpFillFileName @ 0x140AC4DEC (HvpFillFileName.c)
 *     HvpHeaderCheckSum @ 0x140C5E720 (HvpHeaderCheckSum.c)
 */

__int64 __fastcall HvHiveStartMemoryBacked(
        ULONG_PTR BugCheckParameter2,
        __int64 a2,
        int a3,
        unsigned int a4,
        _DWORD *a5,
        _QWORD *a6,
        int a7,
        unsigned __int16 *a8,
        int a9,
        _OWORD *a10,
        _OWORD *a11,
        __int64 a12,
        __int64 a13,
        _BYTE *a14,
        _DWORD *a15,
        __int64 a16)
{
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rbx
  _DWORD *v21; // r14
  int v22; // ebx
  __int64 v24; // rdx
  int v25; // r12d
  int v26; // eax
  int v27; // ecx
  int v28; // eax
  int v29; // r10d
  int v30; // ecx
  int v31; // eax
  int v32; // eax
  unsigned int *v33; // rbx
  __int64 v34; // rdx
  char v35; // r9
  __int64 *v36; // r14
  __int64 v37; // rcx
  __int64 v38; // rdx
  __int64 v39; // rax
  __int64 *v40; // r12
  _OWORD *v41; // rax
  _OWORD *v42; // rcx
  __int64 v43; // r8
  __int128 v44; // xmm1
  int v45; // eax
  int v46; // ebx
  int v47; // [rsp+20h] [rbp-38h]

  *(_QWORD *)(BugCheckParameter2 + 56) = a16;
  if ( (_DWORD)a2 == 2
    || (unsigned int)a2 >= 5
    || (a3 & 0xF5617EEC) != 0
    || a4 > 2
    || (unsigned int)(a7 - 1) > 7
    || (v18 = 0, !a5) && (((_DWORD)a2 - 1) & 0xFFFFFFFC) == 0 )
  {
    __fastfail(5u);
  }
  if ( a14 )
    *a14 = 0;
  if ( a6 )
  {
    *(_QWORD *)(BugCheckParameter2 + 24) = *a6;
    *(_QWORD *)(BugCheckParameter2 + 32) = a6[1];
    *(_QWORD *)(BugCheckParameter2 + 40) = a6[3];
    *(_QWORD *)(BugCheckParameter2 + 48) = a6[4];
  }
  v19 = 4;
  if ( a4 )
  {
    if ( a4 == 1 )
      v19 = 1;
    *(_DWORD *)(BugCheckParameter2 + 168) = v19;
  }
  else
  {
    *(_DWORD *)(BugCheckParameter2 + 168) = 0;
  }
  *(_DWORD *)(BugCheckParameter2 + 160) = a3;
  *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 136) = a7;
  *(_DWORD *)(BugCheckParameter2 + 216) = 2;
  *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellPaged;
  *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
  v20 = MEMORY[0xFFFFF78000000014];
  *(_QWORD *)(BugCheckParameter2 + 200) = MEMORY[0xFFFFF78000000014];
  *(_BYTE *)(BugCheckParameter2 + 194) = 1;
  switch ( (_DWORD)a2 )
  {
    case 0:
      LODWORD(a2) = (a3 & 1) == 0;
      v21 = (_DWORD *)guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132), a2);
      if ( !v21 )
      {
        v47 = 96;
LABEL_20:
        v22 = -1073741670;
LABEL_21:
        SetFailureLocation(a16, 0, 25, v22, v47);
        return (unsigned int)v22;
      }
      if ( (((a7 << 9) - 1) & (unsigned int)v21) != 0 )
      {
        guard_dispatch_icall_no_overrides((__int64)v21, *(unsigned int *)(BugCheckParameter2 + 132));
        LOBYTE(v24) = 1;
        v21 = (_DWORD *)guard_dispatch_icall_no_overrides(4096LL, v24);
        if ( !v21 )
        {
          v47 = 112;
          goto LABEL_20;
        }
        *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
        if ( a15 )
          *a15 = 842091843;
      }
      else if ( a15 )
      {
        *a15 = 825314627;
      }
      memset_0(v21, 0, 0x1000uLL);
      *v21 = 1718052210;
      v21[1] = 1;
      v21[2] = 1;
      v21[8] = 1;
      v21[9] = -1;
      v21[11] = 1;
      HvpFillFileName((__int64)v21, a8);
      v21[36] = 0;
      v25 = a3 & 0x80000;
      if ( v25 )
        v21[36] = 2;
      v21[5] = 1;
      v26 = v25 != 0 ? 6 : 3;
      v21[6] = v26;
      *(_DWORD *)(BugCheckParameter2 + 220) = v26;
      v21[41] = 1836346738;
      *(_DWORD *)(BugCheckParameter2 + 172) = 1;
      *(_DWORD *)(BugCheckParameter2 + 184) = 1;
      *(_DWORD *)(BugCheckParameter2 + 176) = 1;
      *(_QWORD *)(v21 + 3) = v20;
      if ( a10 )
      {
        *((_OWORD *)v21 + 7) = *a10;
        *((_OWORD *)v21 + 8) = *a10;
      }
      if ( a11 )
        *(_OWORD *)(v21 + 37) = *a11;
      *(_QWORD *)(BugCheckParameter2 + 64) = v21;
      v21[1022] = 0;
      return 0LL;
    case 4:
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      v27 = a5[5];
      v28 = a5[6] - 4096;
      *(_BYTE *)(BugCheckParameter2 + 140) |= 3u;
      *(_QWORD *)(BugCheckParameter2 + 8) = HvpGetCellFlat;
      *(_QWORD *)(BugCheckParameter2 + 16) = HvpReleaseCellFlat;
      *(_DWORD *)(BugCheckParameter2 + 220) = v28 + (v27 << 12);
      *(_DWORD *)(BugCheckParameter2 + 280) = a5[10];
      *(_DWORD *)(BugCheckParameter2 + 216) = 1;
      if ( a15 )
        *a15 = 0;
      return 0LL;
    case 3:
      if ( !HvIsInPlaceBaseBlockValid(a5) )
      {
        v47 = 128;
LABEL_44:
        v22 = -1073741492;
        goto LABEL_21;
      }
      v30 = a5[5];
      v31 = a5[6];
      *(_BYTE *)(BugCheckParameter2 + 140) &= ~2u;
      *(_QWORD *)(BugCheckParameter2 + 64) = a5;
      *(_DWORD *)(BugCheckParameter2 + 216) = v29;
      *(_DWORD *)(BugCheckParameter2 + 220) = v31 - 4096 + (v30 << 12);
      a5[1022] = 0;
      v32 = a5[1];
      *(_DWORD *)(BugCheckParameter2 + 172) = v32;
      *(_DWORD *)(BugCheckParameter2 + 184) = v32;
      *(_DWORD *)(BugCheckParameter2 + 176) = v32;
      v22 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, a5[10], 0);
      if ( v22 < 0 )
      {
        SetFailureLocation(a16, 0, 25, v22, 144);
        return (unsigned int)v22;
      }
      v22 = HvpBuildMapForMemoryBackedHive(BugCheckParameter2, (__int64)(a5 + 1024), a9, a12, a13);
      if ( v22 < 0 )
      {
        SetFailureLocation(a16, 0, 25, v22, 160);
        return (unsigned int)v22;
      }
      if ( a15 )
        *a15 = 0;
      if ( v22 != 1073741833 )
        return 0LL;
      return 2147483690LL;
    default:
      if ( *a5 != 1718052210
        || a5[7]
        || a5[8] != 1
        || a5[5] > 1u
        || (unsigned int)(a5[6] - 3) > 3
        || (v33 = a5 + 10, a5[10] > 0x7FFFE000u)
        || (unsigned int)HvpHeaderCheckSum(a5) != a5[127] )
      {
        v47 = 176;
        goto LABEL_44;
      }
      LOBYTE(v34) = v35;
      v36 = (__int64 *)(BugCheckParameter2 + 64);
      v37 = guard_dispatch_icall_no_overrides(*(unsigned int *)(BugCheckParameter2 + 132), v34);
      *(_QWORD *)(BugCheckParameter2 + 64) = v37;
      if ( !v37 )
      {
        v47 = 192;
        goto LABEL_20;
      }
      if ( (((a7 << 9) - 1) & (unsigned int)v37) != 0 )
      {
        guard_dispatch_icall_no_overrides(v37, *(unsigned int *)(BugCheckParameter2 + 132));
        LOBYTE(v38) = 1;
        v39 = guard_dispatch_icall_no_overrides(4096LL, v38);
        *v36 = v39;
        if ( !v39 )
        {
          v47 = 208;
          goto LABEL_20;
        }
        v40 = (__int64 *)(BugCheckParameter2 + 64);
        *(_DWORD *)(BugCheckParameter2 + 132) = 4096;
        if ( a15 )
        {
          *a15 = 875646275;
          v40 = (__int64 *)(BugCheckParameter2 + 64);
        }
        v33 = a5 + 10;
      }
      else
      {
        v40 = (__int64 *)(BugCheckParameter2 + 64);
        if ( a15 )
          *a15 = 858869059;
      }
      v41 = (_OWORD *)*v36;
      v42 = a5;
      v43 = 4LL;
      do
      {
        *v41 = *v42;
        v41[1] = v42[1];
        v41[2] = v42[2];
        v41[3] = v42[3];
        v41[4] = v42[4];
        v41[5] = v42[5];
        v41[6] = v42[6];
        v41 += 8;
        v44 = v42[7];
        v42 += 8;
        *(v41 - 1) = v44;
        --v43;
      }
      while ( v43 );
      *(_DWORD *)(*v36 + 4092) = a5[1023];
      *(_DWORD *)(*v36 + 4088) = a5[1022];
      v45 = a5[1];
      *(_DWORD *)(BugCheckParameter2 + 172) = v45;
      *(_DWORD *)(BugCheckParameter2 + 184) = v45;
      *(_DWORD *)(BugCheckParameter2 + 176) = v45;
      *(_DWORD *)(BugCheckParameter2 + 220) = *(_DWORD *)(*v36 + 24) - 4096 + (*(_DWORD *)(*v36 + 20) << 12);
      v22 = HvpAdjustHiveFreeDisplay(BugCheckParameter2, *v33, 0);
      if ( v22 < 0 )
      {
        guard_dispatch_icall_no_overrides(*v36, *(unsigned int *)(BugCheckParameter2 + 132));
        *v40 = 0LL;
        SetFailureLocation(a16, 0, 25, v22, 224);
        return (unsigned int)v22;
      }
      v46 = HvpBuildMapForMemoryBackedHive(BugCheckParameter2, (__int64)(a5 + 1024), a9, a12, a13);
      if ( v46 < 0 )
      {
        v22 = -1073741492;
        SetFailureLocation(a16, 0, 25, -1073741492, 240);
        guard_dispatch_icall_no_overrides(*v36, *(unsigned int *)(BugCheckParameter2 + 132));
        *v40 = 0LL;
        return (unsigned int)v22;
      }
      if ( (*(_DWORD *)(*v36 + 144) & 1) != 0 && a14 )
        *a14 = 1;
      *(_DWORD *)(*v40 + 144) &= ~1u;
      HvpFillFileName(*v40, a8);
      if ( v46 == 1073741833 )
        return (unsigned int)-2147483606;
      return v18;
  }
}
