/*
 * XREFs of ?Free@?$CSectionBitmapAllocator@$0DKAAA@$0DKA@@NSInstrumentation@@QEAAXPEAX@Z @ 0x1400B4D28
 * Callers:
 *     ?Free@?$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAXPEAX@Z @ 0x1400B5364 (-Free@-$CTypeIsolation@$0DKAAA@$0DKA@@NSInstrumentation@@IEAAXPEAX@Z.c)
 * Callees:
 *     ?W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B473C (-W32ReleasePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x1400B4870 (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 *     memset_0 @ 0x140342900 (memset_0.c)
 */

void __fastcall NSInstrumentation::CSectionBitmapAllocator<237568,928>::Free(__int64 a1, void *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  ULONG v5; // edi

  if ( a2 )
  {
    v2 = *(struct W32_PUSH_LOCK **)a1;
    W32AcquirePushLockExclusive(*(struct W32_PUSH_LOCK **)a1);
    v5 = ((unsigned __int16)a2 & 0xFFFu) / 0x3A0
       + 4 * ((unsigned int)((_DWORD)a2 - (*(_DWORD *)(a1 + 16) ^ *(_DWORD *)(a1 + 8))) >> 12);
    RtlClearBit((PRTL_BITMAP)(*(_QWORD *)(a1 + 16) ^ *(_QWORD *)(a1 + 24)), v5);
    memset_0(a2, 0, 0x3A0uLL);
    *(_DWORD *)(a1 + 32) = v5;
    W32ReleasePushLockExclusive(v2);
  }
}
