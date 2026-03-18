/*
 * XREFs of ?BuildBatch@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@0K_NAEAVCMilCommandBatchParser@12@PEAII@Z @ 0x1400AC320
 * Callers:
 *     ?Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMilProtocolBlock@@PEAII@Z @ 0x1400A7400 (-Commit@CApplicationChannel@DirectComposition@@QEAAJPEA_N_N1PEBUSynchronizationObject@2@PEAVCMil.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     ?PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@Z @ 0x1400ABF84 (-PutResourceOnUpdatedList@CApplicationChannel@DirectComposition@@QEAAXPEAVCResourceMarshaler@2@@.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z @ 0x1400AC248 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAAJI@Z.c)
 *     ?ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z @ 0x1400AD868 (-ReleaseResource@CApplicationChannel@DirectComposition@@QEAA_KPEAVCResourceMarshaler@2@@Z.c)
 *     ?AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ @ 0x1400ADC68 (-AddRef@CResourceMarshaler@DirectComposition@@QEAA_KXZ.c)
 *     ?ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ @ 0x1400ADCB4 (-ClearAnimationTimeList@CApplicationChannel@DirectComposition@@IEAAXXZ.c)
 *     ?EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z @ 0x1400ADE60 (-EnsureBatchBuffer@CBatch@DirectComposition@@SA_NPEAPEAV12@_KPEAPEAX@Z.c)
 *     ?Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12@@Z @ 0x1400AE3A8 (-Create@CBatchSharedMemoryPool@DirectComposition@@SAJPEAVCBatchSharedMemoryPoolSet@2@_NPEAPEAV12.c)
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1400AE5A4 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 *     ?EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@3@@Z @ 0x1400AEB78 (-EmitCommands@CMilCommandBatchParser@CApplicationChannel@DirectComposition@@QEAA_NPEAPEAVCBatch@.c)
 *     ?GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z @ 0x1400AF058 (-GetBatchFragment@CApplicationChannel@DirectComposition@@QEAAPEAVCBatch@2@K_N00@Z.c)
 *     ?EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF5D0 (-EmitBindingRemovalCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z @ 0x1400AF920 (-EmitReleaseCommands@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@@Z.c)
 *     ?CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z @ 0x1400B0C9C (-CreateBatch@CApplicationChannel@DirectComposition@@QEAAJPEAPEAVCBatch@2@@Z.c)
 *     ?WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z @ 0x1400B46B8 (-WaitForPendingAndProcessReturnedBatches@CApplicationChannel@DirectComposition@@QEAA_N_N@Z.c)
 *     ?DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z @ 0x1400B5300 (-DetachAndDelete@CAnimationBinding@DirectComposition@@QEAAXPEAVCApplicationChannel@2@@Z.c)
 *     ?DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1400B5420 (-DiscardRemovingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     ?EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z @ 0x14012CD20 (-EmitCallbackIDCommand@CApplicationChannel@DirectComposition@@IEAA_NPEAPEAVCBatch@2@_N@Z.c)
 *     McTemplateK0qpqt_EtwWriteTransfer @ 0x140137DCC (McTemplateK0qpqt_EtwWriteTransfer.c)
 *     ??1CEvent@DirectComposition@@QEAA@XZ @ 0x140162780 (--1CEvent@DirectComposition@@QEAA@XZ.c)
 *     ?GetAnimationResource@CAnimationBinding@DirectComposition@@QEAAPEAVCResourceMarshaler@2@XZ @ 0x140167EEC (-GetAnimationResource@CAnimationBinding@DirectComposition@@QEAAPEAVCResourceMarshaler@2@XZ.c)
 *     ?DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z @ 0x1401C4660 (-DeleteAddingBinding@CApplicationChannel@DirectComposition@@IEAAXPEAVCAnimationBinding@2@@Z.c)
 *     strnlen @ 0x1401C7A8C (strnlen.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 *     memmove @ 0x14024C2C0 (memmove.c)
 */

__int64 __fastcall DirectComposition::CApplicationChannel::BuildBatch(
        DirectComposition::CApplicationChannel *this,
        struct DirectComposition::CBatch **a2,
        struct DirectComposition::CBatch **a3,
        unsigned int a4,
        bool a5,
        struct DirectComposition::CApplicationChannel::CMilCommandBatchParser *a6,
        unsigned int *a7,
        unsigned int a8)
{
  unsigned int v8; // r13d
  struct DirectComposition::CBatch **v9; // r15
  unsigned __int8 v11; // di
  PSLIST_ENTRY i; // rbx
  char v13; // dl
  DirectComposition::CApplicationChannel *v14; // r14
  LARGE_INTEGER PerformanceCounter; // r15
  struct DirectComposition::CBatch *v16; // r14
  struct DirectComposition::CBatch *v17; // rcx
  struct _ERESOURCE *v18; // rbx
  __int64 v20; // rcx
  int v21; // edx
  struct DirectComposition::CBatchSharedMemoryPool *v22; // rcx
  PSLIST_ENTRY j; // rbx
  int v24; // r8d
  struct DirectComposition::CBatchSharedMemoryPool *v25; // r15
  struct DirectComposition::CBatchSharedMemoryPool *v26; // rdi
  struct DirectComposition::CBatchSharedMemoryPool *v27; // rbx
  struct DirectComposition::CBatchSharedMemoryPool **v28; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v29; // rax
  struct _SLIST_ENTRY *Next; // rax
  __int64 v31; // rax
  struct _ERESOURCE *v32; // rbx
  __int64 k; // rbx
  bool v34; // zf
  char v35; // al
  __int64 v36; // rbx
  __int64 v37; // rbx
  __int64 v38; // rdx
  __int64 ii; // rax
  char v40; // al
  char v41; // r8
  __int64 v42; // r8
  DirectComposition::CApplicationChannel *v43; // r13
  __int16 v44; // dx
  struct _SLIST_ENTRY *v45; // rax
  struct DirectComposition::CBatch *BatchFragment; // rax
  int v47; // edx
  int v48; // ecx
  int v49; // r8d
  __int64 v50; // rcx
  _WORD *v51; // rax
  unsigned int v52; // edi
  __int64 v53; // rcx
  unsigned int *v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  signed __int32 v57; // eax
  unsigned int *v58; // rcx
  unsigned int *v59; // r13
  unsigned int v60; // eax
  const char *v61; // r15
  unsigned int v62; // ebx
  unsigned __int64 v63; // rdi
  unsigned int *v64; // rax
  _DWORD *v65; // rdi
  __int64 jj; // rax
  __int64 v67; // rcx
  __int64 v68; // rbx
  __int64 v69; // rdx
  __int64 kk; // rax
  __int64 mm; // rax
  __int64 v72; // rcx
  __int64 v73; // rbx
  __int64 v74; // rdx
  __int64 nn; // rax
  __int64 i1; // rax
  __int64 v77; // rcx
  int v78; // eax
  __int64 i2; // rbx
  __int64 i3; // rbx
  __int64 v81; // rbx
  unsigned int *v82; // rbx
  __int64 *v83; // rax
  __int64 v84; // rcx
  int *v85; // rdi
  char v86; // di
  bool v87; // bl
  bool v88; // di
  unsigned int *v89; // rcx
  int v90; // edx
  unsigned __int64 v91; // rcx
  size_t v92; // r8
  unsigned int *v93; // rbx
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  __int64 *v97; // rax
  __int64 v98; // rdi
  __int64 v99; // rbx
  __int64 *v100; // rcx
  __int64 m; // rax
  __int64 *v102; // rcx
  __int64 n; // rax
  struct DirectComposition::CResourceMarshaler *v104; // rax
  unsigned int *v105; // rax
  unsigned int *v106; // rcx
  int v107; // edx
  unsigned __int64 v108; // rcx
  size_t v109; // r8
  unsigned int *v110; // rax
  _QWORD *v111; // rax
  _QWORD *v112; // rax
  unsigned int *v113; // rcx
  unsigned int *v114; // rax
  unsigned int *v115; // rcx
  unsigned int *v116; // rax
  unsigned int *v117; // rax
  unsigned int *v118; // rdx
  DirectComposition::CEvent *v119; // rbx
  __int64 v120; // rdx
  __int64 v121; // r8
  __int64 v122; // r9
  unsigned int *v123; // rbx
  struct DirectComposition::CBatch **v124; // rax
  unsigned int *v125; // rcx
  unsigned int *v126; // rax
  struct DirectComposition::CBatchSharedMemoryPool *v127; // [rsp+40h] [rbp-28h] BYREF
  unsigned int *Src; // [rsp+48h] [rbp-20h] BYREF
  struct DirectComposition::CBatch *v129; // [rsp+B0h] [rbp+48h] BYREF
  struct DirectComposition::CBatch **v130; // [rsp+B8h] [rbp+50h]
  struct DirectComposition::CBatch **v131; // [rsp+C0h] [rbp+58h]
  unsigned int v132; // [rsp+C8h] [rbp+60h]

  v132 = a4;
  v131 = a3;
  v130 = a2;
  v8 = a4;
  v9 = a3;
  v11 = 1;
  if ( *((int *)this + 6) > 2 )
    DirectComposition::CApplicationChannel::ClearAnimationTimeList(this);
  KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 30) + 8LL));
  for ( i = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
        i;
        i = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13) )
  {
    --*((_DWORD *)this + 63);
    Next = i[4].Next;
    if ( (unsigned __int64)Next > *((_QWORD *)this + 32) )
    {
      *((_BYTE *)this + 264) |= 2u;
      *((_QWORD *)this + 32) = Next;
    }
    DirectComposition::CBatch::Clear((DirectComposition::CBatch *)i);
    i->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 24);
    *((_QWORD *)this + 24) = i;
  }
  v13 = *((_BYTE *)this + 264);
  if ( (v13 & 2) != 0 )
  {
    v14 = (DirectComposition::CApplicationChannel *)*((_QWORD *)this + 45);
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( v14 != (DirectComposition::CApplicationChannel *)((char *)this + 360) )
    {
      do
      {
        v42 = *((unsigned int *)v14 - 24);
        v43 = v14;
        v14 = *(DirectComposition::CApplicationChannel **)v14;
        v44 = v42;
        if ( (v42 & 0x240) == 0x40 && (*((_BYTE *)v43 + 72) & 2) == 0 )
        {
          v50 = *((_QWORD *)v43 - 2);
          if ( v50 )
          {
            if ( PerformanceCounter.QuadPart >= (unsigned __int64)(*((_QWORD *)v43 - 1) + v50) )
            {
              v44 = v42 | 0x200;
              *((_DWORD *)v43 - 24) = v42 | 0x200;
            }
          }
        }
        if ( (v44 & 0x200) != 0 )
        {
          v59 = (unsigned int *)*((_QWORD *)v43 - 15);
          if ( v59 )
          {
            do
            {
              Src = (unsigned int *)*((_QWORD *)v59 + 5);
              LOBYTE(v129) = 0;
              v60 = v59[2];
              if ( (v60 & 2) != 0 )
              {
                (*(void (__fastcall **)(_QWORD, _QWORD, __int64, struct DirectComposition::CBatch **))(**((_QWORD **)v59 + 2) + 240LL))(
                  *((_QWORD *)v59 + 2),
                  v59[3],
                  v42,
                  &v129);
                if ( (_BYTE)v129 )
                  DirectComposition::CApplicationChannel::PutResourceOnUpdatedList(
                    this,
                    *((struct DirectComposition::CResourceMarshaler **)v59 + 2));
                DirectComposition::CApplicationChannel::DeleteAddingBinding(this, v59);
              }
              else
              {
                if ( (v60 & 4) != 0 )
                  DirectComposition::CApplicationChannel::DiscardRemovingBinding(
                    this,
                    (struct DirectComposition::CAnimationBinding *)v59);
                else
                  (*(void (__fastcall **)(_QWORD, _QWORD, __int64, struct DirectComposition::CBatch **))(**((_QWORD **)v59 + 2) + 240LL))(
                    *((_QWORD *)v59 + 2),
                    v59[3],
                    v42,
                    &v129);
                DirectComposition::CAnimationBinding::DetachAndDelete(v59, this);
              }
              v59 = Src;
            }
            while ( Src );
          }
        }
      }
      while ( v14 != (DirectComposition::CApplicationChannel *)((char *)this + 360) );
      v8 = v132;
    }
    *((_BYTE *)this + 264) &= ~2u;
    v13 = *((_BYTE *)this + 264);
    v9 = v131;
  }
  v16 = 0LL;
  v17 = 0LL;
  if ( *((_QWORD *)this + 22)
    || *((_BYTE *)this + 56)
    || (v13 & 0x40) != 0
    || (*((_BYTE *)this + 265) & 3) != 0
    || *((_QWORD *)this + 60)
    || *((_QWORD *)this + 63)
    || *((_QWORD *)this + 56)
    || *((_QWORD *)this + 58)
    || *((_QWORD *)this + 54)
    || *((_QWORD *)this + 62)
    || *((_QWORD *)this + 57)
    || *((_QWORD *)this + 59)
    || *((_QWORD *)this + 55)
    || *((_QWORD *)this + 349)
    || *((_QWORD *)a6 + 4)
    || a7 )
  {
    v20 = *((_QWORD *)this + 30);
    Src = 0LL;
    KeResetEvent(*(PRKEVENT *)(v20 + 8));
    for ( j = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13);
          j;
          j = ExpInterlockedPopEntrySList((PSLIST_HEADER)this + 13) )
    {
      --*((_DWORD *)this + 63);
      v45 = j[4].Next;
      if ( (unsigned __int64)v45 > *((_QWORD *)this + 32) )
      {
        *((_BYTE *)this + 264) |= 2u;
        *((_QWORD *)this + 32) = v45;
      }
      DirectComposition::CBatch::Clear((DirectComposition::CBatch *)j);
      j->Next = (struct _SLIST_ENTRY *)*((_QWORD *)this + 24);
      *((_QWORD *)this + 24) = j;
    }
    v16 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 22);
    if ( v16 )
    {
      *((_QWORD *)this + 22) = 0LL;
    }
    else
    {
      v25 = 0LL;
      v26 = (DirectComposition::CApplicationChannel *)((char *)this + 2632);
      while ( 2 )
      {
        v27 = *(struct DirectComposition::CBatchSharedMemoryPool **)v26;
        v127 = 0LL;
        while ( v27 != v26 )
        {
          if ( !*((_BYTE *)v27 + 64) )
          {
            v22 = (struct DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)v27 + 5);
            if ( (unsigned __int64)(4096LL - (_QWORD)v22) >= 0x228 )
            {
              *((_BYTE *)v27 + 64) = 1;
              v25 = v22;
              v28 = (struct DirectComposition::CBatchSharedMemoryPool **)*((_QWORD *)v27 + 1);
              if ( v28 == (struct DirectComposition::CBatchSharedMemoryPool **)v26 )
                goto LABEL_47;
              v22 = *(struct DirectComposition::CBatchSharedMemoryPool **)v27;
              if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v27 + 8LL) != v27 )
                goto LABEL_41;
              if ( *v28 != v27 )
                goto LABEL_41;
              *v28 = v22;
              *((_QWORD *)v22 + 1) = v28;
              v29 = *(struct DirectComposition::CBatchSharedMemoryPool **)v26;
              if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v26 + 8LL) != v26 )
                goto LABEL_41;
              goto LABEL_46;
            }
          }
          v27 = *(struct DirectComposition::CBatchSharedMemoryPool **)v27;
        }
        if ( (int)DirectComposition::CBatchSharedMemoryPool::Create(
                    (DirectComposition::CApplicationChannel *)((char *)this + 2632),
                    *((_BYTE *)this + 2656),
                    &v127) < 0 )
        {
          DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0);
          continue;
        }
        break;
      }
      v27 = v127;
      if ( !*((_BYTE *)v127 + 64) )
      {
        v22 = (struct DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)v127 + 5);
        if ( (unsigned __int64)(4096LL - (_QWORD)v22) >= 0x228 )
        {
          v25 = (struct DirectComposition::CBatchSharedMemoryPool *)*((_QWORD *)v127 + 5);
          *((_BYTE *)v127 + 64) = 1;
        }
      }
      v29 = *(struct DirectComposition::CBatchSharedMemoryPool **)v26;
      if ( *(struct DirectComposition::CBatchSharedMemoryPool **)(*(_QWORD *)v26 + 8LL) != v26 )
LABEL_41:
        __fastfail(3u);
LABEL_46:
      *(_QWORD *)v27 = v29;
      *((_QWORD *)v27 + 1) = v26;
      *((_QWORD *)v29 + 1) = v27;
      *(_QWORD *)v26 = v27;
LABEL_47:
      v31 = *((_QWORD *)v27 + 5);
      if ( (unsigned __int64)(4096 - v31) >= 0x28 )
        *((_QWORD *)v27 + 5) = v31 + 40;
      v16 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
      if ( v16 )
      {
        *((_QWORD *)this + 24) = *(_QWORD *)v16;
      }
      else
      {
        do
        {
          if ( (int)DirectComposition::CApplicationChannel::CreateBatch(this, (struct DirectComposition::CBatch **)&Src) >= 0 )
          {
            v16 = (struct DirectComposition::CBatch *)Src;
            goto LABEL_51;
          }
        }
        while ( *((int *)this + 63) <= 0
             || !DirectComposition::CApplicationChannel::WaitForPendingAndProcessReturnedBatches(this, 0) );
        v16 = (struct DirectComposition::CBatch *)*((_QWORD *)this + 24);
        *((_QWORD *)this + 24) = *(_QWORD *)v16;
      }
LABEL_51:
      if ( !v16 )
      {
        *((_BYTE *)v27 + 64) = 0;
        goto LABEL_54;
      }
      *((_QWORD *)v16 + 17) = v27;
      *((_QWORD *)v16 + 18) = v25;
    }
    *((_DWORD *)v16 + 4) = v8;
    *((_BYTE *)v16 + 32) &= ~1u;
    *(_QWORD *)v16 = 0LL;
    ++*((_DWORD *)this + 63);
    *((_BYTE *)this + 264) |= 8u;
    v32 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
    if ( v32 )
    {
      KeEnterCriticalRegion();
      ExAcquireResourceExclusiveLite(v32, 1u);
      if ( ++*((_DWORD *)this + 62) == 1 )
        KeResetEvent(*(PRKEVENT *)(*((_QWORD *)this + 48) + 8LL));
      ExReleaseResourceLite(*((PERESOURCE *)this + 49));
      KeLeaveCriticalRegion();
    }
LABEL_54:
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
      McTemplateK0qpqt_EtwWriteTransfer(
        (_DWORD)v22,
        v21,
        v24,
        *((_DWORD *)this + 7),
        (char)v16,
        *((_DWORD *)v16 + 4),
        0);
    for ( k = *((_QWORD *)this + 61); k; k = *(_QWORD *)(k + 8) )
    {
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)(*(_QWORD *)k + 16LL));
      *(_DWORD *)(k + 24) |= 2u;
    }
    *((_QWORD *)v16 + 9) = *((_QWORD *)this + 61);
    v34 = *((_DWORD *)this + 673) == 0;
    *((_QWORD *)this + 61) = 0LL;
    v129 = v16;
    if ( !v34 && (*((_BYTE *)this + 48) & 1) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0xCuLL, (void **)&Src) )
        goto LABEL_62;
      v56 = *(_QWORD *)(W32GetDCompSessionState(v55) + 24);
      do
        v57 = _InterlockedIncrement((volatile signed __int32 *)(v56 + 16));
      while ( !v57 );
      v58 = Src;
      *((_DWORD *)this + 673) = v57;
      *v58 = 12;
      v58[1] = 180;
      v58[2] = *((_DWORD *)this + 673);
    }
    if ( (*((_BYTE *)this + 264) & 0x40) != 0 )
    {
      v61 = *((_QWORD *)this + 2) ? (const char *)PsGetProcessImageFileName() : "System";
      v62 = strnlen(v61, 0x80uLL);
      Src = 0LL;
      v63 = (v62 + 16) & 0xFFFFFFFC;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v129, v63, (void **)&Src) )
      {
        v64 = Src;
        *Src = v63;
        v65 = v64 + 3;
        v64[2] = v62;
        v64[1] = 42;
        memmove(v64 + 3, v61, v62);
        *((_BYTE *)v65 + v62) = 0;
        *((_BYTE *)this + 264) &= ~0x40u;
      }
    }
    v35 = *((_BYTE *)this + 264);
    if ( (v35 & 0x40) != 0 )
      goto LABEL_62;
    if ( v35 < 0 )
    {
      v51 = (_WORD *)*((_QWORD *)this + 340);
      v52 = 0;
      if ( v51 )
      {
        v53 = 151LL;
        do
        {
          if ( !*v51 )
            break;
          ++v51;
          --v53;
        }
        while ( v53 );
        if ( v53 )
          v52 = 2 * (151 - v53) + 2;
      }
      Src = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v129, (v52 + 15) & 0xFFFFFFFC, (void **)&Src) )
      {
        v54 = Src;
        *Src = (v52 + 15) & 0xFFFFFFFC;
        v54[1] = 40;
        v54[2] = v52;
        if ( v52 )
          memmove(v54 + 3, *((const void **)this + 340), v52);
        *((_BYTE *)this + 264) &= ~0x80u;
      }
    }
    if ( *((char *)this + 264) < 0 )
      goto LABEL_62;
    if ( (*((_BYTE *)this + 265) & 1) != 0
      && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v129, 0) )
    {
      *((_BYTE *)this + 265) &= ~1u;
    }
    if ( (*((_BYTE *)this + 265) & 2) != 0
      && DirectComposition::CApplicationChannel::EmitCallbackIDCommand(this, &v129, 1) )
    {
      *((_BYTE *)this + 265) &= ~2u;
    }
    if ( (*((_BYTE *)this + 265) & 3) != 0 )
      goto LABEL_62;
    v34 = *((_QWORD *)this + 63) == 0LL;
    Src = 0LL;
    if ( !v34 )
    {
      do
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0x14uLL, (void **)&Src) )
          break;
        v93 = Src;
        *Src = 20;
        *(_OWORD *)(v93 + 1) = 0LL;
        v93[1] = 13;
        v93[2] = *(_DWORD *)((***(__int64 (__fastcall ****)(_QWORD))(*((_QWORD *)this + 63) + 24LL))(*(_QWORD *)(*((_QWORD *)this + 63) + 24LL))
                           + 32);
        v93[3] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 63) + 16LL) + 32LL);
        v93[4] = *(_DWORD *)(*((_QWORD *)this + 63) + 12LL);
        v97 = (__int64 *)*((_QWORD *)this + 63);
        v98 = *v97;
        *v97 = 0LL;
        v99 = *((_QWORD *)this + 63);
        if ( !*(_DWORD *)(v99 + 8) )
          goto LABEL_224;
        v100 = (__int64 *)(*(_QWORD *)(v99 + 16) + 40LL);
        for ( m = *v100; m != v99; m = *(_QWORD *)(m + 32) )
          v100 = (__int64 *)(m + 32);
        *v100 = *(_QWORD *)(v99 + 32);
        v102 = (__int64 *)(*(_QWORD *)(v99 + 24) + 8LL);
        for ( n = *v102; n != v99; n = *(_QWORD *)(n + 40) )
          v102 = (__int64 *)(n + 40);
        *v102 = *(_QWORD *)(v99 + 40);
        if ( (*(_DWORD *)(v99 + 8) & 3) != 0 )
        {
          v104 = (struct DirectComposition::CResourceMarshaler *)(***(__int64 (__fastcall ****)(_QWORD))(v99 + 24))(*(_QWORD *)(v99 + 24));
          DirectComposition::CApplicationChannel::ReleaseResource(this, v104);
        }
        if ( !*((_QWORD *)this + 47) )
        {
          *((_QWORD *)this + 47) = v99;
          *(_OWORD *)v99 = 0LL;
          *(_OWORD *)(v99 + 16) = 0LL;
          *(_OWORD *)(v99 + 32) = 0LL;
        }
        else
        {
LABEL_224:
          GreDeleteFastMutex((char *)v99, v94, v95, v96);
        }
        *((_QWORD *)this + 63) = v98;
      }
      while ( v98 );
      if ( *((_QWORD *)this + 63) )
        goto LABEL_62;
    }
    while ( 1 )
    {
      v36 = *((_QWORD *)this + 60);
      if ( !v36 )
        break;
      *((_QWORD *)this + 60) = *(_QWORD *)(v36 + 8);
      *(_QWORD *)(v36 + 8) = 0LL;
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0xCuLL, (void **)&Src) )
      {
LABEL_251:
        *(_QWORD *)(v36 + 8) = *((_QWORD *)this + 60);
        *((_QWORD *)this + 60) = v36;
        goto LABEL_62;
      }
      v89 = Src;
      *Src = 12;
      *(_QWORD *)(v89 + 1) = 0LL;
      v89[1] = 38;
      v89[2] = *(_DWORD *)(v36 + 32);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36) )
        ++*((_DWORD *)v129 + 29);
      v90 = *(_DWORD *)(v36 + 32);
      v91 = (unsigned int)(v90 - 1);
      if ( v90 && v91 < *((_QWORD *)this + 18) )
      {
        v92 = *((_QWORD *)this + 19);
        Src = 0LL;
        memmove((void *)(*((_QWORD *)this + 15) + v92 * v91), &Src, v92);
        --*((_QWORD *)this + 20);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 88LL))(v36, 1LL);
    }
    v37 = *((_QWORD *)this + 56);
    if ( v37 )
    {
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v37 + 48LL))(
                v37,
                &v129) )
          break;
        *(_DWORD *)(v37 + 16) |= 1u;
        v38 = *(_QWORD *)(v37 + 8);
        if ( (*(_DWORD *)(v37 + 16) & 2) != 0 )
        {
          for ( ii = *(unsigned int *)(v37 + 36); (unsigned int)ii < 0xA6; LODWORD(ii) = dword_14027CC90[ii] )
          {
            if ( (_DWORD)ii == 133 )
            {
              v67 = 456LL;
              goto LABEL_151;
            }
          }
          for ( jj = *(unsigned int *)(v37 + 36); ; LODWORD(jj) = dword_14027CC90[jj] )
          {
            if ( (unsigned int)jj >= 0xA6 )
            {
              v67 = 440LL;
              goto LABEL_151;
            }
            if ( (_DWORD)jj == 23 )
              break;
          }
          v67 = 472LL;
LABEL_151:
          *(_QWORD *)(v37 + 8) = *(_QWORD *)((char *)this + v67);
          *(_QWORD *)((char *)this + v67) = v37;
        }
        else
        {
          *(_QWORD *)(v37 + 8) = 0LL;
        }
        v37 = v38;
      }
      while ( v38 );
    }
    *((_QWORD *)this + 56) = v37;
    if ( v37 )
      goto LABEL_62;
    v68 = *((_QWORD *)this + 58);
    if ( v68 )
    {
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v68 + 48LL))(
                v68,
                &v129) )
          break;
        *(_DWORD *)(v68 + 16) |= 1u;
        v69 = *(_QWORD *)(v68 + 8);
        if ( (*(_DWORD *)(v68 + 16) & 2) != 0 )
        {
          for ( kk = *(unsigned int *)(v68 + 36); (unsigned int)kk < 0xA6; LODWORD(kk) = dword_14027CC90[kk] )
          {
            if ( (_DWORD)kk == 133 )
            {
              v72 = 456LL;
              goto LABEL_166;
            }
          }
          for ( mm = *(unsigned int *)(v68 + 36); ; LODWORD(mm) = dword_14027CC90[mm] )
          {
            if ( (unsigned int)mm >= 0xA6 )
            {
              v72 = 440LL;
              goto LABEL_166;
            }
            if ( (_DWORD)mm == 23 )
              break;
          }
          v72 = 472LL;
LABEL_166:
          *(_QWORD *)(v68 + 8) = *(_QWORD *)((char *)this + v72);
          *(_QWORD *)((char *)this + v72) = v68;
        }
        else
        {
          *(_QWORD *)(v68 + 8) = 0LL;
        }
        v68 = v69;
      }
      while ( v69 );
    }
    *((_QWORD *)this + 58) = v68;
    if ( v68 )
      goto LABEL_62;
    v73 = *((_QWORD *)this + 54);
    if ( v73 )
    {
      do
      {
        if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v73 + 48LL))(
                v73,
                &v129) )
          break;
        *(_DWORD *)(v73 + 16) |= 1u;
        v74 = *(_QWORD *)(v73 + 8);
        if ( (*(_DWORD *)(v73 + 16) & 2) != 0 )
        {
          for ( nn = *(unsigned int *)(v73 + 36); (unsigned int)nn < 0xA6; LODWORD(nn) = dword_14027CC90[nn] )
          {
            if ( (_DWORD)nn == 133 )
            {
              v77 = 456LL;
              goto LABEL_181;
            }
          }
          for ( i1 = *(unsigned int *)(v73 + 36); ; LODWORD(i1) = dword_14027CC90[i1] )
          {
            if ( (unsigned int)i1 >= 0xA6 )
            {
              v77 = 440LL;
              goto LABEL_181;
            }
            if ( (_DWORD)i1 == 23 )
              break;
          }
          v77 = 472LL;
LABEL_181:
          *(_QWORD *)(v73 + 8) = *(_QWORD *)((char *)this + v77);
          *(_QWORD *)((char *)this + v77) = v73;
        }
        else
        {
          *(_QWORD *)(v73 + 8) = 0LL;
        }
        v73 = v74;
      }
      while ( v74 );
    }
    *((_QWORD *)this + 54) = v73;
    if ( v73 )
      goto LABEL_62;
    v78 = *((_DWORD *)this + 14);
    if ( (v78 & 1) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0xCuLL, (void **)&Src) )
        goto LABEL_62;
      v113 = Src;
      *Src = 12;
      *(_QWORD *)(v113 + 1) = 0LL;
      v113[1] = 332;
      *((_BYTE *)v113 + 8) = *((_BYTE *)this + 60);
      *((_DWORD *)this + 14) &= ~1u;
      v78 = *((_DWORD *)this + 14);
    }
    if ( (v78 & 2) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0xCuLL, (void **)&Src) )
        goto LABEL_62;
      v125 = Src;
      *Src = 12;
      *(_QWORD *)(v125 + 1) = 0LL;
      v125[1] = 333;
      *((_BYTE *)v125 + 8) = *((_BYTE *)this + 61);
      *((_DWORD *)this + 14) &= ~2u;
      v78 = *((_DWORD *)this + 14);
    }
    if ( (v78 & 4) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0xCuLL, (void **)&Src) )
        goto LABEL_62;
      v115 = Src;
      *Src = 12;
      *(_QWORD *)(v115 + 1) = 0LL;
      v115[1] = 334;
      *((_BYTE *)v115 + 8) = *((_BYTE *)this + 62);
      *((_DWORD *)this + 14) &= ~4u;
      v78 = *((_DWORD *)this + 14);
    }
    if ( (v78 & 8) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 8uLL, (void **)&Src) )
        goto LABEL_62;
      v114 = Src;
      *Src = 8;
      v114[1] = 335;
      *((_DWORD *)this + 14) &= ~8u;
      v78 = *((_DWORD *)this + 14);
    }
    if ( (v78 & 0x10) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 8uLL, (void **)&Src) )
        goto LABEL_62;
      v126 = Src;
      *Src = 8;
      v126[1] = 336;
      *((_DWORD *)this + 14) &= ~0x10u;
      v78 = *((_DWORD *)this + 14);
    }
    if ( (v78 & 0x20) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 8uLL, (void **)&Src) )
        goto LABEL_62;
      v117 = Src;
      *Src = 8;
      v117[1] = 337;
      *((_DWORD *)this + 14) &= ~0x20u;
      v78 = *((_DWORD *)this + 14);
    }
    if ( (v78 & 0x40) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 8uLL, (void **)&Src) )
        goto LABEL_62;
      v105 = Src;
      *Src = 8;
      v105[1] = 338;
      *((_DWORD *)this + 14) &= ~0x40u;
      v78 = *((_DWORD *)this + 14);
    }
    if ( (v78 & 0x80u) != 0 )
    {
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 8uLL, (void **)&Src) )
        goto LABEL_62;
      v116 = Src;
      *Src = 8;
      v116[1] = 339;
      *((_DWORD *)this + 14) &= ~0x80u;
    }
    for ( i2 = *((_QWORD *)this + 57); i2; *v111 = 0LL )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)i2 + 56LL))(
              i2,
              &v129) )
        break;
      *(_DWORD *)(i2 + 16) &= ~2u;
      v111 = (_QWORD *)(i2 + 8);
      i2 = *(_QWORD *)(i2 + 8);
    }
    *((_QWORD *)this + 57) = i2;
    if ( i2 )
      goto LABEL_62;
    for ( i3 = *((_QWORD *)this + 59); i3; *v112 = 0LL )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)i3 + 56LL))(
              i3,
              &v129) )
        break;
      *(_DWORD *)(i3 + 16) &= ~2u;
      v112 = (_QWORD *)(i3 + 8);
      i3 = *(_QWORD *)(i3 + 8);
    }
    *((_QWORD *)this + 59) = i3;
    if ( i3 )
      goto LABEL_62;
    while ( 1 )
    {
      v81 = *((_QWORD *)this + 55);
      if ( !v81 )
        break;
      *((_QWORD *)this + 55) = *(_QWORD *)(v81 + 8);
      *(_QWORD *)(v81 + 8) = 0LL;
      DirectComposition::CResourceMarshaler::AddRef((DirectComposition::CResourceMarshaler *)v81);
      if ( !(*(unsigned __int8 (__fastcall **)(__int64, struct DirectComposition::CBatch **))(*(_QWORD *)v81 + 56LL))(
              v81,
              &v129) )
      {
        *(_QWORD *)(v81 + 8) = *((_QWORD *)this + 55);
        *((_QWORD *)this + 55) = v81;
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          (struct DirectComposition::CResourceMarshaler *)v81);
        goto LABEL_62;
      }
      *(_DWORD *)(v81 + 16) &= ~2u;
      DirectComposition::CApplicationChannel::ReleaseResource(this, (struct DirectComposition::CResourceMarshaler *)v81);
    }
    if ( *((_QWORD *)this + 349) )
    {
      Src = 0LL;
      if ( DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0x34uLL, (void **)&Src) )
      {
        v118 = Src;
        *Src = 52;
        v118[1] = 45;
        v118[11] = *(_DWORD *)(*((_QWORD *)this + 349) + 32LL);
        v118[2] = *((_DWORD *)this + 700);
        v118[3] = *((_DWORD *)this + 701);
        v118[4] = *((_DWORD *)this + 702);
        v118[5] = *((_DWORD *)this + 703);
        v118[6] = *((_DWORD *)this + 704);
        *(_QWORD *)(v118 + 7) = *((_QWORD *)this + 353);
        *(_QWORD *)(v118 + 9) = *((_QWORD *)this + 354);
        DirectComposition::CApplicationChannel::ReleaseResource(
          this,
          *((struct DirectComposition::CResourceMarshaler **)this + 349));
        v119 = (DirectComposition::CEvent *)*((_QWORD *)this + 348);
        *((_QWORD *)this + 349) = 0LL;
        if ( v119 )
        {
          DirectComposition::CEvent::~CEvent(v119);
          GreDeleteFastMutex((char *)v119, v120, v121, v122);
        }
        *((_QWORD *)this + 348) = 0LL;
      }
      if ( *((_QWORD *)this + 349) )
        goto LABEL_62;
    }
    if ( !DirectComposition::CApplicationChannel::CMilCommandBatchParser::EmitCommands(a6, &v129)
      || !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v129) )
    {
      goto LABEL_62;
    }
    v34 = *((_QWORD *)this + 62) == 0LL;
    Src = 0LL;
    if ( !v34 )
    {
      do
      {
        if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0x14uLL, (void **)&Src) )
          break;
        v82 = Src;
        *Src = 20;
        *(_OWORD *)(v82 + 1) = 0LL;
        v82[1] = 12;
        v82[2] = *((_DWORD *)DirectComposition::CAnimationBinding::GetAnimationResource(*((DirectComposition::CAnimationBinding **)this
                                                                                        + 62))
                 + 8);
        v82[3] = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 62) + 16LL) + 32LL);
        v82[4] = *(_DWORD *)(*((_QWORD *)this + 62) + 12LL);
        *(_DWORD *)(*((_QWORD *)this + 62) + 8LL) = *(_DWORD *)(*((_QWORD *)this + 62) + 8LL) & 0xFFFFFFFC | 1;
        v83 = (__int64 *)*((_QWORD *)this + 62);
        v84 = *v83;
        *v83 = 0LL;
        *((_QWORD *)this + 62) = v84;
      }
      while ( v84 );
      if ( *((_QWORD *)this + 62) )
        goto LABEL_62;
    }
    while ( 1 )
    {
      v36 = *((_QWORD *)this + 60);
      if ( !v36 )
        break;
      *((_QWORD *)this + 60) = *(_QWORD *)(v36 + 8);
      *(_QWORD *)(v36 + 8) = 0LL;
      Src = 0LL;
      if ( !DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0xCuLL, (void **)&Src) )
        goto LABEL_251;
      v106 = Src;
      *Src = 12;
      *(_QWORD *)(v106 + 1) = 0LL;
      v106[1] = 38;
      v106[2] = *(_DWORD *)(v36 + 32);
      if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL))(v36) )
        ++*((_DWORD *)v129 + 29);
      v107 = *(_DWORD *)(v36 + 32);
      v108 = (unsigned int)(v107 - 1);
      if ( v107 && v108 < *((_QWORD *)this + 18) )
      {
        v109 = *((_QWORD *)this + 19);
        Src = 0LL;
        memmove((void *)(*((_QWORD *)this + 15) + v109 * v108), &Src, v109);
        --*((_QWORD *)this + 20);
      }
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v36 + 88LL))(v36, 1LL);
    }
    v85 = (int *)a7;
    if ( a7 )
    {
      v123 = &a7[a8];
      if ( a7 < v123 )
      {
        do
          DirectComposition::CApplicationChannel::ReleaseResource((size_t *)this, *v85++);
        while ( v85 < (int *)v123 );
      }
      if ( !DirectComposition::CApplicationChannel::EmitBindingRemovalCommands(this, &v129)
        || !DirectComposition::CApplicationChannel::EmitReleaseCommands(this, &v129) )
      {
        goto LABEL_62;
      }
    }
    v86 = *((_BYTE *)this + 264);
    v87 = (v86 & 0x10) != 0;
    v88 = (v86 & 0x20) != 0;
    if ( !*((_DWORD *)this + 673) || (*((_BYTE *)this + 48) & 1) == 0 || !v87 )
    {
LABEL_209:
      v11 = 1;
      goto LABEL_63;
    }
    Src = 0LL;
    if ( DirectComposition::CBatch::EnsureBatchBuffer(&v129, 0xCuLL, (void **)&Src) )
    {
      v110 = Src;
      *Src = 12;
      v110[1] = 194;
      *((_BYTE *)v110 + 8) = v87;
      *((_BYTE *)v110 + 9) = v88;
      *((_BYTE *)v110 + 10) = 0;
      goto LABEL_209;
    }
LABEL_62:
    v11 = 0;
LABEL_63:
    v17 = v129;
    goto LABEL_64;
  }
  if ( a5 )
  {
    BatchFragment = DirectComposition::CApplicationChannel::GetBatchFragment(this, v8, 0, 1, 1);
    v16 = BatchFragment;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x100000) != 0 )
      McTemplateK0qpqt_EtwWriteTransfer(
        v48,
        v47,
        v49,
        *((_DWORD *)this + 7),
        (char)BatchFragment,
        *((_DWORD *)BatchFragment + 4),
        0);
    v17 = v16;
LABEL_64:
    if ( v16 )
    {
      *((_QWORD *)v16 + 11) = *((_QWORD *)this + 28);
      *((_QWORD *)this + 28) = 0LL;
    }
    if ( v17 )
      *(_BYTE *)(*((_QWORD *)v17 + 17) + 64LL) = 0;
    goto LABEL_25;
  }
  v18 = (struct _ERESOURCE *)*((_QWORD *)this + 49);
  if ( v18 )
  {
    KeEnterCriticalRegion();
    ExAcquireResourceExclusiveLite(v18, 1u);
    if ( !*((_DWORD *)this + 62) )
      KeSetEvent(*(PRKEVENT *)(*((_QWORD *)this + 48) + 8LL), 1, 0);
    ExReleaseResourceLite(*((PERESOURCE *)this + 49));
    KeLeaveCriticalRegion();
    v124 = v130;
    *v9 = 0LL;
    *v124 = 0LL;
    goto LABEL_27;
  }
LABEL_25:
  *v130 = v16;
  *v131 = v17;
  if ( v11 )
  {
    if ( v17 )
    {
      v40 = *((_BYTE *)this + 264);
      if ( (v40 & 0x10) != 0 )
      {
        v41 = *((_BYTE *)v17 + 32) | 8;
        *((_BYTE *)v17 + 32) = v41;
        if ( (v40 & 0x20) != 0 )
          *((_BYTE *)v17 + 32) = v41 | 0x10;
        *((_BYTE *)this + 264) &= 0xCFu;
      }
    }
LABEL_27:
    *((_BYTE *)this + 264) &= ~1u;
  }
  return v11;
}
