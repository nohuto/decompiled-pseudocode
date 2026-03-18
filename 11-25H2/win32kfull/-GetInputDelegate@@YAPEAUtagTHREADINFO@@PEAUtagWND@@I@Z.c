/*
 * XREFs of ?GetInputDelegate@@YAPEAUtagTHREADINFO@@PEAUtagWND@@I@Z @ 0x14011F764
 * Callers:
 *     ?PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z @ 0x14011F61C (-PostHidNotification@@YAHPEAUtagPROCESS_HID_REQUEST@@PEAUDEVICEINFO@@I_K@Z.c)
 * Callees:
 *     <none>
 */

struct tagTHREADINFO *__fastcall GetInputDelegate(struct tagWND *a1, int a2)
{
  __int64 v2; // r8
  int v4; // eax

  v2 = 0LL;
  if ( a1 )
  {
    if ( (a2 & 0x1000) != 0 )
    {
      v2 = *(_QWORD *)(*((_QWORD *)a1 + 2) + 1496LL);
      if ( v2 )
      {
        if ( (_InterlockedCompareExchange((volatile signed __int32 *)(v2 + 528), 0, 0) & 1) == 0 )
          return (struct tagTHREADINFO *)v2;
        v2 = 0LL;
      }
    }
    v4 = *((_DWORD *)a1 + 65);
    if ( v4 && (v4 & a2) != 0 )
      return (struct tagTHREADINFO *)*((_QWORD *)a1 + 33);
  }
  return (struct tagTHREADINFO *)v2;
}
