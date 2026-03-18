/*
 * XREFs of ?TPAAPShouldAllowNow@CPTPEngine@@AEAAHPEAUPTPInput@@KH@Z @ 0x140135B6C
 * Callers:
 *     ?HandleButtonSuppression@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x14010325C (-HandleButtonSuppression@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140103D7C (-ProcessInputFrame@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 *     ?HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z @ 0x140226DF4 (-HandleTap@CPTPEngine@@AEAAXPEAUPTPInput@@PEAUPTPEnginePointerNode@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowNow(CPTPEngine *this, struct PTPInput *a2, int a3, int a4)
{
  __int64 v4; // r15
  unsigned int v5; // edi
  int v9; // esi
  __int64 v10; // rbp
  __int64 v11; // r14
  __int64 v12; // rdx
  int v13; // r8d
  int v14; // ecx
  __int64 v15; // rax
  unsigned int v16; // r9d
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  _OWORD *v19; // rbx

  v4 = *(_QWORD *)a2;
  v5 = 0;
  v9 = 0;
  v10 = 0LL;
  v11 = 0LL;
  if ( !*((_DWORD *)this + 5) )
  {
    LODWORD(v12) = 0;
LABEL_16:
    v13 = 0;
    LOBYTE(v9) = (_DWORD)v12 == 4;
    goto LABEL_15;
  }
  v12 = *((int *)this + 43);
  if ( !(_DWORD)v12 || (_DWORD)v12 == 4 && a4 )
    goto LABEL_16;
  v13 = a3 & 2;
  if ( v13 && (*((_DWORD *)this + 768) & 0x8000) != 0 )
  {
    v9 = 1;
  }
  else
  {
    v13 = a3;
    v14 = a3 & 0x6C;
    if ( (a3 & 0x6C) != 0 )
    {
      v15 = 3308LL;
      if ( v14 != 32 )
        v15 = 3288LL;
      v16 = *(_DWORD *)((char *)this + 4 * v12 + v15);
      if ( v14 == 64 )
        v16 = *((_DWORD *)this + v12 + 832);
      v10 = *((_QWORD *)a2 + 1);
      v13 = a3;
      v11 = *((_QWORD *)a2 + 2);
      if ( v10 > 0 )
      {
        if ( v11 <= v10 )
        {
          v16 = *((_DWORD *)this + 842);
          v17 = v4 - v10;
        }
        else
        {
          v17 = v4 - v11;
        }
        v13 = a3;
        if ( (__int64)((unsigned __int64)(1000 * v17) / *((_QWORD *)this + 12)) < v16 )
        {
          v9 = 1;
          v13 = a3 & 0x6C;
        }
      }
    }
  }
LABEL_15:
  v18 = *((_QWORD *)this + 12);
  v19 = (_OWORD *)((char *)this + 772);
  *((_DWORD *)this + 193) = 1;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 195) = 1000 * v10 / v18;
  *((_DWORD *)this + 196) = 1000 * v11 / v18;
  *((_DWORD *)this + 197) = 1000 * v4 / v18;
  *((_DWORD *)this + 198) = v9;
  *((_DWORD *)this + 199) = v13;
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1), (char *)this + 772);
  *v19 = 0LL;
  LOBYTE(v5) = v9 == 0;
  v19[1] = 0LL;
  return v5;
}
