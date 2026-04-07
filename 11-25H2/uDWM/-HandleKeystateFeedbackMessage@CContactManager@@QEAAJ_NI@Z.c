/*
 * XREFs of ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800AA810
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045074 (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@UCPenContact@@$0A@@@QEAAJI@Z @ 0x18002D0FC (-RemoveAt@-$DynArray@UCPenContact@@$0A@@@QEAAJI@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x1800938B4 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ?Alloc@DefaultHeap@@SAPEAX_K@Z @ 0x180094280 (-Alloc@DefaultHeap@@SAPEAX_K@Z.c)
 *     ??_U@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800946B8 (--_U@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800AA480 (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z @ 0x1800AA4A8 (-BuildFeedbackString@CContactManager@@IEAAJKPEAGI@Z.c)
 *     ??0CTrackingTooltip@@QEAA@XZ @ 0x1800D14AC (--0CTrackingTooltip@@QEAA@XZ.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800D15D4 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800D1654 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleKeystateFeedbackMessage(CContactManager *this, char a2, int a3)
{
  const struct tagPOINT *v3; // rbx
  int v5; // ebp
  unsigned __int16 *v6; // r14
  unsigned int i; // r15d
  __int64 v8; // rcx
  unsigned __int16 *v9; // rax
  int v10; // r9d
  int v11; // eax
  __int64 v12; // rcx
  const struct tagPOINT *v13; // rdx
  unsigned __int16 *v14; // rax
  const struct std::nothrow_t *v15; // rdx
  CTrackingTooltip *v16; // rax
  CTrackingTooltip *v17; // rdx
  __int64 v18; // rcx
  CTrackingTooltip *v19; // rcx
  CTrackingTooltip *v20; // rcx
  unsigned int v22; // [rsp+20h] [rbp-38h]

  v3 = 0LL;
  v5 = 0;
  v6 = 0LL;
  for ( i = 0; ; ++i )
  {
    if ( i >= *((_DWORD *)this + 60) )
      goto LABEL_36;
    v8 = *((_QWORD *)this + 27);
    if ( *(_DWORD *)(v8 + 40LL * i) == a3 )
      break;
  }
  if ( (i & 0x80000000) != 0 )
    goto LABEL_36;
  if ( a2 )
  {
    if ( *(_QWORD *)(v8 + 40LL * i + 32) )
    {
      if ( *(_DWORD *)(v8 + 40LL * i + 4) != *(_DWORD *)(v8 + 40LL * i + 16) )
      {
        v9 = (unsigned __int16 *)DefaultHeap::Alloc(2LL * *((int *)this + 12));
        v6 = v9;
        if ( !v9 )
        {
          v22 = 1703;
LABEL_11:
          v10 = -2147024882;
          v5 = -2147024882;
LABEL_12:
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v10, v22, 0LL);
          goto LABEL_36;
        }
        *v9 = 0;
        v11 = CContactManager::BuildFeedbackString(
                (const unsigned __int16 **)this,
                *(_DWORD *)(*((_QWORD *)this + 27) + 40LL * i + 4),
                v9,
                *((_DWORD *)this + 12));
        v5 = v11;
        if ( v11 < 0 )
        {
          v22 = 1705;
LABEL_15:
          v10 = v11;
          goto LABEL_12;
        }
      }
      v12 = *((_QWORD *)this + 27);
      v13 = (const struct tagPOINT *)(v12 + 40LL * i);
      if ( v13[1].x != v13[2].y || *(_DWORD *)(v12 + 40LL * i + 12) != *(_DWORD *)(v12 + 40LL * i + 24) )
        v3 = v13 + 1;
      CTrackingTooltip::Update(*(CTrackingTooltip **)(v12 + 40LL * i + 32), v3, v6);
    }
    else
    {
      v14 = (unsigned __int16 *)DefaultHeap::Alloc(2LL * *((int *)this + 12));
      v6 = v14;
      if ( !v14 )
      {
        v22 = 1721;
        goto LABEL_11;
      }
      *v14 = 0;
      v11 = CContactManager::BuildFeedbackString(
              (const unsigned __int16 **)this,
              *(_DWORD *)(*((_QWORD *)this + 27) + 40LL * i + 4),
              v14,
              *((_DWORD *)this + 12));
      v5 = v11;
      if ( v11 < 0 )
      {
        v22 = 1723;
        goto LABEL_15;
      }
      v16 = (CTrackingTooltip *)operator new[](0x70uLL, v15);
      if ( v16 )
        v17 = CTrackingTooltip::CTrackingTooltip(v16);
      else
        v17 = 0LL;
      *(_QWORD *)(*((_QWORD *)this + 27) + 40LL * i + 32) = v17;
      v18 = *((_QWORD *)this + 27);
      if ( !*(_QWORD *)(v18 + 40LL * i + 32) )
      {
        v22 = 1726;
        goto LABEL_11;
      }
      v5 = CTrackingTooltip::Initialize(
             *(CTrackingTooltip **)(v18 + 40LL * i + 32),
             (const struct tagPOINT *)(v18 + 8 + 40LL * i),
             v6);
      if ( v5 < 0 )
      {
        v19 = *(CTrackingTooltip **)(*((_QWORD *)this + 27) + 40LL * i + 32);
        if ( v19 )
          CTrackingTooltip::`scalar deleting destructor'(v19);
        *(_QWORD *)(*((_QWORD *)this + 27) + 40LL * i + 32) = 0LL;
      }
    }
  }
  else
  {
    v20 = *(CTrackingTooltip **)(v8 + 40LL * i + 32);
    if ( v20 )
      CTrackingTooltip::`scalar deleting destructor'(v20);
    *(_QWORD *)(*((_QWORD *)this + 27) + 40LL * i + 32) = 0LL;
    DynArray<CPenContact,0>::RemoveAt((__int64 *)this + 27, i);
  }
LABEL_36:
  DefaultHeap::Free(v6);
  return (unsigned int)v5;
}
