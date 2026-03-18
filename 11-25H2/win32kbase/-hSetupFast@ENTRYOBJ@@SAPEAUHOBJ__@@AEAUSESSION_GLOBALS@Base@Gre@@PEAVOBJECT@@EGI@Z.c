/*
 * XREFs of ?hSetupFast@ENTRYOBJ@@SAPEAUHOBJ__@@AEAUSESSION_GLOBALS@Base@Gre@@PEAVOBJECT@@EGI@Z @ 0x1401C52E4
 * Callers:
 *     ?hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z @ 0x1401771A0 (-hSetup@ENTRYOBJ@@SAPEAUHOBJ__@@PEAVOBJECT@@EGI@Z.c)
 *     HmgAllocFast @ 0x1401C5500 (HmgAllocFast.c)
 * Callees:
 *     ?SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z @ 0x14006FCF8 (-SetEntryObject@GdiHandleManager@@QEAAXIPEAVOBJECT@@@Z.c)
 *     ?GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ @ 0x14008EDD0 (-GreGetCurrentThread@@YAPEAU_GRETHREAD@@XZ.c)
 *     ?GetEntrySkipInUseValidation@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z @ 0x1400B6974 (-GetEntrySkipInUseValidation@GdiHandleManager@@QEAAPEAU_ENTRY@@I@Z.c)
 *     ?GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z @ 0x1400F36E0 (-GrepCaptureLiveMemoryDump@@YAXK_K000W4GrepCaptureLiveMemoryDumpOptions@@@Z.c)
 *     UMPDGetThreadClientPID @ 0x14013974C (UMPDGetThreadClientPID.c)
 *     _guard_dispatch_icall @ 0x140242EE0 (_guard_dispatch_icall.c)
 */

struct HOBJ__ *__fastcall ENTRYOBJ::hSetupFast(
        GdiHandleManager **a1,
        struct OBJECT *a2,
        char a3,
        unsigned __int16 a4,
        unsigned int a5)
{
  unsigned int v6; // r15d
  struct _ENTRY *EntrySkipInUseValidation; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  struct _GRETHREAD *CurrentThread; // r14
  __int64 v12; // rbp
  unsigned __int64 v13; // rsi
  __int64 (__fastcall *v14)(struct _GRETHREAD *); // rax
  __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int16 v17; // ax
  unsigned __int64 v18; // rbx
  signed __int32 v20[8]; // [rsp+0h] [rbp-68h] BYREF
  unsigned __int16 v22; // [rsp+80h] [rbp+18h]

  LOBYTE(v22) = a3;
  v6 = a4;
  EntrySkipInUseValidation = GdiHandleManager::GetEntrySkipInUseValidation(a1[709], a5);
  CurrentThread = GreGetCurrentThread();
  if ( !CurrentThread || (v6 & 0x10) != 0 )
    v12 = 0LL;
  else
    v12 = *((_QWORD *)CurrentThread + 8);
  *((_BYTE *)EntrySkipInUseValidation + 14) = a3;
  *((_BYTE *)EntrySkipInUseValidation + 15) = 0;
  *((_QWORD *)EntrySkipInUseValidation + 2) = 0LL;
  if ( (v6 & 8) != 0 )
  {
    LODWORD(v13) = 0;
  }
  else if ( v12 )
  {
    v13 = (unsigned __int64)UMPDGetThreadClientPID((__int64)CurrentThread, v9) & 0xFFFFFFFE;
  }
  else
  {
    v13 = (unsigned __int64)PsGetCurrentProcessId() & 0xFFFFFFFC;
  }
  if ( (v6 & 1) != 0 )
  {
    if ( v12 )
    {
      v14 = *(__int64 (__fastcall **)(struct _GRETHREAD *))(*(_QWORD *)(W32GetWin32kBaseApiSetTable(v10, 1LL) + 24)
                                                          + 1568LL);
      if ( v14 )
        v15 = v14(CurrentThread);
      else
        v15 = 0LL;
      *((_QWORD *)a2 + 2) = v15;
    }
    else
    {
      *((_QWORD *)a2 + 2) = KeGetCurrentThread();
    }
  }
  *((_WORD *)a2 + 6) = v6 & 1;
  *((_DWORD *)a2 + 2) = (v6 >> 1) & 1;
  if ( CurrentThread )
  {
    v16 = *((_QWORD *)CurrentThread + 42);
    if ( v16 )
    {
      if ( *(_BYTE *)(v16 + 80) )
      {
        if ( (v6 & 1) != 0 )
          *((_WORD *)a2 + 7) |= 0x20u;
        else
          GrepCaptureLiveMemoryDump(0x190u, 52LL, 3LL, (__int64)a2, 0LL, 0);
      }
    }
  }
  HIBYTE(v22) = BYTE2(a5);
  v17 = v22;
  *((_WORD *)EntrySkipInUseValidation + 6) = v22;
  *((_QWORD *)EntrySkipInUseValidation + 2) = 0LL;
  *((_DWORD *)EntrySkipInUseValidation + 2) = v13;
  if ( (v6 & 0x40) != 0 )
  {
    v17 = v22 | 0x80;
    *((_WORD *)EntrySkipInUseValidation + 6) = v22 | 0x80;
  }
  if ( (v6 & 0x80) != 0 )
    *((_BYTE *)EntrySkipInUseValidation + 15) |= 1u;
  *((_BYTE *)EntrySkipInUseValidation + 7) = -1;
  *(_DWORD *)EntrySkipInUseValidation = a5;
  v18 = (unsigned __int16)a5 | (unsigned __int64)(v17 << 16);
  *(_QWORD *)a2 = v18;
  _InterlockedOr(v20, 0);
  GdiHandleManager::SetEntryObject(a1[709], a5, a2);
  return (struct HOBJ__ *)v18;
}
