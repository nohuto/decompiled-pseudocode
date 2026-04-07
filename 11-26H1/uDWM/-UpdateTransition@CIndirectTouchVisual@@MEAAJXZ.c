/*
 * XREFs of ?UpdateTransition@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B8AF0
 * Callers:
 *     <none>
 * Callees:
 *     ??0?$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z @ 0x180003248 (--0-$CTimeline@M@@QEAA@NMMW4InterpolationMode@@@Z.c)
 *     ??2?$CTimeline@M@@SAPEAX_K@Z @ 0x180085C18 (--2-$CTimeline@M@@SAPEAX_K@Z.c)
 *     ?SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z @ 0x1800B8410 (-SetETWAnimation@CIndirectTouchVisual@@AEAAXW4ITANIM@1@@Z.c)
 *     ?StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B8948 (-StopFrameTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B8978 (-StopOpacityTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B89A8 (-StopTimeoutTimeline@CIndirectTouchVisual@@IEAAXXZ.c)
 *     ?StopTimer@CIndirectTouchVisual@@MEAAJXZ @ 0x1800B89E0 (-StopTimer@CIndirectTouchVisual@@MEAAJXZ.c)
 *     ?UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ @ 0x1800B8A98 (-UpdateOpacityAndSource@CIndirectTouchVisual@@IEAAXXZ.c)
 */

__int64 __fastcall CIndirectTouchVisual::UpdateTransition(CIndirectTouchVisual *this, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rax
  void *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9

  v4 = *((_QWORD *)this + 35);
  if ( v4 )
  {
    v5 = (int)((float)*(double *)(v4 + 48) + 0.5);
    *((_DWORD *)this + 68) = v5;
    if ( v5 >= 0xF )
      *((_DWORD *)this + 68) = 14;
    if ( *(_BYTE *)(v4 + 72) )
      CIndirectTouchVisual::StopFrameTimeline(this);
  }
  v6 = *((_QWORD *)this + 37);
  if ( v6 )
  {
    *((float *)this + 67) = *(double *)(v6 + 48);
    if ( *(_BYTE *)(v6 + 72) )
      CIndirectTouchVisual::StopOpacityTimeline(this);
  }
  v7 = *((_QWORD *)this + 36);
  if ( v7 && *(_BYTE *)(v7 + 72) )
  {
    if ( *((float *)this + 66) == 0.0 )
      goto LABEL_15;
    v8 = CTimeline<float>::operator new();
    if ( v8 )
      v8 = CTimeline<float>::CTimeline<float>((__int64)v8, v9, v10, v11, 0);
    *((_QWORD *)this + 37) = v8;
    if ( !v8 )
LABEL_15:
      *((_DWORD *)this + 67) = 0;
    CIndirectTouchVisual::StopTimeoutTimeline(this);
  }
  CIndirectTouchVisual::UpdateOpacityAndSource((CImage **)this, a2, a3);
  if ( !*((_QWORD *)this + 35) && !*((_QWORD *)this + 37) && !*((_QWORD *)this + 36) )
  {
    CIndirectTouchVisual::SetETWAnimation((__int64)this, 0);
    CIndirectTouchVisual::StopTimer(this);
  }
  return 0LL;
}
