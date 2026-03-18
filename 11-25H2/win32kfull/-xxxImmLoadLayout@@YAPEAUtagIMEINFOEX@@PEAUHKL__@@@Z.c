/*
 * XREFs of ?xxxImmLoadLayout@@YAPEAUtagIMEINFOEX@@PEAUHKL__@@@Z @ 0x140282CD0
 * Callers:
 *     EditionResetIMELayout @ 0x1402A6750 (EditionResetIMELayout.c)
 * Callees:
 *     ?UnlockWorker@?$Win32RawLockedItemBase@UtagIMEINFOEX@@$0A@$00$00$00@@AEAAX_N0@Z @ 0x14002C41C (-UnlockWorker@-$Win32RawLockedItemBase@UtagIMEINFOEX@@$0A@$00$00$00@@AEAAX_N0@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ClientImmLoadLayout @ 0x140218CDC (ClientImmLoadLayout.c)
 */

struct tagIMEINFOEX *__fastcall xxxImmLoadLayout(__int64 a1, __int64 a2)
{
  _OWORD *v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  _OWORD *v6; // rdi
  __int64 v8; // rdx
  __int64 v9; // rcx
  struct tagTHREADINFO *v10; // rax
  ULONG_PTR BugCheckParameter2[5]; // [rsp+20h] [rbp-28h] BYREF

  if ( (**(_DWORD **)(W32GetUserSessionState(a1, a2) + 19872) & 4) == 0 && (WORD1(a1) & 0xF000) != 0xE000 )
    return 0LL;
  v3 = 0LL;
  v6 = (_OWORD *)Win32AllocPoolZInit(352LL, 1835627349LL);
  if ( !v6 )
    return 0LL;
  PtiCurrent(v5, v4);
  v10 = PtiCurrent(v9, v8);
  BugCheckParameter2[0] = *((_QWORD *)v10 + 48);
  *((_QWORD *)v10 + 48) = BugCheckParameter2;
  BugCheckParameter2[2] = (ULONG_PTR)Win32FreePool;
  BugCheckParameter2[1] = (ULONG_PTR)v6;
  if ( (unsigned int)ClientImmLoadLayout(a1, v6) )
  {
    Win32RawLockedItemBase<tagIMEINFOEX,0,1,1,1>::UnlockWorker(BugCheckParameter2, 0, 0);
    v3 = v6;
  }
  Win32RawLockedItemBase<tagIMEINFOEX,0,1,1,1>::UnlockWorker(BugCheckParameter2, 1, 1);
  return (struct tagIMEINFOEX *)v3;
}
