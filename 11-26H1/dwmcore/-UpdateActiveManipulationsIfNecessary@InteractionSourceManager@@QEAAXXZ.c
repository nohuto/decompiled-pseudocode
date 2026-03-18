/*
 * XREFs of ?UpdateActiveManipulationsIfNecessary@InteractionSourceManager@@QEAAXXZ @ 0x18013B100
 * Callers:
 *     ?NotifyBatchProcessingComplete@CInteractionTracker2@@UEAAXXZ @ 0x18013B050 (-NotifyBatchProcessingComplete@CInteractionTracker2@@UEAAXXZ.c)
 * Callees:
 *     ??$?4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@?$com_ptr_t@VIBitmapSource@@Uerr_returncode_policy@wil@@@wil@@QEAAAEAV01@AEBV?$com_ptr_t@VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@@1@@Z @ 0x180017298 (--$-4VCSystemMemoryBitmap@@Uerr_returncode_policy@wil@@X@-$com_ptr_t@VIBitmapSource@@Uerr_return.c)
 *     ??1?$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180030D94 (--1-$com_ptr_t@UID3D11Resource@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ @ 0x18013B170 (-TryGetActiveManipulation@InteractionSourceManager@@QEBAPEAVCManipulation@@XZ.c)
 *     ?erase@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@QEAA?AV?$_Deque_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@V?$_Deque_const_iterator@V?$_Deque_val@U?$_Deque_simple_types@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@@2@@Z @ 0x180209034 (-erase@-$deque@V-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V-$allocator@V-$co.c)
 *     ??$_Emplace_front_internal@AEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@?$deque@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@V?$allocator@V?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@std@@@std@@AEAAXAEBV?$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@Z @ 0x18028DC68 (--$_Emplace_front_internal@AEBV-$com_ptr_t@VCManipulation@@Uerr_returncode_policy@wil@@@wil@@@-$.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1802D6010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall InteractionSourceManager::UpdateActiveManipulationsIfNecessary(InteractionSourceManager *this)
{
  __int64 *v2; // rdi
  struct CManipulation *ActiveManipulation; // rax
  __int64 v4; // r9
  unsigned __int64 i; // rsi
  __int64 *v6; // rdx
  __int64 *v7; // rdx
  int v8; // eax
  __int64 v9; // rcx
  __int64 v10; // rax
  _QWORD v11[3]; // [rsp+20h] [rbp-38h] BYREF
  _BYTE v12[32]; // [rsp+38h] [rbp-20h] BYREF
  __int64 v13; // [rsp+60h] [rbp+8h] BYREF

  if ( *((_BYTE *)this + 112) )
  {
    v2 = (__int64 *)((char *)this + 72);
    if ( *((_QWORD *)this + 13) > 1uLL )
    {
      i = 0LL;
      v13 = 0LL;
      while ( i < *((_QWORD *)this + 13) )
      {
        v6 = (__int64 *)(*(_QWORD *)(*((_QWORD *)this + 10)
                                   + 8 * ((*((_QWORD *)this + 11) - 1LL) & ((i + *((_QWORD *)this + 12)) >> 1)))
                       + 8LL * (((_DWORD)i + *((_DWORD *)this + 24)) & 1));
        if ( *(_DWORD *)(*v6 + 428) == 2 )
        {
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            &v13,
            v6);
          if ( v13 )
          {
LABEL_16:
            v9 = v2[3];
            if ( v2 )
              v10 = *v2;
            else
              v10 = 0LL;
            v11[0] = v10;
            v11[1] = 0LL;
            v11[2] = v9 + i;
            std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::erase(v2, v12, v11);
            std::deque<wil::com_ptr_t<CManipulation,wil::err_returncode_policy>>::_Emplace_front_internal<wil::com_ptr_t<CManipulation,wil::err_returncode_policy> const &>(
              v2,
              &v13);
            goto LABEL_20;
          }
          break;
        }
        ++i;
      }
      for ( i = 0LL; i < *((_QWORD *)this + 13); ++i )
      {
        v7 = (__int64 *)(*(_QWORD *)(*((_QWORD *)this + 10)
                                   + 8 * ((*((_QWORD *)this + 11) - 1LL) & ((i + *((_QWORD *)this + 12)) >> 1)))
                       + 8LL * (((_DWORD)i + *((_DWORD *)this + 24)) & 1));
        v8 = *(_DWORD *)(*v7 + 428);
        if ( v8 == 2 || (unsigned int)(v8 - 3) <= 1 )
        {
          wil::com_ptr_t<IBitmapSource,wil::err_returncode_policy>::operator=<CSystemMemoryBitmap,wil::err_returncode_policy,void>(
            &v13,
            v7);
          if ( !v13 )
            break;
          goto LABEL_16;
        }
      }
LABEL_20:
      wil::com_ptr_t<ID3D11Resource,wil::err_returncode_policy>::~com_ptr_t<ID3D11Resource,wil::err_returncode_policy>(&v13);
    }
    ActiveManipulation = InteractionSourceManager::TryGetActiveManipulation(this);
    (*(void (__fastcall **)(__int64, struct CManipulation *))(*(_QWORD *)v4 + 288LL))(v4, ActiveManipulation);
    *((_BYTE *)this + 112) = 0;
  }
}
