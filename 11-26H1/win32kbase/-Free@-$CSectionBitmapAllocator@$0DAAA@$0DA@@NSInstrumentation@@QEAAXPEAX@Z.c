/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0DAAA@$0DA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x140187278
 * Callers:
 *     ?Free@?$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140187078 (-Free@-$CTypeIsolation@$0DAAA@$0DA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<12288,48>::Free(__int64 a1, _OWORD *a2)
{
  struct W32_PUSH_LOCK *v2; // rdi
  ULONG v5; // ebx

  if ( a2 )
  {
    v2 = *(struct W32_PUSH_LOCK **)a1;
    W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x30
       + 85 * (((unsigned int)a2 - (*(_DWORD *)(a1 + 8) ^ (unsigned int)*(_QWORD *)(a1 + 16))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16)), v5);
    *a2 = 0LL;
    a2[1] = 0LL;
    a2[2] = 0LL;
    *(_DWORD *)(a1 + 32) = v5;
    W32ReleasePushLockExclusiveEx(v2);
  }
}
