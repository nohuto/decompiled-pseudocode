/*
 * XREFs of ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x140132C34
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x140132AAC (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 *     ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x140132DC8 (-UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x140132D00 (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAPan(
        CPTPEngine *this,
        const struct CContactState *a2,
        const struct CContactState *a3)
{
  __int64 v3; // r10
  __int64 v7; // rdx
  __int64 v8; // r9
  unsigned int v9; // ebx
  int v10; // ecx
  int v11; // r10d
  int v12; // r8d
  int v13; // r9d
  double v15; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)a2 + 1);
  v7 = *((_QWORD *)a2 + 2);
  v8 = *((_QWORD *)a3 + 1);
  if ( (int)((v7 - *((_QWORD *)a3 + 2)) * (v7 - *((_QWORD *)a3 + 2))
           + (HIDWORD(v7) - HIDWORD(*((_QWORD *)a3 + 2))) * (HIDWORD(v7) - HIDWORD(*((_QWORD *)a3 + 2)))) > (unsigned __int64)*((unsigned int *)this + 801) )
    return 0LL;
  v9 = 0;
  v10 = v3 - *((_DWORD *)a2 + 4);
  v11 = HIDWORD(v3) - *((_DWORD *)a2 + 5);
  v12 = v8 - *((_DWORD *)a3 + 4);
  v13 = HIDWORD(v8) - *((_DWORD *)a3 + 5);
  if ( !v10 && !v11 )
    return 0LL;
  if ( !v12 && !v13 )
    return 0LL;
  v15 = 0.0;
  if ( ndotprod(v10, v11, v12, v13, &v15) && v15 >= *((double *)this + 367) )
    return 1;
  return v9;
}
