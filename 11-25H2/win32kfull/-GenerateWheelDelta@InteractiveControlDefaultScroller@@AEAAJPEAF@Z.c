/*
 * XREFs of ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1402EFDC8
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14012F240 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14012FC60 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelDelta(
        InteractiveControlDefaultScroller *this,
        __int16 *a2)
{
  unsigned int v3; // ebp
  int v5; // edi
  __int64 v6; // rdx
  unsigned __int64 v7; // rtt
  int v8; // ecx
  unsigned __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // eax
  int v12; // ecx
  __int16 v13; // ax

  v3 = *((_DWORD *)this + 12) * *((_DWORD *)this + 7);
  v5 = 0;
  v7 = 1000LL * (*((_QWORD *)this + 2) - *((_QWORD *)this + 1));
  v6 = v7 % *(_QWORD *)this;
  v8 = -*((_DWORD *)this + 15);
  v9 = v7 / *(_QWORD *)this;
  if ( v8 < 0 )
    v8 = *((_DWORD *)this + 15);
  v10 = (unsigned int)(120 * v8);
  *((_DWORD *)this + 16) += v10;
  if ( v9 >= *((int *)InteractiveControlManager::Instance(v10, v6) + 47) )
  {
    v11 = *((_DWORD *)this + 16);
    if ( v11 >= v3 )
    {
      do
      {
        v5 += *((_DWORD *)this + 12);
        v11 -= v3;
      }
      while ( v11 >= v3 );
      *((_DWORD *)this + 16) = v11;
    }
  }
  if ( v5 )
  {
    v12 = *((_DWORD *)this + 15);
    *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
    v13 = -(__int16)v5;
    if ( *((_DWORD *)this + 14) == 2 )
    {
      if ( v12 <= 0 )
        LOWORD(v5) = -(__int16)v5;
    }
    else
    {
      if ( v12 <= 0 )
        v13 = v5;
      LOWORD(v5) = v13;
    }
  }
  else
  {
    LOWORD(v5) = 0;
  }
  *a2 = v5;
  return 0LL;
}
