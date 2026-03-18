/*
 * XREFs of ?PowerMonitorDimStateTelemetry@@YAXPEAU_DIM_UNDIM_TELEMETRY_DATA@@@Z @ 0x140080360
 * Callers:
 *     PowerUnDimMonitor @ 0x140080194 (PowerUnDimMonitor.c)
 *     PowerDimUndimResend @ 0x140142374 (PowerDimUndimResend.c)
 *     PowerDimMonitor @ 0x140146808 (PowerDimMonitor.c)
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$07@@U1@U?$_tlgWrapperByVal@$03@@U?$_tlgWrapperByVal@$00@@U3@U3@U3@U3@U2@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBX1IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteAgg@@YAJ011I2@ZPEBX@@SAJPEBU_tlgProvider_t@@PEBX1AEBU?$_tlgWrapperByVal@$07@@2AEBU?$_tlgWrapperByVal@$03@@AEBU?$_tlgWrapperByVal@$00@@44443@Z @ 0x14008072C (--$Write@U-$_tlgWrapperByVal@$07@@U1@U-$_tlgWrapperByVal@$03@@U-$_tlgWrapperByVal@$00@@U3@U3@U3@.c)
 *     TlgAggregateFlush @ 0x14015837C (TlgAggregateFlush.c)
 */

void __fastcall PowerMonitorDimStateTelemetry(__int64 a1, __int64 a2)
{
  struct _DIM_UNDIM_TELEMETRY_DATA *v2; // rbx
  int v3; // ecx
  __int64 v4; // rdx
  __int64 v5; // rcx
  bool v6; // zf
  int v7; // ecx
  int v8; // r8d
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rbx
  bool v15; // [rsp+60h] [rbp-20h] BYREF
  bool v16[3]; // [rsp+61h] [rbp-1Fh] BYREF
  int v17; // [rsp+64h] [rbp-1Ch] BYREF
  int v18; // [rsp+68h] [rbp-18h] BYREF
  __int64 v19; // [rsp+70h] [rbp-10h] BYREF
  __int64 v20; // [rsp+78h] [rbp-8h] BYREF
  char v21; // [rsp+B8h] [rbp+38h] BYREF
  char v22; // [rsp+C0h] [rbp+40h] BYREF
  char v23; // [rsp+C8h] [rbp+48h] BYREF

  v2 = (struct _DIM_UNDIM_TELEMETRY_DATA *)a1;
  if ( (unsigned int)dword_14029EDE8 > 5 )
  {
    a1 = 0x400000000100LL;
    if ( (qword_14029EDF8 & 0x400000000100LL) != 0 && (qword_14029EE00 & 0x400000000100LL) == qword_14029EE00 )
    {
      v3 = *(_DWORD *)(W32GetUserSessionState(0x400000000100LL, a2) + 2888);
      v21 = *((_BYTE *)v2 + 6);
      v22 = *((_BYTE *)v2 + 5);
      v23 = *((_BYTE *)v2 + 4);
      v17 = v3;
      v15 = *(_DWORD *)(W32GetUserGdiSessionState() + 36) != 0;
      v6 = *(_WORD *)(W32GetUserSessionState(v5, v4) + 68752) == 0;
      v18 = *(_DWORD *)v2;
      v16[0] = v6;
      v19 = 16779264LL;
      v20 = 1LL;
      _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteAgg(_tlgProvider_t const *,void const *,void const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),void const *>::Write<_tlgWrapperByVal<8>,_tlgWrapperByVal<8>,_tlgWrapperByVal<4>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<1>,_tlgWrapperByVal<4>>(
        v7,
        (unsigned int)&unk_140278499,
        v8,
        (unsigned int)&v20,
        (__int64)&v19,
        (__int64)&v18,
        (__int64)v16,
        (__int64)&v15,
        (__int64)&v23,
        (__int64)&v22,
        (__int64)&v21,
        (__int64)&v17);
    }
  }
  if ( !*(_QWORD *)(W32GetUserSessionState(a1, a2) + 608) )
  {
    v14 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(W32GetUserSessionState(v10, v9) + 608) = v14;
  }
  v12 = *(_QWORD *)(W32GetUserSessionState(v10, v9) + 608);
  if ( MEMORY[0xFFFFF78000000008] > v12 )
  {
    v13 = MEMORY[0xFFFFF78000000008] + 36000000000LL;
    *(_QWORD *)(W32GetUserSessionState(v12, v11) + 608) = v13;
    TlgAggregateFlush();
  }
}
