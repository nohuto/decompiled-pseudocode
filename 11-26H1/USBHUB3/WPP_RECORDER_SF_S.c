/*
 * XREFs of WPP_RECORDER_SF_S @ 0x140035ED0
 * Callers:
 *     HUBREG_ValidateAndPopulateEndpointPriorities @ 0x14003559C (HUBREG_ValidateAndPopulateEndpointPriorities.c)
 *     TUNNEL_EvtInterfaceChange @ 0x140091FC0 (TUNNEL_EvtInterfaceChange.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1400467F0 (_guard_dispatch_icall.c)
 */

__int64 __fastcall WPP_RECORDER_SF_S(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned __int16 a4,
        __int64 a5,
        const wchar_t *a6)
{
  const wchar_t *v6; // rbx
  __int64 v7; // rdi
  unsigned __int64 v10; // rsi
  __int64 v12; // rbp
  int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  const wchar_t *v16; // rcx
  bool v17; // zf
  int v19; // [rsp+20h] [rbp-48h]

  v6 = a6;
  v7 = -1LL;
  v10 = (unsigned __int64)a3 >> 16;
  v12 = 10LL;
  v13 = *((_DWORD *)&WPP_GLOBAL_Control->Timer + 20 * v10 + (((a3 - 1) >> 5) & 0x7FF) + 1);
  if ( _bittest(&v13, (a3 - 1) & 0x1F) && *((_BYTE *)&WPP_GLOBAL_Control->Timer + 80 * v10 + 1) >= 2u )
  {
    if ( a6 )
    {
      v14 = -1LL;
      do
        ++v14;
      while ( a6[v14] );
      v15 = 2 * v14 + 2;
    }
    else
    {
      v15 = 10LL;
    }
    v16 = a6;
    if ( !a6 )
      v16 = L"NULL";
    ((void (__fastcall *)(_QWORD, __int64, __int64, _QWORD, const wchar_t *, __int64, _QWORD))pfnWppTraceMessage)(
      *((_QWORD *)&WPP_GLOBAL_Control->AttachedDevice + 10 * v10),
      43LL,
      a5,
      a4,
      v16,
      v15,
      0LL);
  }
  v17 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v7;
    while ( a6[v7] );
    v12 = 2 * v7 + 2;
    v17 = a6 == 0LL;
  }
  if ( v17 )
    v6 = L"NULL";
  LOWORD(v19) = a4;
  return WppAutoLogTrace(a1, 2LL, a3, a5, v19, v6, v12, 0LL);
}
