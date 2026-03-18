/*
 * XREFs of ?RemoveMapping@InputObjectMap@@SAJAEBU_LUID@@W4RemoveRestriction@1@@Z @ 0x1402487E4
 * Callers:
 *     NtUserRemoveVisualIdentifier @ 0x1401E8260 (NtUserRemoveVisualIdentifier.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z @ 0x1402485B8 (-FindEntry@InputObjectMap@@CAPEAUInputObjectMapEntry@@AEBU_LUID@@@Z.c)
 *     ?RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z @ 0x140248988 (-RemoveMapping@InputSink@InputTraceLogging@@SAXPEBUCompositionInputObject@@U_LUID@@@Z.c)
 */

__int64 __fastcall InputObjectMap::RemoveMapping(struct _LUID *a1)
{
  struct W32_PUSH_LOCK *v2; // rbx
  struct InputObjectMapEntry *Entry; // rax
  __int64 v4; // rcx
  struct InputObjectMapEntry *v5; // rsi
  __int64 v6; // rdi
  __int64 UserInputMgrSessionState; // r11
  struct InputObjectMapEntry *i; // rcx
  __int64 v10; // [rsp+50h] [rbp+18h]

  v2 = (struct W32_PUSH_LOCK *)(W32GetUserInputMgrSessionState() + 8);
  W32AcquirePushLockExclusiveEx(v2);
  Entry = InputObjectMap::FindEntry(a1);
  v5 = Entry;
  if ( Entry )
  {
    v6 = *((_QWORD *)Entry + 3);
    if ( *(_QWORD *)(v6 + 56) == PsGetCurrentProcess(v4) )
    {
      UserInputMgrSessionState = W32GetUserInputMgrSessionState();
      v10 = *((_QWORD *)v5 + 1) & (-1LL << (*(_DWORD *)(UserInputMgrSessionState + 20) & 0x1F));
      for ( i = (struct InputObjectMapEntry *)(*(_QWORD *)(UserInputMgrSessionState + 24)
                                             + 8LL
                                             * (((*(_DWORD *)(UserInputMgrSessionState + 20) >> 5) - 1) & (442596621 * (unsigned __int8)v10 + 37 * (BYTE6(v10) + 37 * (BYTE5(v10) + 37 * (BYTE4(v10) + 37 * (BYTE3(v10) + 37 * (BYTE2(v10) + 37 * BYTE1(v10)))))) + (unsigned int)HIBYTE(v10) - 877075889)));
            (*(_QWORD *)i & 1) == 0;
            i = *(struct InputObjectMapEntry **)i )
      {
        if ( *(struct InputObjectMapEntry **)i == v5 )
        {
          *(_QWORD *)i = *(_QWORD *)v5;
          --*(_DWORD *)(UserInputMgrSessionState + 16);
          *(_QWORD *)v5 |= 0x8000000000000002uLL;
          break;
        }
      }
      W32ReleasePushLockExclusiveEx(v2);
      InputTraceLogging::InputSink::RemoveMapping(*((const struct CompositionInputObject **)v5 + 3), *a1);
      ObfDereferenceObject(*((PVOID *)v5 + 3));
      ExFreePoolWithTag(v5, 0);
      return 0LL;
    }
    else
    {
      W32ReleasePushLockExclusiveEx(v2);
      return 3221225506LL;
    }
  }
  else
  {
    W32ReleasePushLockExclusiveEx(v2);
    return 3221226021LL;
  }
}
