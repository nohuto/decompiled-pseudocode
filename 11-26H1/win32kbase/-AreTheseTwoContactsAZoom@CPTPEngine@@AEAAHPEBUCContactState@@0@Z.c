/*
 * XREFs of ?AreTheseTwoContactsAZoom@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x1401329C4
 * Callers:
 *     ?FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z @ 0x140132AAC (-FindGestureAndMarkGesturingContactsAsNonResting@CPTPEngine@@AEAAXPEBUPTPInput@@@Z.c)
 * Callees:
 *     ?ndotprod@@YA_NHHHHPEAN@Z @ 0x140132D00 (-ndotprod@@YA_NHHHHPEAN@Z.c)
 */

__int64 __fastcall CPTPEngine::AreTheseTwoContactsAZoom(
        CPTPEngine *this,
        const struct CContactState *a2,
        const struct CContactState *a3)
{
  unsigned int v3; // ebx
  _DWORD *v4; // r9
  int v8; // r10d
  __int64 v9; // rcx
  __int64 v11; // rdx
  int v12; // ecx
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  double v16; // [rsp+58h] [rbp+20h] BYREF

  v3 = 0;
  v4 = (_DWORD *)((char *)this + 820);
  v8 = 0;
  v9 = 6LL;
  do
  {
    if ( (*(v4 - 1) & 1) != 0 && (*v4 & 1) != 0 )
      ++v8;
    v4 += 82;
    --v9;
  }
  while ( v9 );
  if ( v8 != 2 )
    return 0LL;
  if ( *((_DWORD *)this + 706) != 1 )
    return 0LL;
  v11 = *((_QWORD *)a2 + 1);
  v12 = v11 - *((_DWORD *)a2 + 4);
  v13 = HIDWORD(v11) - *((_DWORD *)a2 + 5);
  v14 = *((_QWORD *)a3 + 1) - *((_DWORD *)a3 + 4);
  v15 = HIDWORD(*((_QWORD *)a3 + 1)) - *((_DWORD *)a3 + 5);
  if ( !v12 && !v13 )
    return 0LL;
  if ( !v14 && !v15 )
    return 0LL;
  v16 = 0.0;
  if ( ndotprod(v12, v13, v14, v15, &v16) && *((double *)this + 368) >= v16 )
    return 1;
  return v3;
}
