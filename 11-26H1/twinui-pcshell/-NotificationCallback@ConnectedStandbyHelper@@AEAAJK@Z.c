/*
 * XREFs of ?NotificationCallback@ConnectedStandbyHelper@@AEAAJK@Z @ 0x18028E4DC
 * Callers:
 *     wistd::__function::__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl(unsigned_char_const_&)_::operator() @ 0x18028E4C0 (wistd--__function--__func__lambda_9b3391374d276f0391e9ed84fc8af55c__void___cdecl(unsigned_char_c.c)
 * Callees:
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x1800373AC (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ?_Incref_nz@_Ref_count_base@std@@QEAA_NXZ @ 0x1800F0FF8 (-_Incref_nz@_Ref_count_base@std@@QEAA_NXZ.c)
 *     _lambda_279b59b1da187398d137b7ca9bd87eac_::_lambda_279b59b1da187398d137b7ca9bd87eac_ @ 0x18028E568 (_lambda_279b59b1da187398d137b7ca9bd87eac_--_lambda_279b59b1da187398d137b7ca9bd87eac_.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___ @ 0x18028E594 (Windows--Internal--ComTaskPool--QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___.c)
 *     ?_Throw_bad_weak_ptr@std@@YAXXZ @ 0x18028E620 (-_Throw_bad_weak_ptr@std@@YAXXZ.c)
 */

__int64 __fastcall ConnectedStandbyHelper::NotificationCallback(ConnectedStandbyHelper *this, int a2)
{
  std::_Ref_count_base *v2; // rcx
  __int64 *v3; // r11
  std::_Ref_count_base *v4; // rbx
  __int64 v5; // rax
  __int64 v6; // r11
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v10; // [rsp+20h] [rbp-38h] BYREF
  std::_Ref_count_base *v11; // [rsp+28h] [rbp-30h]
  _BYTE v12[16]; // [rsp+30h] [rbp-28h] BYREF
  std::_Ref_count_base *v13; // [rsp+40h] [rbp-18h]
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v14 = a2;
  v11 = 0LL;
  v2 = (std::_Ref_count_base *)*((_QWORD *)this + 1);
  if ( !v2 || !std::_Ref_count_base::_Incref_nz(v2) )
    std::_Throw_bad_weak_ptr();
  v10 = *v3;
  v4 = (std::_Ref_count_base *)v3[1];
  v11 = v4;
  v5 = ((__int64 (__fastcall *)(_BYTE *, __int64 *, __int64 *, int *))lambda_279b59b1da187398d137b7ca9bd87eac_::_lambda_279b59b1da187398d137b7ca9bd87eac_)(
         v12,
         v3,
         &v10,
         &v14);
  Windows::Internal::ComTaskPool::QueueTask__lambda_279b59b1da187398d137b7ca9bd87eac___(
    v8,
    v7,
    *(unsigned int *)(v6 + 16),
    v5);
  if ( v13 )
    std::_Ref_count_base::_Decref(v13);
  if ( v4 )
    std::_Ref_count_base::_Decref(v4);
  return 0LL;
}
