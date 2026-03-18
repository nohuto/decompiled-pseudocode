/*
 * XREFs of ?IsRCZClick@CPTPEngine@@AEAAHPEAUPTPInput@@PEAUCContactState@@PEAPEAUtagPOINT@@@Z @ 0x1400DCCF0
 * Callers:
 *     ?DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400CB7E8 (-DoTPButtonAndDragProcessing@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     PtInRect @ 0x1400DCE04 (PtInRect.c)
 */

__int64 __fastcall CPTPEngine::IsRCZClick(
        CPTPEngine *this,
        struct PTPInput *a2,
        struct CContactState *a3,
        struct tagPOINT **a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // rbx
  CPTPEngine *v8; // r11
  unsigned int v9; // eax
  unsigned int v10; // r15d
  struct tagPOINT *v11; // r9
  __int64 v12; // rsi
  __int64 v13; // rcx
  int v14; // r8d
  struct CContactState *v15; // r10
  BOOL v16; // eax
  unsigned __int64 v17; // rdx
  bool v18; // cl

  v4 = 0;
  v5 = 0LL;
  v8 = this;
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
      if ( (*((_DWORD *)v8 + 82 * (v11[-5].y % v10) + 204) & 0x40000000) != 0 )
      {
        v16 = (unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))PtInRect)((char *)v8 + 3016, *v11)
           && (unsigned int)PtInRect(v13, *((_QWORD *)v15 + 4));
        if ( (v14 & 1) != 0 )
          v16 = v16 && (v14 & 0x40) == 0 && (v14 & 0x20000000) == 0;
        v17 = *((_QWORD *)v15 + 9);
        v18 = v17 > v5 || v17 == v5 && v16;
        if ( a3 )
          v18 = v15 == a3;
        if ( v18 )
        {
          v5 = *((_QWORD *)v15 + 9);
          *a4 = v11;
          v4 = v16;
        }
      }
      v11 += 12;
      --v12;
    }
    while ( v12 );
  }
  return v4;
}
