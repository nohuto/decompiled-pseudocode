/*
 * XREFs of ?Initialize@CAudioThreadPool@@QEAAJXZ @ 0x18004AF24
 * Callers:
 *     ?InitializeAudioThreadpool@@YAJXZ @ 0x18004AFC8 (-InitializeAudioThreadpool@@YAJXZ.c)
 * Callees:
 *     WPP_SF_d @ 0x18004B0C8 (WPP_SF_d.c)
 */

__int64 __fastcall CAudioThreadPool::Initialize(CAudioThreadPool *this)
{
  unsigned int v2; // ebx
  __int64 v3; // rdx
  __int64 v4; // r8
  PTP_CLEANUP_GROUP ThreadpoolCleanupGroup; // rax
  signed int LastError; // eax

  v2 = 0;
  if ( RtlDllShutdownInProgress() )
  {
    v2 = -2147023781;
LABEL_7:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_d(*((_QWORD *)WPP_GLOBAL_Control + 2), v3, v4, v2);
    }
    return v2;
  }
  ThreadpoolCleanupGroup = CreateThreadpoolCleanupGroup();
  *((_QWORD *)this + 10) = ThreadpoolCleanupGroup;
  if ( ThreadpoolCleanupGroup )
  {
    *((_QWORD *)this + 3) = ThreadpoolCleanupGroup;
    *((_QWORD *)this + 4) = 0LL;
    return v2;
  }
  LastError = GetLastError();
  v2 = LastError;
  if ( LastError > 0 )
    v2 = (unsigned __int16)LastError | 0x80070000;
  if ( (v2 & 0x80000000) != 0 )
    goto LABEL_7;
  return v2;
}
