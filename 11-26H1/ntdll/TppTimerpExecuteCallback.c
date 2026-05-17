/*
 * XREFs of TppTimerpExecuteCallback @ 0x180053660
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkCallbackPrologRelease @ 0x180053AB0 (TppWorkCallbackPrologRelease.c)
 *     NtTraceEvent @ 0x18015FAF0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162C90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180170020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

struct _PEB *__fastcall TppTimerpExecuteCallback(__int64 a1, __int64 a2)
{
  _QWORD *v2; // rbx
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  struct _PEB *result; // rax
  _DWORD *v11; // rcx
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // r10
  _QWORD *ThreadPoolData; // rcx
  __int64 v19; // rax
  __int64 v20; // rdx
  _QWORD *v21; // rsi
  _DWORD *v22; // rcx
  __int64 v23; // rcx
  _DWORD *v24; // rcx
  __int64 v25; // rcx
  _DWORD v26[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v27; // [rsp+28h] [rbp-D8h]
  __int128 v28; // [rsp+30h] [rbp-D0h]
  __int64 v29; // [rsp+40h] [rbp-C0h]
  __int64 v30; // [rsp+48h] [rbp-B8h]
  __int64 v31; // [rsp+50h] [rbp-B0h]
  __int64 v32; // [rsp+58h] [rbp-A8h]
  __int64 v33; // [rsp+60h] [rbp-A0h]
  _DWORD v34[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v35; // [rsp+78h] [rbp-88h]
  __int128 v36; // [rsp+80h] [rbp-80h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  __int64 v38; // [rsp+98h] [rbp-68h]
  __int64 v39; // [rsp+A0h] [rbp-60h]
  __int64 v40; // [rsp+A8h] [rbp-58h]
  __int64 v41; // [rsp+B0h] [rbp-50h]
  _DWORD v42[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v43; // [rsp+C8h] [rbp-38h]
  __int128 v44; // [rsp+D0h] [rbp-30h]
  __int64 v45; // [rsp+E0h] [rbp-20h]
  __int64 v46; // [rsp+E8h] [rbp-18h]
  __int64 v47; // [rsp+F0h] [rbp-10h]
  __int64 v48; // [rsp+F8h] [rbp-8h]
  __int64 v49; // [rsp+100h] [rbp+0h]

  v2 = (_QWORD *)(a2 - 200);
  v5 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v29 = v2[18];
    v31 = v2[10];
    v32 = v2[11];
    v33 = v2[13];
    v26[0] = 0;
    v26[1] = 471924736;
    v27 = 0LL;
    v28 = 0LL;
    v30 = a2;
    v8 = NtCurrentPeb()->SharedData;
    if ( v8 && *v8 )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    NtTraceEvent(*(unsigned __int8 *)v9, 1027LL, 40LL, v26);
  }
  result = (struct _PEB *)TppWorkCallbackPrologRelease(a1, v2, 0LL);
  if ( (_DWORD)result )
  {
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
    {
      v37 = v2[18];
      v39 = v2[10];
      v40 = v2[11];
      v41 = v2[13];
      v34[0] = 0;
      v34[1] = 471990272;
      v35 = 0LL;
      v36 = 0LL;
      v38 = a2;
      v13 = NtCurrentPeb()->SharedData;
      if ( v13 && *v13 )
        v14 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v14 = 2147353478LL;
      NtTraceEvent(*(unsigned __int8 *)v14, 1026LL, 40LL, v34);
    }
    v15 = v2[13];
    v16 = v2[11];
    v17 = v2[10];
    ThreadPoolData = NtCurrentTeb()->ThreadPoolData;
    if ( ThreadPoolData )
    {
      ++ThreadPoolData[2];
      v19 = ((unsigned __int8)*((_DWORD *)ThreadPoolData + 3) - 1) & 1;
      v20 = v19;
      *((_DWORD *)ThreadPoolData + 3) = v19;
      v19 *= 32LL;
      v21 = (_QWORD *)((char *)ThreadPoolData + v19 + 32);
      *(_QWORD *)((char *)ThreadPoolData + v19 + 40) = v16;
      *v21 = v17;
      *(_QWORD *)((char *)ThreadPoolData + v19 + 48) = v15;
      ThreadPoolData[4 * v20 + 7] = MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0];
    }
    else
    {
      v21 = 0LL;
    }
    *(_QWORD *)(a1 + 88) = v2[10];
    *(_QWORD *)(a1 + 96) = v2[11];
    ((void (__fastcall *)(__int64, _QWORD, _QWORD *))v2[10])(a1, v2[11], v2);
    result = NtCurrentPeb();
    v22 = result->SharedData;
    if ( v22 && *v22 )
    {
      result = NtCurrentPeb();
      v23 = (__int64)result->SharedData + 556;
    }
    else
    {
      v23 = 2147353478LL;
    }
    if ( *(_BYTE *)v23 )
    {
      v45 = v2[18];
      v47 = v2[10];
      v48 = v2[11];
      v49 = v2[13];
      v42[0] = 0;
      v42[1] = 472055808;
      v43 = 0LL;
      v44 = 0LL;
      v46 = a2;
      v24 = NtCurrentPeb()->SharedData;
      if ( v24 && *v24 )
        v5 = (__int64)NtCurrentPeb()->SharedData + 556;
      result = (struct _PEB *)NtTraceEvent(*(unsigned __int8 *)v5, 1027LL, 40LL, v42);
    }
    if ( v21 )
    {
      v25 = v21[3];
      result = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25 )
      {
        result = (struct _PEB *)((char *)result - v25);
        v21[3] = result;
      }
    }
  }
  return result;
}
