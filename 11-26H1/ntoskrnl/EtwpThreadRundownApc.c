/*
 * XREFs of EtwpThreadRundownApc @ 0x1406CB5E0
 * Callers:
 *     <none>
 * Callees:
 *     KeSetPriorityThread @ 0x140204620 (KeSetPriorityThread.c)
 *     KeSetEvent @ 0x1402C0780 (KeSetEvent.c)
 *     EtwpTraceThreadRundown @ 0x14051ED18 (EtwpTraceThreadRundown.c)
 *     Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline @ 0x1406CB8A0 (Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline.c)
 */

KPRIORITY __fastcall EtwpThreadRundownApc(__int64 a1, __int64 a2, __int64 a3, struct _KEVENT **a4, __int64 *a5)
{
  KPRIORITY v5; // esi
  char v6; // di
  struct _KEVENT *v7; // rbp
  __int64 v8; // rbx
  KPRIORITY result; // eax

  v5 = 0;
  v6 = 0;
  v7 = *a4;
  v8 = *a5;
  EtwpTraceThreadRundown((__int64)KeGetCurrentThread(), *a5);
  if ( (unsigned int)Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline()
    && *(_BYTE *)(v8 + 76) )
  {
    v5 = *(_DWORD *)(v8 + 72);
    v6 = 1;
  }
  KeSetEvent(v7, 0, 0);
  result = Feature_EtwThreadStackRundownPriority__private_IsEnabledDeviceUsageNoInline();
  if ( result )
  {
    if ( v6 )
      return KeSetPriorityThread(KeGetCurrentThread(), v5);
  }
  return result;
}
