/*
 * XREFs of ?GetPredictionInfo@CSuperWetInkScribbleBase@@UEAAXMPEAUtagRECT@@PEAM@Z @ 0x1801DF520
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1802202A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CSuperWetInkScribbleBase::GetPredictionInfo(
        CSuperWetInkScribbleBase *this,
        float a2,
        struct tagRECT *a3,
        float *a4)
{
  _BYTE v6[16]; // [rsp+20h] [rbp-38h] BYREF

  *a3 = *(struct tagRECT *)(*(__int64 (__fastcall **)(_QWORD, _BYTE *))(**((_QWORD **)this + 2) + 24LL))(
                             *((_QWORD *)this + 2),
                             v6);
  *a4 = (*(float (__fastcall **)(_QWORD))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2)) * 0.001;
}
