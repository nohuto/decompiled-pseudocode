/*
 * XREFs of ??1ReferencedW32Process@@QEAA@XZ @ 0x1400C5614
 * Callers:
 *     HmgIsProcessCleanupRequiredByW32Pid @ 0x140023C30 (HmgIsProcessCleanupRequiredByW32Pid.c)
 *     HmgIncProcessHandleCountEx @ 0x1400C5508 (HmgIncProcessHandleCountEx.c)
 * Callees:
 *     GreDeleteFastMutex @ 0x140042F30 (GreDeleteFastMutex.c)
 *     UserDeleteW32Process @ 0x1401C0400 (UserDeleteW32Process.c)
 */

void __fastcall ReferencedW32Process::~ReferencedW32Process(volatile signed __int32 **this)
{
  volatile signed __int32 *v1; // rbx
  void *v3; // rsi
  bool v4; // dl
  __int64 v5; // rdx
  __int64 v6; // r8
  __int64 v7; // r9

  v1 = *this;
  if ( *this )
  {
    v3 = *(void **)v1;
    v4 = (v1[69] & 0x200) == 0;
    if ( _InterlockedExchangeAdd(v1 + 2, 0xFFFFFFFF) == 1 )
    {
      if ( v4 )
      {
        if ( v4 )
          UserDeleteW32Process((PVOID)v1);
      }
      else
      {
        PsSetProcessWin32Process(*(_QWORD *)v1, 0LL, v1);
        GreDeleteFastMutex((char *)v1, v5, v6, v7);
      }
    }
    ObfDereferenceObject(v3);
    *this = 0LL;
  }
}
