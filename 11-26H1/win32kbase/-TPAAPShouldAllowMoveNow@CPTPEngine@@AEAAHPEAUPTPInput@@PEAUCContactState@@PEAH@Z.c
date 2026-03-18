/*
 * XREFs of ?TPAAPShouldAllowMoveNow@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAH@Z @ 0x140133B30
 * Callers:
 *     ?DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1401047BC (-DoTPMouseProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14024BC70 (_guard_dispatch_icall.c)
 */

__int64 __fastcall CPTPEngine::TPAAPShouldAllowMoveNow(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        int *a4)
{
  int v7; // r12d
  int v8; // r14d
  __int64 v9; // r11
  int v10; // ebp
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // r13d
  __int64 v14; // rax
  unsigned int v15; // r10d
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // r10
  signed __int64 v20; // r11
  int v21; // r9d
  signed __int64 v22; // r10
  int v23; // ecx

  if ( (*(_DWORD *)a3 & 0x1000) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = 1;
    if ( (*(_DWORD *)a3 & 0x100) != 0 )
    {
      v8 = 1;
      goto LABEL_4;
    }
  }
  v8 = 0;
LABEL_4:
  v9 = *(_QWORD *)a2;
  v10 = 0;
  v11 = 0LL;
  v12 = 0LL;
  v13 = 32;
  if ( *((_DWORD *)this + 5) && (v14 = *((int *)this + 43), (_DWORD)v14) )
  {
    v11 = *((_QWORD *)a2 + 1);
    v15 = *((_DWORD *)this + v14 + 827);
    v12 = *((_QWORD *)a2 + 2);
    if ( v11 > 0 )
    {
      v16 = *((_QWORD *)this + 12);
      if ( v12 <= v11 )
      {
        v15 = *((_DWORD *)this + 842);
        v17 = v9 - v11;
      }
      else
      {
        v17 = v9 - v12;
      }
      if ( (__int64)(1000 * v17 / v16) < v15 )
        v10 = 1;
    }
  }
  else
  {
    v13 = 0;
  }
  v18 = *((_QWORD *)this + 12);
  *((_DWORD *)this + 193) = 1;
  *((_DWORD *)this + 194) = 0;
  *((_DWORD *)this + 195) = 1000 * v11 / v18;
  *((_DWORD *)this + 196) = 1000 * v12 / v18;
  *((_DWORD *)this + 197) = 1000 * v9 / v18;
  *((_DWORD *)this + 198) = v10;
  *((_DWORD *)this + 199) = v13;
  (*(void (__fastcall **)(_QWORD, char *))(**((_QWORD **)this + 1) + 8LL))(*((_QWORD *)this + 1), (char *)this + 772);
  *(_OWORD *)((char *)this + 772) = 0LL;
  *(_OWORD *)((char *)this + 788) = 0LL;
  if ( *((_DWORD *)this + 706) != 2 )
  {
    if ( v8 && (*(_DWORD *)a3 & 0x2000) != 0 )
      return 0LL;
    v19 = *((_QWORD *)this + 12);
    v20 = 1000LL * (*(_QWORD *)a2 - *((_QWORD *)a3 + 8)) / v19;
    if ( *((_DWORD *)this + 5) )
      v21 = *((_DWORD *)this + 43);
    else
      v21 = 0;
    v22 = 1000LL * (*(_QWORD *)a2 - *((_QWORD *)this + 380)) / v19;
    if ( v7 || v20 < *((unsigned int *)this + v21 + 827) )
    {
      v23 = 0;
      if ( v7 )
        goto LABEL_17;
    }
    else
    {
      v23 = 1;
    }
    if ( v22 <= *((unsigned int *)this + 843) || v23 )
      return 1LL;
LABEL_17:
    if ( !v10 )
      return 1LL;
    goto LABEL_26;
  }
  if ( !v8 || !v10 )
    return 1LL;
  *a4 = 1;
LABEL_26:
  *(_DWORD *)a3 |= 0x2000u;
  return 0LL;
}
