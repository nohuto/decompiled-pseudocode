/*
 * XREFs of ?VisualGroupUpdate@CChannel@@UEAAJIPEBII@Z @ 0x180119470
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?BeginCommand@CChannel@@AEAAJPEAXII@Z @ 0x180117E48 (-BeginCommand@CChannel@@AEAAJPEAXII@Z.c)
 *     ?EndItem@CDataStreamWriter@@QEAAJXZ @ 0x180118950 (-EndItem@CDataStreamWriter@@QEAAJXZ.c)
 *     ?AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z @ 0x180118D68 (-AddItemData@CDataStreamWriter@@QEAAJPEBXI@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualGroupUpdate(
        CChannel *this,
        unsigned int a2,
        const unsigned int *a3,
        unsigned int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rdi
  unsigned __int64 v9; // rdi
  int v10; // eax
  unsigned int v11; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  int v14; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v15; // [rsp+44h] [rbp+Ch]

  v4 = *((_QWORD *)this + 8);
  v6 = a4;
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 56LL))(v4);
  CChannel::CheckHandle((__int64)this, a2, 159);
  v9 = 4 * v6;
  v14 = 739;
  v15 = a2;
  if ( v9 > 0xFFFFFFFF )
  {
    v11 = -2147024362;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x448,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)0x80070216LL);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  else
  {
    v10 = CChannel::BeginCommand(this, &v14, 8u, v9);
    v11 = v10;
    if ( v10 >= 0 )
    {
      CDataStreamWriter::AddItemData(*((CDataStreamWriter **)this + 22), a3, v9);
      CDataStreamWriter::EndItem(*((CDataStreamWriter **)this + 22));
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
      return 0LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x449,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v10);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 80LL))(v4);
  }
  return v11;
}
