/*
 * XREFs of _CChainingHelper::OnRailsEnabledChanged_::_2_::_lambda_1_::operator() @ 0x18013DC5C
 * Callers:
 *     ?OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipulation@@@Z @ 0x18013D9E8 (-OnManipulationChanged@InteractionSourceManager@@QEAAXW4Flags@NotificationEventArgs@@PEAVCManipu.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

char __fastcall CChainingHelper::OnRailsEnabledChanged_::_2_::_lambda_1_::operator()(
        _QWORD **a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v5; // rsi
  char v6; // bl
  _QWORD *v7; // r8
  _QWORD *v8; // rax

  v5 = (int)a2;
  LOBYTE(a4) = 1;
  v6 = 0;
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)**a1 + 248LL))(
         **a1,
         a2,
         *a1[1],
         a4) )
  {
    v6 = (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)**a1 + 264LL))(
           **a1,
           (unsigned int)v5,
           *a1[1]) != 0;
  }
  v7 = a1[2];
  LOBYTE(v8) = *((_BYTE *)v7 + 12 * v5) & 1;
  if ( (_BYTE)v8 != v6 )
  {
    *((_BYTE *)v7 + 12 * v5) = v6 | *((_BYTE *)v7 + 12 * v5) & 0xFE;
    v8 = a1[2];
    *((_BYTE *)v8 + 36) |= 1u;
  }
  return (char)v8;
}
