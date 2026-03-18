/*
 * XREFs of xxxSetWindowNCMetrics @ 0x140149304
 * Callers:
 *     UserOnGreTextReady @ 0x140146468 (UserOnGreTextReady.c)
 *     xxxInitWindowStation @ 0x1401484D8 (xxxInitWindowStation.c)
 *     xxxUpdatePerUserSystemParameters @ 0x140212E60 (xxxUpdatePerUserSystemParameters.c)
 *     ?xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z @ 0x140291E34 (-xxxSetAndDrawNCMetrics@@YAHPEAU_UNICODE_STRING@@HPEAUtagNONCLIENTMETRICSW@@@Z.c)
 * Callees:
 *     CreateBitmapStrip @ 0x1400C0830 (CreateBitmapStrip.c)
 *     ?GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z @ 0x140148CD8 (-GetTWIPSMetricById@@YAHPEAU_UNICODE_STRING@@IH@Z.c)
 *     xxxSetNCFonts @ 0x140149590 (xxxSetNCFonts.c)
 *     ?SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z @ 0x140149BCC (-SetNCMetrics@@YAXPEAUtagNONCLIENTMETRICSW@@@Z.c)
 *     __security_check_cookie @ 0x1403423B0 (__security_check_cookie.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

__int64 __fastcall xxxSetWindowNCMetrics(struct _UNICODE_STRING *a1, struct tagNONCLIENTMETRICSW *a2, int a3)
{
  unsigned int v6; // edi
  int v7; // eax
  int v8; // ecx
  int v9; // esi
  int v10; // ecx
  int v11; // eax
  int v12; // ecx
  int v13; // eax
  int v14; // ecx
  int v15; // eax
  __int64 v16; // rcx
  int v17; // ecx
  int v18; // eax
  __int64 v19; // rcx
  __int64 SessionDpiMetrics; // rax
  int v21; // edx
  int v22; // r8d
  __int64 v23; // r9
  int v24; // ecx
  int v25; // edx
  int v26; // eax
  int v27; // edx
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  int v32; // [rsp+20h] [rbp-E0h] BYREF
  int TWIPSMetricById; // [rsp+24h] [rbp-DCh]
  int v34; // [rsp+28h] [rbp-D8h]
  int v35; // [rsp+2Ch] [rbp-D4h]
  int v36; // [rsp+30h] [rbp-D0h]
  int v37; // [rsp+34h] [rbp-CCh]
  int v38; // [rsp+94h] [rbp-6Ch]
  int v39; // [rsp+98h] [rbp-68h]
  int v40; // [rsp+F8h] [rbp-8h]
  int v41; // [rsp+FCh] [rbp-4h]
  int v42; // [rsp+214h] [rbp+114h]

  memset_0(&v32, 0, 0x1F8uLL);
  v6 = 0;
  if ( !(unsigned int)xxxSetNCFonts(a1) )
    return 0LL;
  if ( !a2 )
  {
    v32 = 504;
    if ( a3 >= 0 )
      TWIPSMetricById = a3;
    else
      TWIPSMetricById = GetTWIPSMetricById(a1, 0x88u);
    v34 = GetTWIPSMetricById(a1, 0x98u);
    v35 = GetTWIPSMetricById(a1, 0x99u);
    v36 = GetTWIPSMetricById(a1, 0x89u);
    v37 = GetTWIPSMetricById(a1, 0x8Au);
    v38 = GetTWIPSMetricById(a1, 0x8Cu);
    v39 = GetTWIPSMetricById(a1, 0x8Du);
    v40 = GetTWIPSMetricById(a1, 0x8Fu);
    v41 = GetTWIPSMetricById(a1, 0x90u);
    v42 = GetTWIPSMetricById(a1, 0x9Eu);
    a2 = (struct tagNONCLIENTMETRICSW *)&v32;
  }
  v7 = *((_DWORD *)a2 + 1);
  if ( v7 <= 1 )
  {
    v7 = 1;
LABEL_6:
    v8 = v7;
    goto LABEL_7;
  }
  v8 = 50;
  if ( v7 < 50 )
    goto LABEL_6;
LABEL_7:
  *((_DWORD *)a2 + 1) = v8;
  v9 = 8;
  v10 = *((_DWORD *)a2 + 125);
  v11 = 100;
  if ( v10 <= 0 )
    v10 = 0;
  if ( v10 < 100 )
    v11 = v10;
  v12 = 8;
  *((_DWORD *)a2 + 125) = v11;
  if ( *((int *)a2 + 2) > 8 )
    v12 = *((_DWORD *)a2 + 2);
  v13 = *((_DWORD *)a2 + 3);
  *((_DWORD *)a2 + 2) = v12;
  v14 = 8;
  if ( v13 > 8 )
    v14 = v13;
  v15 = *((_DWORD *)a2 + 4);
  *((_DWORD *)a2 + 3) = v14;
  v16 = 8LL;
  if ( v15 > 8 )
    v16 = (unsigned int)v15;
  *((_DWORD *)a2 + 4) = v16;
  v17 = *(_DWORD *)(GetSessionDpiServerInfo(v16) + 20);
  v18 = *((_DWORD *)a2 + 5);
  v19 = (unsigned int)(v17 + 2);
  if ( v18 <= (int)v19 )
    v18 = *(_DWORD *)(GetSessionDpiServerInfo(v19) + 20) + 2;
  *((_DWORD *)a2 + 5) = v18;
  SessionDpiMetrics = GetSessionDpiMetrics(v19);
  v21 = 8;
  v22 = *((_DWORD *)a2 + 55);
  v23 = SessionDpiMetrics;
  if ( *((int *)a2 + 29) > 8 )
    v21 = *((_DWORD *)a2 + 29);
  v24 = *((_DWORD *)a2 + 30);
  *((_DWORD *)a2 + 29) = v21;
  v25 = *(_DWORD *)(SessionDpiMetrics + 44);
  v26 = *((_DWORD *)a2 + 54);
  v27 = v25 + 2;
  if ( v24 <= v27 )
    v24 = v27;
  *((_DWORD *)a2 + 30) = v24;
  if ( v26 > 8 )
    v9 = v26;
  *((_DWORD *)a2 + 54) = v9;
  if ( v22 <= *(_DWORD *)(v23 + 28) )
    v22 = *(_DWORD *)(v23 + 28);
  *((_DWORD *)a2 + 55) = v22;
  SetNCMetrics(a2);
  LOBYTE(v6) = (unsigned int)CreateBitmapStrip(v29, v28, v30) != 0;
  return v6;
}
