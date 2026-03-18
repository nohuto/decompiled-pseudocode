/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0NOAAA@$0NOA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x140136024
 * Callers:
 *     ?Free@?$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x140135DF4 (-Free@-$CTypeIsolation@$0NOAAA@$0NOA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     memset @ 0x14024BD80 (memset.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<909312,3552>::Free(__int64 a1, void *a2)
{
  struct W32_PUSH_LOCK *v2; // rdi
  ULONG v5; // ebx

  if ( a2 )
  {
    v2 = *(struct W32_PUSH_LOCK **)a1;
    W32AcquirePushLockExclusiveEx(*(struct W32_PUSH_LOCK **)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0xDE0
       + (((unsigned int)a2 - (*(_DWORD *)(a1 + 8) ^ (unsigned int)*(_QWORD *)(a1 + 16))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 24) ^ *(_QWORD *)(a1 + 16)), v5);
    memset(a2, 0, 0xDE0uLL);
    *(_DWORD *)(a1 + 32) = v5;
    W32ReleasePushLockExclusiveEx(v2);
  }
}
