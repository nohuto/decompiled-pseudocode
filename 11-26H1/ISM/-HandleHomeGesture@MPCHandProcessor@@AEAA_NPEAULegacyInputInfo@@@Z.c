/*
 * XREFs of ?HandleHomeGesture@MPCHandProcessor@@AEAA_NPEAULegacyInputInfo@@@Z @ 0x1800BFF00
 * Callers:
 *     ?Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x1800C0E40 (-Process3DInput@MPCHandProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     ?UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z @ 0x180024D74 (-UpdateState@MPCButtonHoldHelper@@QEAAX_N_K@Z.c)
 *     _lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_ @ 0x1800B99A8 (_lambda_cc14c4b3090cc7c63243ed8c77095553_--_lambda_cc14c4b3090cc7c63243ed8c77095553_.c)
 *     _lambda_152589ecad8ae636cc0bdcee60e887b4_::operator() @ 0x1800BF6E0 (_lambda_152589ecad8ae636cc0bdcee60e887b4_--operator().c)
 *     _lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator() @ 0x1800BF738 (_lambda_a8ea4032c7598feaa37b761b815ce0d1_--operator().c)
 */

char __fastcall MPCHandProcessor::HandleHomeGesture(MPCHandProcessor *this, struct LegacyInputInfo *a2)
{
  __int64 v3; // rdx
  struct LegacyInputInfo *v4; // r8
  char v6; // al
  char v7; // cl
  bool v8; // al
  __int64 v9[2]; // [rsp+20h] [rbp-28h] BYREF
  _QWORD *v10[3]; // [rsp+30h] [rbp-18h] BYREF
  struct LegacyInputInfo *v11; // [rsp+58h] [rbp+10h] BYREF

  v11 = a2;
  lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_(v10, (__int64)this, (__int64)&v11);
  lambda_cc14c4b3090cc7c63243ed8c77095553_::_lambda_cc14c4b3090cc7c63243ed8c77095553_(v9, v3, (__int64)&v11);
  v4 = v11;
  if ( (*(_DWORD *)v11 & 0x662600) == 0 )
    goto LABEL_8;
  if ( *((_DWORD *)v11 + 16) == 9 )
  {
    lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator()(v10, 4u);
    if ( *((_BYTE *)this + 9712) )
    {
      *((_BYTE *)this + 9712) = 0;
      lambda_152589ecad8ae636cc0bdcee60e887b4_::operator()(v9);
    }
    return 1;
  }
  if ( *((_DWORD *)v11 + 16) == 11 )
    v6 = 1;
  else
LABEL_8:
    v6 = 0;
  v7 = *((_BYTE *)this + 9712);
  if ( v7 != v6 || v7 && *((_DWORD *)this + 2429) != *((_DWORD *)v11 + 272) )
  {
    v8 = (*(_DWORD *)v11 & 0x662600) != 0 && *((_DWORD *)v11 + 16) == 11;
    *((_BYTE *)this + 9712) = v8;
    *((_DWORD *)this + 2429) = *((_DWORD *)v4 + 272);
    lambda_152589ecad8ae636cc0bdcee60e887b4_::operator()(v9);
    v4 = v11;
  }
  MPCButtonHoldHelper::UpdateState(
    *((MPCButtonHoldHelper **)this + 461),
    *((_DWORD *)v4 + 303) == 16,
    *((_QWORD *)v4 + 2));
  if ( *((_BYTE *)this + 9720) && *(_BYTE *)(*((_QWORD *)this + 461) + 10LL) )
  {
    lambda_a8ea4032c7598feaa37b761b815ce0d1_::operator()(v10, 8u);
    return 1;
  }
  return 0;
}
