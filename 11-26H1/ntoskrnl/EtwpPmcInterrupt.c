/*
 * XREFs of EtwpPmcInterrupt @ 0x1404EF480
 * Callers:
 *     <none>
 * Callees:
 *     EtwTraceKernelEvent @ 0x1402BCA50 (EtwTraceKernelEvent.c)
 */

__int64 __fastcall EtwpPmcInterrupt(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r8
  unsigned int CurrentRunTime; // ecx
  unsigned __int64 v5; // [rsp+30h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+38h] [rbp-20h]
  __int16 v7; // [rsp+3Ch] [rbp-1Ch]
  __int16 v8; // [rsp+3Eh] [rbp-1Ah]
  _QWORD v9[3]; // [rsp+40h] [rbp-18h] BYREF

  v2 = *(_QWORD *)(a1 + 360);
  v9[1] = 16LL;
  CurrentRunTime = KeGetCurrentThread()[1].CurrentRunTime;
  v9[0] = &v5;
  v6 = CurrentRunTime;
  v5 = v2;
  v7 = a2;
  v8 = 0;
  return EtwTraceKernelEvent((int)v9, 1, 0x20000400u, 3887, v2 < 0x7FFFFFFF0000LL ? 34640386 : 34642434);
}
