/*
 * XREFs of ?CaptureControllerSetWindowInfos@CChannel@@UEAAJIPEBU_DWMCaptureWindowInformation@@I@Z @ 0x180232A40
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180117E48 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180118950 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180118D68 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::CaptureControllerSetWindowInfos(
        CDataStreamWriter **this,
        unsigned int a2,
        const struct _DWMCaptureWindowInformation *a3,
        unsigned int a4)
{
  __int64 v5; // rdi
  unsigned __int64 v8; // rdi
  int v9; // ebx
  __int64 v10; // rdx
  int v12[2]; // [rsp+20h] [rbp-28h] BYREF
  __int64 v13; // [rsp+28h] [rbp-20h] BYREF
  __int64 v14; // [rsp+30h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  v5 = a4;
  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)&v13, (struct CChannel *)this);
  CChannel::CheckHandle((__int64)this, a2, 17);
  v8 = 32 * v5;
  v12[0] = 384;
  v12[1] = a2;
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v10 = 1965LL;
  }
  else
  {
    v9 = CChannel::BeginCommand((CChannel *)this, v12, 8u, v8);
    if ( v9 >= 0 )
    {
      CDataStreamWriter::AddItemData(this[22], a3, v8);
      CDataStreamWriter::EndItem(this[22]);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14);
      return 0LL;
    }
    v10 = 1966LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14);
  return (unsigned int)v9;
}
