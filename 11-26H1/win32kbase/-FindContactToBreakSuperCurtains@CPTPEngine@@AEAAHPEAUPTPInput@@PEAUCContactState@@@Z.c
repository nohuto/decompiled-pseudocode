/*
 * XREFs of ?FindContactToBreakSuperCurtains@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@@Z @ 0x14017B56C
 * Callers:
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::FindContactToBreakSuperCurtains(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3)
{
  _DWORD *v3; // r14
  unsigned int v4; // ebx
  unsigned int i; // esi
  struct CContactState *v7; // rdi
  __int64 v8; // rax
  __int64 v9; // r9
  int v10; // ecx
  unsigned __int64 v11; // r11
  unsigned __int64 v12; // r9

  v3 = (_DWORD *)((char *)a2 + 60);
  v4 = 0;
  for ( i = 0; i < *((_DWORD *)a2 + 12); ++i )
  {
    v7 = (CPTPEngine *)((char *)this + 328 * (unsigned int)(*v3 % *((_DWORD *)this + 4)) + 816);
    if ( a3 != v7 && (*(_DWORD *)v7 & 0x20000000) != 0 && ((*(_DWORD *)v7 & 1) != 0 || *((_DWORD *)v7 + 57) == 1) )
    {
      v8 = *((_QWORD *)a3 + 4);
      v9 = *((_QWORD *)v7 + 4);
      v10 = v9 - v8;
      LODWORD(v9) = (HIDWORD(v9) - HIDWORD(v8)) * (HIDWORD(v9) - HIDWORD(v8));
      v11 = (int)(v9 + (*((_QWORD *)v7 + 4) - v8) * (*((_QWORD *)v7 + 4) - v8));
      v12 = (int)v9 + v10 * v10;
      if ( (v11 <= *((unsigned int *)this + 801) || v12 <= *((unsigned int *)this + 802))
        && *(_QWORD *)a2 - *((_QWORD *)v7 + 9) < *((_QWORD *)this + 12)
                                               * (unsigned __int64)*((unsigned int *)this + 784)
                                               / 0x3E8 )
      {
        return 1;
      }
    }
    v3 += 24;
  }
  return v4;
}
