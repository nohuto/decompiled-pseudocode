/*
 * XREFs of ?ApplyElasticDragModeDeltas@CPTPEngine@@AEAAHPEAUCContactState@@PEAUtagPOINTER_INFO@@PEAUtagPOINT@@@Z @ 0x1400C9C24
 * Callers:
 *     ?HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z @ 0x1400C9534 (-HandleDrag@CPTPEngine@@AEAAXPEAUPTPInput@@@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CPTPEngine::ApplyElasticDragModeDeltas(
        CPTPEngine *this,
        struct CContactState *a2,
        struct tagPOINTER_INFO *a3,
        struct tagPOINT *a4)
{
  unsigned __int64 v4; // r10
  unsigned int v6; // ebx
  int v8; // eax
  int v9; // r8d
  int v10; // ecx
  int v11; // eax
  unsigned __int64 v12; // r10
  int v13; // ecx
  int v15; // edx
  int v16; // ecx
  int v17; // eax
  int v18; // edx
  int v19; // ecx
  int v20; // eax

  v4 = *((_QWORD *)a3 + 5);
  v6 = 0;
  v8 = *((_DWORD *)this + 774);
  v9 = *((_DWORD *)this + 773)
     / 0xAu
     * ((unsigned __int64)(1000LL * (*((_QWORD *)a3 + 10) - *((_QWORD *)a2 + 10)))
      / *((_QWORD *)this + 12));
  if ( (int)v4 <= v8 )
  {
    v15 = *((_DWORD *)this + 774);
    v16 = *((_DWORD *)a2 + 35);
    if ( (v16 & 2) == 0 && *((_DWORD *)a2 + 10) > v8 )
    {
      v16 |= 2u;
      *((_DWORD *)a2 + 35) = v16;
      v15 = *((_DWORD *)this + 774);
    }
    v8 = v15;
    if ( (v16 & 2) != 0 )
    {
      a4->x -= v9;
      v6 = 1;
    }
  }
  v10 = *((_DWORD *)this + 10) - v8;
  if ( (int)v4 >= v10 )
  {
    v17 = *((_DWORD *)a2 + 35);
    if ( (v17 & 1) == 0 && *((_DWORD *)a2 + 10) < v10 )
    {
      v17 |= 1u;
      *((_DWORD *)a2 + 35) = v17;
    }
    if ( (v17 & 1) != 0 )
    {
      a4->x += v9;
      v6 = 1;
    }
  }
  v11 = *((_DWORD *)this + 775);
  v12 = HIDWORD(v4);
  if ( (int)v12 <= v11 )
  {
    v18 = *((_DWORD *)this + 775);
    v19 = *((_DWORD *)a2 + 35);
    if ( (v19 & 4) == 0 && *((_DWORD *)a2 + 11) > v11 )
    {
      v19 |= 4u;
      *((_DWORD *)a2 + 35) = v19;
      v18 = *((_DWORD *)this + 775);
    }
    v11 = v18;
    if ( (v19 & 4) != 0 )
    {
      a4->y -= v9;
      v6 = 1;
    }
  }
  v13 = *((_DWORD *)this + 11) - v11;
  if ( (int)v12 >= v13 )
  {
    v20 = *((_DWORD *)a2 + 35);
    if ( (v20 & 8) == 0 && *((_DWORD *)a2 + 11) < v13 )
    {
      v20 |= 8u;
      *((_DWORD *)a2 + 35) = v20;
    }
    if ( (v20 & 8) != 0 )
    {
      a4->y += v9;
      return 1;
    }
  }
  return v6;
}
