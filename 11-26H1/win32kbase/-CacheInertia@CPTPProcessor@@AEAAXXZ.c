/*
 * XREFs of ?CacheInertia@CPTPProcessor@@AEAAXXZ @ 0x140126090
 * Callers:
 *     ?EndInertia@CPTPProcessor@@AEAAXXZ @ 0x14019FDF0 (-EndInertia@CPTPProcessor@@AEAAXXZ.c)
 *     ?OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z @ 0x1401AFE10 (-OnEngineOutput@CPTPProcessor@@UEAAXPEBUPTPEngineOutput@@@Z.c)
 * Callees:
 *     HMValidateHandleNoSecure @ 0x14006E810 (HMValidateHandleNoSecure.c)
 *     ?QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z @ 0x140126220 (-QueryInertia@CInertiaManager@@QEBAPEBUINERTIA_INFO_INTERNAL@@UtagPOINT@@W4INERTIA_SOURCE@@@Z.c)
 *     ?HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z @ 0x140126404 (-HandlePTPInertiaTimer@CHidInput@@QEAAX_NKPEAX@Z.c)
 *     ?InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z @ 0x140126480 (-InvalidateInertiaInfo@CInertiaManager@@QEAA_N_K0@Z.c)
 *     ?TransformTPScreenToHimetric@CPTPProcessor@@CA?AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z @ 0x140126618 (-TransformTPScreenToHimetric@CPTPProcessor@@CA-AUtagPOINT@@PEAUtagHID_POINTER_DEVICE_INFO@@U2@@Z.c)
 */

void __fastcall CPTPProcessor::CacheInertia(CPTPProcessor *this, __int64 a2)
{
  __int64 v3; // rax
  int v4; // edx
  int v5; // ecx
  int v6; // r8d
  struct tagHID_POINTER_DEVICE_INFO *v7; // rbp
  CInertiaManager *v8; // rsi
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  __int64 UserSessionState; // rax
  unsigned __int64 *Inertia; // rax
  int v14; // ecx
  unsigned __int64 *v15; // rdi
  __int64 v16; // rdx
  int v17; // ecx
  int v18; // r8d
  struct tagPOINT *v19; // rax
  struct tagPOINT v20; // rax
  int v21; // edx
  int v22; // ecx
  int v23; // r8d
  __int64 v24; // rax

  LOBYTE(a2) = 19;
  v3 = HMValidateHandleNoSecure(*((_QWORD *)this + 66), a2);
  if ( v3 )
  {
    v7 = *(struct tagHID_POINTER_DEVICE_INFO **)(v3 + 456);
    v8 = (CInertiaManager *)(W32GetUserSessionState(v5, v4, v6) + 16912);
    UserSessionState = W32GetUserSessionState(v10, v9, v11);
    Inertia = (unsigned __int64 *)CInertiaManager::QueryInertia(v8, *(_QWORD *)(UserSessionState + 19216), 15LL);
    v15 = Inertia;
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
      v16 = *(_QWORD *)(W32GetUserSessionState(v14, (int)Inertia + 128, (int)this + 304) + 19216);
      *((_QWORD *)this + 46) = v16;
      v19 = (struct tagPOINT *)W32GetUserSessionState(v17, v16, v18);
      v20 = CPTPProcessor::TransformTPScreenToHimetric(v7, v19[2402]);
      *((_DWORD *)this + 97) |= 1u;
      *((struct tagPOINT *)this + 47) = v20;
      v24 = W32GetUserSessionState(v22, v21, v23);
      CHidInput::HandlePTPInertiaTimer(*(CHidInput **)(v24 + 16832), 0, 0x32u, *((void **)this + 66));
      *((_BYTE *)this + 392) = 1;
      CInertiaManager::InvalidateInertiaInfo(v8, *v15, v15[1]);
    }
  }
}
