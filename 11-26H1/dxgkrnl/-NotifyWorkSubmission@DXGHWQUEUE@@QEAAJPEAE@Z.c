/*
 * XREFs of ?NotifyWorkSubmission@DXGHWQUEUE@@QEAAJPEAE@Z @ 0x1401E3F28
 * Callers:
 *     ?DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z @ 0x1401E265C (-DxgkNotifyWorkSubmissionInternal@@YAJPEAU_D3DKMT_NOTIFY_WORK_SUBMISSION@@_N@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1400A59A0 (__security_check_cookie.c)
 *     memset @ 0x1400A5E00 (memset.c)
 *     ?DdiNotifyWorkSubmission@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_NOTIFYWORKSUBMISSION@@@Z @ 0x1401AFE18 (-DdiNotifyWorkSubmission@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_NOTIFYWORKSUBMISSION@@@Z.c)
 */

__int64 __fastcall DXGHWQUEUE::NotifyWorkSubmission(DXGHWQUEUE *this, unsigned __int8 *a2)
{
  __int64 result; // rax
  __int128 v5; // xmm0
  __int128 v6; // xmm1
  __int64 v7; // rax
  __int128 v8; // xmm0
  __int128 v9; // xmm1
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  _QWORD v13[10]; // [rsp+20h] [rbp-68h] BYREF

  if ( *((_BYTE *)this + 149) )
    return 0LL;
  memset(v13, 0, sizeof(v13));
  v5 = *(_OWORD *)a2;
  v6 = *((_OWORD *)a2 + 1);
  v13[0] = *((_QWORD *)this + 4);
  v7 = *((_QWORD *)this + 2);
  *(_OWORD *)((char *)&v13[1] + 4) = v5;
  v8 = *((_OWORD *)a2 + 2);
  *(_OWORD *)((char *)&v13[3] + 4) = v6;
  v9 = *((_OWORD *)a2 + 3);
  *(_OWORD *)((char *)&v13[5] + 4) = v8;
  *(_OWORD *)((char *)&v13[7] + 4) = v9;
  result = ADAPTER_RENDER::DdiNotifyWorkSubmission(
             *(ADAPTER_RENDER **)(*(_QWORD *)(v7 + 16) + 16LL),
             (struct _DXGKARG_NOTIFYWORKSUBMISSION *)v13);
  if ( (int)result >= 0 )
  {
    v10 = *(_OWORD *)((char *)&v13[3] + 4);
    *(_OWORD *)a2 = *(_OWORD *)((char *)&v13[1] + 4);
    v11 = *(_OWORD *)((char *)&v13[5] + 4);
    *((_OWORD *)a2 + 1) = v10;
    v12 = *(_OWORD *)((char *)&v13[7] + 4);
    *((_OWORD *)a2 + 2) = v11;
    *((_OWORD *)a2 + 3) = v12;
  }
  return result;
}
