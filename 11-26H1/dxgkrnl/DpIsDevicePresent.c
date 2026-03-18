/*
 * XREFs of DpIsDevicePresent @ 0x140237AB0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall @ 0x1400A5A80 (_guard_dispatch_icall.c)
 */

__int64 __fastcall DpIsDevicePresent(__int64 a1, __int64 a2, _BYTE *a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rdi
  int v8; // eax
  __int64 (__fastcall *v9)(_QWORD, __int64); // rax

  v3 = 0;
  if ( a1 && a2 && a3 )
  {
    v7 = *(_QWORD *)(a1 + 64);
    if ( v7 && *(_DWORD *)(v7 + 16) == 1953656900 && ((v8 = *(_DWORD *)(v7 + 20), v8 == 2) || v8 == 3) )
    {
      if ( KeGetCurrentIrql() )
      {
        v3 = -1073741811;
        if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 40LL) + 28LL) >= 0x2003u )
        {
          WdLogSingleEntry3(0LL, 275LL, 21LL, -1073741811LL);
          WdLogGlobalForLineNumber = 1722;
        }
        WdLogSingleEntry1(2LL);
        WdLogGlobalForLineNumber = 1728;
      }
      else
      {
        *a3 = 0;
        v9 = *(__int64 (__fastcall **)(_QWORD, __int64))(v7 + 664);
        if ( v9 )
        {
          *a3 = v9(*(_QWORD *)(v7 + 632), a2);
        }
        else
        {
          v3 = -1073741823;
          WdLogSingleEntry1(2LL);
          WdLogGlobalForLineNumber = 1742;
        }
      }
    }
    else
    {
      v3 = -1073741811;
      WdLogSingleEntry1(2LL);
      WdLogGlobalForLineNumber = 1709;
    }
  }
  else
  {
    v3 = -1073741811;
    WdLogSingleEntry1(2LL);
    WdLogGlobalForLineNumber = 1696;
  }
  return v3;
}
