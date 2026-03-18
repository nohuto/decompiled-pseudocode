/*
 * XREFs of ?VisualTargetSetRoot@CChannel@@UEAAJII@Z @ 0x1801950C0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z @ 0x180195230 (-QueryResourceInterface@CChannel@@UEAAJIAEBU_GUID@@PEAPEAX@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::VisualTargetSetRoot(CChannel *this, unsigned int a2, unsigned int a3)
{
  int ResourceInterface; // ebx
  int v6; // eax
  __int64 v8; // rdx
  void *v9[2]; // [rsp+20h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+8h]
  void *v11; // [rsp+58h] [rbp+28h] BYREF

  v11 = 0LL;
  v9[0] = 0LL;
  ResourceInterface = CChannel::QueryResourceInterface(this, a2, &GUID_eacdd04c_117e_4e17_88f4_d1b12b0e3d89, v9);
  if ( ResourceInterface < 0 )
  {
    v8 = 1027LL;
    goto LABEL_13;
  }
  if ( a3 )
  {
    if ( v11 )
      (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
    ResourceInterface = CChannel::QueryResourceInterface(this, a3, &GUID_4d93059d_097b_4651_9a60_f0f25116e2f3, &v11);
    if ( ResourceInterface < 0 )
    {
      v8 = 1030LL;
LABEL_13:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v8,
        (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
        (const char *)(unsigned int)ResourceInterface);
      if ( v11 )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
      if ( v9[0] )
        (*(void (__fastcall **)(void *))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
      return (unsigned int)ResourceInterface;
    }
  }
  v6 = (*(__int64 (__fastcall **)(void *, void *))(*(_QWORD *)v9[0] + 24LL))(v9[0], v11);
  ResourceInterface = v6;
  if ( v6 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x409,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v6);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)&v11);
    wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>((__int64 *)v9);
    return (unsigned int)ResourceInterface;
  }
  if ( v11 )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v11 + 16LL))(v11);
  if ( v9[0] )
    (*(void (__fastcall **)(void *))(*(_QWORD *)v9[0] + 16LL))(v9[0]);
  return 0LL;
}
