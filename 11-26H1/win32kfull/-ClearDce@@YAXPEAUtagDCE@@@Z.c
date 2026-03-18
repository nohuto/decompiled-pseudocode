/*
 * XREFs of ?ClearDce@@YAXPEAUtagDCE@@@Z @ 0x1401D8F48
 * Callers:
 *     ?_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1401D8ECC (-_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 * Callees:
 *     InvalidateDCE @ 0x14001386C (InvalidateDCE.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     DeleteHrgnClip @ 0x1401E2400 (DeleteHrgnClip.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14028B39C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ClearDce(struct tagDCE *a1)
{
  int v1; // eax
  __int64 v3; // rax
  struct tagDCE **v4; // rcx
  bool v5; // zf
  int v6; // eax

  v1 = *((_DWORD *)a1 + 12);
  if ( (v1 & 2) == 0 )
  {
    v3 = *((_QWORD *)a1 + 10);
    v4 = (struct tagDCE **)(v3 + 248);
    if ( a1 == *(struct tagDCE **)(*(_QWORD *)(v3 + 136) + 40LL) )
    {
      if ( a1 == *v4 )
        goto LABEL_18;
    }
    else if ( a1 == *v4 )
    {
      *v4 = 0LL;
LABEL_5:
      DestroyCacheDC(a1, *((_QWORD *)a1 + 2));
      return;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000LL, 1147LL);
LABEL_18:
    if ( (*((_DWORD *)a1 + 12) & 0xC0) != 0 )
      DeleteHrgnClip(a1);
    goto LABEL_20;
  }
  if ( (v1 & 0x1000) == 0 )
  {
    v5 = (unsigned int)GreSetDCOwnerEx(*((_QWORD *)a1 + 2), 2147483666LL, 0LL, 0LL) == 0;
    goto LABEL_13;
  }
  if ( *((struct tagTHREADINFO **)a1 + 7) == PtiCurrent((__int64)a1) )
  {
    v6 = ReleaseCacheDC(*((_QWORD *)a1 + 2), 0LL);
  }
  else
  {
    DestroyCacheDC(a1, *((_QWORD *)a1 + 2));
    v6 = 1;
  }
  if ( v6 != 1 )
  {
    v5 = v6 == 2;
LABEL_13:
    if ( v5 )
      goto LABEL_5;
LABEL_20:
    InvalidateDCE((__int64)a1);
  }
}
