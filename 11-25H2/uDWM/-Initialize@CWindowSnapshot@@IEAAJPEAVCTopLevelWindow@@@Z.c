/*
 * XREFs of ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x1800552F8
 * Callers:
 *     ?Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z @ 0x18005519C (-Create@CWindowSnapshot@@SAJPEAVCTopLevelWindow@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x180008530 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180009204 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?RenderRecursive@CContainerVisual@@UEAAJXZ @ 0x1800161B0 (-RenderRecursive@CContainerVisual@@UEAAJXZ.c)
 *     ?NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ @ 0x180016474 (-NotifyMouseLeave@CTopLevelWindow@@QEAAXXZ.c)
 *     ?IsSimpleClientArea@CWindowData@@QEAA_NXZ @ 0x18001D7B4 (-IsSimpleClientArea@CWindowData@@QEAA_NXZ.c)
 *     ?CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z @ 0x18001EAA8 (-CloneForNewWindowData@CTopLevelWindow@@QEAAJPEAVCWindowData@@W4CloneOptions@@PEAPEAV1@@Z.c)
 *     ?GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ @ 0x180055730 (-GetWindowData@CTopLevelWindow@@QEBAPEAVCWindowData@@XZ.c)
 *     ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x180055740 (-OnWindowStyleUpdated@CWindowData@@QEAAJXZ.c)
 *     ??0CWindowData@@QEAA@XZ @ 0x180055818 (--0CWindowData@@QEAA@XZ.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180093F78 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 */

__int64 __fastcall CWindowSnapshot::Initialize(CWindowSnapshot *this, struct CTopLevelWindow *a2)
{
  struct CWindowData *WindowData; // rax
  struct CWindowData *v5; // rdi
  char v6; // bp
  __int64 v7; // rdx
  __int64 v8; // r8
  int v9; // eax
  unsigned int v10; // ebx
  CWindowData *v11; // rax
  CWindowData *v12; // rcx
  __int64 v13; // rax
  CMILRefCountBase *v14; // rcx
  CMILRefCountBase **v15; // r14
  __int64 v16; // r8
  __int64 v17; // rdx
  __int64 result; // rax
  int v19; // r9d
  unsigned int v20; // [rsp+20h] [rbp-28h]

  WindowData = CTopLevelWindow::GetWindowData(a2);
  v5 = WindowData;
  v6 = *((_BYTE *)WindowData + 672);
  if ( (v6 & 4) == 0 )
  {
    *((_BYTE *)WindowData + 672) = v6 & 0xFD;
    CWindowData::OnWindowStyleUpdated(WindowData);
  }
  CTopLevelWindow::NotifyMouseLeave(*((CTopLevelWindow **)v5 + 55));
  v9 = CContainerVisual::RenderRecursive(a2, v7, v8);
  v10 = v9;
  if ( v9 < 0 )
  {
    v20 = 100;
LABEL_19:
    v19 = v9;
    goto LABEL_16;
  }
  v11 = (CWindowData *)DefaultHeap::AllocClear(0x360uLL);
  if ( v11 )
    v12 = CWindowData::CWindowData(v11);
  else
    v12 = 0LL;
  *((_QWORD *)this + 4) = v12;
  if ( !v12 )
  {
    v10 = -2147024882;
    v19 = -2147024882;
    v20 = 105;
LABEL_16:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v19, v20, 0LL);
    goto LABEL_14;
  }
  *((_QWORD *)v12 + 5) = *((_QWORD *)v5 + 5);
  *(_QWORD *)(*((_QWORD *)this + 4) + 32LL) = *((_QWORD *)v5 + 4);
  *(_OWORD *)(*((_QWORD *)this + 4) + 48LL) = *((_OWORD *)v5 + 3);
  *(_OWORD *)(*((_QWORD *)this + 4) + 64LL) = *((_OWORD *)v5 + 4);
  *(_OWORD *)(*((_QWORD *)this + 4) + 96LL) = *((_OWORD *)v5 + 6);
  *(_OWORD *)(*((_QWORD *)this + 4) + 220LL) = *(_OWORD *)((char *)v5 + 220);
  *(_OWORD *)(*((_QWORD *)this + 4) + 268LL) = *(_OWORD *)((char *)v5 + 268);
  *(_OWORD *)(*((_QWORD *)this + 4) + 284LL) = *(_OWORD *)((char *)v5 + 284);
  *(_QWORD *)(*((_QWORD *)this + 4) + 136LL) = *((_QWORD *)v5 + 17);
  *(_DWORD *)(*((_QWORD *)this + 4) + 680LL) = *((_DWORD *)v5 + 170);
  *(_BYTE *)(*((_QWORD *)this + 4) + 676LL) ^= (*((_BYTE *)v5 + 676) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 676LL)) & 8;
  *(_BYTE *)(*((_QWORD *)this + 4) + 408LL) = *((_BYTE *)v5 + 408);
  *(_DWORD *)(*((_QWORD *)this + 4) + 128LL) = *((_DWORD *)v5 + 32);
  *(_OWORD *)(*((_QWORD *)this + 4) + 684LL) = *(_OWORD *)((char *)v5 + 684);
  *(_OWORD *)(*((_QWORD *)this + 4) + 700LL) = *(_OWORD *)((char *)v5 + 700);
  *(_OWORD *)(*((_QWORD *)this + 4) + 716LL) = *(_OWORD *)((char *)v5 + 716);
  *(_OWORD *)(*((_QWORD *)this + 4) + 732LL) = *(_OWORD *)((char *)v5 + 732);
  *(_DWORD *)(*((_QWORD *)this + 4) + 116LL) = *((_DWORD *)v5 + 29);
  *(_DWORD *)(*((_QWORD *)this + 4) + 120LL) = *((_DWORD *)v5 + 30);
  *(_DWORD *)(*((_QWORD *)this + 4) + 124LL) = *((_DWORD *)v5 + 31);
  *(_DWORD *)(*((_QWORD *)this + 4) + 112LL) = *((_DWORD *)v5 + 28);
  *(_OWORD *)(*((_QWORD *)this + 4) + 304LL) = *((_OWORD *)v5 + 19);
  *(_QWORD *)(*((_QWORD *)this + 4) + 320LL) = *((_QWORD *)v5 + 40);
  *(_DWORD *)(*((_QWORD *)this + 4) + 328LL) = *((_DWORD *)v5 + 82);
  v13 = *((_QWORD *)this + 4);
  *(_OWORD *)(v13 + 336) = *((_OWORD *)v5 + 21);
  *(_OWORD *)(v13 + 352) = *((_OWORD *)v5 + 22);
  *(_OWORD *)(v13 + 368) = *((_OWORD *)v5 + 23);
  *(_OWORD *)(v13 + 384) = *((_OWORD *)v5 + 24);
  *(_QWORD *)(v13 + 400) = *((_QWORD *)v5 + 50);
  *(_BYTE *)(*((_QWORD *)this + 4) + 677LL) ^= (*((_BYTE *)v5 + 677) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 677LL)) & 1;
  *(_BYTE *)(*((_QWORD *)this + 4) + 673LL) ^= (*((_BYTE *)v5 + 673) ^ *(_BYTE *)(*((_QWORD *)this + 4) + 673LL)) & 0x20;
  *(_OWORD *)(*((_QWORD *)this + 4) + 80LL) = *((_OWORD *)v5 + 5);
  *(_DWORD *)(*((_QWORD *)this + 4) + 184LL) = *((_DWORD *)v5 + 46);
  *(_DWORD *)(*((_QWORD *)this + 4) + 188LL) = *((_DWORD *)v5 + 47);
  *(_DWORD *)(*((_QWORD *)this + 4) + 192LL) = *((_DWORD *)v5 + 48);
  *(_DWORD *)(*((_QWORD *)this + 4) + 196LL) = *((_DWORD *)v5 + 49);
  *(_QWORD *)(*((_QWORD *)this + 4) + 856LL) = *((_QWORD *)v5 + 107);
  *(_BYTE *)(*((_QWORD *)this + 4) + 673LL) = *(_BYTE *)(*((_QWORD *)this + 4) + 673LL) & 0xEF | (16
                                                                                                * (CWindowData::IsSimpleClientArea(v5) ^ 1));
  *(_QWORD *)(*((_QWORD *)this + 4) + 424LL) = *((_QWORD *)v5 + 53);
  v14 = (CMILRefCountBase *)*((_QWORD *)v5 + 53);
  if ( v14 )
    CMILRefCountBase::AddRef(v14);
  if ( (*((_BYTE *)v5 + 676) & 8) == 0 )
  {
    v15 = (CMILRefCountBase **)((char *)this + 24);
    v9 = CTopLevelWindow::CloneForNewWindowData(
           (__int64)a2,
           *((struct CWindowData **)this + 4),
           4u,
           (CBaseObject ***)this + 3);
    v10 = v9;
    if ( v9 < 0 )
    {
      v20 = 150;
    }
    else
    {
      v17 = *((_QWORD *)this + 4);
      *(_QWORD *)(v17 + 440) = *v15;
      if ( *v15 )
        CMILRefCountBase::AddRef(*v15);
      v9 = CContainerVisual::RenderRecursive(*v15, v17, v16);
      v10 = v9;
      if ( v9 >= 0 )
        goto LABEL_14;
      v20 = 155;
    }
    goto LABEL_19;
  }
LABEL_14:
  result = v10;
  *((_BYTE *)v5 + 672) ^= (v6 ^ *((_BYTE *)v5 + 672)) & 2;
  return result;
}
