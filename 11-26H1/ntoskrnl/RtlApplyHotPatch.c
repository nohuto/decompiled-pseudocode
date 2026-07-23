/*
 * XREFs of RtlApplyHotPatch @ 0x140C0827C
 * Callers:
 *     MiApplyHotPatchToDriverDataPages @ 0x140874600 (MiApplyHotPatchToDriverDataPages.c)
 *     MiApplyImageHotPatch @ 0x140874A08 (MiApplyImageHotPatch.c)
 *     MiApplyImageHotPatchRequest @ 0x140874C78 (MiApplyImageHotPatchRequest.c)
 *     MiApplyImageHotPatchDpc @ 0x140C077F0 (MiApplyImageHotPatchDpc.c)
 * Callees:
 *     RtlFindClearBitsAndSet @ 0x14035A440 (RtlFindClearBitsAndSet.c)
 *     RtlGetHotPatchSize @ 0x1407257D0 (RtlGetHotPatchSize.c)
 *     RtlGetHpatEntryAddress @ 0x1407257E8 (RtlGetHpatEntryAddress.c)
 *     RtlpRevertFunctionPatchFromUndoEntry @ 0x14072580C (RtlpRevertFunctionPatchFromUndoEntry.c)
 *     RtlPopulateHpatEntry @ 0x14072598C (RtlPopulateHpatEntry.c)
 *     RtlpApplyFunctionPatch @ 0x1407259F0 (RtlpApplyFunctionPatch.c)
 *     RtlpCheckFunctionPatchAppliedInOriginalImage @ 0x140725A0C (RtlpCheckFunctionPatchAppliedInOriginalImage.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     RtlIsCodeInEcRanges @ 0x1408B1754 (RtlIsCodeInEcRanges.c)
 *     RtlpDetermineHotPatchExtent @ 0x140C08808 (RtlpDetermineHotPatchExtent.c)
 */

__int64 __fastcall RtlApplyHotPatch(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        unsigned int *a5,
        char a6,
        unsigned int *a7,
        unsigned int a8,
        __int64 a9,
        int a10,
        __int64 a11,
        __int64 a12,
        __int64 a13,
        unsigned int a14,
        unsigned int *a15,
        unsigned int a16,
        unsigned int *a17,
        unsigned int a18,
        _DWORD *a19,
        unsigned int *a20,
        char a21,
        unsigned __int16 a22,
        PRTL_BITMAP BitMapHeader,
        __int64 a24,
        __int128 *a25,
        int a26,
        unsigned int *a27,
        unsigned int *a28,
        unsigned int a29)
{
  unsigned int *v29; // rbx
  __int128 *v30; // rsi
  __int64 v31; // r14
  __int64 v32; // rdi
  int HotPatchSize; // edx
  unsigned int v34; // r8d
  unsigned int *v35; // r9
  __int64 v36; // r10
  unsigned int v37; // r11d
  int v38; // r12d
  __int64 v39; // r15
  unsigned int v40; // r13d
  int v41; // r12d
  unsigned int v42; // edi
  __int64 v43; // r8
  __int64 v44; // r9
  unsigned __int16 v45; // r14
  __int64 result; // rax
  __int64 v47; // rax
  char *v48; // rdi
  __int64 v49; // rsi
  _BYTE *v50; // rdx
  unsigned int v51; // eax
  __int64 HpatEntryAddress; // rax
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // r11
  __int64 v56; // rcx
  unsigned int v57; // r11d
  _RTL_BITMAP *v58; // rbx
  ULONG ClearBitsAndSet; // r8d
  __int64 v60; // rsi
  _DWORD *v61; // rdx
  __int64 v62; // rax
  int v63; // [rsp+38h] [rbp-71h]
  __int64 v64; // [rsp+58h] [rbp-51h]
  __int64 v65; // [rsp+60h] [rbp-49h]
  int v66; // [rsp+68h] [rbp-41h]
  __int128 *v67; // [rsp+70h] [rbp-39h]
  __int64 v68; // [rsp+78h] [rbp-31h]
  __int64 v69; // [rsp+80h] [rbp-29h]
  __int64 v70; // [rsp+88h] [rbp-21h]
  __int128 v71; // [rsp+90h] [rbp-19h] BYREF
  __int64 v72; // [rsp+A0h] [rbp-9h]

  v29 = a20;
  v30 = &v71;
  v72 = 0LL;
  a10 = 0;
  v68 = 0LL;
  v31 = a3;
  v64 = 0LL;
  a29 = 0;
  a28 = 0LL;
  v66 = 0;
  v32 = a1;
  v65 = 0LL;
  v70 = 0LL;
  a26 = 0;
  v71 = 0LL;
  if ( a25 )
    v30 = a25;
  a27 = 0LL;
  a16 = 0;
  v67 = v30;
  LODWORD(a25) = 0;
  if ( a20 )
  {
    HotPatchSize = RtlGetHotPatchSize(a19);
    LODWORD(a25) = HotPatchSize;
    while ( 1 )
    {
LABEL_5:
      if ( !v29 )
        break;
      v38 = *v29;
      if ( !*v29 )
        break;
      v39 = 0LL;
      v69 = 0LL;
      LOBYTE(a20) = 0;
      if ( v38 < 0 )
      {
        if ( (a21 & 2) == 0 )
          goto LABEL_14;
        v35 = a17;
        v34 = a18;
        v39 = a11;
        v68 = *((_QWORD *)v30 + 2);
        v64 = a13;
        a29 = a14;
        a28 = a15;
        v66 = a12;
        a27 = a17;
        a16 = a18;
        v65 = v32;
        v70 = v36;
      }
      else
      {
        LODWORD(a20) = a21 & 1;
        if ( (a21 & 1) != 0 )
        {
          v35 = a7;
          v34 = a8;
          v68 = *((_QWORD *)v30 + 1);
          a28 = a5;
          v65 = a11;
          v70 = a12;
          a27 = a7;
          a16 = a8;
          v64 = v31;
          a29 = v37;
          v66 = v36;
        }
        v39 = v32 & -(__int64)((a21 & 1) != 0);
      }
      v69 = v39;
LABEL_14:
      ++v29;
      v40 = v38 & 0xFC000;
      v41 = v38 & 0xFFF;
      if ( v39 )
      {
        while ( 1 )
        {
          while ( 1 )
          {
            if ( !v41 )
            {
              v32 = a1;
              v36 = a2;
              v37 = a4;
              v31 = a3;
              goto LABEL_5;
            }
            v42 = *v29;
            v45 = -21916;
            if ( !RtlIsCodeInEcRanges(*v29, v35, v34) )
              v45 = a22;
            if ( !*(_QWORD *)v30 )
              break;
            RtlpDetermineHotPatchExtent(v40, v45, &a10, &a26);
            result = guard_dispatch_icall_no_overrides(v68, v42 + a10);
            if ( (int)result < 0 )
              return result;
            HotPatchSize = (int)a25;
            --v41;
            v30 = v67;
            v35 = a27;
            v34 = a16;
            v29 += (unsigned int)a25;
            if ( v40 == 114688 )
            {
              if ( a28 )
                ++*a28;
            }
          }
          v47 = v29[1];
          v48 = (char *)(v69 + *v29);
          v49 = v47 + v70;
          switch ( v40 )
          {
            case 0x1C000u:
              if ( (_DWORD)a25 == 2 )
                v50 = 0LL;
              else
                v50 = v29 + 2;
              v51 = RtlpCheckFunctionPatchAppliedInOriginalImage(v48, v50, v43, v44, v64);
              if ( v51 == -1 )
                return 3221225496LL;
              if ( v51 == -2 )
              {
                if ( *a28 >= a29 )
                  return 3221226668LL;
                HpatEntryAddress = RtlGetHpatEntryAddress(v64, *a28);
                RtlPopulateHpatEntry(
                  HpatEntryAddress,
                  (_QWORD *)(HpatEntryAddress + 4096),
                  v49,
                  v66 + HpatEntryAddress - v69,
                  v69,
                  0,
                  v63,
                  v45,
                  a21);
                v56 = a24;
                if ( a24 && (_BYTE)a20 )
                {
                  *(_DWORD *)(a24 + 8 * v55) = *v29;
                  *(_DWORD *)(v56 + 8 * v55 + 4) = *(_DWORD *)v48;
                }
                RtlpApplyFunctionPatch(v48, v66 + *v29, v53, v54, v54);
                ++*a28;
              }
              else
              {
                if ( v51 >= a29 )
                  return 3221225496LL;
                *(_QWORD *)(RtlGetHpatEntryAddress(v64, v51) + 4096) = v49;
              }
              if ( BitMapHeader && (_BYTE)a20 )
                *((_BYTE *)BitMapHeader->Buffer + ((unsigned __int64)v57 >> 3)) |= 1 << (v57 & 7);
              break;
            case 0x2C000u:
              if ( v45 == 0x8664 || v45 == 0xAA64 )
                *(_QWORD *)v48 = v49;
              else
                *(_DWORD *)v48 = v49;
              break;
            case 0x5C000u:
              if ( v45 == 0x8664 || v45 == 0xAA64 )
                *(_QWORD *)v48 = *(_QWORD *)(v47 + v65);
              else
                *(_DWORD *)v48 = *(_DWORD *)(v47 + v65);
              break;
            case 0x78000u:
              if ( a9 == -1 )
                return 3221225520LL;
              if ( a9 && *(_BYTE *)(v47 + a9) == 0xFF )
                *(_QWORD *)v48 += *(_QWORD *)(8 * v47);
              break;
          }
          HotPatchSize = (int)a25;
          --v41;
          v30 = v67;
          v35 = a27;
          v34 = a16;
          v29 += (unsigned int)a25;
        }
      }
      v29 += (unsigned int)(v41 * HotPatchSize);
    }
  }
  v58 = BitMapHeader;
  if ( BitMapHeader )
  {
    ClearBitsAndSet = RtlFindClearBitsAndSet(BitMapHeader, 1u, 0);
    if ( ClearBitsAndSet != -1 )
    {
      v60 = a24;
      do
      {
        v61 = (_DWORD *)(v60 + 8LL * ClearBitsAndSet);
        v62 = (unsigned int)*v61;
        if ( (_DWORD)v62 )
          RtlpRevertFunctionPatchFromUndoEntry((_DWORD *)(v32 + v62), v61);
        ClearBitsAndSet = RtlFindClearBitsAndSet(v58, 1u, ClearBitsAndSet);
      }
      while ( ClearBitsAndSet != -1 );
    }
  }
  return 0LL;
}
