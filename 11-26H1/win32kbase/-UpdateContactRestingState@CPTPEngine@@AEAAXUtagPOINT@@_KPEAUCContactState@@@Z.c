/*
 * XREFs of ?UpdateContactRestingState@CPTPEngine@@AEAAXUtagPOINT@@_KPEAUCContactState@@@Z @ 0x140132DC8
 * Callers:
 *     ?UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNode@@@Z @ 0x1401B2030 (-UpdateTPStateIndicator@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUCContactState@@PEAUPTPEnginePointerNo.c)
 * Callees:
 *     ?AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z @ 0x140132C34 (-AreTheseTwoContactsAPan@CPTPEngine@@AEAAHPEBUCContactState@@0@Z.c)
 *     ?SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z @ 0x140132FF4 (-SetContactRestingState@CPTPEngine@@AEAAXPEAUCContactState@@_N@Z.c)
 */

void __fastcall CPTPEngine::UpdateContactRestingState(
        CPTPEngine *this,
        struct tagPOINT a2,
        __int64 a3,
        struct CContactState *a4)
{
  unsigned __int64 v4; // r11
  int v6; // esi
  __int64 v8; // r10
  __int64 v9; // rcx
  int v10; // eax
  int v13; // r9d
  bool v14; // di
  char v15; // r8
  int v16; // r15d
  struct CContactState *v17; // r8
  __int64 v18; // rax
  int v19; // esi
  unsigned int v20; // ecx
  LONG y; // [rsp+5Ch] [rbp+14h]

  y = a2.y;
  v4 = *((_QWORD *)a4 + 8);
  v6 = *(_DWORD *)a4;
  v8 = a3 - *((_QWORD *)a4 + 11);
  v9 = a3 - v4;
  v10 = *((_DWORD *)this + 706);
  v13 = -__CFSHR__(*(_DWORD *)a4, 9);
  v14 = 0;
  if ( v10 == 3 || (v15 = 0, v10 == 6) )
    v15 = 1;
  if ( (v6 & 0x200) != 0 )
    goto LABEL_4;
  if ( !v9 )
    goto LABEL_24;
  if ( *((_DWORD *)a4 + 36) )
  {
LABEL_4:
    if ( v9 )
      goto LABEL_5;
LABEL_24:
    if ( !v15 && !*((_DWORD *)this + 6) )
      v14 = 1;
    goto LABEL_21;
  }
  v6 |= 0x200u;
  *(_DWORD *)a4 = v6;
LABEL_5:
  if ( 10 * v8 >= *((_QWORD *)this + 12) * (unsigned __int64)*((unsigned int *)this + 783) / 0x3E8 )
  {
    v16 = 0;
    if ( (v6 & 0x400) != 0 )
    {
      v19 = 0;
    }
    else if ( v15 )
    {
      v19 = -__CFSHR__(v6, 12);
    }
    else
    {
      if ( *((_DWORD *)this + 706) == 2 )
      {
        if ( v13 )
        {
          v17 = (CPTPEngine *)((char *)this + 328 * *((unsigned int *)this + 696) + 816);
          if ( a4 != v17
            && (*(_DWORD *)v17 & 0x100) == 0
            && (a2.y >= *((_DWORD *)this + 753) || v4 < *((_QWORD *)v17 + 12))
            && !(unsigned int)CPTPEngine::AreTheseTwoContactsAPan(this, a4, v17) )
          {
            v16 = 1;
          }
        }
      }
      if ( (v6 & 0x200) != 0 )
        v18 = *((unsigned int *)a4 + 36);
      else
        v18 = 0LL;
      v19 = v16;
      if ( (int)((HIDWORD(*(_QWORD *)((char *)a4 + 8 * v18 + 148)) - y)
               * (HIDWORD(*(_QWORD *)((char *)a4 + 8 * v18 + 148)) - y)
               + (*(_QWORD *)((char *)a4 + 8 * v18 + 148) - a2.x) * (*(_QWORD *)((char *)a4 + 8 * v18 + 148) - a2.x)) <= (unsigned __int64)*((unsigned int *)this + 782) )
        v19 = 1;
    }
    v14 = v19 != 0;
LABEL_21:
    CPTPEngine::SetContactRestingState(this, a4, v14);
    *(struct tagPOINT *)((char *)a4 + 8 * *((unsigned int *)a4 + 36) + 148) = a2;
    v20 = *((_DWORD *)a4 + 36) + 1;
    *((_QWORD *)a4 + 11) = a3;
    *((_DWORD *)a4 + 36) = v20 % 0xA;
  }
}
