/*
 * XREFs of _tlgWriteAgg @ 0x1400E9314
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x14000315C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U?$_tlgWrapperByRef@$0BA@@@U?$_tlgWrapperByVal@$03@@U3@U_tlgWrapperPtrSize@@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@22222222222AEBU?$_tlgWrapperByRef@$0BA@@@AEBU?$_tlgWrapperByVal@$03@@4AEBU_tlgWrapperPtrSize@@4@Z @ 0x140003348 (--$Write@U-$_tlgWrapperByVal@$07@@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U1@U-$_tlgWrapperByRef@$0BA@@@U-.c)
 * Callees:
 *     TlgAggregateAbsorbEvent @ 0x1400E91CC (TlgAggregateAbsorbEvent.c)
 */

NTSTATUS __fastcall tlgWriteAgg(
        __int64 a1,
        unsigned __int8 *a2,
        __int64 a3,
        unsigned __int8 a4,
        _EVENT_DATA_DESCRIPTOR *a5)
{
  __int64 v5; // rax
  unsigned __int16 *v6; // rdx
  __int128 v8; // [rsp+20h] [rbp-18h] BYREF

  LODWORD(v8) = *a2 << 24;
  DWORD1(v8) = *(unsigned __int16 *)(a2 + 1);
  v5 = *(_QWORD *)(a2 + 3);
  v6 = (unsigned __int16 *)(a2 + 11);
  *((_QWORD *)&v8 + 1) = v5;
  a5->Ptr = *(_QWORD *)(a1 + 8);
  a5->Size = **(unsigned __int16 **)(a1 + 8);
  a5[1].Ptr = (unsigned __int64)v6;
  a5->Reserved = 2;
  a5[1].Size = *v6;
  a5[1].Reserved = 1;
  return TlgAggregateAbsorbEvent(a1, &v8, a4, a5);
}
