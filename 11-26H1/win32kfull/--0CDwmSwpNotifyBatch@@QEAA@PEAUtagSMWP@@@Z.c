/*
 * XREFs of ??0CDwmSwpNotifyBatch@@QEAA@PEAUtagSMWP@@@Z @ 0x140046A10
 * Callers:
 *     xxxEndDeferWindowPosEx @ 0x14002B508 (xxxEndDeferWindowPosEx.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??0CDwmNotifyBatch@@IEAA@XZ @ 0x140046AF4 (--0CDwmNotifyBatch@@IEAA@XZ.c)
 *     HMValidateHandleNoSecure @ 0x14004C2D0 (HMValidateHandleNoSecure.c)
 *     ?DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z @ 0x1402E695C (-DecrementCounter@CDwmNotifyBatch@@IEAAXPEAUHWND__@@@Z.c)
 *     ?IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z @ 0x1402E6A00 (-IncrementCounter@CDwmNotifyBatch@@IEAA_NPEAUtagWND@@@Z.c)
 */

CDwmSwpNotifyBatch *__fastcall CDwmSwpNotifyBatch::CDwmSwpNotifyBatch(CDwmSwpNotifyBatch *this, struct tagSMWP *a2)
{
  __int64 v4; // rdx
  CDwmNotifyBatch *v5; // rcx
  bool v6; // zf
  unsigned int v8; // ebx
  unsigned int v9; // ebp
  CDwmNotifyBatch **v10; // rsi
  struct tagWND *v11; // rax
  struct tagTHREADINFO *v12; // rax
  HWND *i; // rsi

  CDwmNotifyBatch::CDwmNotifyBatch(this);
  v6 = *(_BYTE *)this == 0;
  *((_QWORD *)this + 4) = 0LL;
  if ( !v6 )
  {
    *((_QWORD *)this + 4) = a2;
    v8 = 0;
    v9 = *((_DWORD *)a2 + 7);
    v10 = (CDwmNotifyBatch **)*((_QWORD *)a2 + 5);
    if ( v9 )
    {
      while ( 1 )
      {
        v5 = *v10;
        if ( *v10 )
        {
          LOBYTE(v4) = 1;
          v11 = (struct tagWND *)HMValidateHandleNoSecure(v5, v4);
          if ( v11 )
          {
            if ( !CDwmNotifyBatch::IncrementCounter(v5, v11) )
              break;
          }
        }
        ++v8;
        v10 += 21;
        if ( v8 >= v9 )
          goto LABEL_8;
      }
    }
    else
    {
LABEL_8:
      if ( v8 == v9 )
      {
        v12 = PtiCurrent((__int64)v5);
        *((_QWORD *)this + 1) = *((_QWORD *)v12 + 47);
        *((_QWORD *)v12 + 47) = (char *)this + 8;
        *((_QWORD *)this + 3) = lambda_d3317ad6738a121a75864f2401651563_::_lambda_invoker_cdecl_;
        *((_QWORD *)this + 2) = this;
        return this;
      }
    }
    for ( i = *(HWND **)(*((_QWORD *)this + 4) + 40LL); v8; --v8 )
    {
      if ( *i )
        CDwmNotifyBatch::DecrementCounter(v5, *i);
    }
  }
  return this;
}
