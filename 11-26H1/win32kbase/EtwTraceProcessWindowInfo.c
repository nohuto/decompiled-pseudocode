/*
 * XREFs of EtwTraceProcessWindowInfo @ 0x1400DC7D0
 * Callers:
 *     EtwTraceThreadExit @ 0x1400DC6AC (EtwTraceThreadExit.c)
 * Callees:
 *     ?EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z @ 0x1400DCA38 (-EtwTraceProcessWindowInfoSendUnique@@YAXPEBUtagPROCESS_UIFLAG_MAP@@@Z.c)
 */

void __fastcall EtwTraceProcessWindowInfo(__int64 a1)
{
  LONGLONG TimeQuadPart; // rax
  int v3; // ebp
  __int64 *v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdi
  unsigned __int64 v8; // rcx
  __int64 v9; // rdx
  int v10; // ecx
  int v11; // r8d
  int v12; // edx
  int v13; // ecx
  bool v14; // cf
  __int64 v15; // rax
  int v16; // edx
  int v17; // esi
  int v18; // edx
  int v19; // ecx
  int v20; // r8d
  int v21; // ebx
  __int64 UserSessionState; // rax
  int v23; // ecx
  bool v24; // zf
  _QWORD v25[2]; // [rsp+20h] [rbp-48h] BYREF
  int v26; // [rsp+30h] [rbp-38h]
  int v27; // [rsp+34h] [rbp-34h]
  int v28; // [rsp+38h] [rbp-30h]
  int v29; // [rsp+3Ch] [rbp-2Ch]
  LONGLONG v30; // [rsp+78h] [rbp+10h]

  v27 = 0;
  v29 = 0;
  if ( (W32kEtwEnabledKeyword & 0x4000000000LL) != 0
    && (unsigned __int8)(byte_1402A9DD8 - 1) > 2u
    && (qword_1402A9DC0 & 0x4000000000LL) != 0
    && (qword_1402A9DC8 & 0x4000000000LL) == qword_1402A9DC8
    && (_InterlockedCompareExchange((volatile signed __int32 *)(a1 + 520), 0, 0) & 0x1000000) != 0 )
  {
    TimeQuadPart = PsGetProcessCreateTimeQuadPart(**(PEPROCESS **)(a1 + 456));
    v27 = 0;
    v30 = TimeQuadPart;
    v3 = 0;
    v28 = (MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24;
    v4 = *(__int64 **)(a1 + 456);
    LODWORD(TimeQuadPart) = *((_DWORD *)v4 + 14);
    v5 = *v4;
    v26 = TimeQuadPart;
    v25[0] = PsGetProcessStartKey(v5);
    v6 = *(_QWORD *)(a1 + 456);
    v25[1] = v30;
    v7 = *(_QWORD *)(v6 + 328);
    if ( v7 )
    {
      do
      {
        v8 = *(_QWORD *)(v7 + 1360);
        v9 = (v8 >> 31) & 1;
        if ( (v8 & 0x100000000LL) != 0 )
          LODWORD(v9) = (*(_QWORD *)(v7 + 1360) >> 31) & 1 | 2;
        if ( (v8 & 0x200000000LL) != 0 )
          LODWORD(v9) = v9 | 4;
        v10 = v9 | 8;
        if ( !*(_DWORD *)(v7 + 936) )
          v10 = v9;
        v11 = v10 | 0x10;
        if ( !*(_DWORD *)(v7 + 932) )
          v11 = v10;
        if ( _InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) < 0 )
          v11 |= 0x20u;
        v12 = v11 | 0x40;
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 1) == 0 )
          v12 = v11;
        v13 = v12 | 0x200;
        v14 = (_InterlockedCompareExchange((volatile signed __int32 *)(v7 + 520), 0, 0) & 0x400) != 0;
        v15 = *(_QWORD *)(v7 + 464);
        if ( !v14 )
          v13 = v12;
        v16 = v13 | 0x80;
        if ( !*(_QWORD *)(v7 + 1288) )
          v16 = v13;
        v17 = v16;
        if ( v15 && *(_DWORD *)(v15 + 40) )
          v17 = v16 | 0x100;
        v21 = v17 | 0x400;
        if ( *(_QWORD *)(W32GetUserSessionState(v13, v16, v11) + 18944) != v7 )
          v21 = v17;
        UserSessionState = W32GetUserSessionState(v19, v18, v20);
        v23 = v21 | 0x800;
        v24 = *(_QWORD *)(v7 + 464) == *(_QWORD *)(UserSessionState + 18928);
        v7 = *(_QWORD *)(v7 + 696);
        if ( !v24 )
          v23 = v21;
        v3 |= v23;
      }
      while ( v7 );
      v27 = v3;
    }
    EtwTraceProcessWindowInfoSendUnique((const struct tagPROCESS_UIFLAG_MAP *)v25);
  }
}
