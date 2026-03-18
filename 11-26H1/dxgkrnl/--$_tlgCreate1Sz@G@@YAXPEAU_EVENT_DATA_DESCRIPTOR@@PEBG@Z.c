/*
 * XREFs of ??$_tlgCreate1Sz@G@@YAXPEAU_EVENT_DATA_DESCRIPTOR@@PEBG@Z @ 0x140049A3C
 * Callers:
 *     ??$Write@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U?$_tlgWrapSz@G@@U2@U2@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U_tlgWrapperBinary@@U6@U6@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U6@U2@U3@U3@U?$_tlgWrapperByVal@$00@@U1@U2@U2@U2@U2@U2@U2@U2@U2@U2@U2@U6@U2@U6@U2@U2@U2@U2@U6@U2@U2@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@4444AEBU?$_tlgWrapSz@G@@44AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@AEBU_tlgWrapperBinary@@88444444444444444444444448455AEBU?$_tlgWrapperByVal@$00@@3444444444484844448444@Z @ 0x140005C58 (--$Write@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U2@U2@U2@U2@U-$_tlgWrapSz@G@@U2@U2@U-.c)
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U?$_tlgWrapperByVal@$01@@U?$_tlgWrapperByVal@$03@@U3@U3@U3@U?$_tlgWrapBuffer@U_UNICODE_STRING@@@@U3@U3@U3@U3@U2@U?$_tlgWrapSz@G@@U1@U3@U3@U3@U3@U3@U3@U3@U3@U3@U2@U3@U2@U3@U3@U3@U3@U3@U3@U3@U3@U2@U2@U1@U2@U2@U3@U1@U1@U1@U2@U2@U2@U4@U4@U4@U4@U4@U3@U1@U1@U1@U4@U_tlgWrapperBinary@@U1@U3@U4@U3@U?$_tlgWrapperByVal@$00@@U?$_tlgWrapperArray@$00@@U8@U3@U3@U3@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$07@@AEBU?$_tlgWrapperByVal@$01@@AEBU?$_tlgWrapperByVal@$03@@555AEBU?$_tlgWrapBuffer@U_UNICODE_STRING@@@@55554AEBU?$_tlgWrapSz@G@@3555555555454555555554434453334446666653336AEBU_tlgWrapperBinary@@3565AEBU?$_tlgWrapperByVal@$00@@AEBU?$_tlgWrapperArray@$00@@AEBU?$_tlgWrapperArray@$00@@555@Z @ 0x140049208 (--$Write@U-$_tlgWrapperByVal@$07@@U-$_tlgWrapperByVal@$01@@U-$_tlgWrapperByVal@$03@@U3@U3@U3@U-$.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _tlgCreate1Sz<unsigned short>(__int64 a1, _WORD *a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( a2 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a2[v2] );
    result = (unsigned int)(2 * v2 + 2);
  }
  else
  {
    a2 = &unk_1400B4A34;
    result = 2LL;
  }
  *(_QWORD *)a1 = a2;
  *(_DWORD *)(a1 + 8) = result;
  *(_DWORD *)(a1 + 12) = 0;
  return result;
}
