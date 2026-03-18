/*
 * XREFs of ??0?$UnexpectedThreadTerminationHandler@VDWMSPRITEREF@@@@QEAA@XZ @ 0x1401D155C
 * Callers:
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z @ 0x1401D1464 (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@@Z.c)
 *     ??0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z @ 0x1401D14AC (--0DWMSPRITEREF@@QEAA@PEAUHWND__@@PEAX@Z.c)
 *     GreTransferSpriteStateToDwmState @ 0x1402029BC (GreTransferSpriteStateToDwmState.c)
 * Callees:
 *     <none>
 */

_OWORD *__fastcall UnexpectedThreadTerminationHandler<DWMSPRITEREF>::UnexpectedThreadTerminationHandler<DWMSPRITEREF>(
        _OWORD *a1)
{
  *a1 = 0LL;
  a1[1] = 0LL;
  PushThreadGuardedObject(a1, a1, UnexpectedThreadTerminationHandler<DWMSPRITEREF>::OnUnexpectedThreadTerminationStatic);
  return a1;
}
