/*
 * XREFs of ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x14010D4A0
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x140104E48 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x14010DA60 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::IsRCZClick(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT **a4)
{
  unsigned int v4; // ebx
  CPTPEngine *v7; // r10
  unsigned int v9; // eax
  unsigned int v10; // r12d
  struct tagPOINT *v11; // r8
  __int64 v12; // rsi
  __int64 v13; // rdi
  struct CContactState *v14; // r14
  __int64 v15; // r9
  __int64 v16; // rcx
  __int64 v17; // r9
  unsigned __int64 v18; // r11
  BOOL v19; // eax
  unsigned __int64 v20; // rdx
  bool v21; // cl
  int v22; // [rsp+20h] [rbp-18h]

  v4 = 0;
  v7 = this;
  if ( !*((_DWORD *)this + 42) )
    return 0LL;
  v9 = *((_DWORD *)a2 + 12);
  if ( v9 )
  {
    v10 = *((_DWORD *)this + 4);
    v11 = (struct tagPOINT *)((char *)a2 + 96);
    v12 = v9;
    do
    {
      v13 = 328LL * (v11[-5].y % v10);
      v14 = (CPTPEngine *)((char *)v7 + v13 + 816);
      v15 = *(unsigned int *)v14;
      if ( (v15 & 0x20000000) != 0 )
      {
        v19 = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))PtInRect)(
                              (char *)v7 + 3008,
                              *v11,
                              v11,
                              v15,
                              v22)
           && (unsigned int)PtInRect(v16, *(_QWORD *)((char *)v7 + v13 + 848), v11, v17, v22);
        if ( (v17 & 1) != 0 )
          v19 = v19 && (v17 & 0x40) == 0 && (v17 & 0x10000000) == 0;
        v20 = *(_QWORD *)((char *)v7 + v13 + 888);
        v21 = v20 > v18 || v20 == v18 && v19;
        if ( a3 )
          v21 = v14 == a3;
        if ( v21 )
        {
          *a4 = v11;
          v4 = v19;
        }
      }
      v11 += 12;
      --v12;
    }
    while ( v12 );
  }
  return v4;
}
