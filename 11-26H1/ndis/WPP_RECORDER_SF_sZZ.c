/*
 * XREFs of WPP_RECORDER_SF_sZZ @ 0x1400A6204
 * Callers:
 *     ndisHandleUModePnPOp @ 0x140072630 (ndisHandleUModePnPOp.c)
 * Callees:
 *     ?ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ @ 0x1400236B0 (-ndisWppFastTraceMessage@@YAXPEBU_GUID@@GZZ.c)
 */

__int64 __fastcall WPP_RECORDER_SF_sZZ(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned __int16 a4,
        __int64 a5,
        const char *a6,
        unsigned __int16 *a7,
        unsigned __int16 *a8)
{
  const wchar_t *v8; // rdi
  const char *v9; // rbp
  __int64 v10; // r13
  __int64 v11; // r10
  __int64 v12; // r8
  __int64 v13; // rax
  const wchar_t *v14; // r12
  const wchar_t *v15; // r14
  __int64 v16; // rdx
  const wchar_t *v17; // r11
  const wchar_t *v18; // r10
  __int64 v19; // rcx
  __int64 v20; // r9
  const char *v21; // r8
  bool v22; // zf
  bool v23; // zf
  int v25; // [rsp+20h] [rbp-98h]
  unsigned __int16 v27; // [rsp+D8h] [rbp+20h]

  v27 = a4;
  v8 = a7;
  v9 = a6;
  v10 = -1LL;
  v11 = a1;
  v12 = 5LL;
  if ( (*((_DWORD *)WPP_GLOBAL_Control + 11) & 0x1000) == 0 || *((_BYTE *)WPP_GLOBAL_Control + 41) < 4u )
    goto LABEL_25;
  if ( a8 )
  {
    v13 = *a8;
    if ( *a8 )
    {
      v14 = (const wchar_t *)*((_QWORD *)a8 + 1);
      goto LABEL_8;
    }
  }
  else
  {
    v13 = 8LL;
  }
  v14 = L"NULL";
LABEL_8:
  v15 = a8;
  if ( !a8 )
    v15 = L"\b";
  if ( !a7 )
  {
    v16 = 8LL;
    goto LABEL_14;
  }
  v16 = *a7;
  if ( !*a7 )
  {
LABEL_14:
    v17 = L"NULL";
    goto LABEL_15;
  }
  v17 = (const wchar_t *)*((_QWORD *)a7 + 1);
LABEL_15:
  v18 = a7;
  if ( !a7 )
    v18 = L"\b";
  if ( a6 )
  {
    v19 = -1LL;
    do
      ++v19;
    while ( a6[v19] );
    v20 = v19 + 1;
  }
  else
  {
    v20 = 5LL;
  }
  v21 = a6;
  if ( !a6 )
    v21 = "NULL";
  ndisWppFastTraceMessage(
    &WPP_a6906b87f958369cb2c210602346859b_Traceguids,
    v27,
    v21,
    v20,
    v18,
    2LL,
    v17,
    v16,
    v15,
    2LL,
    v14,
    v13,
    0LL);
  a4 = v27;
  v12 = 5LL;
  v11 = a1;
LABEL_25:
  v22 = a7 == 0LL;
  if ( a7 )
    v22 = 0;
  if ( v22 )
    v8 = L"\b";
  v23 = a6 == 0LL;
  if ( a6 )
  {
    do
      ++v10;
    while ( a6[v10] );
    v12 = v10 + 1;
    v23 = a6 == 0LL;
  }
  if ( v23 )
    v9 = "NULL";
  LOWORD(v25) = a4;
  return WppAutoLogTrace(v11, 4LL, 13LL, &WPP_a6906b87f958369cb2c210602346859b_Traceguids, v25, v9, v12, v8);
}
