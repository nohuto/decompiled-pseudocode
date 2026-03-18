/*
 * XREFs of ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x1400D9F58
 * Callers:
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x14018ADE0 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14021116C (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x140067260 (HMValidateHandleNoSecure.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x1400DA130 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x1400DA5A4 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x1400DA804 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x1400DA8D0 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 */

void __fastcall CPTPProcessor::CacheInertia(CPTPProcessor *this)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  struct tagHID_POINTER_DEVICE_INFO *v5; // rbp
  __int64 UserSessionState; // rbx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  unsigned __int64 *Inertia; // rax
  __int64 v11; // rcx
  unsigned __int64 *v12; // rsi
  __int64 v13; // rdx
  __int64 v14; // rcx
  struct tagPOINT *v15; // rax
  struct tagPOINT v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rax

  v2 = HMValidateHandleNoSecure(*((_QWORD *)this + 66), 19);
  if ( v2 )
  {
    v5 = *(struct tagHID_POINTER_DEVICE_INFO **)(v2 + 456);
    UserSessionState = W32GetUserSessionState(v4, v3);
    v9 = W32GetUserSessionState(v8, v7);
    Inertia = (unsigned __int64 *)CInertiaManager::QueryInertia(UserSessionState + 16920, *(_QWORD *)(v9 + 19184), 15LL);
    v12 = Inertia;
    if ( Inertia )
    {
      *((_OWORD *)this + 11) = *(_OWORD *)Inertia;
      *((_OWORD *)this + 12) = *((_OWORD *)Inertia + 1);
      *((_OWORD *)this + 13) = *((_OWORD *)Inertia + 2);
      *((_OWORD *)this + 14) = *((_OWORD *)Inertia + 3);
      *((_OWORD *)this + 15) = *((_OWORD *)Inertia + 4);
      *((_OWORD *)this + 16) = *((_OWORD *)Inertia + 5);
      *((_OWORD *)this + 17) = *((_OWORD *)Inertia + 6);
      *((_OWORD *)this + 18) = *((_OWORD *)Inertia + 7);
      *((_OWORD *)this + 19) = *((_OWORD *)Inertia + 8);
      *((_OWORD *)this + 20) = *((_OWORD *)Inertia + 9);
      *((_OWORD *)this + 21) = *((_OWORD *)Inertia + 10);
      *((_OWORD *)this + 22) = *((_OWORD *)Inertia + 11);
      v13 = *(_QWORD *)(W32GetUserSessionState(v11, Inertia + 16) + 19184);
      *((_QWORD *)this + 46) = v13;
      v15 = (struct tagPOINT *)W32GetUserSessionState(v14, v13);
      v16 = CPTPProcessor::TransformTPScreenToHimetric(v5, v15[2398]);
      *((_DWORD *)this + 97) |= 1u;
      *((struct tagPOINT *)this + 47) = v16;
      v19 = W32GetUserSessionState(v18, v17);
      CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(v19 + 16840), 0, 0x32u, *((void **)this + 66));
      *((_BYTE *)this + 392) = 1;
      CInertiaManager::InvalidateInertiaInfo((CInertiaManager *)(UserSessionState + 16920), *v12, v12[1]);
    }
  }
}
