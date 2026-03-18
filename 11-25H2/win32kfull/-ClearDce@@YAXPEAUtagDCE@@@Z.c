/*
 * XREFs of ?ClearDce@@YAXPEAUtagDCE@@@Z @ 0x140287CB4
 * Callers:
 *     ?_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z @ 0x1401A6C58 (-_ClearPwndDceList@@YAXPEAU_LIST_ENTRY@@_K@Z.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036850 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     InvalidateDCE @ 0x14005A254 (InvalidateDCE.c)
 *     DeleteHrgnClip @ 0x1401A2540 (DeleteHrgnClip.c)
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14026E830 (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall ClearDce(struct tagDCE *a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // rax
  struct tagDCE **v5; // rcx
  int v6; // eax
  bool v7; // zf

  v2 = *((_DWORD *)a1 + 12);
  if ( (v2 & 2) == 0 )
  {
    v4 = *((_QWORD *)a1 + 10);
    v5 = (struct tagDCE **)(v4 + 248);
    if ( a1 == *(struct tagDCE **)(*(_QWORD *)(v4 + 136) + 40LL) )
    {
      if ( a1 == *v5 )
        goto LABEL_7;
    }
    else if ( a1 == *v5 )
    {
      *v5 = 0LL;
LABEL_19:
      DestroyCacheDC(a1, *((_QWORD *)a1 + 2));
      return;
    }
    MicrosoftTelemetryAssertTriggeredArgsKM("IXPTellMeIf", 0x20000, 1150);
LABEL_7:
    if ( (*((_DWORD *)a1 + 12) & 0xC0) != 0 )
      DeleteHrgnClip((__int64)a1);
LABEL_9:
    InvalidateDCE((__int64)a1);
    return;
  }
  if ( (v2 & 0x1000) == 0 )
  {
    v7 = (unsigned int)GreSetDCOwnerEx(*((_QWORD *)a1 + 2), 2147483666LL, 0LL, 0LL) == 0;
LABEL_18:
    if ( v7 )
      goto LABEL_19;
    goto LABEL_9;
  }
  if ( *((struct tagTHREADINFO **)a1 + 7) == PtiCurrent((__int64)a1, a2) )
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
    v7 = v6 == 2;
    goto LABEL_18;
  }
}
