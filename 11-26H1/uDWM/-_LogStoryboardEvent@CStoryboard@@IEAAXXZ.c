/*
 * XREFs of ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x18003E298
 * Callers:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180028368 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 *     ?ScheduleStartAnimation@CStoryboard@@QEAAJXZ @ 0x18003CB38 (-ScheduleStartAnimation@CStoryboard@@QEAAJXZ.c)
 *     ?Initialize@CStoryboard@@MEAAJXZ @ 0x18003E230 (-Initialize@CStoryboard@@MEAAJXZ.c)
 *     ?ScheduleToRun@CStoryboard@@QEAAXXZ @ 0x18003E26C (-ScheduleToRun@CStoryboard@@QEAAXXZ.c)
 *     ?Block@CStoryboard@@QEAAXXZ @ 0x1800C076C (-Block@CStoryboard@@QEAAXXZ.c)
 * Callees:
 *     ?reset@?$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x1800544EC (-reset@-$com_ptr_t@UICompositionSurface@Composition@UI@Windows@@Uerr_returncode_policy@wil@@@wil.c)
 *     __security_check_cookie @ 0x18008E1C0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x18008EF18 (memcmp_0.c)
 *     McTemplateU0qd_EtwEventWriteTransfer @ 0x1800C83A4 (McTemplateU0qd_EtwEventWriteTransfer.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800EA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CStoryboard::_LogStoryboardEvent(CStoryboard *this, __int64 a2)
{
  _DWORD *v2; // rdi
  _QWORD *v4; // rsi
  __int64 v5; // rcx
  __int64 v6; // rdi
  void (__fastcall *v7)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int); // rbx
  int v8; // eax
  __int128 Buf2; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v10; // [rsp+50h] [rbp-B0h]
  int v11; // [rsp+58h] [rbp-A8h]
  __int128 Buf1; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v13; // [rsp+70h] [rbp-90h]
  int v14; // [rsp+78h] [rbp-88h]
  _BYTE v15[128]; // [rsp+80h] [rbp-80h] BYREF

  v2 = (_DWORD *)((char *)this + 24);
  if ( (Microsoft_Windows_Dwm_UdwmEnableBits & 1) != 0 )
    McTemplateU0qd_EtwEventWriteTransfer(this, a2, (unsigned int)*v2, *((unsigned int *)this + 7));
  if ( *((_DWORD *)this + 7) != -1 && (*v2 == 3 || *v2 == 4) )
  {
    Buf1 = *((_OWORD *)this + 2);
    Buf2 = 0LL;
    if ( memcmp_0(&Buf1, &Buf2, 0x10uLL) )
    {
      v4 = (_QWORD *)((char *)this + 80);
      if ( *v2 == 3 )
      {
        wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 80);
        if ( (int)DCompositionCreateAnimationStats((char *)this + 80) >= 0 )
          (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 24LL))(*v4, 0LL);
      }
      else if ( *v4 )
      {
        GetAnimationScenarioNameFromGUID((char *)this + 32, v15, 64LL);
        v5 = *v4;
        v13 = 0LL;
        v14 = 0;
        Buf1 = 0LL;
        if ( (*(int (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v5 + 88LL))(v5, &Buf1) >= 0 )
        {
          v6 = *v4;
          v7 = *(void (__fastcall **)(__int64, __int128 *, _QWORD, _QWORD, _BYTE *, _QWORD, int))(*(_QWORD *)*v4 + 216LL);
          v8 = (*(__int64 (__fastcall **)(CStoryboard *))(*(_QWORD *)this + 32LL))(this);
          v11 = v14;
          Buf2 = Buf1;
          v10 = v13;
          v7(v6, &Buf2, 0LL, 0LL, v15, 0LL, v8);
        }
        (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)*v4 + 40LL))(*v4, 0LL);
        wil::com_ptr_t<Windows::UI::Composition::ICompositionSurface,wil::err_returncode_policy>::reset((char *)this + 80);
      }
    }
  }
}
