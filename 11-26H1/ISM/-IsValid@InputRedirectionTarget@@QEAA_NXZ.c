/*
 * XREFs of ?IsValid@InputRedirectionTarget@@QEAA_NXZ @ 0x1801B4DA0
 * Callers:
 *     ?OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180051BE0 (-OnHitTest@InputRedirectionProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProc.c)
 *     ?OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180063CC0 (-OnFocusRequest@InputRedirectionProcessor@@UEAAJPEAUDeviceInfo@@PEAVInputContext@@PEAUContextual.c)
 *     ?EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z @ 0x1801B44F0 (-EnableInputRedirection@InputRedirectionProcessor@@UEAAJI_KUtagMsgRoutingInfo@@1H_N@Z.c)
 *     ?DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z @ 0x1801B4A50 (-DeliverInput@InputRedirectionTarget@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ??8@YA_NAEBUtagMsgRoutingInfo@@0@Z @ 0x1800320FC (--8@YA_NAEBUtagMsgRoutingInfo@@0@Z.c)
 *     __security_check_cookie @ 0x18009ACC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DE010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

bool __fastcall InputRedirectionTarget::IsValid(InputRedirectionTarget *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx
  _OWORD v5[2]; // [rsp+20h] [rbp-38h] BYREF
  __int64 v6; // [rsp+40h] [rbp-18h]

  v1 = *((_QWORD *)this + 5);
  if ( v1 )
  {
    v3 = *((_QWORD *)this + 4);
    v6 = 0LL;
    memset(v5, 0, sizeof(v5));
    if ( (*(int (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v3 + 136LL))(v3, v1, v5) < 0
      || !operator==((__int64)v5, (__int64)this + 72) )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD))(**((_QWORD **)this + 4) + 168LL))(
        *((_QWORD *)this + 4),
        *((_QWORD *)this + 5));
      *((_QWORD *)this + 5) = 0LL;
    }
  }
  return *((_QWORD *)this + 5) != 0LL;
}
