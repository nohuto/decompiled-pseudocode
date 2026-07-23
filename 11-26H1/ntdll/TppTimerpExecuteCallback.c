/*
 * XREFs of TppTimerpExecuteCallback @ 0x18003DBE0
 * Callers:
 *     <none>
 * Callees:
 *     TppWorkCallbackPrologRelease @ 0x18003E030 (TppWorkCallbackPrologRelease.c)
 *     NtTraceEvent @ 0x18015F9F0 (NtTraceEvent.c)
 *     __security_check_cookie @ 0x180162B90 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016F020 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

int __fastcall TppTimerpExecuteCallback(PTP_CALLBACK_INSTANCE Instance, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // rdi
  _DWORD *SharedData; // rcx
  __int64 v7; // rcx
  _DWORD *v8; // rcx
  __int64 v9; // rcx
  struct _PEB *v10; // rax
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
  _DWORD Fields[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v28; // [rsp+28h] [rbp-D8h]
  __int128 v29; // [rsp+30h] [rbp-D0h]
  __int64 v30; // [rsp+40h] [rbp-C0h]
  __int64 v31; // [rsp+48h] [rbp-B8h]
  __int64 v32; // [rsp+50h] [rbp-B0h]
  __int64 v33; // [rsp+58h] [rbp-A8h]
  __int64 v34; // [rsp+60h] [rbp-A0h]
  _DWORD v35[2]; // [rsp+70h] [rbp-90h] BYREF
  __int64 v36; // [rsp+78h] [rbp-88h]
  __int128 v37; // [rsp+80h] [rbp-80h]
  __int64 v38; // [rsp+90h] [rbp-70h]
  __int64 v39; // [rsp+98h] [rbp-68h]
  __int64 v40; // [rsp+A0h] [rbp-60h]
  __int64 v41; // [rsp+A8h] [rbp-58h]
  __int64 v42; // [rsp+B0h] [rbp-50h]
  _DWORD v43[2]; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v44; // [rsp+C8h] [rbp-38h]
  __int128 v45; // [rsp+D0h] [rbp-30h]
  __int64 v46; // [rsp+E0h] [rbp-20h]
  __int64 v47; // [rsp+E8h] [rbp-18h]
  __int64 v48; // [rsp+F0h] [rbp-10h]
  __int64 v49; // [rsp+F8h] [rbp-8h]
  __int64 v50; // [rsp+100h] [rbp+0h]

  v2 = a2 - 200;
  v5 = 2147353478LL;
  SharedData = NtCurrentPeb()->SharedData;
  if ( SharedData && *SharedData )
    v7 = (__int64)NtCurrentPeb()->SharedData + 556;
  else
    v7 = 2147353478LL;
  if ( *(_BYTE *)v7 )
  {
    v30 = *(_QWORD *)(v2 + 144);
    v32 = *(_QWORD *)(v2 + 80);
    v33 = *(_QWORD *)(v2 + 88);
    v34 = *(_QWORD *)(v2 + 104);
    Fields[0] = 0;
    Fields[1] = 471924736;
    v28 = 0LL;
    v29 = 0LL;
    v31 = a2;
    v8 = NtCurrentPeb()->SharedData;
    if ( v8 && *v8 )
      v9 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v9 = 2147353478LL;
    NtTraceEvent((HANDLE)*(unsigned __int8 *)v9, 0x403u, 0x28u, Fields);
  }
  LODWORD(v10) = TppWorkCallbackPrologRelease(Instance);
  if ( (_DWORD)v10 )
  {
    v11 = NtCurrentPeb()->SharedData;
    if ( v11 && *v11 )
      v12 = (__int64)NtCurrentPeb()->SharedData + 556;
    else
      v12 = 2147353478LL;
    if ( *(_BYTE *)v12 )
    {
      v38 = *(_QWORD *)(v2 + 144);
      v40 = *(_QWORD *)(v2 + 80);
      v41 = *(_QWORD *)(v2 + 88);
      v42 = *(_QWORD *)(v2 + 104);
      v35[0] = 0;
      v35[1] = 471990272;
      v36 = 0LL;
      v37 = 0LL;
      v39 = a2;
      v13 = NtCurrentPeb()->SharedData;
      if ( v13 && *v13 )
        v14 = (__int64)NtCurrentPeb()->SharedData + 556;
      else
        v14 = 2147353478LL;
      NtTraceEvent((HANDLE)*(unsigned __int8 *)v14, 0x402u, 0x28u, v35);
    }
    v15 = *(_QWORD *)(v2 + 104);
    v16 = *(_QWORD *)(v2 + 88);
    v17 = *(_QWORD *)(v2 + 80);
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
    Instance->Callback = *(void **)(v2 + 80);
    Instance->Context = *(void **)(v2 + 88);
    (*(void (__fastcall **)(PTP_CALLBACK_INSTANCE, _QWORD, __int64))(v2 + 80))(Instance, *(_QWORD *)(v2 + 88), v2);
    v10 = NtCurrentPeb();
    v22 = v10->SharedData;
    if ( v22 && *v22 )
    {
      v10 = NtCurrentPeb();
      v23 = (__int64)v10->SharedData + 556;
    }
    else
    {
      v23 = 2147353478LL;
    }
    if ( *(_BYTE *)v23 )
    {
      v46 = *(_QWORD *)(v2 + 144);
      v48 = *(_QWORD *)(v2 + 80);
      v49 = *(_QWORD *)(v2 + 88);
      v50 = *(_QWORD *)(v2 + 104);
      v43[0] = 0;
      v43[1] = 472055808;
      v44 = 0LL;
      v45 = 0LL;
      v47 = a2;
      v24 = NtCurrentPeb()->SharedData;
      if ( v24 && *v24 )
        v5 = (__int64)NtCurrentPeb()->SharedData + 556;
      LODWORD(v10) = NtTraceEvent((HANDLE)*(unsigned __int8 *)v5, 0x403u, 0x28u, v43);
    }
    if ( v21 )
    {
      v25 = v21[3];
      v10 = (struct _PEB *)(MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0]);
      if ( MEMORY[0x7FFE0008] - MEMORY[0x7FFE03B0] >= v25 )
      {
        v10 = (struct _PEB *)((char *)v10 - v25);
        v21[3] = v10;
      }
    }
  }
  return (int)v10;
}
