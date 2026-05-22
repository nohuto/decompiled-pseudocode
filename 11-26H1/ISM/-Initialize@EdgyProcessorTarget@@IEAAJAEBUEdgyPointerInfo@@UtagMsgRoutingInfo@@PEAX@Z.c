/*
 * XREFs of ?Initialize@EdgyProcessorTarget@@IEAAJAEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAX@Z @ 0x1801AFD10
 * Callers:
 *     ?Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo@@PEAXPEAPEAV1@@Z @ 0x1801AFBF4 (-Create@EdgyProcessorTarget@@SAJPEAVEdgyLegacyProcessor@@AEBUEdgyPointerInfo@@UtagMsgRoutingInfo.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x18000C32C (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??2RefCountedObject@@SAPEAX_K@Z @ 0x180017510 (--2RefCountedObject@@SAPEAX_K@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008E348 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009AC08 (memset_0.c)
 *     ?UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z @ 0x1801B0B24 (-UpdateInputTarget@EdgyProcessorTarget@@QEAAJUtagMsgRoutingInfo@@PEAXAEBUEdgyPointerInfo@@@Z.c)
 *     ??0GestureSession@@AEAA@XZ @ 0x1801B7960 (--0GestureSession@@AEAA@XZ.c)
 *     ??0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z @ 0x1801CA91C (--0TouchInfoAdapter@@QEAA@PEAUITouchInfoAdapterClient@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall EdgyProcessorTarget::Initialize(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v8; // rbx
  int updated; // ebx
  __int64 v10; // rdx
  TouchInfoAdapter *v11; // rax
  TouchInfoAdapter *v12; // rbx
  TouchInfoAdapter *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // rcx
  _DWORD *v18; // rax
  __int64 v19; // rcx
  GestureSession *v20; // rax
  GestureSession *v21; // rbx
  GestureSession *v22; // rax
  _OWORD v24[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v25; // [rsp+40h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]

  v8 = a1 + 20;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 20);
  updated = CoreUICreate(v8);
  if ( updated < 0 )
  {
    v10 = 28LL;
    goto LABEL_34;
  }
  v11 = (TouchInfoAdapter *)RefCountedObject::operator new(0x2C0uLL);
  if ( v11 )
    v12 = TouchInfoAdapter::TouchInfoAdapter(
            v11,
            (struct ITouchInfoAdapterClient *)((unsigned __int64)(a1 + 1) & -(__int64)(a1 != 0LL)),
            (unsigned __int8)a1 + 8);
  else
    v12 = 0LL;
  v13 = (TouchInfoAdapter *)a1[18];
  if ( v13 != v12 )
  {
    if ( v12 )
      (*(void (__fastcall **)(TouchInfoAdapter *))(*(_QWORD *)v12 + 8LL))(v12);
    v14 = a1[18];
    a1[18] = v12;
    v13 = v12;
    if ( v14 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
      v13 = (TouchInfoAdapter *)a1[18];
    }
  }
  if ( !v13 )
  {
    v10 = 34LL;
LABEL_33:
    updated = -2147024882;
    goto LABEL_34;
  }
  v15 = RefCountedObject::operator new(0x70uLL);
  v16 = v15;
  if ( v15 )
  {
    v17 = a1[18];
    *(_QWORD *)v15 = &RefCountedObject::`vftable';
    v15[2] = 1;
    *(_QWORD *)v15 = &SessionBasedPointerDeviceArbitration::`vftable';
    *((_QWORD *)v15 + 2) = v17;
    v15[26] = 0;
    *((_WORD *)v15 + 54) = 0;
    memset_0(v15 + 6, 0, 0x50uLL);
  }
  else
  {
    v16 = 0LL;
  }
  v18 = (_DWORD *)a1[17];
  if ( v18 != v16 )
  {
    if ( v16 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v16 + 8LL))(v16);
    v19 = a1[17];
    a1[17] = v16;
    v18 = v16;
    if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      v18 = (_DWORD *)a1[17];
    }
  }
  if ( !v18 )
  {
    v10 = 41LL;
    goto LABEL_33;
  }
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1 + 19);
  a1[19] = 0LL;
  v20 = (GestureSession *)malloc(0x4B0uLL);
  v21 = v20;
  if ( v20 )
    memset_0(v20, 0, 0x4B0uLL);
  if ( v21 )
    v22 = GestureSession::GestureSession(v21);
  else
    v22 = 0LL;
  if ( !v22 )
  {
    v10 = 44LL;
    goto LABEL_33;
  }
  a1[19] = v22;
  v24[0] = *(_OWORD *)a3;
  v24[1] = *(_OWORD *)(a3 + 16);
  v25 = *(_QWORD *)(a3 + 32);
  updated = EdgyProcessorTarget::UpdateInputTarget(a1, v24, a4, a2);
  if ( updated >= 0 )
    return 0LL;
  v10 = 46LL;
LABEL_34:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\moderncore\\inputv2\\contextualprocessors\\processors\\edgylegacy\\processor\\edgytarget.cpp",
    (const char *)(unsigned int)updated);
  return (unsigned int)updated;
}
