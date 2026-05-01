/*
 * XREFs of ?ChangeLayoutEnvironment@TabletModePositionerOperation@@UEAAJAEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x180503E10
 * Callers:
 *     <none>
 * Callees:
 *     ?TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z @ 0x180022890 (-TryEnterOnCurrentThread@CObjectWithThreadUseDetection@@IEAAJW4ThreadUseFailureResponse@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180034A0C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1CThreadUseDetector@@QEAA@XZ @ 0x180136308 (--1CThreadUseDetector@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D2210 (__security_check_cookie.c)
 *     ?_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z @ 0x18069CEEC (-_FinalizeLayout@CAppLayoutOperation@@IEAAJW4FinalizeLayoutFlags@@@Z.c)
 *     ?_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z @ 0x18069D2FC (-_HandleNormalLayoutEnvChange@CAppLayoutOperation@@IEAAJPEBULAYOUT_ENVIRONMENT_DETAILS@@@Z.c)
 *     ?_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z @ 0x18069D908 (-_VerifyAndPrepareLayout@CAppLayoutOperation@@IEAAJPEAUIAppLayout@@_N@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1806E1010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TabletModePositionerOperation::ChangeLayoutEnvironment(
        TabletModePositionerOperation *this,
        const struct LAYOUT_ENVIRONMENT_DETAILS *a2)
{
  int v4; // eax
  int v5; // ebx
  unsigned __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // rdx
  signed __int64 v10; // [rsp+20h] [rbp-40h] BYREF
  int v11; // [rsp+28h] [rbp-38h]
  __int128 v12; // [rsp+30h] [rbp-30h] BYREF
  __int128 v13; // [rsp+40h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+18h]

  v10 = ((unsigned __int64)this + 16) & -(__int64)(this != (TabletModePositionerOperation *)176);
  v11 = CObjectWithThreadUseDetection::TryEnterOnCurrentThread(v10, 1);
  v4 = CAppLayoutOperation::_VerifyAndPrepareLayout((TabletModePositionerOperation *)((char *)this - 152), 0LL, 0);
  v5 = v4;
  if ( v4 < 0 )
  {
    v6 = (unsigned int)v4;
    v7 = 246LL;
    goto LABEL_11;
  }
  v12 = 0LL;
  v13 = 0LL;
  v14 = 0LL;
  (*(void (__fastcall **)(_QWORD, __int128 *))(**((_QWORD **)this - 15) + 24LL))(*((_QWORD *)this - 15), &v12);
  if ( *((_DWORD *)a2 + 2) - *(_DWORD *)a2 == DWORD2(v12) - (_DWORD)v12
    && *((_DWORD *)a2 + 3) - *((_DWORD *)a2 + 1) == HIDWORD(v12) - DWORD1(v12)
    && *((_DWORD *)a2 + 4) == (_DWORD)v13 )
  {
    (*(void (__fastcall **)(_QWORD, const struct LAYOUT_ENVIRONMENT_DETAILS *))(**((_QWORD **)this - 14) + 216LL))(
      *((_QWORD *)this - 14),
      a2);
    v8 = 0LL;
LABEL_8:
    v5 = CAppLayoutOperation::_FinalizeLayout((char *)this - 152, v8);
    goto LABEL_9;
  }
  v5 = CAppLayoutOperation::_HandleNormalLayoutEnvChange((TabletModePositionerOperation *)((char *)this - 152), a2);
  v8 = 2LL;
  if ( v5 >= 0 )
    goto LABEL_8;
LABEL_9:
  if ( v5 >= 0 )
  {
    *((_DWORD *)this - 18) = 33;
    v5 = 0;
    goto LABEL_13;
  }
  v6 = (unsigned int)v5;
  v7 = 251LL;
LABEL_11:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\tabletmode\\lib\\tabletmodepositioneroperation.cpp",
    (const char *)v6);
LABEL_13:
  CThreadUseDetector::~CThreadUseDetector((LPCRITICAL_SECTION *)&v10);
  return (unsigned int)v5;
}
