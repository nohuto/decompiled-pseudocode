/*
 * XREFs of HmgSwapLockedHandleContents @ 0x14002EEE0
 * Callers:
 *     bMigrateSurfaceForConversion @ 0x14002F4E0 (bMigrateSurfaceForConversion.c)
 * Callees:
 *     ??1HANDLELOCK@@QEAA@XZ @ 0x14001AE40 (--1HANDLELOCK@@QEAA@XZ.c)
 *     ?vUnlock@HANDLELOCK@@QEAAXXZ @ 0x14001C690 (-vUnlock@HANDLELOCK@@QEAAXXZ.c)
 *     ??0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z @ 0x14001F150 (--0HANDLELOCK@@QEAA@AEAUSESSION_GLOBALS@Base@Gre@@PEAUHOBJ__@@W4HandleLockOptions@@@Z.c)
 *     ?ShareCount@HANDLELOCK@@QEAAKXZ @ 0x140133B00 (-ShareCount@HANDLELOCK@@QEAAKXZ.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgSwapLockedHandleContents(
        __int64 a1,
        unsigned __int16 a2,
        unsigned int a3,
        unsigned __int16 a4,
        char a5)
{
  unsigned int v8; // r12d
  unsigned int v9; // ebx
  __int64 v10; // rsi
  __int64 v11; // r12
  __int64 v12; // r13
  unsigned int v13; // r15d
  unsigned int v14; // r14d
  __int64 v15; // rsi
  __int64 *v16; // rdi
  __int64 v17; // rbx
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rax
  __int128 v23; // xmm3
  __int64 v24; // xmm2_8
  __int64 v25; // rcx
  __int16 v26; // dx
  __int16 v27; // r8
  __int64 v29; // [rsp+20h] [rbp-40h]
  __int64 v30; // [rsp+28h] [rbp-38h] BYREF
  int v31; // [rsp+30h] [rbp-30h]
  __int64 v32; // [rsp+40h] [rbp-20h] BYREF
  int v33; // [rsp+48h] [rbp-18h]
  unsigned int v34; // [rsp+A0h] [rbp+40h]
  unsigned __int16 v35; // [rsp+B0h] [rbp+50h]

  v35 = a3;
  v34 = a1;
  v8 = a1;
  v9 = 0;
  v10 = *(_QWORD *)(W32GetSessionState(a1) + 88);
  v29 = v10;
  HANDLELOCK::HANDLELOCK(&v32, (unsigned int *)v10, v8, 1);
  if ( v33 )
  {
    HANDLELOCK::HANDLELOCK(&v30, (unsigned int *)v10, a3, 1);
    if ( v31 )
    {
      if ( HANDLELOCK::ShareCount((HANDLELOCK *)&v32) == a2 )
      {
        v11 = v32;
        if ( *(_BYTE *)(v32 + 14) == a5 && HANDLELOCK::ShareCount((HANDLELOCK *)&v30) == a4 )
        {
          v12 = v30;
          if ( *(_BYTE *)(v30 + 14) == a5 )
          {
            v13 = (unsigned __int16)v34 | (v34 >> 8) & 0xFF0000;
            v14 = v35 | (a3 >> 8) & 0xFF0000;
            v15 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v10 + 8) + 96LL))(*(_QWORD *)(v10 + 8), v13);
            v16 = *(__int64 **)(v29 + 8);
            v17 = *v16;
            v18 = (*(__int64 (__fastcall **)(__int64 *, _QWORD))(*v16 + 96))(v16, v14);
            (*(void (__fastcall **)(__int64 *, _QWORD, __int64))(v17 + 104))(v16, v13, v18);
            v19 = v29;
            (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)(v29 + 8) + 104LL))(
              *(_QWORD *)(v29 + 8),
              v14,
              v15);
            v20 = *(_QWORD *)(v11 + 16);
            *(_QWORD *)(v11 + 16) = *(_QWORD *)(v12 + 16);
            *(_QWORD *)(v12 + 16) = v20;
            v21 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v19 + 8) + 96LL))(*(_QWORD *)(v19 + 8), v13);
            v22 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(v19 + 8) + 96LL))(*(_QWORD *)(v19 + 8), v14);
            v23 = *(_OWORD *)v21;
            v24 = *(_QWORD *)(v21 + 16);
            *(_OWORD *)v21 = *(_OWORD *)v22;
            *(_QWORD *)(v21 + 16) = *(_QWORD *)(v22 + 16);
            *(_OWORD *)v22 = v23;
            *(_QWORD *)(v22 + 16) = v24;
            if ( a5 == 5 && *(_BYTE *)(v11 + 14) == 5 && *(_BYTE *)(v12 + 14) == 5 )
            {
              v25 = *(_QWORD *)(v21 + 680);
              *(_QWORD *)(v21 + 680) = *(_QWORD *)(v22 + 680);
              *(_QWORD *)(v22 + 680) = v25;
            }
            v26 = *(_WORD *)(v21 + 14);
            v27 = *(_WORD *)(v22 + 14);
            *(_WORD *)(v21 + 14) = v27 & 0x80 | v26 & 0x70;
            *(_WORD *)(v22 + 14) = v27 & 0x70 | v26 & 0x80;
            v9 = 1;
          }
        }
      }
      HANDLELOCK::vUnlock((HANDLELOCK *)&v30);
    }
    HANDLELOCK::vUnlock((HANDLELOCK *)&v32);
    HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v30);
  }
  HANDLELOCK::~HANDLELOCK((HANDLELOCK *)&v32);
  return v9;
}
