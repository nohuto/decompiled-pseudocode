/*
 * XREFs of _lambda_c192c8e12fd8d97ede3f075e8e800885_::operator() @ 0x18015C720
 * Callers:
 *     ?OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcessorInitialState@@@Z @ 0x180085720 (-OnHitTest@ShellGesturesProcessor@@UEAAJPEAUHitTestInfo@@PEAVInputContext@@PEAUContextualProcess.c)
 * Callees:
 *     ??0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z @ 0x18002752C (--0Lock@Bamo@Microsoft@@QEAA@PEAVBaseBamoConnection@12@@Z.c)
 *     ??1Lock@Bamo@Microsoft@@QEAA@XZ @ 0x1800276A8 (--1Lock@Bamo@Microsoft@@QEAA@XZ.c)
 *     ?GetSuppressionRegions@BamoShellGesturesClientProxy@@UEAAXPEAPEBUtagRECT@@PEAI@Z @ 0x18015CDF0 (-GetSuppressionRegions@BamoShellGesturesClientProxy@@UEAAXPEAPEBUtagRECT@@PEAI@Z.c)
 */

// Hidden C++ exception states: #wind=1
char __fastcall lambda_c192c8e12fd8d97ede3f075e8e800885_::operator()(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  struct Microsoft::Bamo::BaseBamoConnection *v6; // rdx
  int v7; // ebx
  Microsoft::BamoImpl::BamoImplObject *v9[3]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v10; // [rsp+40h] [rbp+8h] BYREF
  struct tagRECT *v11; // [rsp+50h] [rbp+18h] BYREF

  v10 = a1;
  if ( *(_DWORD *)a3 == 0x1000000 )
    return 0;
  v11 = 0LL;
  LODWORD(v10) = 0;
  v5 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 32) + 24LL) + 32LL);
  if ( *(int *)(v5 + 8) <= 0 )
    v6 = 0LL;
  else
    v6 = *(struct Microsoft::Bamo::BaseBamoConnection **)(v5 + 16);
  Microsoft::Bamo::Lock::Lock(v9, v6);
  BamoShellGesturesClientProxy::GetSuppressionRegions(
    (BamoShellGesturesClientProxy *)(a2 + 8),
    (const struct tagRECT **)&v11,
    (unsigned int *)&v10);
  v7 = 0;
  if ( !(_DWORD)v10 )
  {
LABEL_8:
    Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
    return 0;
  }
  while ( !PtInRect(&v11[v7], *(POINT *)(a3 + 44)) )
  {
    if ( ++v7 == (_DWORD)v10 )
      goto LABEL_8;
  }
  Microsoft::Bamo::Lock::~Lock((Microsoft::Bamo::Lock *)v9);
  return 1;
}
