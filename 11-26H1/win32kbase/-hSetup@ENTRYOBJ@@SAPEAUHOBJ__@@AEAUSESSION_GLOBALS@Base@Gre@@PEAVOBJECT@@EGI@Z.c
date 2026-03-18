/*
 * XREFs of ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1400C5C18
 * Callers:
 *     ?HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z @ 0x1400C4460 (-HmgInsertObjectInternal@@YAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAXKE@Z.c)
 * Callees:
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400151C0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14001F3A0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     UMPDGetThreadClientPID @ 0x140035858 (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetup(
        struct Gre::Base::SESSION_GLOBALS *a1,
        struct OBJECT *a2,
        char a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned int v7; // r15d
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _GRETHREAD *CurrentThread; // rax
  struct _GRETHREAD *v12; // r14
  __int64 v13; // rbp
  unsigned __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rbx
  struct _KTHREAD *v18; // rax
  __int64 (__fastcall *v19)(struct _GRETHREAD *); // rax
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  __int16 v22; // [rsp+80h] [rbp+18h]

  v7 = a4;
  v8 = (*(__int64 (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)a1 + 1) + 24LL))(*((_QWORD *)a1 + 1), a5);
  CurrentThread = GreGetCurrentThread(v10, v9);
  v12 = CurrentThread;
  if ( !CurrentThread || (v7 & 0x10) != 0 )
    v13 = 0LL;
  else
    v13 = *((_QWORD *)CurrentThread + 8);
  *(_BYTE *)(v8 + 14) = a3;
  *(_BYTE *)(v8 + 15) = 0;
  *(_QWORD *)(v8 + 16) = 0LL;
  if ( (v7 & 8) != 0 )
  {
    LODWORD(v14) = 0;
  }
  else if ( v13 )
  {
    v14 = (unsigned __int64)UMPDGetThreadClientPID((__int64)CurrentThread) & 0xFFFFFFFE;
  }
  else
  {
    v14 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (v7 & 1) != 0 )
  {
    if ( v13 )
    {
      v19 = *(__int64 (__fastcall **)(struct _GRETHREAD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(1LL) + 24) + 1528LL);
      if ( v19 )
        v19 = (__int64 (__fastcall *)(struct _GRETHREAD *))v19(v12);
      v18 = (struct _KTHREAD *)*((_QWORD *)v19 - 1);
    }
    else
    {
      v18 = KeGetCurrentThread();
    }
    *((_QWORD *)a2 + 2) = v18;
  }
  *((_WORD *)a2 + 6) = v7 & 1;
  *((_DWORD *)a2 + 2) = (v7 >> 1) & 1;
  if ( v12 )
  {
    v15 = *((_QWORD *)v12 + 41);
    if ( v15 )
    {
      if ( *(_BYTE *)(v15 + 80) )
      {
        if ( *((_WORD *)a2 + 6) == 1 )
          *((_WORD *)a2 + 7) |= 0x20u;
        else
          GrepCaptureLiveMemoryDump(400LL, 52LL, 3LL, (__int64)a2, 0LL, 0);
      }
    }
  }
  LOBYTE(v22) = a3;
  HIBYTE(v22) = BYTE2(a5);
  *(_WORD *)(v8 + 12) = v22;
  *(_QWORD *)(v8 + 16) = 0LL;
  *(_DWORD *)(v8 + 8) = v14;
  if ( (v7 & 0x40) != 0 )
    *(_BYTE *)(v8 + 12) |= 0x80u;
  if ( (v7 & 0x80u) != 0 )
    *(_BYTE *)(v8 + 15) |= 1u;
  *(_BYTE *)(v8 + 7) = -1;
  *(_DWORD *)v8 = a5;
  v16 = (unsigned __int16)a5 | (unsigned __int64)(*(unsigned __int16 *)(v8 + 12) << 16);
  *(_QWORD *)a2 = v16;
  _InterlockedOr(v20, 0);
  (*(void (__fastcall **)(_QWORD, _QWORD, struct OBJECT *))(**((_QWORD **)a1 + 1) + 104LL))(*((_QWORD *)a1 + 1), a5, a2);
  return (struct HOBJ__ *)v16;
}
