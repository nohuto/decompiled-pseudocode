/*
 * XREFs of ?ProcessInput@ConsumerControlNexusDevice@@QEAAJXZ @ 0x1800E83D4
 * Callers:
 *     ?WorkerThreadProc@ConsumerControlManager@@AEAAJXZ @ 0x1800E585C (-WorkerThreadProc@ConsumerControlManager@@AEAAJXZ.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@D@@U?$_tlgWrapperByVal@$00@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@D@@AEBU?$_tlgWrapperByVal@$00@@@Z @ 0x1800045DC (--$Write@U-$_tlgWrapSz@D@@U-$_tlgWrapperByVal@$00@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180099384 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009C958 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ?NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z @ 0x1800E823C (-NotifyInputReport@ConsumerControlNexusDevice@@AEAAJPEAUInputInfo@@@Z.c)
 *     ?QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ @ 0x1800E8680 (-QueueInputBuffers@ConsumerControlNexusDevice@@AEAAJXZ.c)
 */

__int64 __fastcall ConsumerControlNexusDevice::ProcessInput(ConsumerControlNexusDevice *this)
{
  char *v1; // r15
  char *i; // rbx
  size_t v4; // rax
  void *v5; // rax
  USHORT *v6; // rdi
  NTSTATUS Usages; // eax
  const struct std::nothrow_t *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int8 v11; // r14
  unsigned __int64 j; // rax
  _DWORD *v13; // rax
  int v14; // eax
  unsigned int v15; // edi
  __int64 v16; // r9
  __int64 v17; // rdx
  const struct std::nothrow_t *v18; // rdx
  int v20; // eax
  unsigned int v21; // ebx
  const char *v22; // [rsp+40h] [rbp-C0h] BYREF
  _DWORD v23[4]; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v24; // [rsp+60h] [rbp-A0h]
  int v25; // [rsp+68h] [rbp-98h]
  __int64 v26; // [rsp+70h] [rbp-90h]
  __int16 v27; // [rsp+8Ch] [rbp-74h]
  __int16 v28; // [rsp+AEh] [rbp-52h]
  wil::details::in1diag3 *retaddr; // [rsp+1F8h] [rbp+F8h]
  unsigned __int8 v30; // [rsp+200h] [rbp+100h] BYREF
  ULONG UsageLength; // [rsp+208h] [rbp+108h] BYREF
  LARGE_INTEGER PerformanceCount; // [rsp+210h] [rbp+110h] BYREF
  void *v33; // [rsp+218h] [rbp+118h] BYREF

  v1 = (char *)this + 48;
  for ( i = (char *)*((_QWORD *)this + 6); i != v1; i = *(char **)i )
  {
    if ( !*((_DWORD *)i + 14) && *((_QWORD *)i + 8) > 1uLL )
    {
      v4 = 2LL * *((unsigned __int16 *)this + 20);
      if ( !is_mul_ok(*((unsigned __int16 *)this + 20), 2uLL) )
        v4 = -1LL;
      v5 = operator new[](v4, (const struct std::nothrow_t *)&std::nothrow);
      v33 = v5;
      v6 = (USHORT *)v5;
      if ( !v5 )
      {
        v15 = -2147024882;
        v17 = 218LL;
        v16 = 2147942414LL;
LABEL_22:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v17,
          (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
          (const char *)v16);
LABEL_23:
        VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v33, v18);
        return v15;
      }
      memset_0(v5, 0, 2LL * *((unsigned __int16 *)this + 20));
      UsageLength = *((unsigned __int16 *)this + 20);
      Usages = HidP_GetUsages(
                 HidP_Input,
                 0xCu,
                 0,
                 v6,
                 &UsageLength,
                 *((PHIDP_PREPARSED_DATA *)this + 4),
                 i + 80,
                 *((_DWORD *)i + 16));
      if ( Usages < 0 )
      {
        v15 = wil::details::in1diag3::Return_NtStatus(
                retaddr,
                (void *)0xE8,
                (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
                (const char *)(unsigned int)Usages);
        goto LABEL_23;
      }
      v11 = 0;
      for ( j = 0LL; j < UsageLength; ++j )
      {
        v11 = v6[j] == 208;
        if ( v6[j] == 208 )
          break;
      }
      if ( v11 != *((_BYTE *)this + 104) )
      {
        if ( (unsigned int)dword_180251248 > 5 )
        {
          v30 = v11;
          v22 = "NexusButton on ConsumerControl pressed/released";
          _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<char>,_tlgWrapperByVal<1>>(
            UsageLength,
            (__int64)&unk_180216745,
            v9,
            v10,
            (const unsigned __int16 **)&v22,
            (__int64)&v30);
        }
        PerformanceCount.QuadPart = 0LL;
        QueryPerformanceCounter(&PerformanceCount);
        memset_0(v23, 0, 0x170uLL);
        v13 = (_DWORD *)*((_QWORD *)this + 16);
        v25 = 368;
        v23[0] = 4;
        v23[1] = *v13;
        v23[2] = GetTickCount();
        v24 = PerformanceCount;
        v26 = 0x6B6579626F617264LL;
        v27 = 7;
        v28 = (v11 ^ 1) + 64;
        v14 = ConsumerControlNexusDevice::NotifyInputReport(this, (struct InputInfo *)v23);
        v15 = v14;
        if ( v14 < 0 )
        {
          v16 = (unsigned int)v14;
          v17 = 266LL;
          goto LABEL_22;
        }
        *((_BYTE *)this + 104) = v11;
      }
      VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v33, v8);
    }
  }
  v20 = ConsumerControlNexusDevice::QueueInputBuffers(this);
  v21 = v20;
  if ( v20 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x116,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\lamparray\\lib\\consumercontrolnexusdevice.cpp",
    (const char *)(unsigned int)v20);
  return v21;
}
