/*
 * XREFs of PopDiagTracePowerSettingRegistration @ 0x1409F6F44
 * Callers:
 *     PopGetSettingNotificationName @ 0x1409F6CE4 (PopGetSettingNotificationName.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140212F10 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x1404269F0 (_tlgCreate1Sz_wchar_t.c)
 *     PsGetCurrentThreadProcess @ 0x1404A3C80 (PsGetCurrentThreadProcess.c)
 *     __security_check_cookie @ 0x1407274E0 (__security_check_cookie.c)
 */

int __fastcall PopDiagTracePowerSettingRegistration(__int64 a1, int a2, char a3)
{
  _KPROCESS *CurrentThreadProcess; // rax
  unsigned __int16 *LastRebalanceQpc; // r10
  const WCHAR *v8; // r9
  unsigned __int64 v9; // rax
  bool v10; // zf
  const WCHAR *v11; // rcx
  const WCHAR *v12; // rdx
  char v14; // [rsp+38h] [rbp-39h] BYREF
  int v15; // [rsp+3Ch] [rbp-35h] BYREF
  __int64 v16; // [rsp+40h] [rbp-31h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v17; // [rsp+48h] [rbp-29h] BYREF
  __int64 *v18; // [rsp+68h] [rbp-9h]
  __int64 v19; // [rsp+70h] [rbp-1h]
  char v20[16]; // [rsp+78h] [rbp+7h] BYREF
  int *v21; // [rsp+88h] [rbp+17h]
  __int64 v22; // [rsp+90h] [rbp+1Fh]
  __int64 v23; // [rsp+98h] [rbp+27h]
  __int64 v24; // [rsp+A0h] [rbp+2Fh]
  char *v25; // [rsp+A8h] [rbp+37h]
  __int64 v26; // [rsp+B0h] [rbp+3Fh]

  CurrentThreadProcess = PsGetCurrentThreadProcess();
  LastRebalanceQpc = (unsigned __int16 *)CurrentThreadProcess[1].LastRebalanceQpc;
  if ( LastRebalanceQpc )
  {
    v8 = (const WCHAR *)*((_QWORD *)LastRebalanceQpc + 1);
    v9 = (unsigned __int64)*LastRebalanceQpc >> 1;
    v10 = 2 * v9 == 0;
    CurrentThreadProcess = (_KPROCESS *)(2 * v9);
    v11 = (const WCHAR *)((char *)v8 + (_QWORD)CurrentThreadProcess);
    if ( !v10 )
    {
      do
      {
        if ( *v11 == 92 )
          break;
        --v11;
      }
      while ( v11 != v8 );
    }
    v12 = v11 + 1;
    if ( v11 == v8 )
      v12 = v11;
    if ( (unsigned int)dword_140E07560 > 5 && (qword_140E07570 & 0x400000000000LL) != 0 )
    {
      LODWORD(CurrentThreadProcess) = 0;
      if ( (qword_140E07578 & 0x400000000000LL) == qword_140E07578 )
      {
        v16 = 0x2000000LL;
        v18 = &v16;
        v19 = 8LL;
        tlgCreate1Sz_wchar_t((__int64)v20, v12);
        v15 = a2;
        v21 = &v15;
        v22 = 4LL;
        v25 = &v14;
        v23 = a1;
        v24 = 16LL;
        v14 = a3;
        v26 = 1LL;
        LODWORD(CurrentThreadProcess) = tlgWriteTransfer_EtwWriteTransfer(
                                          (__int64)&dword_140E07560,
                                          (unsigned __int8 *)byte_14004B898,
                                          0LL,
                                          0LL,
                                          7u,
                                          &v17);
      }
    }
  }
  return (int)CurrentThreadProcess;
}
