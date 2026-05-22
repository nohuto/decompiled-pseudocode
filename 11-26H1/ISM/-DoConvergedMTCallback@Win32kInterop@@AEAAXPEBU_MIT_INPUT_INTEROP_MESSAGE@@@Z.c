/*
 * XREFs of ?DoConvergedMTCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180010D88
 * Callers:
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x180010CA0 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 * Callees:
 *     ?DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV?$function@$$A6AXPEAVInputContext@@@Z@std@@V?$function@$$A6AXPEAUIInputTarget@@@Z@4@@Z @ 0x18000F4CC (-DeliverToContextualProcessing@Win32kInterop@@AEAAXPEAUInputInfo@@KV-$function@$$A6AXPEAVInputCo.c)
 *     ?OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x180010060 (-OnNewFrame@PointerInputMediator@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ?GetSizeForPointerCount@PointerInputInfo@@SAKK@Z @ 0x180010B90 (-GetSizeForPointerCount@PointerInputInfo@@SAKK@Z.c)
 *     ?InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z @ 0x180011008 (-InitializeInputInfoWithPointerInfo@@YAXPEBUtagPOINTER_INFO_UNION@@_NPEAUPointerInputInfo@@@Z.c)
 *     ?ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z @ 0x1800111F4 (-ReceivePointerFrame@ISM@InputTraceLogging@@SAXPEBUtagMANIPULATION_INPUT_INFO@@@Z.c)
 *     ??1?$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ @ 0x180011B4C (--1-$VariableSizedPayloadStorage@UInputInfo@@@@QEAA@XZ.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x180089554 (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ??_U@YAPEAX_K@Z @ 0x18009C94C (--_U@YAPEAX_K@Z.c)
 *     _lambda_00acc3e30bec0ac7fd9c7cd13d293566_::_lambda_00acc3e30bec0ac7fd9c7cd13d293566_ @ 0x1800DFEC8 (_lambda_00acc3e30bec0ac7fd9c7cd13d293566_--_lambda_00acc3e30bec0ac7fd9c7cd13d293566_.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall Win32kInterop::DoConvergedMTCallback(Win32kInterop *this, const struct _MIT_INPUT_INTEROP_MESSAGE *a2)
{
  unsigned int SizeForPointerCount; // eax
  const char *v4; // r9
  unsigned int v5; // esi
  unsigned int v6; // edi
  _DWORD *v7; // rbx
  const struct InputInfo *v8; // rcx
  struct tagMANIPULATION_INPUT_INFO *v9; // rax
  const struct InputInfo *v10; // r8
  _OWORD *v11; // r8
  _OWORD *v12; // rcx
  _DWORD *v13; // [rsp+38h] [rbp-61h] BYREF
  unsigned int v14; // [rsp+40h] [rbp-59h]
  _OWORD v15[3]; // [rsp+48h] [rbp-51h] BYREF
  _OWORD *v16; // [rsp+80h] [rbp-19h]
  __int64 (__fastcall **v17)(); // [rsp+88h] [rbp-11h] BYREF
  __int128 v18; // [rsp+90h] [rbp-9h]
  __int128 v19; // [rsp+A0h] [rbp+7h]
  __int64 (__fastcall ***v20)(); // [rsp+C0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]
  const struct _MIT_INPUT_INTEROP_MESSAGE *v22; // [rsp+108h] [rbp+6Fh] BYREF
  struct tagMANIPULATION_INPUT_INFO *v23; // [rsp+110h] [rbp+77h] BYREF
  const struct InputInfo *v24; // [rsp+118h] [rbp+7Fh] BYREF

  v22 = a2;
  v23 = (const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8);
  InputTraceLogging::ISM::ReceivePointerFrame((const struct _MIT_INPUT_INTEROP_MESSAGE *)((char *)a2 + 8));
  PointerInputMediator::OnNewFrame(v23);
  SizeForPointerCount = PointerInputInfo::GetSizeForPointerCount(*((_DWORD *)v23 + 37));
  v5 = SizeForPointerCount;
  v6 = 0;
  v13 = 0LL;
  if ( SizeForPointerCount < 0x20uLL )
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x1FB,
      (unsigned int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinput\\inc\\rawinput.h",
      v4);
  v7 = operator new[](SizeForPointerCount);
  v13 = v7;
  v14 = v5;
  memset_0(v7, 0, v5);
  v7[6] = v5;
  v24 = (const struct InputInfo *)v7;
  InitializeInputInfoWithPointerInfo(
    (struct tagMANIPULATION_INPUT_INFO *)((char *)v23 + 160),
    *((_BYTE *)v23 + 152) & 1,
    (struct PointerInputInfo *)v7);
  *((_DWORD *)v24 + 79) = *((_DWORD *)v23 + 37);
  *((_DWORD *)v24 + 11) = *((_DWORD *)v23 + 36);
  v8 = v24;
  v9 = v23;
  *(_OWORD *)((char *)v24 + 88) = *(_OWORD *)v23;
  *(_OWORD *)((char *)v8 + 104) = *((_OWORD *)v9 + 1);
  *(_OWORD *)((char *)v8 + 120) = *((_OWORD *)v9 + 2);
  *(_OWORD *)((char *)v8 + 136) = *((_OWORD *)v9 + 3);
  *(_OWORD *)((char *)v8 + 152) = *((_OWORD *)v9 + 4);
  *(_OWORD *)((char *)v8 + 168) = *((_OWORD *)v9 + 5);
  *(_OWORD *)((char *)v8 + 184) = *((_OWORD *)v9 + 6);
  *(_OWORD *)((char *)v8 + 200) = *((_OWORD *)v9 + 7);
  *(_OWORD *)((char *)v8 + 216) = *((_OWORD *)v9 + 8);
  *((_BYTE *)v24 + 313) = (*((_DWORD *)v23 + 38) & 2u) >> 1;
  v10 = v24;
  if ( *((_DWORD *)v24 + 79) )
  {
    do
    {
      v11 = (_OWORD *)((char *)v10 + 144 * v6 + 320);
      v12 = (_OWORD *)((char *)v23 + 240 * v6 + 160);
      *v11 = *v12;
      v11[1] = v12[1];
      v11[2] = v12[2];
      v11[3] = v12[3];
      v11[4] = v12[4];
      v11[5] = v12[5];
      v11[6] = v12[6];
      v11[7] = v12[7];
      v11[8] = v12[8];
      ++v6;
      v10 = v24;
    }
    while ( v6 < *((_DWORD *)v24 + 79) );
  }
  lambda_00acc3e30bec0ac7fd9c7cd13d293566_::_lambda_00acc3e30bec0ac7fd9c7cd13d293566_(
    (unsigned int)v15,
    (unsigned int)&v23,
    (unsigned int)&v22,
    (_DWORD)this,
    (__int64)&v24);
  v17 = off_1801E2848;
  v18 = v15[0];
  v19 = v15[1];
  v20 = &v17;
  *(_QWORD *)&v15[0] = off_1801E2CA8;
  v16 = v15;
  Win32kInterop::DeliverToContextualProcessing((__int64)this, v24, *((_DWORD *)v23 + 39), (__int64)v15, (__int64)&v17);
  VariableSizedPayloadStorage<InputInfo>::~VariableSizedPayloadStorage<InputInfo>(&v13);
}
