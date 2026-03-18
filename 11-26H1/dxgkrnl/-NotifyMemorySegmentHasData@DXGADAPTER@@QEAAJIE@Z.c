/*
 * XREFs of ?NotifyMemorySegmentHasData@DXGADAPTER@@QEAAJIE@Z @ 0x140034AA0
 * Callers:
 *     ?DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z @ 0x1400347E0 (-DxgkNotifyMemorySegmentHasData@@YAJQEAXIE@Z.c)
 * Callees:
 *     ?DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z @ 0x140010CF8 (-DdiSetPowerComponentFState@DXGADAPTER@@QEAAJKK@Z.c)
 */

__int64 __fastcall DXGADAPTER::NotifyMemorySegmentHasData(DXGADAPTER *this, unsigned int a2, char a3)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  unsigned int v5; // edx
  __int64 v6; // rbx
  int v7; // eax
  unsigned int v8; // eax

  v3 = a2;
  if ( *((_QWORD *)this + 409) )
  {
    v4 = *((_QWORD *)this + 408);
    v5 = 0;
    v6 = 520 * v3;
    if ( *(_DWORD *)(520 * v3 + v4 + 8) > 1u )
    {
      v7 = *(_DWORD *)(v6 + v4 + 344);
      if ( a3 )
      {
        if ( !v7 )
          return v5;
        v8 = DXGADAPTER::DdiSetPowerComponentFState(this, *(_DWORD *)(v6 + v4 + 4), 0);
        *(_DWORD *)(v6 + v4 + 344) = 0;
        return v8;
      }
      if ( !v7 )
      {
        v8 = DXGADAPTER::DdiSetPowerComponentFState(this, *(_DWORD *)(v6 + v4 + 4), 1u);
        *(_DWORD *)(v6 + v4 + 344) = 1;
        return v8;
      }
    }
    return v5;
  }
  return 0LL;
}
