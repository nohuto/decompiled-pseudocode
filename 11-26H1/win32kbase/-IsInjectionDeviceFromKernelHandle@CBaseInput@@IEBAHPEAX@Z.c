/*
 * XREFs of ?IsInjectionDeviceFromKernelHandle@CBaseInput@@IEBAHPEAX@Z @ 0x140189344
 * Callers:
 *     ?ProcessInput@CHidInput@@EEAAJPEAXKK0@Z @ 0x1400D3070 (-ProcessInput@CHidInput@@EEAAJPEAXKK0@Z.c)
 *     ?OnInputSuppressed@CBaseInput@@AEBAXXZ @ 0x1401892E0 (-OnInputSuppressed@CBaseInput@@AEBAXXZ.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B75A0 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x1400B7830 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

__int64 __fastcall CBaseInput::IsInjectionDeviceFromKernelHandle(CBaseInput *this, void *a2)
{
  struct W32_PUSH_LOCK *v2; // rbx
  unsigned int v4; // esi
  __int64 i; // rax

  v2 = (struct W32_PUSH_LOCK *)*((_QWORD *)this + 154);
  v4 = 0;
  W32AcquirePushLockExclusiveEx(v2);
  for ( i = **((_QWORD **)this + 155); i; i = *(_QWORD *)(i + 56) )
  {
    if ( *(void **)(i + 24) == a2 )
    {
      v4 = -__CFSHR__(*(_DWORD *)(i + 168), 14);
      break;
    }
  }
  W32ReleasePushLockExclusiveEx(v2);
  return v4;
}
