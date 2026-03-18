/*
 * XREFs of ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x14014B2E4
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CA76C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::FindContactToBreakSuperCurtains(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3)
{
  unsigned int v3; // r12d
  _DWORD *v4; // rsi
  unsigned int v5; // r11d
  unsigned int i; // edi
  struct CContactState *v9; // rbx
  int v10; // r8d
  int v11; // edx
  unsigned __int64 v12; // r13

  v3 = *((_DWORD *)a2 + 12);
  v4 = (_DWORD *)((char *)a2 + 60);
  v5 = 0;
  for ( i = 0; i < v3; ++i )
  {
    v9 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*v4 % *((_DWORD *)this + 4)) + 816);
    if ( a3 != v9 && (*(_DWORD *)v9 & 0x40000000) != 0 && ((*(_DWORD *)v9 & 1) != 0 || *((_DWORD *)v9 + 57) == 1) )
    {
      v10 = HIDWORD(*((_QWORD *)v9 + 4)) - HIDWORD(*((_QWORD *)a3 + 4));
      v11 = *((_QWORD *)v9 + 4) - *((_QWORD *)a3 + 4);
      v12 = v10 * v10 + v11 * v11;
      if ( (v12 <= *((unsigned int *)this + 804) || v12 <= *((unsigned int *)this + 805))
        && *(_QWORD *)a2 - *((_QWORD *)v9 + 9) < *((_QWORD *)this + 12)
                                               * (unsigned __int64)*((unsigned int *)this + 786)
                                               / 0x3E8 )
      {
        return 1;
      }
    }
    v4 += 24;
  }
  return v5;
}
