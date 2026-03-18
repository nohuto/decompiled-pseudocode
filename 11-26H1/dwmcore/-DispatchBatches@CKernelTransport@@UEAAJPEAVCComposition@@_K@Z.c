/*
 * XREFs of ?DispatchBatches@CKernelTransport@@UEAAJPEAVCComposition@@_K@Z @ 0x180163570
 * Callers:
 *     <none>
 * Callees:
 *     McGenEventWrite_EventWriteTransfer @ 0x18002F930 (McGenEventWrite_EventWriteTransfer.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180081990 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?CloseChannel@CComposition@@IEAAJI@Z @ 0x18016303C (-CloseChannel@CComposition@@IEAAJI@Z.c)
 *     ??$ReleaseInterfaceNoNULL@VCChannelContext@@@@YAXPEAVCChannelContext@@@Z @ 0x180163A7C (--$ReleaseInterfaceNoNULL@VCChannelContext@@@@YAXPEAVCChannelContext@@@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180163B90 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180163BC0 (-IsOOM@@YA_NJ@Z.c)
 *     ?OpenChannel@CComposition@@IEAAJIK_KPEAX@Z @ 0x180163C50 (-OpenChannel@CComposition@@IEAAJIK_KPEAX@Z.c)
 *     McTemplateU0t_EventWriteTransfer @ 0x18016490C (McTemplateU0t_EventWriteTransfer.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180204768 (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ?MilUnexpectedError@@YAXJPEBG@Z @ 0x18020A440 (-MilUnexpectedError@@YAXJPEBG@Z.c)
 *     ?FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z @ 0x18020C1F8 (-FailFastOnMalformedPacket@CComposition@@KAXW4MILCMD_CRASHID@@PEBX@Z.c)
 *     ?GetStackCaptureRootFailureAddress@@YAPEAXJ@Z @ 0x180219834 (-GetStackCaptureRootFailureAddress@@YAPEAXJ@Z.c)
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CKernelTransport::DispatchBatches(CKernelTransport *this, struct CComposition *a2, __int64 a3)
{
  __int64 v3; // r9
  struct CComposition *v4; // rsi
  int v5; // r14d
  int ConnectionBatch; // eax
  __int64 v7; // r8
  __int64 v8; // rbx
  int v10; // r15d
  unsigned int v11; // eax
  __int64 v12; // r14
  unsigned int v13; // eax
  unsigned int *v14; // rsi
  __int64 v15; // r13
  __int64 v16; // rcx
  unsigned int *v17; // rbx
  unsigned int v18; // edi
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  unsigned int v21; // esi
  unsigned int *v22; // rdi
  unsigned int v23; // r14d
  int v24; // eax
  int v25; // eax
  unsigned int v26; // ebx
  int v27; // eax
  int v28; // ebx
  unsigned int v29; // eax
  const unsigned __int16 *v30; // rdx
  int v31; // ecx
  void *StackCaptureRootFailureAddress; // rax
  int v33; // eax
  unsigned int v34; // eax
  __int64 v35; // r14
  int v36; // [rsp+20h] [rbp-79h]
  int v37; // [rsp+40h] [rbp-59h]
  __int64 v38; // [rsp+48h] [rbp-51h] BYREF
  __int64 v39; // [rsp+50h] [rbp-49h] BYREF
  __int64 v40; // [rsp+58h] [rbp-41h]
  int v41; // [rsp+60h] [rbp-39h] BYREF
  struct CComposition *v42; // [rsp+68h] [rbp-31h]
  _QWORD v43[2]; // [rsp+70h] [rbp-29h] BYREF
  unsigned int *v44; // [rsp+80h] [rbp-19h]
  struct _EVENT_DATA_DESCRIPTOR v45; // [rsp+88h] [rbp-11h] BYREF
  __int64 *v46; // [rsp+98h] [rbp-1h]
  __int64 v47; // [rsp+A0h] [rbp+7h]
  __int64 *v48; // [rsp+A8h] [rbp+Fh]
  __int64 v49; // [rsp+B0h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v3 = *((_QWORD *)this + 3);
  v43[0] = a3;
  v42 = a2;
  v4 = a2;
  v39 = 0LL;
  v5 = 0;
  v37 = 0;
  if ( v3 )
  {
    v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v3 + 24LL))(v3, a3, &v39);
    v26 = v25;
    if ( v25 >= 0 )
    {
LABEL_3:
      while ( 1 )
      {
        v8 = v39;
        if ( !v39 )
          break;
        v10 = 0;
        switch ( *(_DWORD *)v39 )
        {
          case 7:
            v11 = *(_DWORD *)(v39 + 16);
            if ( v11 < 0x10000
              && v11 < *((_DWORD *)v4 + 214)
              && (v12 = *(_QWORD *)(*((_QWORD *)v4 + 104) + 8LL * v11), (v40 = v12) != 0) )
            {
              if ( _InterlockedAdd((volatile signed __int32 *)(v12 + 8), 1u) <= 0 )
                wil::details::in1diag3::Log_Hr(
                  retaddr,
                  (void *)0x18,
                  (unsigned int)"onecoreuap\\windows\\dwm\\common\\shared\\refcountbase.cpp",
                  (const char *)0x8007029CLL,
                  v36);
              v13 = *(_DWORD *)(v8 + 20);
              v14 = *(unsigned int **)(v8 + 24);
              v15 = v13;
              ++*(_DWORD *)(v12 + 128);
              v16 = *(_QWORD *)(v12 + 48);
              v44 = v14;
              v43[1] = v16;
              CComposition::s_pLastCommandBuffer_ForFailfast = v14;
              LODWORD(CComposition::s_cbLastCommandBuffer_ForFailfast) = v13;
              if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
              {
                v38 = v13;
                v46 = &v38;
                v47 = 8LL;
                McGenEventWrite_EventWriteTransfer(
                  &Microsoft_Windows_Dwm_Core_Provider_Context,
                  &EVTDESC_MILEVENT_MEDIA_UCE_PROCESSQUEUEEVENT,
                  v7,
                  2u,
                  &v45);
              }
              v17 = v14;
              while ( 1 )
              {
                v18 = -2147467259;
                v19 = (unsigned __int64)v14 + v15 - (_QWORD)v17;
                if ( !v19 )
                  goto LABEL_36;
                if ( v19 < 8 )
                  goto LABEL_39;
                v20 = *v17;
                if ( (unsigned int)v20 < 8 || (v20 & 3) != 0 || v20 > v19 )
                  goto LABEL_39;
                v21 = v17[1];
                v22 = v17 + 1;
                v17 = (unsigned int *)((char *)v17 + v20);
                v23 = v20 - 4;
                if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x200000) != 0 )
                {
                  LODWORD(v38) = v21;
                  v47 = 4LL;
                  v49 = 4LL;
                  v41 = *(_DWORD *)(v40 + 28);
                  v46 = (__int64 *)&v41;
                  v48 = &v38;
                  McGenEventWrite_EventWriteTransfer(
                    &Microsoft_Windows_Dwm_Core_Provider_Context,
                    &EVTDESC_COMMAND_PROCESSED_ONBEHALF,
                    v7,
                    3u,
                    &v45);
                }
                v36 = v40;
                v24 = (*(__int64 (__fastcall **)(struct CComposition *, _QWORD, unsigned int *, _QWORD))(*(_QWORD *)v42 + 88LL))(
                        v42,
                        v21,
                        v22,
                        v23);
                v18 = v24;
                if ( v24 < 0 )
                  break;
                v14 = v44;
                ++v10;
              }
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v24, 0x222u, 0LL);
LABEL_39:
              if ( !IsOOM(v18) )
              {
                MilUnexpectedError(v31, v30);
                StackCaptureRootFailureAddress = GetStackCaptureRootFailureAddress(v18);
                CComposition::FailFastOnMalformedPacket(v18, StackCaptureRootFailureAddress);
              }
              if ( (v18 & 0x80000000) == 0 )
              {
LABEL_36:
                ReleaseInterfaceNoNULL<CChannelContext>(v40);
                v5 = v37;
                v4 = v42;
                break;
              }
              v35 = v40;
              v34 = 475;
            }
            else
            {
              v18 = -2147024809;
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, -2147024809, 0x693u, 0LL);
              v34 = 471;
              v35 = 0LL;
            }
            v28 = v18;
            MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v18, v34, 0LL);
            ReleaseInterfaceNoNULL<CChannelContext>(v35);
            v29 = 441;
            goto LABEL_34;
          case 5:
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
              McTemplateU0t_EventWriteTransfer(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_CHANNEL_OPENED_FOR_PROCESS,
                *(unsigned int *)(v39 + 20));
            v33 = CComposition::OpenChannel(
                    v4,
                    *(_DWORD *)(v8 + 16),
                    *(_DWORD *)(v8 + 20),
                    *(_QWORD *)(v8 + 24),
                    *(void **)(v8 + 32));
            v18 = v33;
            if ( v33 < 0 )
            {
              v28 = v33;
              v29 = 437;
              goto LABEL_34;
            }
            break;
          case 6:
            if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x20000) != 0 )
              McTemplateU0t_EventWriteTransfer(
                &Microsoft_Windows_Dwm_Core_Provider_Context,
                &EVTDESC_CHANNEL_CLOSED_FOR_PROCESS,
                *(unsigned int *)(v39 + 20));
            v27 = CComposition::CloseChannel(v4, *(_DWORD *)(v8 + 16));
            v18 = v27;
            if ( v27 < 0 )
            {
              v28 = v27;
              v29 = 446;
LABEL_34:
              MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v28, v29, 0LL);
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xF2,
                (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
                (const char *)v18);
              return v18;
            }
            break;
        }
        v5 += v10;
        v37 = v5;
        v39 = *(_QWORD *)(v39 + 8);
      }
      if ( (Microsoft_Windows_Dwm_CoreEnableBits & 0x10) != 0 )
      {
        LODWORD(v38) = v5;
        v46 = &v38;
        v47 = 4LL;
        McGenEventWrite_EventWriteTransfer(
          &Microsoft_Windows_Dwm_Core_Provider_Context,
          &EVTDESC_NUMBER_OF_COMMANDS_PROCESSED,
          v7,
          2u,
          &v45);
      }
      return 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE5,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
        (const char *)(unsigned int)v25);
      return v26;
    }
  }
  else
  {
    ConnectionBatch = NtDCompositionGetConnectionBatch(*((_QWORD *)this + 1), v43, &v39);
    if ( ConnectionBatch >= 0 )
      goto LABEL_3;
    return wil::details::in1diag3::Return_NtStatus(
             retaddr,
             (void *)0xEC,
             (unsigned int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\kerneltransport.cpp",
             (const char *)(unsigned int)ConnectionBatch,
             v36);
  }
}
