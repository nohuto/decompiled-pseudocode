/*
 * XREFs of NtUserGetCIMSSM @ 0x140248D40
 * Callers:
 *     <none>
 * Callees:
 *     UserSetLastError @ 0x14001A2B4 (UserSetLastError.c)
 *     SetLastNtError @ 0x140113F80 (SetLastNtError.c)
 *     ?_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z @ 0x140247BD4 (-_GetCurrentInputMessageSource@@YAHHPEAUtagINPUT_MESSAGE_SOURCE@@@Z.c)
 *     ??0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z @ 0x14028C73C (--0EnterLeaveCritShared@@QEAA@W4HandleToObjILCheck@@@Z.c)
 *     RtlCopyVolatileMemory @ 0x1403423E0 (RtlCopyVolatileMemory.c)
 */

__int64 __fastcall NtUserGetCIMSSM(unsigned __int64 a1)
{
  __int64 v2; // rbx
  __int64 v3; // rcx
  int CurrentInputMessageSource; // edi
  __int64 v5; // rdx
  __int64 v6; // rcx
  _BYTE *v7; // rdx
  __int64 Src; // [rsp+60h] [rbp+8h] BYREF
  __int64 v10; // [rsp+68h] [rbp+10h]
  char v11; // [rsp+70h] [rbp+18h] BYREF

  v2 = 0LL;
  Src = 0LL;
  EnterLeaveCritShared::EnterLeaveCritShared(&v11, 1LL);
  if ( a1 && (unsigned int)_GetCurrentInputMessageSource(0LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src) && !Src )
  {
    CurrentInputMessageSource = _GetCurrentInputMessageSource(1LL, (struct tagINPUT_MESSAGE_SOURCE *)&Src);
    if ( CurrentInputMessageSource )
    {
      v5 = (unsigned int)Src;
      v6 = (unsigned int)(Src - 18);
      if ( (v6 & 0xFFFFFFEF) == 0 )
        v5 = 2LL;
      LODWORD(Src) = v5;
      if ( PsGetCurrentProcessWow64Process(v6, v5) )
      {
        v10 = 1LL;
      }
      else
      {
        v10 = 4LL;
        v2 = 3LL;
      }
      if ( (v2 & a1) != 0 )
        ExRaiseDatatypeMisalignment();
      v7 = (_BYTE *)a1;
      if ( a1 >= MmUserProbeAddress )
        v7 = (_BYTE *)MmUserProbeAddress;
      *v7 = *v7;
      v7[7] = v7[7];
      RtlCopyVolatileMemory((void *)a1, &Src, 8uLL);
    }
  }
  else
  {
    UserSetLastError(87);
    CurrentInputMessageSource = 0;
  }
  UserSessionSwitchLeaveCrit(v3);
  return CurrentInputMessageSource;
}
