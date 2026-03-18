/*
 * XREFs of ?BaseAnimationRemoveBinding@CChannel@@UEAAJIIW4Enum@DwmResourceProperty@@@Z @ 0x1802325A0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18007F810 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z @ 0x180117660 (-CheckHandle@CChannel@@AEAAXIW4MIL_RESOURCE_TYPE@@@Z.c)
 *     ?SendCommand@CChannel@@QEAAJPEAXI@Z @ 0x18011859C (-SendCommand@CChannel@@QEAAJPEAXI@Z.c)
 *     ??0CChannelLock@CChannel@@QEAA@PEAV1@@Z @ 0x18018BFC0 (--0CChannelLock@CChannel@@QEAA@PEAV1@@Z.c)
 *     ?MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAUDCOMPOSITION_PROPERTY_ID@@@Z @ 0x18021DE10 (-MilResourcePropertyFromDwmResourceProperty@CChannel@@CAJW4Enum@DwmResourceProperty@@PEAUDCOMPOS.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CChannel::BaseAnimationRemoveBinding(
        struct CChannel *a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4)
{
  int v8; // ebx
  __int64 v9; // rdx
  int v11[3]; // [rsp+20h] [rbp-28h] BYREF
  int v12; // [rsp+2Ch] [rbp-1Ch] BYREF
  __int64 v13; // [rsp+30h] [rbp-18h] BYREF
  __int64 v14; // [rsp+38h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  CChannel::CChannelLock::CChannelLock((CChannel::CChannelLock *)&v13, a1);
  CChannel::CheckHandle((__int64)a1, a2, 9);
  CChannel::CheckHandle((__int64)a1, a3, 0);
  v11[0] = 13;
  v11[1] = a2;
  v11[2] = a3;
  v12 = 0;
  v8 = CChannel::MilResourcePropertyFromDwmResourceProperty(a4, &v12);
  if ( v8 < 0 )
  {
    v9 = 1442LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v9,
      (int)"onecoreuap\\windows\\dwm\\dwmcore\\engine\\global\\channel.cpp",
      (const char *)(unsigned int)v8);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14);
    return (unsigned int)v8;
  }
  v8 = CChannel::SendCommand(a1, v11, 0x10u);
  if ( v8 < 0 )
  {
    v9 = 1443LL;
    goto LABEL_3;
  }
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 80LL))(v14);
  return 0LL;
}
