/*
 * XREFs of WPP_RECORDER_SF_qqqss @ 0x140031DD4
 * Callers:
 *     ACPIDeviceCancelWaitWakeIrp @ 0x140032C00 (ACPIDeviceCancelWaitWakeIrp.c)
 *     ACPIIsPowerNodeInTransition @ 0x140048290 (ACPIIsPowerNodeInTransition.c)
 *     ACPIDockIrpQueryEjectRelations @ 0x1400ABC08 (ACPIDockIrpQueryEjectRelations.c)
 *     ACPIBusIrpQueryBusRelations @ 0x1400C67F8 (ACPIBusIrpQueryBusRelations.c)
 *     ACPIBusAndFilterIrpQueryEjectRelations @ 0x1400C69F0 (ACPIBusAndFilterIrpQueryEjectRelations.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x140072370 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_qqqss(
        __int64 a1,
        unsigned __int8 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        char a6,
        char a7,
        char a8,
        const char *a9,
        const char *a10)
{
  __int64 v10; // rdi
  const char *v11; // rsi
  unsigned __int64 v13; // r14
  __int64 v14; // rbp
  unsigned int v15; // r12d
  const char *v16; // rbx
  int v17; // eax
  __int64 v18; // rax
  bool v19; // zf
  __int64 v21; // rax
  __int64 v22; // r9
  const char *v23; // rdx
  __int64 v24; // rax
  __int64 v25; // r8
  const char *v26; // rcx
  int v27; // [rsp+20h] [rbp-98h]
  __int64 v28; // [rsp+C0h] [rbp+8h]
  unsigned __int16 v29; // [rsp+D8h] [rbp+20h]

  v29 = a4;
  v28 = a1;
  v10 = -1LL;
  v11 = a9;
  v13 = (unsigned __int64)a3 >> 16;
  v14 = 5LL;
  v15 = a2;
  v16 = a10;
  v17 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v13 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v17, ((_BYTE)a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v13 + 1) >= a2 )
  {
    if ( a10 )
    {
      v21 = -1LL;
      do
        ++v21;
      while ( a10[v21] );
      v22 = v21 + 1;
    }
    else
    {
      v22 = 5LL;
    }
    v23 = a10;
    if ( !a10 )
      v23 = "NULL";
    if ( a9 )
    {
      v24 = -1LL;
      do
        ++v24;
      while ( a9[v24] );
      v25 = v24 + 1;
    }
    else
    {
      v25 = 5LL;
    }
    v26 = a9;
    if ( !a9 )
      v26 = "NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, char *, __int64, char *, __int64, char *, __int64, const char *, __int64, const char *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v13),
      43LL,
      a5,
      v29,
      &a6,
      8LL,
      &a7,
      8LL,
      &a8,
      8LL,
      v26,
      v25,
      v23,
      v22,
      0LL);
    a4 = v29;
    a1 = v28;
  }
  if ( v16 )
  {
    v18 = -1LL;
    do
      ++v18;
    while ( v16[v18] );
  }
  if ( !v16 )
    v16 = "NULL";
  v19 = v11 == 0LL;
  if ( v11 )
  {
    do
      ++v10;
    while ( v11[v10] );
    v14 = v10 + 1;
    v19 = v11 == 0LL;
  }
  if ( v19 )
    v11 = "NULL";
  LOWORD(v27) = a4;
  return WppAutoLogTrace(a1, v15, a3, a5, v27, &a6, 8LL, &a7, 8LL, &a8, 8LL, v11, v14, v16);
}
