/*
 * XREFs of ?GetHandleObject@DXGCHANNELENDPOINTPROXY@@UEAAPEAXIW4_HMGRENTRY_TYPE@@@Z @ 0x1403E44D0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsOwner@DXGFASTMUTEX@@QEBAEXZ @ 0x14000D800 (-IsOwner@DXGFASTMUTEX@@QEBAEXZ.c)
 *     DxgkLogInternalTriageEvent @ 0x14002BDA0 (DxgkLogInternalTriageEvent.c)
 */

__int64 __fastcall DXGCHANNELENDPOINTPROXY::GetHandleObject(__int64 a1, unsigned int a2, int a3)
{
  __int64 v6; // rbx
  unsigned int v7; // eax
  int v8; // r8d
  __int64 v9; // rcx

  v6 = 0LL;
  if ( !DXGFASTMUTEX::IsOwner((DXGFASTMUTEX *)(a1 + 72)) )
  {
    WdLogSingleEntry0(1LL);
    WdLogGlobalForLineNumber = 533;
    DxgkLogInternalTriageEvent(0LL, 262146, -1, (__int64)L"m_HandleTableMutex.IsOwner()", 533LL, 0LL, 0LL, 0LL, 0LL);
  }
  v7 = (a2 >> 6) & 0xFFFFFF;
  if ( v7 < *(_DWORD *)(a1 + 56) )
  {
    v8 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 16LL * v7 + 8);
    if ( ((a2 >> 25) & 0x60) == (*(_BYTE *)(*(_QWORD *)(a1 + 40) + 16LL * v7 + 8) & 0x60)
      && (v8 & 0x2000) == 0
      && (v8 & 0x1F) != 0 )
    {
      v9 = *(_QWORD *)(a1 + 40);
      if ( a3 == (*(_DWORD *)(v9 + 16LL * v7 + 8) & 0x1F) )
      {
        return *(_QWORD *)(v9 + 16LL * v7);
      }
      else
      {
        WdLogSingleEntry0(2LL);
        WdLogGlobalForLineNumber = 318;
        DxgkLogInternalTriageEvent(0LL, 0x40000, -1, (__int64)L"Handle type mismatch", 318LL, 0LL, 0LL, 0LL, 0LL);
      }
    }
  }
  return v6;
}
