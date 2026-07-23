/*
 * XREFs of KiStartDpcThread @ 0x1407BC94C
 * Callers:
 *     KiInitializeDynamicProcessor @ 0x140BFAFC4 (KiInitializeDynamicProcessor.c)
 *     KeInitSystem @ 0x140CCE3A8 (KeInitSystem.c)
 * Callees:
 *     ZwClose @ 0x1407281A0 (ZwClose.c)
 *     PsCreateSystemThreadEx @ 0x140A78DE0 (PsCreateSystemThreadEx.c)
 */

__int64 __fastcall KiStartDpcThread(__int64 a1)
{
  __int16 v1; // ax
  unsigned int v2; // ebx
  __int128 v4; // [rsp+50h] [rbp-18h] BYREF
  HANDLE Handle; // [rsp+70h] [rbp+8h] BYREF

  v1 = *(unsigned __int8 *)(a1 + 208);
  v4 = 0LL;
  WORD4(v4) = v1;
  *(_QWORD *)&v4 = *(_QWORD *)(a1 + 200);
  Handle = 0LL;
  v2 = PsCreateSystemThreadEx(&Handle, 0x1FFFFFLL, 0LL, 0LL, 0LL, KiExecuteDpc, a1, &v4, a1 + 36);
  if ( Handle )
    ZwClose(Handle);
  return v2;
}
