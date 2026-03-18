/*
 * XREFs of ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x14023E0E0
 * Callers:
 *     ?SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z @ 0x1401609D8 (-SetDesktopInputSink@CDesktopInputSink@@SA_NPEAXAEBU_LUID@@@Z.c)
 *     NtUserRemoveVisualIdentifier @ 0x1401BF8C0 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B1C0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14009B254 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x14023DE9C (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x14023E294 (-RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::RemoveMapping(struct _LUID *a1, int a2)
{
  struct W32_PUSH_LOCK *v4; // rbx
  struct InputObjectMapEntry *Entry; // rax
  __int64 v6; // rdx
  __int64 v7; // rcx
  struct InputObjectMapEntry *v8; // rsi
  __int64 v9; // rdi
  __int64 UserInputMgrSessionState; // r10
  struct InputObjectMapEntry *i; // rdx
  __int64 v13; // [rsp+50h] [rbp+18h]

  v4 = (struct W32_PUSH_LOCK *)(W32GetUserInputMgrSessionState() + 8);
  W32AcquirePushLockExclusiveEx(v4, 0);
  Entry = InputObjectMap::FindEntry(a1);
  v8 = Entry;
  if ( Entry )
  {
    if ( a2 == 1 || (v9 = *((_QWORD *)Entry + 3), *(_QWORD *)(v9 + 56) == PsGetCurrentProcess(v7, v6)) )
    {
      UserInputMgrSessionState = W32GetUserInputMgrSessionState();
      v13 = *((_QWORD *)v8 + 1) & (-1LL << (*(_DWORD *)(UserInputMgrSessionState + 20) & 0x1F));
      for ( i = (struct InputObjectMapEntry *)(*(_QWORD *)(UserInputMgrSessionState + 24)
                                             + 8LL
                                             * ((37
                                               * (BYTE6(v13)
                                                + 37
                                                * (BYTE5(v13)
                                                 + 37
                                                 * (BYTE4(v13)
                                                  + 37
                                                  * (BYTE3(v13)
                                                   + 37
                                                   * (BYTE2(v13)
                                                    + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                                               + HIBYTE(v13)) & (unsigned int)((*(_DWORD *)(UserInputMgrSessionState + 20) >> 5)
                                                                             - 1)));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct InputObjectMapEntry **)i )
      {
        if ( *(struct InputObjectMapEntry **)i == v8 )
        {
          *(_QWORD *)i = *(_QWORD *)v8;
          --*(_DWORD *)(UserInputMgrSessionState + 16);
          *(_QWORD *)v8 |= 0x8000000000000002uLL;
          break;
        }
      }
      W32ReleasePushLockExclusiveEx(v4, 0LL);
      InputTraceLogging::InputSink::RemoveMapping(*((const struct CompositionInputObject **)v8 + 3), *a1);
      ObfDereferenceObject(*((PVOID *)v8 + 3));
      ExFreePoolWithTag(v8, 0);
      return 0LL;
    }
    else
    {
      W32ReleasePushLockExclusiveEx(v4, 0LL);
      return 3221225506LL;
    }
  }
  else
  {
    W32ReleasePushLockExclusiveEx(v4, 0LL);
    return 3221226021LL;
  }
}
