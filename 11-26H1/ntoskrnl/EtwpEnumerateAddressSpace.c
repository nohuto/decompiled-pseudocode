/*
 * XREFs of EtwpEnumerateAddressSpace @ 0x140921CD0
 * Callers:
 *     EtwpProcessEnumCallback @ 0x1409BC0E0 (EtwpProcessEnumCallback.c)
 *     EtwTraceProcess @ 0x1409D02D8 (EtwTraceProcess.c)
 * Callees:
 *     KeAreAllApcsDisabled @ 0x1402631B0 (KeAreAllApcsDisabled.c)
 *     ObfDereferenceObject @ 0x1402646B0 (ObfDereferenceObject.c)
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 *     EtwpLogKernelEvent @ 0x14032EDF0 (EtwpLogKernelEvent.c)
 *     RtlImageNtHeader @ 0x140462E40 (RtlImageNtHeader.c)
 *     EtwpTraceImageUnload @ 0x14046F868 (EtwpTraceImageUnload.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x140735DB0 (_guard_dispatch_icall_no_overrides.c)
 *     memset_0 @ 0x140742480 (memset_0.c)
 *     RtlReadULong64FromUser @ 0x140782054 (RtlReadULong64FromUser.c)
 *     RtlReadULongFromUser @ 0x140782090 (RtlReadULongFromUser.c)
 *     FsRtlReleaseFileNameInformation @ 0x140922600 (FsRtlReleaseFileNameInformation.c)
 *     ObQueryNameStringMode @ 0x140922640 (ObQueryNameStringMode.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x140A82E00 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     ExAllocatePool2 @ 0x140C16430 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140C16E50 (ExFreePoolWithTag.c)
 */

void __fastcall EtwpEnumerateAddressSpace(PRKPROCESS PROCESS, __int64 a2, int *a3)
{
  int v3; // eax
  __int64 v4; // r15
  struct _KPROCESS *v5; // r9
  int v6; // esi
  char v7; // cl
  unsigned __int16 *Pool2; // r14
  __m128i *v9; // rax
  __m128i *i; // rdi
  __int64 v11; // rcx
  int v12; // edx
  unsigned __int64 v13; // rax
  int NameStringMode; // r13d
  PIMAGE_NT_HEADERS v15; // rax
  __int64 ULong64FromUser; // rdx
  int v17; // edx
  PRKPROCESS v18; // r13
  __int64 v19; // rcx
  void *v20; // r9
  __m128i v21; // xmm2
  __m128i v22; // xmm3
  __int16 v23; // r13
  unsigned int v24; // eax
  int v25; // ecx
  unsigned int v26; // r8d
  unsigned __int64 v27; // rcx
  unsigned int v28; // ecx
  int v29; // ecx
  __int16 v30; // [rsp+50h] [rbp-1A8h]
  int v31; // [rsp+54h] [rbp-1A4h] BYREF
  __int16 v32; // [rsp+58h] [rbp-1A0h]
  __int16 v33; // [rsp+5Ch] [rbp-19Ch]
  __int16 v34; // [rsp+60h] [rbp-198h]
  int v35; // [rsp+64h] [rbp-194h]
  int v36; // [rsp+68h] [rbp-190h]
  int v37; // [rsp+6Ch] [rbp-18Ch]
  int v38; // [rsp+70h] [rbp-188h]
  PRKPROCESS v39; // [rsp+78h] [rbp-180h]
  int v40; // [rsp+80h] [rbp-178h]
  int v41; // [rsp+84h] [rbp-174h]
  int v42; // [rsp+88h] [rbp-170h]
  int ULongFromUser; // [rsp+8Ch] [rbp-16Ch]
  int v44; // [rsp+90h] [rbp-168h]
  int v45; // [rsp+94h] [rbp-164h]
  int v46; // [rsp+98h] [rbp-160h]
  int v47; // [rsp+9Ch] [rbp-15Ch]
  int v48; // [rsp+A0h] [rbp-158h]
  int v49; // [rsp+A4h] [rbp-154h]
  __int64 v50; // [rsp+A8h] [rbp-150h]
  int v51; // [rsp+B0h] [rbp-148h]
  int v52; // [rsp+B4h] [rbp-144h]
  __int64 v53; // [rsp+B8h] [rbp-140h]
  __int64 v54; // [rsp+C0h] [rbp-138h]
  __int64 v55; // [rsp+C8h] [rbp-130h]
  __int64 v56; // [rsp+D0h] [rbp-128h]
  __int64 v57; // [rsp+D8h] [rbp-120h]
  PIMAGE_NT_HEADERS v58; // [rsp+E0h] [rbp-118h]
  unsigned __int16 *v59; // [rsp+E8h] [rbp-110h]
  __int64 v60; // [rsp+F0h] [rbp-108h]
  __int64 v61; // [rsp+F8h] [rbp-100h]
  __int64 v62; // [rsp+100h] [rbp-F8h]
  __m128i *v63; // [rsp+108h] [rbp-F0h]
  __int64 v64; // [rsp+110h] [rbp-E8h]
  PRKPROCESS v65; // [rsp+118h] [rbp-E0h]
  __int64 v66; // [rsp+120h] [rbp-D8h]
  PVOID P; // [rsp+128h] [rbp-D0h]
  _QWORD v68[2]; // [rsp+130h] [rbp-C8h] BYREF
  int Flink; // [rsp+140h] [rbp-B8h]
  int v70; // [rsp+144h] [rbp-B4h]
  int v71; // [rsp+148h] [rbp-B0h]
  char v72; // [rsp+14Ch] [rbp-ACh]
  char v73; // [rsp+14Dh] [rbp-ABh]
  __int16 v74; // [rsp+14Eh] [rbp-AAh]
  __int64 v75; // [rsp+150h] [rbp-A8h]
  __int128 v76; // [rsp+158h] [rbp-A0h]
  __int128 v77; // [rsp+170h] [rbp-88h] BYREF
  __m128i *v78; // [rsp+180h] [rbp-78h] BYREF
  unsigned int v79; // [rsp+188h] [rbp-70h]
  int v80; // [rsp+18Ch] [rbp-6Ch]
  _QWORD v81[3]; // [rsp+190h] [rbp-68h] BYREF
  int v82; // [rsp+1A8h] [rbp-50h]
  int v83; // [rsp+1ACh] [rbp-4Ch]
  __m128i v84; // [rsp+1B0h] [rbp-48h]

  v4 = a2;
  v5 = PROCESS;
  v39 = PROCESS;
  v65 = PROCESS;
  v66 = a2;
  v31 = 0;
  v77 = 0LL;
  v55 = 0LL;
  if ( !a3 || (v3 = *a3, v6 = 1, (*a3 & 4) == 0) )
    v6 = 0;
  if ( !a3 || (v3 = a3[1], LOBYTE(v3) = 1, (a3[1] & 0x8000) == 0) )
    LOBYTE(v3) = 0;
  v35 = v6;
  if ( (_BYTE)v3 )
  {
    v6 |= 4u;
    v35 = v6;
  }
  if ( a2 )
  {
    if ( a3 )
    {
      v3 = *a3;
      if ( (*a3 & 0x8000) != 0 )
      {
        v6 |= 2u;
        v35 = v6;
      }
    }
  }
  if ( !v6 )
  {
    Pool2 = 0LL;
    goto LABEL_43;
  }
  if ( a2 )
  {
    v50 = *(_QWORD *)(a2 + 32);
    v60 = v50;
    v7 = *(_BYTE *)(a2 + 64);
    Pool2 = *(unsigned __int16 **)(a2 + 16);
    LOWORD(a2) = 5124 - (v7 != 0);
    v40 = a2;
    v32 = a2;
    LOWORD(v3) = 1064 - (v7 != 0);
    v37 = v3;
    v33 = v3;
    LOWORD(v3) = 641 - (v7 != 0);
  }
  else
  {
    Pool2 = (unsigned __int16 *)ExAllocatePool2(0x40uLL);
    v37 = 1062;
    v33 = 1062;
    v3 = 611;
    v50 = 0LL;
    v60 = 0LL;
    v40 = 0;
    v32 = 0;
    v5 = v39;
  }
  v34 = v3;
  v42 = v3;
  v59 = Pool2;
  if ( Pool2 || (v6 &= ~1u, (v35 = v6) != 0) )
  {
    v56 = 0LL;
    v45 = 0;
    v57 = 0LL;
    v46 = 0;
    v62 = 0LL;
    v30 = 0;
    v38 = 0;
    v9 = (__m128i *)MmEnumerateAddressSpaceAndReferenceImages(v5);
    P = v9;
    if ( v9 )
    {
      for ( i = v9; ; i += 3 )
      {
        v63 = i;
        if ( !i->m128i_i64[0] )
        {
          ExFreePoolWithTag(P, 0);
          goto LABEL_43;
        }
        v11 = i->m128i_i64[0] & 3;
        i->m128i_i64[0] &= 0xFFFFFFFFFFFFFFFCuLL;
        v12 = 0;
        v41 = 0;
        v48 = 0;
        if ( !v11 )
          break;
        if ( v11 != 2 )
        {
          v23 = v37;
          v30 = v37;
          v26 = 0x8000;
          v38 = 0x8000;
          v12 = 3;
          v24 = 44;
          v31 = 44;
          v25 = 1;
          goto LABEL_38;
        }
        v23 = v42;
        v30 = v42;
        v26 = 536903680;
        v38 = 536903680;
        if ( v4 )
        {
          v24 = 32;
          v31 = 32;
        }
        else
        {
          v31 = 24;
          i[1].m128i_i32[1] = 0x8000;
          v24 = v31;
        }
LABEL_51:
        if ( v4 )
        {
          v28 = 6297602;
          if ( v12 )
            v28 = v12 | 0x601800;
          *(_QWORD *)&v77 = i;
          *((_QWORD *)&v77 + 1) = v24;
          EtwpLogKernelEvent((__int64)&v77, *(_QWORD *)(v50 + 1360), *(_DWORD *)v50, 1u, v23, v28);
        }
        else
        {
          v29 = 6297858;
          if ( v12 )
            v29 = v12 | 0x601900;
          v78 = i;
          v79 = v24;
          v80 = 0;
          EtwTraceKernelEvent((int)&v78, 1, v26, v23, v29);
        }
LABEL_39:
        ;
      }
      if ( (v6 & 2) != 0 )
      {
        v36 = 1;
        v27 = i->m128i_u64[1];
        v56 = (v27 >> 1) & 0x1F;
        v45 = (v27 >> 1) & 0x1F;
        v62 = i[2].m128i_i64[0];
        i->m128i_i64[1] = v27 & 0xFFFFFFFFFFFFFFC0uLL;
        LODWORD(v27) = v27 & 1;
        v57 = (unsigned int)v27;
        v46 = v27;
      }
      else
      {
        v36 = 0;
      }
      v13 = i->m128i_u64[1];
      v53 = (v13 >> 6) & 0xF;
      v51 = (v13 >> 6) & 0xF;
      v54 = (v13 >> 10) & 7;
      v52 = (v13 >> 10) & 7;
      i->m128i_i64[1] = v13 & 0xFFFFFFFFFFFFE03FuLL;
      v55 = 0LL;
      if ( KeAreAllApcsDisabled() )
        NT_ASSERT("KeAreAllApcsDisabled() == 0");
      if ( FltMgrCallbacks )
        NameStringMode = guard_dispatch_icall_no_overrides(i->m128i_i64[0], 1024LL);
      else
        NameStringMode = -1073741637;
      v44 = NameStringMode;
      if ( NameStringMode < 0 )
      {
        NameStringMode = ObQueryNameStringMode(i->m128i_i64[0], (_DWORD)Pool2, 0x2000, (unsigned int)&v31, 0);
        v44 = NameStringMode;
      }
      v47 = 0;
      ULongFromUser = i[2].m128i_i32[2];
      v49 = ULongFromUser;
      v64 = i[1].m128i_i64[0];
      v61 = v64;
      v15 = RtlImageNtHeader((PVOID)i->m128i_i64[1]);
      v58 = v15;
      if ( v15 )
      {
        ULongFromUser = RtlReadULongFromUser(&v15->OptionalHeader.CheckSum);
        v49 = ULongFromUser;
        v47 = RtlReadULongFromUser(&v58->FileHeader.TimeDateStamp);
        ULong64FromUser = RtlReadULong64FromUser(&v58->OptionalHeader.ImageBase);
        v61 = ULong64FromUser;
      }
      else
      {
        ULong64FromUser = v64;
      }
      if ( NameStringMode >= 0 )
      {
        if ( v4 )
        {
          memset_0(v68, 0, 0x40uLL);
          if ( Pool2 )
          {
            v17 = *Pool2;
            v18 = v39;
            if ( (_WORD)v17 )
            {
              v19 = *((_QWORD *)Pool2 + 1);
              if ( v19 )
              {
                Flink = (int)v39[1].Header.WaitListHead.Flink;
                v68[0] = i->m128i_i64[1];
                v68[1] = i[1].m128i_i64[1];
                v70 = i[2].m128i_i32[2];
                v71 = 0;
                v72 = v53;
                v73 = v54;
                v75 = i[1].m128i_i64[0];
                v74 = 0;
                v76 = 0LL;
                v81[0] = v68;
                v81[1] = 56LL;
                v81[2] = v19;
                v82 = v17;
                v83 = 0;
                v84.m128i_i64[0] = (__int64)&EtwpNull;
                v84.m128i_i64[1] = 2LL;
                EtwpLogKernelEvent((__int64)v81, *(_QWORD *)(v50 + 1360), *(_DWORD *)v50, 3u, v40, 0x501803u);
              }
            }
            goto LABEL_33;
          }
        }
        else
        {
          EtwpTraceImageUnload(
            Pool2,
            (__int64)v39,
            i->m128i_i64[1],
            i[1].m128i_i64[1],
            ULongFromUser,
            v47,
            v53,
            v54,
            ULong64FromUser,
            0);
        }
      }
      v18 = v39;
LABEL_33:
      if ( v55 )
        FsRtlReleaseFileNameInformation();
      v20 = (void *)i->m128i_i64[0];
      if ( v36 )
      {
        v21 = *i;
        v22 = i[1];
        v84 = i[2];
        *i = 0LL;
        i[1] = 0LL;
        i[2] = 0LL;
        i[2].m128i_i32[2] = (__int32)v18[1].Header.WaitListHead.Flink;
        i->m128i_i64[1] = *(_QWORD *)(v21.m128i_i64[0] + 24);
        i->m128i_i64[0] = _mm_srli_si128(v21, 8).m128i_u64[0];
        i[1].m128i_i64[1] = _mm_srli_si128(v22, 8).m128i_u64[0];
        i[2].m128i_i64[0] = v62;
        i[1].m128i_i64[0] = ((unsigned __int64)(unsigned int)v56 << 48) & 0xFF5FFFFFFFFFFFFFuLL ^ ((unsigned __int64)(unsigned int)v57 << 53) & 0x20000000000000LL ^ (i[1].m128i_i64[0] ^ ((unsigned __int64)(unsigned int)v56 << 48)) & 0xFF40FFFFFFFFFFFFuLL | 0x40000000000000LL;
        v23 = v37;
        v30 = v37;
        v38 = 0x8000;
        v41 = 3;
        v31 = 44;
      }
      else
      {
        v23 = v30;
      }
      ObfDereferenceObject(v20);
      v24 = v31;
      v25 = v36;
      v12 = v41;
      v26 = v38;
LABEL_38:
      if ( !v25 )
        goto LABEL_39;
      goto LABEL_51;
    }
  }
LABEL_43:
  if ( !v4 && Pool2 )
    ExFreePoolWithTag(Pool2, 0);
}
