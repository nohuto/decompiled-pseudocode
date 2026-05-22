/*
 * XREFs of ?RoutePointers@PointerInputMediator@@SAXIPEAXIPEAIPEBUtagTELEMETRY_POINTER_FRAME_TIMES@@_NW4FrameRoutingSource@@@Z @ 0x18008A9A0
 * Callers:
 *     ?RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV?$unordered_set@KU?$hash@K@std@@U?$equal_to@K@2@V?$allocator@K@2@@std@@PEAXH@Z @ 0x180011720 (-RoutePointerFrame@Win32kInterop@@CAXPEAUInputInfo@@AEAV-$unordered_set@KU-$hash@K@std@@U-$equal.c)
 *     ?DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV?$unordered_map@KV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@U?$hash@K@std@@U?$equal_to@K@5@V?$allocator@U?$pair@$$CBKV?$ComPtr@UIInputTarget@@@WRL@Microsoft@@@std@@@5@@std@@@Z @ 0x180011CE0 (-DeliverInputToAllTargets@Win32kInterop@@UEAAJPEAUInputInfo@@AEAV-$unordered_map@KV-$ComPtr@UIIn.c)
 *     ?SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z @ 0x180068980 (-SetManipulationInputTarget@@YAHIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@@Z.c)
 * Callees:
 *     ?lock@_Mutex_base@std@@QEAAXXZ @ 0x180010150 (-lock@_Mutex_base@std@@QEAAXXZ.c)
 *     ??1PointerFrame@PointerInputMediator@@QEAA@XZ @ 0x1800101FC (--1PointerFrame@PointerInputMediator@@QEAA@XZ.c)
 *     ??0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z @ 0x180010340 (--0PointerFrame@PointerInputMediator@@QEAA@$$QEAU01@@Z.c)
 *     ??$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z @ 0x18002C4AC (--$_Copy_memmove@PEAW4_Button@@PEAW41@@std@@YAPEAW4_Button@@PEAW41@00@Z.c)
 *     ?reset@?$unique_storage@U?$handle_null_resource_policy@P6AJPEAX@Z$1?NtCloseCompositionInputSink@@YAJ0@Z@details@wil@@@details@wil@@QEAAXPEAX@Z @ 0x1800481D0 (-reset@-$unique_storage@U-$handle_null_resource_policy@P6AJPEAX@Z$1-NtCloseCompositionInputSink@.c)
 *     ?at@?$unordered_map@IUContactData@PointerInputMediator@@U?$hash@I@std@@U?$equal_to@I@4@V?$allocator@U?$pair@$$CBIUContactData@PointerInputMediator@@@std@@@4@@std@@QEAAAEAUContactData@PointerInputMediator@@AEBI@Z @ 0x180061A88 (-at@-$unordered_map@IUContactData@PointerInputMediator@@U-$hash@I@std@@U-$equal_to@I@4@V-$alloca.c)
 *     ??D?$_Deque_unchecked_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@std@@QEBAAEAUPointerFrame@PointerInputMediator@@XZ @ 0x1800628F0 (--D-$_Deque_unchecked_iterator@V-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMe.c)
 *     ?RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z @ 0x18006670C (-RouteInput@PointerInputMediator@@CAXIPEAXIPEAIPEAUtagTELEMETRY_POINTER_FRAME_TIMES@@H@Z.c)
 *     ?erase@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@@2@0@Z @ 0x1800683E8 (-erase@-$deque@UPointerFrame@PointerInputMediator@@V-$allocator@UPointerFrame@PointerInputMediat.c)
 *     ??1?$unique_lock@Vmutex@std@@@std@@QEAA@XZ @ 0x18006C500 (--1-$unique_lock@Vmutex@std@@@std@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??R?$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageType@@@Z @ 0x18008A0A8 (--R-$_Conditionally_enabled_hash@W4TestCommandMessageType@@$00@std@@SA_KAEBW4TestCommandMessageT.c)
 *     _lambda_b21163f7d194c0dea6581f41f33f3522_::operator()_unsigned_long_ @ 0x18008A91C (_lambda_b21163f7d194c0dea6581f41f33f3522_--operator()_unsigned_long_.c)
 *     ?_Subscript@?$_Deque_val@U?$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@QEBAAEBUPointerFrame@PointerInputMediator@@_K@Z @ 0x18008B294 (-_Subscript@-$_Deque_val@U-$_Deque_simple_types@UPointerFrame@PointerInputMediator@@@std@@@std@@.c)
 *     ??$emplace_back@AEAI@?$vector@IV?$allocator@I@std@@@std@@QEAAAEAIAEAI@Z @ 0x18008B2B0 (--$emplace_back@AEAI@-$vector@IV-$allocator@I@std@@@std@@QEAAAEAIAEAI@Z.c)
 *     ??$emplace_back@UPointerFrame@PointerInputMediator@@@?$deque@UPointerFrame@PointerInputMediator@@V?$allocator@UPointerFrame@PointerInputMediator@@@std@@@std@@QEAAAEAUPointerFrame@PointerInputMediator@@$$QEAU23@@Z @ 0x18008B2EC (--$emplace_back@UPointerFrame@PointerInputMediator@@@-$deque@UPointerFrame@PointerInputMediator@.c)
 *     MicrosoftTelemetryAssertTriggeredArgs @ 0x18008B328 (MicrosoftTelemetryAssertTriggeredArgs.c)
 *     std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___ @ 0x18008B3FC (std--find_if_std--_Deque_iterator_std--_Deque_val_std--_Deque_simple_types_PointerInputMediator-.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     ?FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ @ 0x1800F4C34 (-FailFast_UnexpectedMsg@in1diag3@details@wil@@YAXPEAXIPEBD1ZZ.c)
 */

// Hidden C++ exception states: #wind=2
int __fastcall PointerInputMediator::RoutePointers(
        unsigned int a1,
        void *a2,
        int a3,
        void *a4,
        _OWORD *a5,
        char a6,
        unsigned int a7)
{
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r10
  __int64 *v10; // rsi
  unsigned int *v11; // rax
  __int64 i; // rbx
  _DWORD *v13; // rax
  __int64 v14; // r9
  __int64 v15; // r11
  __int64 v16; // r12
  __int64 v18; // rcx
  __int64 v19; // rbx
  const char *v20; // r9
  __int64 v21; // r11
  __int64 v22; // rcx
  __int64 v23; // rax
  __int64 v24; // rsi
  int *v25; // r15
  int *v26; // rax
  int v27; // r13d
  __int64 v28; // r14
  bool v29; // zf
  __int64 v30; // rcx
  _OWORD *v31; // rax
  __int64 v32; // rax
  unsigned __int8 *v33; // r13
  unsigned __int8 *v34; // rsi
  unsigned __int8 *v35; // r15
  HANDLE v36; // r14
  char v37; // r13
  int v38; // ecx
  _DWORD *k; // rdi
  __int64 v40; // rcx
  const char *v41; // r9
  _DWORD *m; // rax
  char v43; // al
  wil::details::in1diag3 *v44; // rcx
  __int64 v45; // rax
  __int64 v46; // rdx
  __int64 v47; // rcx
  unsigned int *v48; // r12
  __int64 v49; // r10
  __int64 v50; // r9
  unsigned int *v51; // rdi
  __int64 v52; // r11
  __int64 *v53; // rax
  __int64 n; // rbx
  __int64 v55; // rcx
  __int64 v56; // rdx
  __int64 v57; // rcx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // r11
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  unsigned int v64; // esi
  unsigned int v65; // r14d
  __int64 v66; // rax
  unsigned int v67; // r11d
  __int64 v68; // rax
  __int64 v69; // rbx
  int v70; // r14d
  unsigned int v71; // edx
  unsigned int v72; // edi
  __int64 v73; // rax
  void *v74; // rdx
  __int64 v75; // rbx
  __int64 v76; // rcx
  __int64 v77; // rdi
  HANDLE CurrentProcess; // rbx
  HANDLE v79; // rax
  __int64 v80; // rcx
  __int64 v81; // rax
  __int64 *v82; // rcx
  __int64 v83; // rbx
  const char *dwDesiredAccess; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v85[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v86; // [rsp+44h] [rbp-BCh] BYREF
  unsigned __int8 v87[4]; // [rsp+48h] [rbp-B8h] BYREF
  HANDLE TargetHandle; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE hSourceHandle; // [rsp+58h] [rbp-A8h]
  unsigned int *v90; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  __int64 *v93; // [rsp+78h] [rbp-88h] BYREF
  __int64 v94; // [rsp+80h] [rbp-80h]
  __int64 v95; // [rsp+88h] [rbp-78h]
  unsigned int *v96; // [rsp+90h] [rbp-70h] BYREF
  __int64 v97; // [rsp+98h] [rbp-68h]
  __int64 v98; // [rsp+A0h] [rbp-60h]
  void *v99; // [rsp+A8h] [rbp-58h] BYREF
  char v100; // [rsp+B0h] [rbp-50h]
  int *j; // [rsp+B8h] [rbp-48h]
  __int64 v102[4]; // [rsp+C0h] [rbp-40h] BYREF
  unsigned int v103; // [rsp+E0h] [rbp-20h] BYREF
  unsigned int v104; // [rsp+E4h] [rbp-1Ch]
  char v105[176]; // [rsp+E8h] [rbp-18h] BYREF
  unsigned int *v106; // [rsp+198h] [rbp+98h]
  __int64 v107; // [rsp+1B8h] [rbp+B8h]
  __int64 v108; // [rsp+1C8h] [rbp+C8h]
  __int64 v109; // [rsp+1E0h] [rbp+E0h]
  wil::details::in1diag3 *retaddr; // [rsp+238h] [rbp+138h]
  unsigned int v111; // [rsp+240h] [rbp+140h] BYREF

  v111 = a1;
  TargetHandle = a4;
  *(_DWORD *)v87 = a3;
  hSourceHandle = a2;
  v99 = &PointerInputMediator::s_frameQueueLock;
  std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
  v100 = 1;
  v8 = qword_180253F40;
  v9 = qword_180253F40 + qword_180253F48;
  v10 = (__int64 *)PointerInputMediator::s_frameQueue;
  if ( PointerInputMediator::s_frameQueue )
    v11 = *(unsigned int **)PointerInputMediator::s_frameQueue;
  else
    v11 = 0LL;
  v90 = v11;
  for ( i = qword_180253F40; ; i += v15 )
  {
    v91 = i;
    if ( i == v9 )
      break;
    v13 = (_DWORD *)std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*((__int64)&v90);
    v7 = v111;
    if ( *v13 == v111 )
    {
      if ( i != v9 )
        goto LABEL_10;
      break;
    }
  }
  *(_DWORD *)v85 = 131076;
  MicrosoftTelemetryAssertTriggeredArgs(v7, 131076LL, 100LL);
  v14 = qword_180253F48;
  v8 = qword_180253F40;
LABEL_10:
  v16 = v8 + v14;
  if ( i == v8 + v14 )
    return std::unique_lock<std::mutex>::~unique_lock<std::mutex>((__int64)&v99);
  if ( v10 )
    v18 = *v10;
  else
    v18 = 0LL;
  v19 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v18, i);
  v90 = *(unsigned int **)(v19 + 152);
  v22 = (__int64)&PointerInputMediator::s_frameQueue;
  v93 = &PointerInputMediator::s_frameQueue;
  while ( 1 )
  {
    v94 = v8;
    if ( v8 == v16 )
      break;
    v23 = std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*((__int64)&v93);
    v24 = v23;
    v22 = v111;
    if ( *(_DWORD *)v23 == v111 )
      break;
    v22 = *(_QWORD *)(v19 + 152);
    if ( *(_QWORD *)(v23 + 152) == v22 )
    {
      v22 = (__int64)(*(_QWORD *)(v23 + 192) - *(_QWORD *)(v23 + 184)) >> 2;
      if ( v22 != *(_DWORD *)(v23 + 4) )
      {
        v25 = *(int **)(v23 + 160);
        v26 = *(int **)(v23 + 168);
        for ( j = *(int **)(v24 + 168); v25 != v26; v26 = j )
        {
          v27 = *v25;
          v86 = *v25;
          v28 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(
                  v24 + 208,
                  (unsigned __int8 *)&v86);
          v20 = (const char *)a7;
          if ( a7 )
          {
            if ( a7 != 1 )
              wil::details::in1diag3::FailFast_UnexpectedMsg(
                retaddr,
                (void *)0xB9,
                (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib"
                              "\\pointerinputmediator.cpp",
                "Unknown routing source",
                dwDesiredAccess);
            v29 = *(_BYTE *)(v28 + 1) == 0;
          }
          else
          {
            if ( *(_BYTE *)(v28 + 1) )
              goto LABEL_29;
            v29 = *(_BYTE *)v28 == 0;
          }
          if ( v29 )
          {
            *(_DWORD *)v85 = 65540;
            v30 = a7 == 0 ? 0x10000 : 0;
            MicrosoftTelemetryAssertTriggeredArgs(
              v30,
              65540LL,
              (unsigned __int16)v27 | (unsigned int)v30 | (*(_BYTE *)v28 != 0 ? 0x20000 : 0));
            std::vector<unsigned int>::emplace_back<unsigned int &>(v24 + 184, &v86);
            v21 = 1LL;
            *(_BYTE *)(v28 + 1) = 1;
            *(_QWORD *)(v28 + 8) = 0LL;
            *(_WORD *)(v28 + 24) = 256;
            goto LABEL_30;
          }
LABEL_29:
          v21 = 1LL;
LABEL_30:
          ++v25;
        }
      }
    }
    v8 += v21;
  }
  v31 = a5;
  *(_OWORD *)(v19 + 8) = *a5;
  *(_OWORD *)(v19 + 24) = v31[1];
  *(_OWORD *)(v19 + 40) = v31[2];
  *(_OWORD *)(v19 + 56) = v31[3];
  *(_OWORD *)(v19 + 72) = v31[4];
  *(_OWORD *)(v19 + 88) = v31[5];
  *(_OWORD *)(v19 + 104) = v31[6];
  *(_OWORD *)(v19 + 120) = v31[7];
  *(_OWORD *)(v19 + 136) = v31[8];
  v32 = *(unsigned int *)v87;
  v33 = (unsigned __int8 *)TargetHandle;
  if ( !TargetHandle && *(_DWORD *)v87 )
  {
    v32 = _o_terminate(v22);
    __debugbreak();
  }
  v34 = v33;
  v35 = &v33[4 * v32];
  v36 = hSourceHandle;
  if ( v33 != v35 )
  {
    v37 = a6;
    do
    {
      v38 = *(_DWORD *)v34;
      *(_DWORD *)v85 = *(_DWORD *)v34;
      for ( k = *(_DWORD **)(v19 + 184); k != *(_DWORD **)(v19 + 192); ++k )
      {
        if ( *k == v38 )
        {
          if ( !*(_BYTE *)(std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v19 + 208, v85) + 25) )
            wil::details::in1diag3::_FailFast_Unexpected(
              retaddr,
              (void *)0xE4,
              (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
              v41);
          v86 = 131076;
          MicrosoftTelemetryAssertTriggeredArgs(v40, 131076LL, 235LL);
          std::_Copy_memmove<enum _Button *,enum _Button *>(k + 1, *(_QWORD *)(v19 + 192), k);
          *(_QWORD *)(v19 + 192) -= 4LL;
          v38 = *(_DWORD *)v85;
          v36 = hSourceHandle;
          break;
        }
      }
      for ( m = *(_DWORD **)(v19 + 160); m != *(_DWORD **)(v19 + 168); ++m )
      {
        if ( *m == v38 )
        {
          v43 = 0;
          goto LABEL_51;
        }
      }
      v43 = 1;
LABEL_51:
      v44 = retaddr;
      if ( v43 )
        goto LABEL_63;
      std::vector<unsigned int>::emplace_back<unsigned int &>(v19 + 184, v85);
      v45 = 2
          * (*(_QWORD *)(v19 + 256) & std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v85));
      v46 = *(_QWORD *)(v19 + 232);
      v47 = *(_QWORD *)(v46 + 8 * v45 + 8);
      if ( v47 == *(_QWORD *)(v19 + 216) )
        goto LABEL_62;
      while ( *(_DWORD *)v85 != *(_DWORD *)(v47 + 16) )
      {
        if ( v47 == *(_QWORD *)(v46 + 8 * v45) )
          goto LABEL_62;
        v47 = *(_QWORD *)(v47 + 8);
      }
      if ( !v47 )
      {
LABEL_62:
        std::_Xout_of_range("invalid unordered_map<K, T> key");
        __debugbreak();
LABEL_63:
        wil::details::in1diag3::_FailFast_Unexpected(
          v44,
          (void *)0xF3,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
          v20);
      }
      LOBYTE(v21) = 1;
      *(_BYTE *)(v47 + 25) = 1;
      *(_QWORD *)(v47 + 32) = v36;
      *(_BYTE *)(v47 + 48) = v37;
      *(_BYTE *)(v47 + 49) = 0;
      v34 += 4;
    }
    while ( v34 != v35 );
    v33 = (unsigned __int8 *)TargetHandle;
  }
  if ( (__int64)(*(_QWORD *)(v19 + 192) - *(_QWORD *)(v19 + 184)) >> 2 > (unsigned __int64)*(unsigned int *)(v19 + 4) )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0xFC,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\systeminputhosts\\components\\win32kinterop\\lib\\pointerinputmediator.cpp",
      (const char *)retaddr);
  if ( PointerInputMediator::s_routingFrames )
  {
    v49 = qword_180253F48;
    v50 = qword_180253F40;
    v51 = (unsigned int *)PointerInputMediator::s_frameQueue;
  }
  else
  {
    PointerInputMediator::s_routingFrames = v21;
    v48 = v90;
    while ( 1 )
    {
      v49 = qword_180253F48;
      v50 = qword_180253F40;
      v51 = (unsigned int *)PointerInputMediator::s_frameQueue;
      if ( !qword_180253F48 )
        break;
      v52 = qword_180253F48 + qword_180253F40;
      v53 = PointerInputMediator::s_frameQueue ? *(__int64 **)PointerInputMediator::s_frameQueue : 0LL;
      v93 = v53;
      for ( n = qword_180253F40; ; ++n )
      {
        v94 = n;
        if ( n == v52
          || *(unsigned int **)(std::_Deque_unchecked_iterator<std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>>::operator*((__int64)&v93)
                              + 152) == v48 )
        {
          break;
        }
      }
      if ( n == v49 + v50 )
        break;
      v55 = v51 ? *(_QWORD *)v51 : 0LL;
      std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v55, n);
      v57 = v51 ? *(_QWORD *)v51 : 0LL;
      v58 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v57, v56);
      if ( v60 != *(_DWORD *)(v58 + 4) )
        break;
      if ( v51 )
        v61 = *(_QWORD *)v51;
      else
        v61 = 0LL;
      v62 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v61, v59);
      PointerInputMediator::PointerFrame::PointerFrame((__int64)&v103, v62);
      v91 = 0LL;
      v90 = v51;
      v92 = n + 1;
      v97 = 0LL;
      v96 = v51;
      v98 = n;
      std::deque<PointerInputMediator::PointerFrame>::erase(v63, v102, (__int64)&v96, (__int64)&v90);
      v90 = &v103;
      _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
      v100 = 0;
      v64 = 0;
      if ( v104 )
      {
        while ( 1 )
        {
          v51 = v106;
          v65 = v106[v64];
          *(_DWORD *)v87 = v65;
          v66 = std::_Conditionally_enabled_hash<enum TestCommandMessageType,1>::operator()(v87);
          v68 = 2 * (v109 & v66);
          v69 = *(_QWORD *)(v108 + 8 * v68 + 8);
          if ( v69 == v107 )
            break;
          while ( v65 != *(_DWORD *)(v69 + 16) )
          {
            if ( v69 == *(_QWORD *)(v108 + 8 * v68) )
              goto LABEL_106;
            v69 = *(_QWORD *)(v69 + 8);
          }
          if ( !v69 )
            break;
          v70 = 0;
          v71 = v64 + 1;
          if ( v64 + 1 < v67 )
          {
            v72 = v64 + 1;
            do
            {
              v73 = lambda_b21163f7d194c0dea6581f41f33f3522_::operator()_unsigned_long_((__int64)&v90, v71);
              if ( *(_QWORD *)(v73 + 8) != *(_QWORD *)(v69 + 32)
                || *(_BYTE *)(v73 + 24) != *(_BYTE *)(v69 + 48)
                || *(_QWORD *)(v73 + 16) && *(_QWORD *)(v73 + 16) != -1LL )
              {
                break;
              }
              ++v70;
              v71 = ++v72;
            }
            while ( v72 < v104 );
            v51 = v106;
            v33 = (unsigned __int8 *)TargetHandle;
          }
          v74 = *(void **)(v69 + 40);
          if ( !v74 || v74 == (void *)-1LL )
            v74 = *(void **)(v69 + 32);
          PointerInputMediator::RouteInput(
            v103,
            v74,
            (unsigned int)(v70 + 1),
            &v51[v64],
            (struct tagTELEMETRY_POINTER_FRAME_TIMES *)v105,
            *(unsigned __int8 *)(v69 + 48));
          v64 += v70 + 1;
          if ( v64 >= v104 )
            goto LABEL_103;
        }
LABEL_106:
        std::_Xout_of_range("invalid unordered_map<K, T> key");
        break;
      }
LABEL_103:
      std::_Mutex_base::lock((std::_Mutex_base *)&PointerInputMediator::s_frameQueueLock);
      v100 = 1;
      if ( (unsigned __int64)qword_180253F20 < 0x40 )
        std::deque<PointerInputMediator::PointerFrame>::emplace_back<PointerInputMediator::PointerFrame>(
          &PointerInputMediator::s_frameLookaside,
          &v103);
      PointerInputMediator::PointerFrame::~PointerFrame((PointerInputMediator::PointerFrame *)&v103);
    }
    PointerInputMediator::s_routingFrames = 0;
    v36 = hSourceHandle;
  }
  if ( v36 )
  {
    v75 = v50 + v49;
    v97 = 0LL;
    v98 = v50 + v49;
    v96 = v51;
    v94 = 0LL;
    v95 = v50;
    v93 = (__int64 *)v51;
    std::find_if_std::_Deque_iterator_std::_Deque_val_std::_Deque_simple_types_PointerInputMediator::PointerFrame_______lambda_b7bb5d1243db4af2adae27fbd398c724___(
      &v90,
      &v93,
      &v96,
      &v111);
    if ( v92 != v75 )
    {
      if ( v90 )
        v76 = *(_QWORD *)v90;
      else
        v76 = 0LL;
      v77 = std::_Deque_val<std::_Deque_simple_types<PointerInputMediator::PointerFrame>>::_Subscript(v76, v92);
      TargetHandle = 0LL;
      CurrentProcess = GetCurrentProcess();
      v79 = GetCurrentProcess();
      DuplicateHandle(v79, v36, CurrentProcess, &TargetHandle, 0, 0, 2u);
      if ( !TargetHandle )
      {
        v86 = 131077;
        MicrosoftTelemetryAssertTriggeredArgs(v80, 131077LL, 374LL);
      }
      v81 = std::unordered_map<unsigned int,PointerInputMediator::ContactData>::at(v77 + 208, v33);
      v83 = v81;
      if ( *(HANDLE *)(v81 + 8) != v36 || (v82 = (__int64 *)(v81 + 16), *(_QWORD *)(v81 + 16)) && *v82 != -1 )
      {
        v86 = 131077;
        MicrosoftTelemetryAssertTriggeredArgs(v82, 131077LL, 377LL);
        v82 = (__int64 *)(v83 + 16);
      }
      wil::details::unique_storage<wil::details::handle_null_resource_policy<long (*)(void *),&long NtCloseCompositionInputSink(void *)>>::reset(
        v82,
        (__int64)TargetHandle);
    }
  }
  return _Mtx_unlock((_Mtx_t)&PointerInputMediator::s_frameQueueLock);
}
