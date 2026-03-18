/*
 * XREFs of ?xxxUpdateWindowPositionsForDpiBoundaryChange@@YAXPEAUtagWLDBI@@@Z @ 0x1402C9B7C
 * Callers:
 *     ?xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z @ 0x140060F60 (-xxxSetParentWorker@@YAPEAUtagWND@@PEAU1@00H@Z.c)
 * Callees:
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14002D198 (--0-$Win32HMThreadLockBase@UtagWND@@$00$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ @ 0x14002EA74 (--1-$Win32HMThreadLock@UtagCURSOR@@@@QEAA@XZ.c)
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14003364C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     xxxSetWindowPos @ 0x14004CAF4 (xxxSetWindowPos.c)
 *     ??$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z @ 0x140050410 (--$Win32HM_ExchangeThreadLock@$00@@YAPEAU_HEAD@@PEAU0@PEAU_Win32HMThreadLockItem@@@Z.c)
 *     HMValidateHandleNoSecure @ 0x1400653B0 (HMValidateHandleNoSecure.c)
 *     Feature_3444625720__private_IsEnabledDeviceUsageNoInline @ 0x140272058 (Feature_3444625720__private_IsEnabledDeviceUsageNoInline.c)
 */

void __fastcall xxxUpdateWindowPositionsForDpiBoundaryChange(struct tagWLDBI *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rdx
  const struct tagWND *v4; // rax
  struct tagWND *v5; // rdi
  const struct tagWND *v6; // rax
  struct tagWND *v7; // rdi
  ULONG_PTR BugCheckParameter3[3]; // [rsp+40h] [rbp-18h] BYREF

  if ( (unsigned int)Feature_3444625720__private_IsEnabledDeviceUsageNoInline() )
  {
    Win32HMThreadLockBase<tagWND,1,0>::Win32HMThreadLockBase<tagWND,1,0>(BugCheckParameter3, 0LL);
    while ( a1 )
    {
      LOBYTE(v3) = 1;
      v6 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), v3);
      v7 = v6;
      if ( v6 && (*((_DWORD *)a1 + 7) || *((_DWORD *)a1 + 6) || IsChildWindowDpiBoundary(v6)) )
      {
        Win32HM_ExchangeThreadLock<1>((__int64)v7, (__int64)BugCheckParameter3);
        xxxSetWindowPos(v7, 0LL, *((unsigned int *)a1 + 4), *((unsigned int *)a1 + 5), 0, 0, 21);
      }
      a1 = *(struct tagWLDBI **)a1;
    }
    Win32HMThreadLock<tagCURSOR>::~Win32HMThreadLock<tagCURSOR>((ULONG_PTR)BugCheckParameter3, v3);
  }
  else
  {
    while ( a1 )
    {
      LOBYTE(v2) = 1;
      v4 = (const struct tagWND *)HMValidateHandleNoSecure(*((_QWORD *)a1 + 1), v2);
      v5 = v4;
      if ( v4 && (*((_DWORD *)a1 + 7) || *((_DWORD *)a1 + 6) || IsChildWindowDpiBoundary(v4)) )
        xxxSetWindowPos(v5, 0LL, *((unsigned int *)a1 + 4), *((unsigned int *)a1 + 5), 0, 0, 21);
      a1 = *(struct tagWLDBI **)a1;
    }
  }
}
