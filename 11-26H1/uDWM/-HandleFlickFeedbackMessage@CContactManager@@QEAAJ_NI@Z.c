/*
 * XREFs of ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180084BAC
 * Callers:
 *     ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x18002C6DC (-HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x18001E310 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RemoveAt@?$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z @ 0x180075A0C (-RemoveAt@-$DynArray@UCFlickTextFeedback@@$0A@@@QEAAJI@Z.c)
 *     ?Free@DefaultHeap@@SAXPEAX@Z @ 0x180084D50 (-Free@DefaultHeap@@SAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180085BEC (--2@YAPEAX_K@Z.c)
 *     ??_GCTrackingTooltip@@QEAAPEAXI@Z @ 0x1800A85BC (--_GCTrackingTooltip@@QEAAPEAXI@Z.c)
 *     ?LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z @ 0x1800A8D30 (-LoadFeedbackString@CContactManager@@IEAAPEAGPEAUHINSTANCE__@@HPEAH@Z.c)
 *     ??0CTrackingTooltip@@QEAA@XZ @ 0x1800CDD3C (--0CTrackingTooltip@@QEAA@XZ.c)
 *     ?Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z @ 0x1800CDE64 (-Initialize@CTrackingTooltip@@QEAAJPEBUtagPOINT@@PEAG@Z.c)
 *     ?Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z @ 0x1800CDEE4 (-Update@CTrackingTooltip@@QEAAXPEBUtagPOINT@@PEAG@Z.c)
 */

__int64 __fastcall CContactManager::HandleFlickFeedbackMessage(CContactManager *this, char a2, int a3)
{
  __int64 *v3; // rsi
  int v4; // ebp
  unsigned __int16 *FeedbackString; // r14
  __int64 i; // rbx
  __int64 v7; // rax
  __int64 v8; // rdi
  CTrackingTooltip *v9; // rcx
  __int64 v10; // rax
  int v11; // ebx
  HMODULE ModuleHandleW; // rax
  CContactManager *v13; // rcx
  CTrackingTooltip *v14; // rax
  CTrackingTooltip *v15; // rcx
  CTrackingTooltip *v16; // rcx
  char v17; // dl
  CTrackingTooltip *v18; // rcx
  unsigned int v20; // [rsp+20h] [rbp-28h]
  CTrackingTooltip *v21; // [rsp+50h] [rbp+8h] BYREF

  v3 = (__int64 *)((char *)this + 184);
  v4 = 0;
  FeedbackString = 0LL;
  for ( i = 0LL; ; i = (unsigned int)(i + 1) )
  {
    if ( (unsigned int)i >= *((_DWORD *)this + 52) )
      goto LABEL_24;
    v7 = *v3;
    v8 = 3 * i;
    if ( *(_DWORD *)(*v3 + 24 * i) == a3 )
      break;
  }
  if ( (int)i < 0 )
    goto LABEL_24;
  v9 = *(CTrackingTooltip **)(v7 + 24 * i + 16);
  if ( a2 )
  {
    if ( v9 )
    {
      CTrackingTooltip::Update(v9, (const struct tagPOINT *)(v7 + 8 + 24 * i), 0LL);
      goto LABEL_24;
    }
    _mm_lfence();
    v10 = *v3;
    LODWORD(v21) = 0;
    v11 = dword_1800F8810[*(int *)(v10 + 24 * i + 4)];
    ModuleHandleW = GetModuleHandleW(0LL);
    FeedbackString = CContactManager::LoadFeedbackString(v13, ModuleHandleW, v11, (int *)&v21);
    if ( !FeedbackString )
    {
      v20 = 1644;
LABEL_11:
      v4 = -2147024882;
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, v20, 0LL);
      goto LABEL_24;
    }
    v14 = (CTrackingTooltip *)operator new(0x70uLL);
    v21 = v14;
    if ( v14 )
      v15 = CTrackingTooltip::CTrackingTooltip(v14);
    else
      v15 = 0LL;
    *(_QWORD *)(*v3 + 8 * v8 + 16) = v15;
    v16 = *(CTrackingTooltip **)(*v3 + 8 * v8 + 16);
    if ( !v16 )
    {
      v20 = 1648;
      goto LABEL_11;
    }
    v4 = CTrackingTooltip::Initialize(v16, (const struct tagPOINT *)(*v3 + 8 + 8 * v8), FeedbackString);
    if ( v4 < 0 )
    {
      v18 = *(CTrackingTooltip **)(*v3 + 8 * v8 + 16);
      if ( v18 )
        CTrackingTooltip::`scalar deleting destructor'(v18, v17);
      *(_QWORD *)(*v3 + 8 * v8 + 16) = 0LL;
    }
  }
  else
  {
    if ( v9 )
      CTrackingTooltip::`scalar deleting destructor'(v9, a2);
    *(_QWORD *)(*v3 + 24 * i + 16) = 0LL;
    DynArray<CFlickTextFeedback,0>::RemoveAt(v3, i);
  }
LABEL_24:
  DefaultHeap::Free(FeedbackString);
  return (unsigned int)v4;
}
