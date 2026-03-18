/*
 * XREFs of ?TransformGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180233B50
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

__int64 __fastcall CChannel::TransformGroupUpdate(
        CDataStreamWriter **this,
        unsigned int a2,
        const unsigned int *a3,
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
  CChannel::CheckHandle((__int64)this, a2, 150);
  v8 = 4 * v5;
  v12[0] = 724;
  v12[1] = a2;
  if ( v8 > 0xFFFFFFFF )
  {
    v9 = -2147024362;
    v10 = 1590LL;
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
    v10 = 1591LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
    (const char *)(unsigned int)v9);
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14);
  return (unsigned int)v9;
}
