/*
 * XREFs of PsmHostStateNotification2 @ 0x18000E610
 * Callers:
 *     <none>
 * Callees:
 *     ?HampFreeHeap@@YAXPEAX@Z @ 0x18000D420 (-HampFreeHeap@@YAXPEAX@Z.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18000DD48 (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 *     ??0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ @ 0x18000EBEC (--0ModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAA@XZ.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18000EC30 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     CempLockTrackerClearForThread @ 0x18000F650 (CempLockTrackerClearForThread.c)
 *     ?HampAllocateHeap@@YAPEAX_K@Z @ 0x180032320 (-HampAllocateHeap@@YAPEAX_K@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F48C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180070958 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180070998 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A28C2 (memcpy_0.c)
 *     memmove_0 @ 0x1800A28CE (memmove_0.c)
 *     memset_0 @ 0x1800A28DA (memset_0.c)
 *     __security_check_cookie @ 0x1800A2910 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A3010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall PsmHostStateNotification2(
        unsigned __int8 *Src,
        int a2,
        const wchar_t *a3,
        void *a4,
        __int64 *a5,
        unsigned int a6,
        int a7,
        int a8)
{
  int *v10; // r15
  unsigned __int64 v11; // rdi
  unsigned __int64 v12; // r14
  unsigned int v13; // r12d
  ULONG v14; // eax
  char **v15; // rax
  __int64 v16; // rsi
  unsigned __int64 v17; // r9
  unsigned int v18; // edx
  char **v19; // rbx
  int v20; // eax
  const wchar_t *v21; // rcx
  __int64 v22; // rax
  int v23; // eax
  char **v24; // r9
  char **v25; // r12
  __int64 v26; // rax
  unsigned __int64 v27; // rcx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r14
  unsigned __int64 v30; // r14
  char *v31; // rax
  char *v32; // r15
  size_t v33; // rdi
  char *v34; // rdi
  char **v35; // rcx
  char *v36; // rax
  __int128 v37; // xmm1
  int v38; // eax
  __int128 v39; // xmm0
  __int128 v40; // xmm1
  _QWORD *v41; // rbx
  _QWORD *v42; // rcx
  size_t v43; // rdi
  char *v44; // rcx
  size_t v45; // r12
  void *Heap; // rdi
  size_t v47; // r15
  void *v48; // rdx
  int v50; // [rsp+30h] [rbp-D0h] BYREF
  int v51; // [rsp+34h] [rbp-CCh]
  int v52; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v53; // [rsp+3Ch] [rbp-C4h] BYREF
  _DWORD v54[2]; // [rsp+40h] [rbp-C0h] BYREF
  void *v55; // [rsp+48h] [rbp-B8h]
  void *Srca; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+60h] [rbp-A0h] BYREF
  _OWORD v59[4]; // [rsp+70h] [rbp-90h] BYREF
  int v60; // [rsp+B0h] [rbp-50h]
  _BYTE v61[144]; // [rsp+C0h] [rbp-40h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+150h] [rbp+50h] BYREF
  void *v63; // [rsp+160h] [rbp+60h]
  int v64; // [rsp+168h] [rbp+68h]
  int v65; // [rsp+16Ch] [rbp+6Ch]
  const wchar_t *v66; // [rsp+170h] [rbp+70h]
  int v67; // [rsp+178h] [rbp+78h]
  int v68; // [rsp+17Ch] [rbp+7Ch]
  unsigned __int8 *v69; // [rsp+180h] [rbp+80h]
  int v70; // [rsp+188h] [rbp+88h]
  int v71; // [rsp+18Ch] [rbp+8Ch]
  _DWORD *v72; // [rsp+190h] [rbp+90h]
  __int64 v73; // [rsp+198h] [rbp+98h]
  unsigned int *v74; // [rsp+1A0h] [rbp+A0h]
  __int64 v75; // [rsp+1A8h] [rbp+A8h]
  int *v76; // [rsp+1B0h] [rbp+B0h]
  __int64 v77; // [rsp+1B8h] [rbp+B8h]
  __int64 *v78; // [rsp+1C0h] [rbp+C0h]
  __int64 v79; // [rsp+1C8h] [rbp+C8h]
  int *v80; // [rsp+1D0h] [rbp+D0h]
  __int64 v81; // [rsp+1D8h] [rbp+D8h]

  v51 = a2;
  Srca = a5;
  v55 = a4;
  v10 = (int *)a4;
  memset_0(v61, 0, 0x88uLL);
  v11 = -1LL;
  if ( (unsigned int)dword_1800E1278 > 4 && (byte_1800E1288 & 1) != 0 && (qword_1800E1290 & 1) == qword_1800E1290 )
  {
    v12 = a6;
    v13 = a8;
    v57 = *a5;
    v52 = *v10;
    v54[0] = v51;
    v80 = &v50;
    v78 = &v57;
    v76 = &v52;
    v74 = &v53;
    v72 = v54;
    v50 = a8;
    v53 = a6;
    v81 = 4LL;
    v79 = 8LL;
    v77 = 4LL;
    v75 = 4LL;
    v73 = 4LL;
    v20 = Src[1];
    v69 = Src;
    v71 = 0;
    v70 = 4 * v20 + 8;
    if ( a3 )
    {
      v21 = a3;
      v22 = -1LL;
      do
        ++v22;
      while ( a3[v22] );
      v23 = 2 * v22 + 2;
    }
    else
    {
      v21 = &word_1800BBB1C;
      v23 = 2;
    }
    v67 = v23;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_1800E1280;
    v66 = v21;
    v68 = 0;
    EventDescriptor.Keyword = 1LL;
    *(_DWORD *)&EventDescriptor.Id = 184549376;
    UserData.Size = *(unsigned __int16 *)off_1800E1280;
    v63 = &unk_1800CB27C;
    v65 = 1;
    UserData.Reserved = 2;
    v64 = 109;
    v54[1] = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 9u, &UserData);
  }
  else
  {
    v12 = a6;
    v13 = a8;
  }
  if ( HampLockTrackerId != -1 && TlsGetValue(HampLockTrackerId) )
  {
    v50 = 0;
  }
  else
  {
    HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v61);
    v50 = 1;
  }
  memset_0(v59, 0, 0x44uLL);
  v14 = RtlLengthSid(Src);
  memcpy_0(v59, Src, v14);
  LODWORD(v15) = (_DWORD)RmSvcGlobals;
  v16 = *((_QWORD *)RmSvcGlobals + 5);
  if ( v13 > 1 || (_DWORD)v12 == 1 && *v10 == 6 )
    goto LABEL_45;
  v15 = (char **)operator new(0x98uLL);
  LODWORD(v17) = 0;
  if ( v15 )
  {
    v15 = (char **)ModernResourceEnforcer::ModernResourceEnforcerWorkItem::ModernResourceEnforcerWorkItem((ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v15);
    v19 = v15;
    if ( v15 )
    {
      if ( a3 )
      {
        do
          ++v11;
        while ( a3[v11] != (_WORD)v17 );
      }
      else
      {
        v11 = v17;
      }
      v24 = (char **)v15[1];
      v25 = v15 + 3;
      v26 = 7LL;
      if ( v24 == v25 )
        v27 = 7LL;
      else
        v27 = (*v25 - (char *)v24) >> 1;
      if ( v11 <= v27 )
      {
        v43 = 2 * v11;
        memmove_0(v24, a3, v43);
        v44 = &v19[1][v43];
        v19[2] = v44;
        *(_WORD *)v44 = 0;
LABEL_38:
        if ( (unsigned int)v12 <= 1 )
        {
          *((_DWORD *)v19 + 28) = *v10;
          v19[15] = *(char **)Srca;
LABEL_40:
          v37 = v59[1];
          *(_OWORD *)(v19 + 5) = v59[0];
          *((_DWORD *)v19 + 33) = a8;
          v38 = v60;
          v39 = v59[2];
          *(_OWORD *)(v19 + 7) = v37;
          *(_DWORD *)v19 = 2;
          v40 = v59[3];
          *(_OWORD *)(v19 + 9) = v39;
          *((_DWORD *)v19 + 32) = v12;
          *(_OWORD *)(v19 + 11) = v40;
          *((_DWORD *)v19 + 26) = v38;
          *((_DWORD *)v19 + 27) = v51;
          RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 224));
          v41 = v19 + 17;
          v42 = *(_QWORD **)(v16 + 280);
          if ( *v42 != v16 + 272 )
            __fastfail(3u);
          *v41 = v16 + 272;
          v41[1] = v42;
          *v42 = v41;
          *(_QWORD *)(v16 + 280) = v41;
          if ( (*(_BYTE *)(v16 + 296) & 1) == 0 )
          {
            (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
            TpPostWork(*(_QWORD *)(v16 + 264));
            *(_DWORD *)(v16 + 296) |= 1u;
          }
          LODWORD(v15) = RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)(v16 + 224));
          goto LABEL_45;
        }
        v45 = 8 * v12;
        Heap = HampAllocateHeap(8 * v12);
        if ( Heap )
        {
          v47 = 4 * v12;
          v12 = (unsigned __int64)HampAllocateHeap(4 * v12);
          if ( v12 )
          {
            memcpy_0(Heap, Srca, v45);
            v48 = v55;
            v19[15] = (char *)Heap;
            memcpy_0((void *)v12, v48, v47);
            v19[14] = (char *)v12;
            LODWORD(v12) = a6;
            goto LABEL_40;
          }
          HampFreeHeap(Heap);
        }
        goto LABEL_55;
      }
      if ( v24 != v25 )
        v26 = (*v25 - (char *)v24) >> 1;
      v28 = 2 * v26 + 1;
      v29 = v11;
      if ( v28 >= v11 )
        v29 = v28;
      if ( v29 > 0x3FFFFFFFFFFFFFF7LL )
      {
        if ( v11 > 0x3FFFFFFFFFFFFFF7LL )
          goto LABEL_55;
        v30 = 0x3FFFFFFFFFFFFFF8LL;
      }
      else
      {
        v30 = v29 + 1;
        if ( v30 > 0x7FFFFFFFFFFFFFFFLL )
          goto LABEL_55;
      }
      v31 = (char *)operator new(2 * v30, (const struct std::nothrow_t *)&std::nothrow);
      v32 = v31;
      if ( v31 )
      {
        v33 = 2 * v11;
        memcpy_0(v31, a3, v33);
        v34 = &v32[v33];
        *(_WORD *)v34 = 0;
        v35 = (char **)v19[1];
        if ( v35 != v25 )
          operator delete(v35);
        v19[1] = v32;
        v19[2] = v34;
        v36 = &v32[2 * v30 - 2];
        v12 = a6;
        v10 = (int *)v55;
        *v25 = v36;
        goto LABEL_38;
      }
LABEL_55:
      LODWORD(v15) = (unsigned int)tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(
                                     (ModernResourceEnforcer::ModernResourceEnforcerWorkItem *)v19,
                                     v18);
LABEL_45:
      LODWORD(v17) = 0;
    }
  }
  if ( v50 != (_DWORD)v17 )
    LODWORD(v15) = CempLockTrackerClearForThread(HampLockTrackerId);
  return (int)v15;
}
