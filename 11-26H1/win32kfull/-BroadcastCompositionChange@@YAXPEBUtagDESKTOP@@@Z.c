/*
 * XREFs of ?BroadcastCompositionChange@@YAXPEBUtagDESKTOP@@@Z @ 0x1400F82DC
 * Callers:
 *     zzzDecomposeDesktop @ 0x1400F7F10 (zzzDecomposeDesktop.c)
 *     zzzComposeDesktop @ 0x140201D04 (zzzComposeDesktop.c)
 * Callees:
 *     xxxSendMessageBSM @ 0x140004CE0 (xxxSendMessageBSM.c)
 *     ??0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z @ 0x1400211C4 (--0AtomicExecutionCheck@@QEAA@W4AtomicExecutionArm@@@Z.c)
 */

void __fastcall BroadcastCompositionChange(const struct tagDESKTOP *a1)
{
  _BYTE v2[8]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v3; // [rsp+38h] [rbp-40h]
  _DWORD v4[2]; // [rsp+40h] [rbp-38h] BYREF
  __int128 v5; // [rsp+48h] [rbp-30h]
  __int128 v6; // [rsp+58h] [rbp-20h]

  v4[0] = 8;
  v4[1] = 178;
  v5 = 0LL;
  v6 = 0LL;
  AtomicExecutionCheck::AtomicExecutionCheck((AtomicExecutionCheck *)v2);
  xxxSendMessageBSM(
    *(struct tagWND **)(*((_QWORD *)a1 + 1) + 24LL),
    0x31Eu,
    0LL,
    0LL,
    (struct tagBROADCASTSYSTEMMSGPARAMS *)v4,
    1);
  if ( v2[0] )
    --*(_DWORD *)(v3 + 28);
}
