/*
 * XREFs of PopFxCreateStaticWorkPoolThread @ 0x1407D0598
 * Callers:
 *     PopFxInitializeWorkPool @ 0x1407D0630 (PopFxInitializeWorkPool.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall PopFxCreateStaticWorkPoolThread(__int64 a1)
{
  int v1; // ebx
  _QWORD v3[4]; // [rsp+50h] [rbp-30h] BYREF
  __int128 v4; // [rsp+70h] [rbp-10h]
  HANDLE Handle; // [rsp+98h] [rbp+18h] BYREF

  v3[0] = 48LL;
  Handle = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  v3[3] = 512LL;
  v4 = 0LL;
  v1 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, v3, 0LL, 0LL, PopFxStaticWorkPoolThread, a1, 0LL, 0LL);
  if ( v1 >= 0 )
    ZwClose(Handle);
  return (unsigned int)v1;
}
