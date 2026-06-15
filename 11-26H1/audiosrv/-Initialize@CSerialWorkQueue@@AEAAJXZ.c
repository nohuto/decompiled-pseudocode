/*
 * XREFs of ?Initialize@CSerialWorkQueue@@AEAAJXZ @ 0x18001BFA0
 * Callers:
 *     ?PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ @ 0x18001AE10 (-PostStateCheckExpirationWork@CAudioSession@@AEAAXXZ.c)
 *     ?QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@J@ZV?$function@$$A6AXXZ@std@@AEAV?$unique_ptr@U_WaitTask@@U?$default_delete@U_WaitTask@@@std@@@5@@Z @ 0x18001CA40 (-QueueWaitItemInternal@CSerialWorkQueue@@AEAAJPEAXP6AXPEAU_TP_CALLBACK_INSTANCE@@0PEAU_TP_WAIT@@.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CSerialWorkQueue::Initialize(PTP_POOL *this)
{
  PTP_POOL Threadpool; // rax
  signed int v3; // eax
  signed int v4; // ebx
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int v6; // eax
  signed int LastError; // eax

  if ( *this )
  {
    return 0;
  }
  else
  {
    Threadpool = CreateThreadpool(0LL);
    *this = Threadpool;
    if ( Threadpool )
      goto LABEL_6;
    LastError = GetLastError();
    v4 = LastError;
    if ( LastError > 0 )
      v4 = (unsigned __int16)LastError | 0x80070000;
    if ( v4 >= 0 )
    {
LABEL_6:
      if ( SetThreadpoolThreadMinimum(*this, 1u) )
        goto LABEL_7;
      v3 = GetLastError();
      v4 = v3;
      if ( v3 > 0 )
        v4 = (unsigned __int16)v3 | 0x80070000;
      if ( v4 >= 0 )
      {
LABEL_7:
        ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
        this[21] = ThreadpoolCleanupGroup;
        if ( ThreadpoolCleanupGroup )
        {
          v4 = 0;
LABEL_19:
          SetThreadpoolThreadMaximum(*this, 1u);
          this[2] = *this;
          this[3] = this[21];
          this[4] = 0LL;
          return (unsigned int)v4;
        }
        v6 = GetLastError();
        v4 = v6;
        if ( v6 > 0 )
          v4 = (unsigned __int16)v6 | 0x80070000;
        if ( v4 >= 0 )
          goto LABEL_19;
      }
    }
  }
  return (unsigned int)v4;
}
