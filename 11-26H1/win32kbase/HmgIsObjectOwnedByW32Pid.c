/*
 * XREFs of HmgIsObjectOwnedByW32Pid @ 0x14013A880
 * Callers:
 *     HmgCheckDCForPrivateReferences @ 0x1401F0A88 (HmgCheckDCForPrivateReferences.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall HmgIsObjectOwnedByW32Pid(_QWORD *a1, int a2)
{
  unsigned int v4; // ebx
  __int64 SessionState; // rax
  __int64 v7; // rax

  v4 = 0;
  SessionState = W32GetSessionState(a1);
  if ( a1 )
  {
    if ( *a1 )
    {
      v7 = (*(__int64 (__fastcall **)(_QWORD, _QWORD *))(**(_QWORD **)(*(_QWORD *)(SessionState + 88) + 8LL) + 8LL))(
             *(_QWORD *)(*(_QWORD *)(SessionState + 88) + 8LL),
             a1);
      if ( v7 )
      {
        if ( *(_BYTE *)(v7 + 14) )
          return ((*(_DWORD *)(v7 + 8) ^ a2 & 0xFFFFFFFD) & 0xFFFFFFFE) == 0;
      }
    }
  }
  return v4;
}
