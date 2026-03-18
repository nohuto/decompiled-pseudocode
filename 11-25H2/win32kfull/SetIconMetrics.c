/*
 * XREFs of SetIconMetrics @ 0x140148734
 * Callers:
 *     UserOnGreTextReady @ 0x140146468 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1401484D8 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     ?SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z @ 0x1402916D0 (-SPISetIconMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@H@Z.c)
 * Callees:
 *     ?SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z @ 0x1401489C4 (-SetIconFonts@@YAHPEAU_UNICODE_STRING@@PEAUtagICONMETRICSW@@@Z.c)
 *     ?GetLocalizedInt@@YAHIH@Z @ 0x140148A68 (-GetLocalizedInt@@YAHIH@Z.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x140148CD8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall SetIconMetrics(struct _UNICODE_STRING *a1, struct tagICONMETRICSW *a2)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  int v6; // edx
  int LocalizedInt; // eax
  int v8; // edx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rcx
  INT v20; // ebx
  __int64 v21; // rdx
  __int64 UserSessionState; // rax
  INT v23; // ebx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rdx
  __int64 v28; // rcx
  INT v29; // ebx
  __int64 v30; // rdx
  __int64 v31; // rax
  INT v32; // ebx
  __int64 v33; // rdx
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rcx
  __int64 v37; // rax
  __int64 v39; // rax
  _BYTE v40[4]; // [rsp+40h] [rbp-88h] BYREF
  int TWIPSMetricById; // [rsp+44h] [rbp-84h]
  int v42; // [rsp+48h] [rbp-80h]
  int v43; // [rsp+4Ch] [rbp-7Ch]

  memset_0(v40, 0, 0x6CuLL);
  if ( !(unsigned int)SetIconFonts(a1, a2) )
    return 0LL;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 66LL);
    v43 = 0;
    LocalizedInt = GetLocalizedInt(0x71u, v6);
    TWIPSMetricById = GetTWIPSMetricById(a1, 0x40u, LocalizedInt);
    v9 = GetLocalizedInt(0x72u, v8);
    v42 = GetTWIPSMetricById(a1, 0x41u, v9);
    a2 = (struct tagICONMETRICSW *)v40;
  }
  v11 = *(_QWORD *)(W32GetUserSessionState(v5, v4) + 19872);
  v12 = *((_DWORD *)a2 + 1);
  if ( v12 <= *(_DWORD *)(v11 + 2304) )
  {
    v11 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872);
    v12 = *(_DWORD *)(v11 + 2304);
  }
  *((_DWORD *)a2 + 1) = v12;
  v14 = *(_QWORD *)(W32GetUserSessionState(v11, v10) + 19872);
  v15 = *((_DWORD *)a2 + 2);
  if ( v15 <= *(_DWORD *)(v14 + 2308) )
    v15 = *(_DWORD *)(*(_QWORD *)(W32GetUserSessionState(v14, v13) + 19872) + 2308LL);
  v16 = *((unsigned int *)a2 + 1);
  *((_DWORD *)a2 + 2) = v15;
  SetDpiDepSysMet(18LL, v16);
  SetDpiDepSysMet(19LL, *((unsigned int *)a2 + 2));
  v19 = *(_QWORD *)(W32GetUserSessionState(v18, v17) + 19872);
  v20 = *(unsigned __int16 *)(v19 + 6998);
  UserSessionState = W32GetUserSessionState(v19, v21);
  v23 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(UserSessionState + 19872) + 2356LL), 96, v20);
  v26 = *(_QWORD *)(W32GetUserSessionState(v25, v24) + 19872);
  *(_DWORD *)(v26 + 2476) = v23;
  v28 = *(_QWORD *)(W32GetUserSessionState(v26, v27) + 19872);
  v29 = *(unsigned __int16 *)(v28 + 6998);
  v31 = W32GetUserSessionState(v28, v30);
  v32 = EngMulDiv(*(_DWORD *)(*(_QWORD *)(v31 + 19872) + 2360LL), 96, v29);
  v36 = *(_QWORD *)(W32GetUserSessionState(v34, v33) + 19872);
  *(_DWORD *)(v36 + 2480) = v32;
  if ( *((_DWORD *)a2 + 3) )
  {
    v37 = W32GetUserSessionState(v36, v35);
    *(_DWORD *)(v37 + 66800) |= 0x200000u;
  }
  else
  {
    v39 = W32GetUserSessionState(v36, v35);
    *(_DWORD *)(v39 + 66800) &= ~0x200000u;
  }
  return 1LL;
}
