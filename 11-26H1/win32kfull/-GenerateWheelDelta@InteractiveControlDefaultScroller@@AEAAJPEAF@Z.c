/*
 * XREFs of ?GenerateWheelDelta@InteractiveControlDefaultScroller@@AEAAJPEAF@Z @ 0x1402FF4D0
 * Callers:
 *     ?GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTERACTIVECTRL_PROMOTION_TYPE@@@Z @ 0x14013D0F0 (-GenerateMessages@InteractiveControlDefaultScroller@@QEAAJPEAUtagINTERACTIVECTRL_INFO@@W4tagINTE.c)
 * Callees:
 *     ?Instance@InteractiveControlManager@@SAPEAV1@XZ @ 0x14013DB10 (-Instance@InteractiveControlManager@@SAPEAV1@XZ.c)
 */

__int64 __fastcall InteractiveControlDefaultScroller::GenerateWheelDelta(
        InteractiveControlDefaultScroller *this,
        __int16 *a2)
{
  unsigned int v4; // ebp
  int v5; // edi
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rdx
  int v8; // ecx
  __int64 v9; // rcx
  unsigned int v10; // eax
  int v11; // ecx
  __int16 v12; // ax

  v4 = *((_DWORD *)this + 12) * *((_DWORD *)this + 7);
  v5 = 0;
  v6 = (unsigned __int64)(1000LL * (*((_QWORD *)this + 2) - *((_QWORD *)this + 1))) / *(_QWORD *)this;
  v7 = (unsigned __int64)(1000LL * (*((_QWORD *)this + 2) - *((_QWORD *)this + 1))) % *(_QWORD *)this;
  v8 = -*((_DWORD *)this + 15);
  if ( v8 < 0 )
    v8 = *((_DWORD *)this + 15);
  v9 = (unsigned int)(120 * v8);
  *((_DWORD *)this + 16) += v9;
  if ( v6 < *((int *)InteractiveControlManager::Instance(v9, v7) + 47) )
    goto LABEL_14;
  v10 = *((_DWORD *)this + 16);
  if ( v10 < v4 )
    goto LABEL_14;
  do
  {
    v5 += *((_DWORD *)this + 12);
    v10 -= v4;
  }
  while ( v10 >= v4 );
  *((_DWORD *)this + 16) = v10;
  if ( v5 )
  {
    v11 = *((_DWORD *)this + 15);
    *((_QWORD *)this + 2) = *((_QWORD *)this + 1);
    v12 = -(__int16)v5;
    if ( *((_DWORD *)this + 14) == 2 )
    {
      if ( v11 <= 0 )
        LOWORD(v5) = -(__int16)v5;
    }
    else
    {
      if ( v11 <= 0 )
        v12 = v5;
      LOWORD(v5) = v12;
    }
  }
  else
  {
LABEL_14:
    LOWORD(v5) = 0;
  }
  *a2 = v5;
  return 0LL;
}
