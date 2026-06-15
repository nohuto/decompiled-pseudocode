/*
 * XREFs of ?Initialize@CConstraintModelResourceManager@@AEAAJPEAUIAudioResourceControl@@@Z @ 0x1800F3914
 * Callers:
 *     ?Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z @ 0x1800F2630 (-Create@CConstraintModelResourceManager@@SAJPEAUIAudioResourceControl@@PEAPEAV1@@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x18001E210 (--2@YAPEAX_K@Z.c)
 *     ?SetupKeywordDetectorPriority@CConstraintModelResourceManager@@AEAAJXZ @ 0x1800F54B4 (-SetupKeywordDetectorPriority@CConstraintModelResourceManager@@AEAAJXZ.c)
 *     ??0CConstraintModel@@QEAA@XZ @ 0x180158CFC (--0CConstraintModel@@QEAA@XZ.c)
 *     ?Initialize@CConstraintModel@@QEAAJXZ @ 0x18015A460 (-Initialize@CConstraintModel@@QEAAJXZ.c)
 */

signed int __fastcall CConstraintModelResourceManager::Initialize(
        CConstraintModelResourceManager *this,
        struct IAudioResourceControl *a2)
{
  signed int result; // eax
  char *EventW; // rax
  __int64 v5; // rcx
  HANDLE v6; // rax
  bool v7; // sf
  CConstraintModel *v8; // rax
  struct _TP_WAIT *ThreadpoolWait; // rax

  result = 0;
  *((_QWORD *)this + 21) = a2;
  if ( !*((_QWORD *)this + 8) || *((_QWORD *)this + 8) == -1LL )
  {
    EventW = (char *)CreateEventW(0LL, 0, 0, 0LL);
    *((_QWORD *)this + 8) = EventW;
    if ( (unsigned __int64)(EventW - 1) > 0xFFFFFFFFFFFFFFFDuLL )
    {
      result = GetLastError();
      if ( result > 0 )
        result = (unsigned __int16)result | 0x80070000;
    }
    else
    {
      result = 0;
    }
  }
  v5 = *((_QWORD *)this + 23);
  if ( v5 && v5 != -1 )
    goto LABEL_12;
  v6 = CreateEventW(0LL, 0, 0, 0LL);
  *((_QWORD *)this + 23) = v6;
  if ( (((unsigned __int64)v6 + 1) & 0xFFFFFFFFFFFFFFFEuLL) == 0 )
  {
    result = GetLastError();
    v7 = result < 0;
    if ( result <= 0 )
      goto LABEL_13;
    result = (unsigned __int16)result | 0x80070000;
LABEL_12:
    v7 = result < 0;
LABEL_13:
    if ( v7 )
      return result;
  }
  v8 = (CConstraintModel *)operator new(0xF0uLL);
  if ( v8 )
    v8 = CConstraintModel::CConstraintModel(v8);
  *((_QWORD *)this + 7) = v8;
  if ( !v8 )
    return -2147024882;
  result = CConstraintModel::Initialize(v8);
  if ( result < 0 )
    return result;
  ThreadpoolWait = CreateThreadpoolWait(
                     (PTP_WAIT_CALLBACK)CConstraintModelResourceManager::s_WorkerThreadProc,
                     this,
                     0LL);
  *((_QWORD *)this + 22) = ThreadpoolWait;
  if ( !ThreadpoolWait )
    return -2147024882;
  SetThreadpoolWait(ThreadpoolWait, *((HANDLE *)this + 23), 0LL);
  *((_QWORD *)this + 9) = CreateMutexW(0LL, 0, L"Global\\AudioResourceAcquisitionMutex");
  return CConstraintModelResourceManager::SetupKeywordDetectorPriority(this);
}
